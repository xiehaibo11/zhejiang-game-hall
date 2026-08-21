
long FUN_0104e528(long param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 0104e528 to 0114e5cb has its CatchHandler @ 0104e4f8 */
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    iVar1 = FUN_01048058(param_1,0x55,lVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_01048058(param_1,0x56,lVar2 + 0x100);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = FUN_01048058(param_1,0x57,lVar2 + 0x1100);
      if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 0104e520 with catch @ 0104e5b0 */
        return 0;
      }
      if ((*(char *)(lVar2 + 0x1200) != '\0') && (iVar1 = FUN_01048058(param_1,0x58), iVar1 != 0)) {
        return 0;
      }
      if ((*(char *)(lVar2 + 0x1300) != '\0') && (iVar1 = FUN_01048058(param_1,0x54), iVar1 != 0)) {
        return 0;
      }
      if ((*(char *)(lVar2 + 0x1400) != '\0') && (iVar1 = FUN_01048058(param_1,0x59), iVar1 != 0)) {
                    /* catch() { ... } // from try @ 0104e680 with catch @ 0104e648 */
        return 0;
      }
      if ((*(char *)(lVar2 + 0x1410) != '\0') && (iVar1 = FUN_01048058(param_1,0x5a), iVar1 != 0)) {
                    /* try { // try from 0104e678 to 0114e67f has its CatchHandler @ 0104e6f4 */
                    /* try { // try from 0104e680 to 0114e70f has its CatchHandler @ 0104e648 */
        return 0;
      }
      iVar1 = FUN_010567dc(*(undefined8 *)(param_1 + 0x220),param_1,0x11,lVar2,
                           *(undefined2 *)(param_1 + 0x2fa));
      if (0 < iVar1) {
        lws_set_timeout(param_1,7,0x14);
        *(undefined1 *)(param_1 + 0x2fe) = 0x29;
        return param_1;
      }
      *(int *)(*(long *)(param_1 + 0x220) + 0xc70) =
           *(int *)(*(long *)(param_1 + 0x220) + 0xc70) + 1;
      lVar2 = FUN_0104d8b8(param_1);
      return lVar2;
    }
    param_1 = 0;
  }
  return param_1;
}

