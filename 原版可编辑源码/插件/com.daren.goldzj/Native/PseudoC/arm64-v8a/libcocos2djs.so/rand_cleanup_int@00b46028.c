
int rand_cleanup_int(void)

{
  int iVar1;
  ENGINE *e;
  _func_3914 *p_Var2;
  
  if (DAT_01d3acc8 == (RAND_METHOD *)0x0) {
    e = ENGINE_get_default_RAND();
    iVar1 = 0;
    if (e == (ENGINE *)0x0) {
LAB_00b460a0:
      DAT_01d3acc8 = (RAND_METHOD *)RAND_OpenSSL(iVar1);
      if (DAT_01d3acc8 == (RAND_METHOD *)0x0) goto LAB_00b46050;
      goto LAB_00b46044;
    }
    DAT_01d3acc8 = ENGINE_get_RAND(e);
    if (DAT_01d3acc8 == (RAND_METHOD *)0x0) {
      iVar1 = ENGINE_finish(e);
      goto LAB_00b460a0;
    }
    p_Var2 = DAT_01d3acc8->cleanup;
    DAT_01d3acc0 = e;
  }
  else {
LAB_00b46044:
    p_Var2 = DAT_01d3acc8->cleanup;
  }
  if (p_Var2 != (_func_3914 *)0x0) {
    (*p_Var2)();
  }
LAB_00b46050:
  iVar1 = ENGINE_finish(DAT_01d3acc0);
  DAT_01d3acc0 = (ENGINE *)0x0;
  DAT_01d3acc8 = (RAND_METHOD *)0x0;
  return iVar1;
}

