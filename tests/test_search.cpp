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
#include <iostream>
#include <vector>
#include <algorithm>
#include "binary_search.h"

int main(void) {
    const int t[] = {1, 2, 3, 4, 5};
    assert(binary_search(t, t+5, 2) == 1);

    std::vector<int> v(t, t+5);
    const int p1 = binary_search(&v[0], &v[4], 2);
    const int p2 = std::binary_search(v.begin(), v.end(), 2);
    assert(p1 == p2);

    return 0;
}
