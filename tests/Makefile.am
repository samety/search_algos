AM_CPPFLAGS = -I$(top_builddir)/include \
              -I$(top_srcdir)/include

LDADD = $(top_builddir)/src/libsearch_algos.la

noinst_PROGRAMS = test_binary_search \
				  test_tree_search

test_binary_search_SOURCES = test_binary_search.cpp
test_tree_search_SOURCES = test_tree_search.cpp

TESTS = $(noinst_PROGRAMS)
XFAIL_TESTS =
