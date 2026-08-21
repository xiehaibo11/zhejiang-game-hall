
int FUN_00a29dc4(undefined8 param_1,long *param_2,char *param_3,undefined1 *param_4)

{
  int iVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00a29c24 with catch @ 00a29dd0 */
                    /* catch() { ... } // from try @ 00a29c18 with catch @ 00a29dd4 */
                    /* catch() { ... } // from try @ 00a29bf8 with catch @ 00a29dd8 */
  *param_3 = '\0';
  iVar1 = FUN_00a29e74();
                    /* catch() { ... } // from try @ 00a29c30 with catch @ 00a29de8 */
  if (iVar1 == 0) {
    lVar2 = *param_2;
    if ((*(long *)(*(long *)(lVar2 + 0x478) + 0x18) != 0) ||
       (*(long *)(*(long *)(lVar2 + 0x480) + 0x18) != 0)) {
      *param_4 = 1;
      return 0;
    }
    if (*param_3 != '\0') {
      return 0;
    }
    iVar1 = FUN_00a29c5c(lVar2,param_4);
  }
  if (iVar1 != 0) {
    if (iVar1 != 0x59) {
      if (*param_2 == 0) {
        return iVar1;
      }
      FUN_00a293a8(*param_2,0);
    }
    *param_2 = 0;
  }
                    /* try { // try from 00a29e40 to 00b29e8f has its CatchHandler @ 00a29e40
                       catch() { ... } // from try @ 00a29e40 with catch @ 00a29e40
                       catch() { ... } // from try @ 00a29f48 with catch @ 00a29e40 */
  return iVar1;
}

