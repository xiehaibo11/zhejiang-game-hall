
int png_default_flush(long param_1)

{
  int iVar1;
  
                    /* try { // try from 010de894 to 011de897 has its CatchHandler @ 010de954 */
  if (param_1 != 0) {
                    /* try { // try from 010de898 to 011de96f has its CatchHandler @ 010de824 */
    iVar1 = fflush(*(FILE **)(param_1 + 0x140));
    return iVar1;
  }
  return 0;
}

