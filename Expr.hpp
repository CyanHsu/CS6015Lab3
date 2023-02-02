//
//  Expr.hpp
//  CS6015HomeWorks
//
//  Created by Chunhao on 2023/1/24.
//

#ifndef Expr_hpp
#define Expr_hpp

#include <stdio.h>
#include <string>
#include "catch.h"


class Expr{
public:
    virtual bool equals(Expr *e) = 0;
    virtual int interp() = 0;
    virtual bool has_variable() = 0;
    virtual Expr* subst(std::string s, Expr *e) = 0;
};
class Num : public Expr{
public:
    int val;
    Num(int val);
    bool equals(Expr *e);
    int interp();
    bool has_variable();
    Expr* subst(std::string s, Expr *e);
};

class Variable : public Expr{
public:
    std::string val;
    Variable(std::string val);
    bool equals(Expr *e);
    int interp();
    bool has_variable();
    Expr* subst(std::string s, Expr *e);
};

class Add : public Expr{
public:
    Expr *lhs;
    Expr *rhs;
    Add(Expr *lhs, Expr * rhs);
    bool equals(Expr *e);
    int interp();
    bool has_variable();
    Expr* subst(std::string s, Expr *e);
};
class Mult : public Expr{
public:
    Expr *lhs;
    Expr *rhs;
    Mult(Expr *lhs, Expr * rhs);
    bool equals(Expr *e);
    int interp();
    bool has_variable();
    Expr* subst(std::string s, Expr *e);
};



#endif /* Expr_hpp */
