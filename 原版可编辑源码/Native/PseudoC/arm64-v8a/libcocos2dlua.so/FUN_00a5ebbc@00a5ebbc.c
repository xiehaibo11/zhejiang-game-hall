
int FUN_00a5ebbc(void *param_1,size_t param_2,uchar *param_3)

{
  int iVar1;
  SHA256_CTX SStack_a0;
  
                    /* try { // try from 00a5ebbc to 00b5ec57 has its CatchHandler @ 00a5ea54 */
  SHA256_Init(&SStack_a0);
  SHA256_Update(&SStack_a0,param_1,param_2);
  iVar1 = SHA256_Final(param_3,&SStack_a0);
                    /* catch() { ... } // from try @ 00a5eb70 with catch @ 00a5ec08 */
                    /* catch() { ... } // from try @ 00a5eb88 with catch @ 00a5ec0c */
  return iVar1;
}

