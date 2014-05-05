AM_CPPFLAGS = -I$(top_builddir)/include \
              -I$(top_srcdir)/include

LDADD = $(top_builddir)/src/libsearch_algos.la

noinst_PROGRAMS = test_search \
				  test_search_iterator

test_search_SOURCES = test_search.cpp
test_search_iterator_SOURCES = test_search_iterator.cpp

TESTS = $(noinst_PROGRAMS)
XFAIL_TESTS =
