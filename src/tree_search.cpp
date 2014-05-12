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
#include "../include/search_algos.h"
#include <stack>
#include <queue>

int find_dfs(const Node* p_root, const int x, const Node* &result)
{
    int num_of_visits = 0;
    std::stack<const Node*> nodes;
    nodes.push(p_root);
    while (!nodes.empty())
    {
        num_of_visits++;
        const Node* p_current = nodes.top();
        if ( p_current->data == x ) {
            result = p_current;
            break;
        }
        else {
            nodes.pop();
            if ( p_current->p_child2 )
                nodes.push(p_current->p_child2);
            if ( p_current->p_child1 )
                nodes.push(p_current->p_child1);
        }
    }
    return num_of_visits;
}

int find_bfs(const Node* p_root, const int x, const Node* &result)
{
    int num_of_visits = 0;
    std::queue<const Node*> nodes;
    nodes.push(p_root);
    while (!nodes.empty())
    {
        num_of_visits++;
        const Node* p_current = nodes.front();
        if ( p_current->data == x ) {
            result = p_current;
            break;
        }
        else {
            nodes.pop();
            if ( p_current->p_child1 )
                nodes.push(p_current->p_child1);
            if ( p_current->p_child2 )
                nodes.push(p_current->p_child2);
        }
    }
    return num_of_visits;
}
