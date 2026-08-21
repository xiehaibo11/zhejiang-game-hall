
DSO * DSO_dsobyaddr(DSO *param_1,int param_2)

{
  uint num;
  uint uVar1;
  char *filename;
  DSO *pDVar2;
  DSO_METHOD *pDVar3;
  _func_3880 *p_Var4;
  
                    /* try { // try from 00b09690 to 00c0969b has its CatchHandler @ 00b09b18 */
  if (DAT_01d390f0 == 0) {
    pDVar3 = DSO_METHOD_openssl();
    p_Var4 = pDVar3->finish;
    if (p_Var4 == (_func_3880 *)0x0) goto LAB_00b096d4;
LAB_00b096ac:
                    /* try { // try from 00b096b4 to 00c0972b has its CatchHandler @ 00b09aec */
    num = (*p_Var4)(param_1);
  }
  else {
    p_Var4 = *(_func_3880 **)(DAT_01d390f0 + 0x48);
                    /* try { // try from 00b096a8 to 00c096b3 has its CatchHandler @ 00b09ad0 */
    if (p_Var4 != (_func_3880 *)0x0) goto LAB_00b096ac;
LAB_00b096d4:
    ERR_put_error(0x25,0x69,0x6c,"crypto/dso/dso_lib.c",0x13b);
    num = 0xffffffff;
  }
  filename = CRYPTO_malloc(num,"crypto/dso/dso_lib.c",0x147);
  if (filename == (char *)0x0) {
LAB_00b09784:
                    /* try { // try from 00b09784 to 00c0979b has its CatchHandler @ 00b09a4c */
    pDVar2 = (DSO *)0x0;
  }
  else {
    if (DAT_01d390f0 == 0) {
      pDVar3 = DSO_METHOD_openssl();
      p_Var4 = pDVar3->finish;
      if (p_Var4 == (_func_3880 *)0x0) goto LAB_00b0975c;
LAB_00b09720:
      pDVar3 = (DSO_METHOD *)(ulong)num;
      uVar1 = (*p_Var4)(param_1);
      if (uVar1 != num) goto LAB_00b09784;
    }
    else {
      p_Var4 = *(_func_3880 **)(DAT_01d390f0 + 0x48);
      if (p_Var4 != (_func_3880 *)0x0) goto LAB_00b09720;
LAB_00b0975c:
      pDVar3 = (DSO_METHOD *)0x6c;
      ERR_put_error(0x25,0x69,0x6c,"crypto/dso/dso_lib.c",0x13b);
      if (num != 0xffffffff) goto LAB_00b09784;
    }
                    /* try { // try from 00b09744 to 00c09753 has its CatchHandler @ 00b09af0 */
    pDVar2 = DSO_load((DSO *)0x0,filename,pDVar3,param_2);
  }
  CRYPTO_free(filename);
  return pDVar2;
}

