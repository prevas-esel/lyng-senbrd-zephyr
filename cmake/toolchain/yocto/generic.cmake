set(COMPILER gcc)
set(LINKER ld)
set(BINTOOLS gnu)

set(CMAKE_C_COMPILER_WORKS 1)
set(CMAKE_CXX_COMPILER_WORKS 1)
set(ZEPHYR_SYSROOT ${ZEPHYR_SYSROOT})
set(SYSROOT_DIR ${ZEPHYR_SYSROOT})
set(LIBC_LIBRARY_DIR "\"${SYSROOT_DIR}\"/")
set(LIBC_INCLUDE_DIR ${SYSROOT_DIR}/include)
LIST(APPEND TOOLCHAIN_LIBS gcc)

LIST(APPEND LIB_INCLUDE_DIR "-L\"${STAGING_LIBDIR}\"")

set(TOOLCHAIN_LIBS gcc)
