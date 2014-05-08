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
#include <cstdio>
#include "search_algos.h"

int main(void) {
    Node n1(NULL, NULL, 1);
    const Node* result = NULL;
    int num_of_visited = find_dfs(&n1, 1, result);
    assert(num_of_visited == 0);
    assert(&n1 == result);

    num_of_visited = find_bfs(&n1, 1, result);
    assert(num_of_visited == 0);
    assert(&n1 == result);
    return 0;
}
