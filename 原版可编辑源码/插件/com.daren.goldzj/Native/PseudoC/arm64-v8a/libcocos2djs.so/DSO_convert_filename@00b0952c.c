
char * DSO_convert_filename(DSO *dso,char *filename)

{
  char *pcVar1;
  int reason;
  long in_x2;
  void *in_x3;
  int line;
  _func_3878 *p_Var2;
  
                    /* try { // try from 00b0953c to 00c09583 has its CatchHandler @ 00b09b38 */
  if (dso == (DSO *)0x0) {
    reason = 0x43;
    line = 0x11c;
  }
  else if ((filename == (char *)0x0) &&
          (filename = (char *)dso->merger, (DSO_MERGER_FUNC)filename == (DSO_MERGER_FUNC)0x0)) {
    reason = 0x6f;
    line = 0x122;
  }
  else {
    if (((dso->flags & 1) == 0) &&
       (((p_Var2 = *(_func_3878 **)&(dso->ex_data).dummy, p_Var2 != (_func_3878 *)0x0 ||
         (p_Var2 = dso->meth->dso_ctrl, p_Var2 != (_func_3878 *)0x0)) &&
        (pcVar1 = (char *)(*p_Var2)(dso,(int)filename,in_x2,in_x3), pcVar1 != (char *)0x0)))) {
      return pcVar1;
    }
    pcVar1 = CRYPTO_strdup(filename,"crypto/dso/dso_lib.c",300);
    if (pcVar1 != (char *)0x0) {
      return pcVar1;
    }
                    /* try { // try from 00b0958c to 00c095e3 has its CatchHandler @ 00b09ae8 */
    reason = 0x41;
    line = 0x12e;
  }
  ERR_put_error(0x25,0x7e,reason,"crypto/dso/dso_lib.c",line);
  return (char *)0x0;
}

