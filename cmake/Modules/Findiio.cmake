INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_IIO gnuradio-iio)

FIND_PATH(
    IIO_INCLUDE_DIRS
    NAMES gnuradio/iio/api.h
    HINTS $ENV{IIO_DIR}/include
        ${PC_IIO_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    IIO_LIBRARIES
    NAMES gnuradio-iio
    HINTS $ENV{IIO_DIR}/lib
        ${PC_IIO_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
          /usr/lib/x86_64-linux-gnu
          /usr/lib/alpha-linux-gnu
          /usr/lib/aarch64-linux-gnu
          /usr/lib/arm-linux-gnueabi
          /usr/lib/arm-linux-gnueabihf
          /usr/lib/hppa-linux-gnu
          /usr/lib/i686-gnu
          /usr/lib/i686-linux-gnu
          /usr/lib/x86_64-kfreebsd-gnu
          /usr/lib/i686-kfreebsd-gnu
          /usr/lib/m68k-linux-gnu
          /usr/lib/mips-linux-gnu
          /usr/lib/mips64el-linux-gnuabi64
          /usr/lib/mipsel-linux-gnu
          /usr/lib/powerpc-linux-gnu
          /usr/lib/powerpc-linux-gnuspe
          /usr/lib/powerpc64-linux-gnu
          /usr/lib/powerpc64le-linux-gnu
          /usr/lib/s390x-linux-gnu
          /usr/lib/sparc64-linux-gnu
          /usr/lib/x86_64-linux-gnux32
          /usr/lib/sh4-linux-gnu
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(IIO DEFAULT_MSG IIO_LIBRARIES IIO_INCLUDE_DIRS)
MARK_AS_ADVANCED(IIO_LIBRARIES IIO_INCLUDE_DIRS)
