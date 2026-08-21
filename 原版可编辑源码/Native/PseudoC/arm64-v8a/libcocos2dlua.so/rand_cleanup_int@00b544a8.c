
int rand_cleanup_int(void)

{
  int iVar1;
  ENGINE *e;
  _func_3914 *p_Var2;
  
  if (DAT_01784a48 == (RAND_METHOD *)0x0) {
    e = ENGINE_get_default_RAND();
    iVar1 = 0;
    if (e == (ENGINE *)0x0) {
LAB_00b54520:
      DAT_01784a48 = (RAND_METHOD *)RAND_OpenSSL(iVar1);
      if (DAT_01784a48 == (RAND_METHOD *)0x0) goto LAB_00b544d0;
      goto LAB_00b544c4;
    }
    DAT_01784a48 = ENGINE_get_RAND(e);
    if (DAT_01784a48 == (RAND_METHOD *)0x0) {
      iVar1 = ENGINE_finish(e);
      goto LAB_00b54520;
    }
    p_Var2 = DAT_01784a48->cleanup;
    DAT_01784a40 = e;
  }
  else {
LAB_00b544c4:
    p_Var2 = DAT_01784a48->cleanup;
  }
  if (p_Var2 != (_func_3914 *)0x0) {
    (*p_Var2)();
  }
LAB_00b544d0:
  iVar1 = ENGINE_finish(DAT_01784a40);
  DAT_01784a40 = (ENGINE *)0x0;
  DAT_01784a48 = (RAND_METHOD *)0x0;
  return iVar1;
}

