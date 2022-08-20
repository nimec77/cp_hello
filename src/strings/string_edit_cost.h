//
// Created by Dmitry Seloustev on 09.07.2022.
//

#ifndef CP_HELLO_STRING_EDIT_COST_H
#define CP_HELLO_STRING_EDIT_COST_H

#include <string>

#define MAXLEN 45

enum ChangeType {
    MatchChange,
    InsertChange,
    DeleteChange,
};

typedef struct {
    int cost;
    int parent;
} Cell;

class StringEditCost {
public:
    int stringCompare(std::string s, std::string t, int i, int j) const;
    int stringCompareDp(std::string s, std::string t);

private:
    Cell m[MAXLEN + 1][MAXLEN + 1];
    static int indel();
    static int match(char c, char d);
    void rowInt(int i);
    void columnInit(int i);
    static void goalCell(std::string s, std::string t, int *i, int *j);
};


#endif //CP_HELLO_STRING_EDIT_COST_H
