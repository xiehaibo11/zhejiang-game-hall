
DSO_FUNC_TYPE DSO_bind_func(DSO *dso,char *symname)

{
  DSO_FUNC_TYPE pDVar1;
  int reason;
  int line;
  _func_3876 *p_Var2;
  
  if ((dso == (DSO *)0x0) || (symname == (char *)0x0)) {
    reason = 0x43;
    line = 0xb1;
  }
  else {
    p_Var2 = dso->meth->dso_bind_var;
    if (p_Var2 == (_func_3876 *)0x0) {
      reason = 0x6c;
      line = 0xb5;
    }
    else {
      pDVar1 = (*p_Var2)(dso,symname);
      if (pDVar1 != (DSO_FUNC_TYPE)0x0) {
        return pDVar1;
      }
      reason = 0x6a;
      line = 0xb9;
    }
  }
  ERR_put_error(0x25,0x6c,reason,"crypto/dso/dso_lib.c",line);
  return (DSO_FUNC_TYPE)0x0;
}

