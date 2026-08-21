
int FUN_00a481d4(void *param_1,size_t param_2,uchar *param_3)

{
  int iVar1;
  SHA256_CTX SStack_a0;
  
  SHA256_Init(&SStack_a0);
  SHA256_Update(&SStack_a0,param_1,param_2);
  iVar1 = SHA256_Final(param_3,&SStack_a0);
                    /* try { // try from 00a48224 to 00b4830b has its CatchHandler @ 00a4806c */
  return iVar1;
}

