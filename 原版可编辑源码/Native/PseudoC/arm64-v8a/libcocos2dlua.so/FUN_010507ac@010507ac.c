
undefined8 FUN_010507ac(long param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  uint uVar4;
  
                    /* try { // try from 010507d8 to 011507e3 has its CatchHandler @ 01053aa0 */
  pcVar3 = *(char **)(*(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0x7b8
                     );
  if (*(char *)(param_1 + 0x2fe) == '\'') {
    iVar1 = SSL_connect(*(SSL **)(param_1 + 0x2b0));
    if (iVar1 < 0) {
      iVar1 = FUN_0104f080(param_1,iVar1);
      if (iVar1 == 3) {
        lws_callback_on_writable(param_1);
LAB_01050920:
        *(undefined1 *)(param_1 + 0x2fe) = 0x27;
        return 0;
      }
      if (iVar1 == 2) goto LAB_01050920;
    }
    else if (iVar1 != 0) goto LAB_0105084c;
    uVar2 = ERR_get_error();
    if (uVar2 != 0) {
      pcVar3 = ERR_error_string(uVar2,pcVar3);
                    /* try { // try from 0105083c to 01150847 has its CatchHandler @ 01053a90 */
      _lws_log(1,"SSL connect error %lu: %s\n",uVar2,pcVar3);
      return 0xffffffff;
    }
  }
LAB_0105084c:
  uVar2 = SSL_get_verify_result(*(SSL **)(param_1 + 0x2b0));
  uVar4 = (uint)uVar2;
  if (uVar4 == 0) {
    return 1;
  }
                    /* try { // try from 01050864 to 01150873 has its CatchHandler @ 01053c24 */
  if (((uVar4 | 1) == 0x13) && ((*(byte *)(param_1 + 0x2f8) >> 1 & 1) != 0)) {
    pcVar3 = "accepting self-signed certificate\n";
  }
  else if ((uVar4 - 9 < 2) && ((*(byte *)(param_1 + 0x2f8) >> 3 & 1) != 0)) {
    pcVar3 = "accepting expired certificate\n";
  }
  else {
    if (uVar4 != 9) {
                    /* try { // try from 010508b4 to 011508bb has its CatchHandler @ 010539e4 */
      pcVar3 = ERR_error_string((long)(int)uVar4,pcVar3);
                    /* try { // try from 010508bc to 011508cb has its CatchHandler @ 010539dc */
      _lws_log(1,"server\'s cert didn\'t look good, X509_V_ERR = %d: %s\n",uVar2 & 0xffffffff,pcVar3
              );
      FUN_0104f1b8();
                    /* try { // try from 010508d4 to 011508fb has its CatchHandler @ 01053a48 */
      return 0xffffffff;
    }
    pcVar3 = "Cert is from the future... probably our clock... accepting...\n";
  }
  _lws_log(4,pcVar3);
                    /* try { // try from 01050914 to 01150923 has its CatchHandler @ 01053c24 */
  return 1;
}

