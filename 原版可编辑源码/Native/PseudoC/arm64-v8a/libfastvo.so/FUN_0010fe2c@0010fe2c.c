
void FUN_0010fe2c(ulong param_1)

{
  fprintf((FILE *)0x14d168,"Fatal (internal) error in %s, line %d: %s\n",
          "F:/sdkgit/fastvo-android/library/src/main/cpp/libspeex/kiss_fftr.c",param_1 & 0xffffffff,
          "kiss fft usage error: improper alloc\n");
                    /* WARNING: Subroutine does not return */
  exit(1);
}

