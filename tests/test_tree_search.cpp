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

typedef int (*Search_Func)(const Node* p_root, const int x, const Node* &result);

bool check(const Node* n_root, const char x, Search_Func f_search, const int n_visits)
{
    const Node* result = NULL;
    int num_of_visits = f_search(n_root, x, result);
    return (num_of_visits == n_visits) && (result->data == x);
}

int main(void) {
    //A--B--C--D
    // \
    //  -E--F
    //    \
    //     -G
    Node n_d(NULL, NULL, 'D');
    Node n_c(&n_d, NULL, 'C');
    Node n_b(&n_c, NULL, 'B');
    Node n_g(NULL, NULL, 'G');
    Node n_f(NULL, NULL, 'F');
    Node n_e(&n_f, &n_g, 'E');
    Node n_a(&n_b, &n_e, 'A');

    assert(check(&n_a, 'A', find_dfs, 1));
    assert(check(&n_a, 'B', find_dfs, 2));
    assert(check(&n_a, 'C', find_dfs, 3));
    assert(check(&n_a, 'D', find_dfs, 4));
    assert(check(&n_a, 'E', find_dfs, 5));
    assert(check(&n_a, 'F', find_dfs, 6));
    assert(check(&n_a, 'G', find_dfs, 7));

    assert(check(&n_a, 'A', find_bfs, 1));
    assert(check(&n_a, 'B', find_bfs, 2));
    assert(check(&n_a, 'C', find_bfs, 4));
    assert(check(&n_a, 'D', find_bfs, 7));
    assert(check(&n_a, 'E', find_bfs, 3));
    assert(check(&n_a, 'F', find_bfs, 5));
    assert(check(&n_a, 'G', find_bfs, 6));

    return 0;
}
