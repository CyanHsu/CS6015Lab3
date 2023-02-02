//
//  tests.cpp
//  CS6015HomeWorks
//
//  Created by Chunhao on 2023/1/28.
//

#include "tests.hpp"
#include "Expr.hpp"

//
//TEST_CASE("Test expression"){
//    
//    Num *num1 = new Num(11);
//    Num *num2 = new Num(12);
//    Num *num3 = new Num(11);
//    Add *add1 = new Add(new Num(4), new Num(8));
//    Add *add2 = new Add(new Num(8), new Num(4));
//    Add *add3 = new Add(new Num(4), new Num(8));
//    Add *add4 = new Add(new Num(6), new Num(6));
//    Mult *mult1 = new Mult(new Num(3), new Num(4));
//    Mult *mult2 = new Mult(new Num(4), new Num(3));
//    Mult *mult3 = new Mult(new Num(2), new Num(6));
//    Mult *mult4 = new Mult(new Num(3), new Num(4));
//    
//    //(6*(7+8)) = 6*(7+8)
//    Mult *mult5 = new Mult(new Num(6), new Add(new Num(7), new Num(8)));
//    Mult *mult6 = new Mult(new Num(6), new Add(new Num(7), new Num(8)));
//    Mult *mult7 = new Mult(new Num(6), new Add(new Num(8), new Num(7)));
//    
//    SECTION("Num"){
//        CHECK(!num1->equals(num2));
//        CHECK(num1->equals(num3));
//        CHECK(!num1->equals(add1));
//    }
//    
//    SECTION("Add"){
//        CHECK(!add1->equals(add2));
//        CHECK(add1->equals(add3));
//        CHECK(!add1->equals(add4));
//        CHECK(!add1->equals(num2));
//    }
//    
//    SECTION("Mult"){
//        CHECK(!mult1->equals(mult2));
//        CHECK(!mult1->equals(mult3));
//        CHECK(mult1->equals(mult4));
//        CHECK(!mult1->equals(num2));
//    }
//    
//    SECTION("Mix"){
//        CHECK(mult5->equals(mult6));
//        CHECK(!mult5->equals(mult7));
//    }
//    
//    SECTION("interp"){
//        // 3*2=6
//        CHECK( (new Mult(new Num(3), new Num(2)))
//                ->interp() == 6 );
//        // (10+15) + (20+20) = 65
//        CHECK( (new Add(new Add(new Num(10), new Num(15)),new Add(new Num(20),new Num(20))))
//                ->interp() == 65);
//        // (3+2) * 4 = 20
//        CHECK((new Mult(new Add(new Num(3), new Num(2)),new Num(4)))->interp() == 20);
//        // 4*4 + 4 = 20
//        CHECK((new Add(new Mult(new Num(4), new Num(4)), new Num(4)))->interp() == 20);
//        // 4*0 + 4 = 4
//        CHECK((new Add(new Mult(new Num(4), new Num(0)), new Num(4)))->interp() == 4);
//        
//        
//        CHECK_THROWS_WITH( (new Variable("x"))->interp(), "no value for variable" );
//        CHECK_THROWS_WITH( (new Add(new Variable("x"), new Num(5)))->interp(), "no value for variable" );
//        
//    }
//    SECTION("has_variable"){
//        
//        CHECK((new Variable("x"))->has_variable());
//        CHECK((new Num(3))->has_variable() == false);
//        CHECK((new Mult(new Variable("x"), new Num(5)))->has_variable());
//        
//        
//        
//    }
//    SECTION("subst"){
//        
//        
//        // x+7 -> y+7
//        CHECK( (new Add(new Variable("x"), new Num(7)))
//               ->subst("x", new Variable("y"))
//               ->equals(new Add(new Variable("y"), new Num(7))) );
//        CHECK( (new Variable("x"))
//               ->subst("x", new Add(new Variable("y"),new Num(7)))
//               ->equals(new Add(new Variable("y"),new Num(7))) );
//        // 7 -> 7
//        CHECK( (new Num(7))->subst("x", new Variable("y"))->equals(new Num(7)));
//        // x -> x since there is no W
//        CHECK( (new Variable("x"))->subst("W", new Variable("y"))->equals(new Variable("x"))==true );
//        // 8+2 - > 8+2 since there is no x
//        CHECK( (new Add(new Num(8), new Num(2)))->subst("x", new Variable("y"))
//              ->equals(new Add(new Num(8), new Num(2)))==true );
//        // (x+7) + (2+5)
//        CHECK( (new Add(new Add(new Variable("x"), new Num(7)), new Add(new Num(2), new Num(5))))
//               ->subst("x", new Variable("y"))
//               ->equals(new Add(new Add(new Variable("y"), new Num(7)), new Add(new Num(2), new Num(5)))));
//        // 7x -> 7y
//        CHECK( (new Mult(new Variable("x"), new Num(7)))
//               ->subst("x", new Variable("y"))
//               ->equals(new Mult(new Variable("y"), new Num(7))) );
//        // 10x+7 -> 10y+7
//        CHECK( (new Add(new Mult(new Variable("x"), new Num(10)), new Num(7)))
//               ->subst("x", new Variable("y"))
//               ->equals (new Add(new Mult(new Variable("y"), new Num(10)), new Num(7))) );
//    }
//    
//}
