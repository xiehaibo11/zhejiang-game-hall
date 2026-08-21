
int FUN_00a5eb64(void *param_1,size_t param_2,uchar *param_3)

{
  int iVar1;
  MD5_CTX MStack_90;
  
                    /* try { // try from 00a5eb70 to 00b5eb83 has its CatchHandler @ 00a5ec08 */
                    /* try { // try from 00a5eb88 to 00b5ebbb has its CatchHandler @ 00a5ec0c */
  MD5_Init(&MStack_90);
  MD5_Update(&MStack_90,param_1,param_2);
  iVar1 = MD5_Final(param_3,&MStack_90);
  return iVar1;
}

