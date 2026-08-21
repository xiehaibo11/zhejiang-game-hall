
undefined8 FUN_010506a4(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulong e;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  
                    /* try { // try from 010506ac to 011506b7 has its CatchHandler @ 010535e0 */
  lVar6 = *(long *)(param_1 + 0x220);
  iVar2 = SSL_connect(*(SSL **)(param_1 + 0x2b0));
  if (iVar2 < 0) {
    iVar2 = FUN_0104f080(param_1,iVar2);
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        pcVar4 = *(char **)(lVar6 + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0x7b8);
                    /* try { // try from 01050724 to 0115072f has its CatchHandler @ 010535d0 */
        puVar3 = (undefined4 *)__errno();
        uVar1 = *puVar3;
        pcVar4 = ERR_error_string((long)iVar2,pcVar4);
        _lws_log(1,"ssl hs1 error, X509_V_ERR = %d: errno %d: %s\n",iVar2,uVar1,pcVar4);
        FUN_0104f1b8();
        goto LAB_01050758;
      }
      lws_callback_on_writable(param_1);
    }
    uVar5 = 0;
    *(undefined1 *)(param_1 + 0x2fe) = 0x27;
  }
  else {
    if (iVar2 != 0) {
      return 1;
    }
LAB_01050758:
    e = ERR_get_error();
    uVar5 = 0;
    if (e != 0) {
      pcVar4 = ERR_error_string(e,*(char **)(lVar6 + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 +
                                            0x7b8));
                    /* try { // try from 01050790 to 0115079f has its CatchHandler @ 01053ab8 */
      _lws_log(1,"SSL connect error %lu: %s\n",e,pcVar4);
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}

