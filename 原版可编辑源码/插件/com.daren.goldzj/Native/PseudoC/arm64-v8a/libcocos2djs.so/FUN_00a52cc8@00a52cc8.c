
int FUN_00a52cc8(uchar *param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  MD5_CTX MStack_80;
  
  MD5_Init(&MStack_80);
  strlen(param_2);
  uVar2 = FUN_00a16cf8();
                    /* catch() { ... } // from try @ 00a52c28 with catch @ 00a52cf4 */
  MD5_Update(&MStack_80,param_2,uVar2 & 0xffffffff);
                    /* catch() { ... } // from try @ 00a52c40 with catch @ 00a52d0c */
  iVar1 = MD5_Final(param_1,&MStack_80);
                    /* catch() { ... } // from try @ 00a52c00 with catch @ 00a52d10 */
                    /* catch() { ... } // from try @ 00a52c48 with catch @ 00a52d14 */
  return iVar1;
}

