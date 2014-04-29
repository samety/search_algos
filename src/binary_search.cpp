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
int binary_search(const int* p_begin, const int* p_end, const int x) {
    const int* p_mid = p_begin + ((p_end - p_begin) / 2);
    if ( *p_mid == x ) {
        return (p_mid - p_begin);
    } else if ( *p_begin > x ) {
        return -1;
    } else if ( *(p_end-1) < x ) {
        return -1;
    } else if ( *p_mid > x ) {
        return binary_search(p_begin, p_mid, x);
    } else {
        return binary_search(p_mid, p_end, x) + (p_mid - p_begin);
    }
}
