
undefined8 FUN_00aae028(long param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = *(char **)(*(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0x7b8
                     );
  if (*(char *)(param_1 + 0x2fe) == '\'') {
    iVar1 = SSL_connect(*(SSL **)(param_1 + 0x2b0));
    if (iVar1 < 0) {
      iVar1 = FUN_00aac8fc(param_1,iVar1);
      if (iVar1 == 3) {
        lws_callback_on_writable(param_1);
LAB_00aae19c:
        *(undefined1 *)(param_1 + 0x2fe) = 0x27;
        return 0;
      }
      if (iVar1 == 2) goto LAB_00aae19c;
    }
    else if (iVar1 != 0) goto LAB_00aae0c8;
    uVar2 = ERR_get_error();
    if (uVar2 != 0) {
      pcVar3 = ERR_error_string(uVar2,pcVar3);
      _lws_log(1,"SSL connect error %lu: %s\n",uVar2,pcVar3);
      return 0xffffffff;
    }
  }
LAB_00aae0c8:
  uVar2 = SSL_get_verify_result(*(SSL **)(param_1 + 0x2b0));
  uVar4 = (uint)uVar2;
  if (uVar4 == 0) {
    return 1;
  }
  if (((uVar4 | 1) == 0x13) && ((*(byte *)(param_1 + 0x2f8) >> 1 & 1) != 0)) {
    pcVar3 = "accepting self-signed certificate\n";
  }
  else if ((uVar4 - 9 < 2) && ((*(byte *)(param_1 + 0x2f8) >> 3 & 1) != 0)) {
    pcVar3 = "accepting expired certificate\n";
  }
  else {
    if (uVar4 != 9) {
      pcVar3 = ERR_error_string((long)(int)uVar4,pcVar3);
      _lws_log(1,"server\'s cert didn\'t look good, X509_V_ERR = %d: %s\n",uVar2 & 0xffffffff,pcVar3
              );
      FUN_00aaca34();
      return 0xffffffff;
    }
    pcVar3 = "Cert is from the future... probably our clock... accepting...\n";
  }
  _lws_log(4,pcVar3);
  return 1;
}

