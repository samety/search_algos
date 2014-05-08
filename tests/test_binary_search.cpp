/*
    Copyright (c) 2014 YASLAN, Hasan Samet <sametyaslan@gmail.com>

    This file is a part of search_algos, a sample for building with auto tools.

    This is free software; you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License as published by the
    Free Software Foundation; either version 3 of the License, or (at your
    option) any later version.

    This software is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTA-
    BILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General
    Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program. If not, see http://www.gnu.org/licenses/.
*/

#include <assert.h>
#include <vector>
#include <algorithm>
#include "search_algos.h"

bool check_search2(const int x, const int max_value)
{
    std::vector<int> v;
    for ( int i = 0 ; i < max_value ; ++i )
        v.push_back(i);
    Const_Iterator itr = std::lower_bound(v.begin(), v.end(), x);
    int p2 = -1;
    if ( itr != v.end() )
        p2 = itr - v.begin();
    const int p3 = binary_search_2(v.begin(), v.end(), x);
    return p2 == p3;
}

int main(void) {
    const int t[] = {1, 2, 3, 4, 5};
    assert(binary_search(t, t+5, 2) == 1);

    std::vector<int> v(t, t+5);
    const int p1 = binary_search(&v[0], &v[4], 2);
    assert(p1 == 1);

    assert(check_search2(1,10));
    assert(check_search2(0,10));
    assert(check_search2(9,10));
    assert(check_search2(5,10));
    assert(check_search2(2,5));
    assert(check_search2(2,5001));
    assert(check_search2(5000,5001));
    assert(check_search2(5001,5002));
    
    return 0;
}
