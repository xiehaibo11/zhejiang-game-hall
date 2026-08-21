
DSO * DSO_dsobyaddr(DSO *param_1,int param_2)

{
  uint num;
  uint uVar1;
  char *filename;
  DSO *pDVar2;
  DSO_METHOD *pDVar3;
  _func_3880 *p_Var4;
  
  if (DAT_01782e70 == 0) {
    pDVar3 = DSO_METHOD_openssl();
    p_Var4 = pDVar3->finish;
    if (p_Var4 == (_func_3880 *)0x0) goto LAB_00b18b54;
LAB_00b18b2c:
    num = (*p_Var4)(param_1);
  }
  else {
    p_Var4 = *(_func_3880 **)(DAT_01782e70 + 0x48);
    if (p_Var4 != (_func_3880 *)0x0) goto LAB_00b18b2c;
LAB_00b18b54:
    ERR_put_error(0x25,0x69,0x6c,"crypto/dso/dso_lib.c",0x13b);
    num = 0xffffffff;
  }
  filename = CRYPTO_malloc(num,"crypto/dso/dso_lib.c",0x147);
  if (filename == (char *)0x0) {
LAB_00b18c04:
    pDVar2 = (DSO *)0x0;
  }
  else {
    if (DAT_01782e70 == 0) {
      pDVar3 = DSO_METHOD_openssl();
      p_Var4 = pDVar3->finish;
      if (p_Var4 == (_func_3880 *)0x0) goto LAB_00b18bdc;
LAB_00b18ba0:
      pDVar3 = (DSO_METHOD *)(ulong)num;
      uVar1 = (*p_Var4)(param_1);
      if (uVar1 != num) goto LAB_00b18c04;
    }
    else {
      p_Var4 = *(_func_3880 **)(DAT_01782e70 + 0x48);
      if (p_Var4 != (_func_3880 *)0x0) goto LAB_00b18ba0;
LAB_00b18bdc:
      pDVar3 = (DSO_METHOD *)0x6c;
      ERR_put_error(0x25,0x69,0x6c,"crypto/dso/dso_lib.c",0x13b);
      if (num != 0xffffffff) goto LAB_00b18c04;
    }
    pDVar2 = DSO_load((DSO *)0x0,filename,pDVar3,param_2);
  }
  CRYPTO_free(filename);
  return pDVar2;
}

