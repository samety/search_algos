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
#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <vector>

int binary_search(const int* p_begin, const int* p_end, const int x);

typedef std::vector<int>::const_iterator Const_Iterator;
int binary_search_2(Const_Iterator itr_begin,
                    Const_Iterator itr_end,
                    const int x);

struct Node
{
    Node(const Node* c1, const Node* c2, const char value)
    {
        p_child1 = c1;
        p_child2 = c2;
        data = value;
    }

    char data;
    const Node* p_child1;
    const Node* p_child2;
};

int find_dfs(const Node* p_root, const int x, const Node* &result);
int find_bfs(const Node* p_root, const int x, const Node* &result);

#endif /* SEARCH_ALGOS_H */
