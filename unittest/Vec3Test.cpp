#include <gtest/gtest.h>
#include "Vec3.h"

TEST(Vec3Test, BasicMath){
    EXPECT_EQ(1, 1);
    Vec3 a(1,2,3);
    Vec3 b(4,5,6);
    
    Vec3 c = a+b;
    
    EXPECT_EQ(c.e[0], 5);
    
    float t = 2.0;
    Vec3 d = a*t+b;
    EXPECT_EQ(d.e[0], 2*1+4);

}

TEST(Vec3Test, UnitVectorTest){
    Vec3 a(1,2,3);
    
    EXPECT_FLOAT_EQ(a.unit_vector().length(), 1);
}

TEST(Vec3Test, DotProduct){
    Vec3 a(1,2,3);
    Vec3 b(4,5,6);
    
    float d = a.dot(b);
    EXPECT_FLOAT_EQ(d, 4+10+18);
}

