
long DSO_ctrl(DSO *dso,int cmd,long larg,void *parg)

{
  DSO_FUNC_TYPE pDVar1;
  int reason;
  int line;
  _func_3877 *UNRECOVERED_JUMPTABLE;
  
  if (dso == (DSO *)0x0) {
    reason = 0x43;
    line = 0xcc;
  }
  else {
    if (cmd == 3) {
      dso->flags = dso->flags | (uint)larg;
      return 0;
    }
    if (cmd == 2) {
      dso->flags = (uint)larg;
      return 0;
    }
    if (cmd == 1) {
      return (long)dso->flags;
    }
    if ((dso->meth != (DSO_METHOD *)0x0) &&
       (UNRECOVERED_JUMPTABLE = dso->meth->dso_bind_func, UNRECOVERED_JUMPTABLE != (_func_3877 *)0x0
       )) {
                    /* WARNING: Could not recover jumptable at 0x00b18790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pDVar1 = (*UNRECOVERED_JUMPTABLE)(dso,(char *)(ulong)(uint)cmd);
      return (long)pDVar1;
    }
    reason = 0x6c;
    line = 0xe0;
  }
  ERR_put_error(0x25,0x6e,reason,"crypto/dso/dso_lib.c",line);
  return -1;
}

