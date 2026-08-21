
bool ssl3_do_uncompress(long param_1,long param_2)

{
  int iVar1;
  uchar *out;
  
                    /* try { // try from 00abc18c to 00bbc197 has its CatchHandler @ 00abc20c */
                    /* try { // try from 00abc198 to 00bbc1ab has its CatchHandler @ 00abc1e8 */
  out = *(uchar **)(param_2 + 0x28);
  if (out == (uchar *)0x0) {
                    /* try { // try from 00abc1ac to 00bbc253 has its CatchHandler @ 00abbf28 */
    out = CRYPTO_malloc(0x4540,"ssl/record/ssl3_record.c",0x20b);
    *(uchar **)(param_2 + 0x28) = out;
    if (out == (uchar *)0x0) {
      return false;
    }
  }
  iVar1 = COMP_expand_block(*(COMP_CTX **)(param_1 + 0x130),out,0x4000,*(uchar **)(param_2 + 0x18),
                            *(int *)(param_2 + 8));
  if (-1 < iVar1) {
    *(int *)(param_2 + 8) = iVar1;
                    /* catch() { ... } // from try @ 00abc198 with catch @ 00abc1e8 */
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x28);
  }
  return -1 < iVar1;
}

