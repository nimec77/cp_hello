//
// Created by Dmitry Seloustev on 09.07.2022.
//

#include "string_edit_cost.h"

int StringEditCost::stringCompare(std::string s, std::string t, int i, int j) const {
    int opt[3];

    if (i == 0) {
        return j * indel();
    }
    if (j == 0) {
        return  i * indel();
    }

    opt[MatchChange] = stringCompare(s, t, i - 1, j - 1) + match(s[i], t[j]);
    opt[InsertChange] = stringCompare(s, t, i, j - 1) + indel();
    opt[DeleteChange] = stringCompare(s, t, i - 1, j) + indel();

    auto _lowerCost = opt[MatchChange];
    for (int k = InsertChange; k <= DeleteChange; ++k) {
        if (opt[k] < _lowerCost) {
            _lowerCost = opt[k];
        }
    }
    return _lowerCost;
}

int StringEditCost::indel() {
    return 1;
}

int StringEditCost::match(char c, char d) {
    if (c == d) {
        return 0;
    } else {
        return 1;
    }
}
int StringEditCost::stringCompareDp(std::string s, std::string t) {
    int opt[3];
    for (auto  i = 0; i < MAXLEN; ++i) {
        rowInt(i);
        columnInit(i);
    }

    int i, j;
    for (i = 1; i < s.length(); ++i) {
        for (j = 1; j < t.length(); ++j) {
            opt[MatchChange] = m[i - 1][j - 1].cost + match(s[i], t[j]);
            opt[InsertChange] = m[i][j - 1].cost + indel();
            opt[DeleteChange] = m[i - 1][j].cost + indel();
            m[i][j].cost = opt[MatchChange];
            m[i][j].parent = MatchChange;
            for (int k = InsertChange; k <= DeleteChange; ++k) {
                if (opt[k] < m[i][j].cost) {
                    m[i][j].cost = opt[k];
                    m[i][j].parent = k;
                }
            }
        }
    }
    goalCell(s, t, &i, &j);
    return m[i][j].cost;
}
void StringEditCost::rowInt(int i) {
    m[0][i].cost = i;
    if (i > 0) {
        m[0][i].parent = InsertChange;
    } else {
        m[0][i].parent = -1;
    }
}
void StringEditCost::columnInit(int i) {
    m[i][0].cost = i;
    if (i > 0) {
        m[i][0].parent = DeleteChange;
    } else {
        m[i][0].parent = -1;
    }
}
void StringEditCost::goalCell(std::string s, std::string t, int *i, int *j) {
    *i = s.length() - 1;
    *j = t.length() - 1;
}
