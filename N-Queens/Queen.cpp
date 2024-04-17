#include <bits/stdc++.h>
#include "Queen.hpp"
using namespace std;

Queen::Queen(int r, int c)
{
    row = r;
    col = c;
}

int Queen::getRow()
{
    return row;
}

int Queen::getCol()
{
    return col;
}
