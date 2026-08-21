
undefined8 FUN_00aadf20(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulong e;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x220);
  iVar2 = SSL_connect(*(SSL **)(param_1 + 0x2b0));
  if (iVar2 < 0) {
    iVar2 = FUN_00aac8fc(param_1,iVar2);
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        pcVar4 = *(char **)(lVar6 + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0x7b8);
        puVar3 = (undefined4 *)__errno();
        uVar1 = *puVar3;
        pcVar4 = ERR_error_string((long)iVar2,pcVar4);
        _lws_log(1,"ssl hs1 error, X509_V_ERR = %d: errno %d: %s\n",iVar2,uVar1,pcVar4);
        FUN_00aaca34();
        goto LAB_00aadfd4;
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
LAB_00aadfd4:
    e = ERR_get_error();
    uVar5 = 0;
    if (e != 0) {
      pcVar4 = ERR_error_string(e,*(char **)(lVar6 + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 +
                                            0x7b8));
      _lws_log(1,"SSL connect error %lu: %s\n",e,pcVar4);
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}

