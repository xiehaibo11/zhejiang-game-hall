
int X509_LOOKUP_init(X509_LOOKUP *ctx)

{
  int iVar1;
  _func_1836 *UNRECOVERED_JUMPTABLE;
  
  if (ctx->method == (X509_LOOKUP_METHOD *)0x0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = ctx->method->init;
  if (UNRECOVERED_JUMPTABLE != (_func_1836 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b5bc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00b5bc74 to 00c5bdbf has its CatchHandler @ 00b5bf68 */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(ctx);
    return iVar1;
  }
  return 1;
}

