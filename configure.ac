AC_PREREQ([2.69])
AC_INIT([search_algos], [0.1], [sametyaslan@gmail.com])
AM_INIT_AUTOMAKE([foreign])

PKG_PROG_PKG_CONFIG([0.23])
AM_CONDITIONAL([HAVE_PKG_CONFIG], [test "x$PKG_CONFIG" != "x"])
AC_SUBST(HAVE_PKG_CONFIG)

AC_PROG_CC
AC_PROG_CXX

AC_PROG_LIBTOOL

AC_CONFIG_FILES([Makefile src/Makefile src/libsearch_algos.pc tests/Makefile])
AC_OUTPUT
