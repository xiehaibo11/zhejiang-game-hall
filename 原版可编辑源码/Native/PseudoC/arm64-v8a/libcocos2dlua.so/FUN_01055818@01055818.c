
undefined8 FUN_01055818(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong local_48;
  
  local_48 = param_3;
  while( true ) {
    if (local_48 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x307) != '\0') break;
    if ((*(byte *)(param_1 + 0x107) >> 6 & 1) == 0) {
                    /* catch() { ... } // from try @ 010558c0 with catch @ 01055870
                       catch() { ... } // from try @ 010558e4 with catch @ 01055870 */
      if ((*(long *)(param_1 + 0x280) != 0) &&
         (uVar1 = *(int *)(param_1 + 0x2dc) + 1, *(uint *)(param_1 + 0x2dc) = uVar1,
         *(uint *)(param_1 + 0x2d8) < uVar1)) {
        _lws_log(1,"bumped rxflow buffer too far (%d / %d)");
      }
      if ((*(char *)(param_1 + 0x301) == '\x14') &&
         (iVar2 = FUN_010498c0(param_1,param_2,&local_48), *(long *)(param_1 + 0x280) != 0)) {
                    /* try { // try from 010558b8 to 011558bf has its CatchHandler @ 01055974 */
                    /* try { // try from 010558c0 to 011558cf has its CatchHandler @ 01055870 */
        *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2dc) + iVar2;
      }
      puVar3 = (undefined1 *)*param_2;
                    /* try { // try from 010558d0 to 011558e3 has its CatchHandler @ 01055958 */
      *param_2 = (long)(puVar3 + 1);
      iVar2 = FUN_010490d8(param_1,*puVar3);
                    /* try { // try from 010558e4 to 0115598f has its CatchHandler @ 01055870 */
      if ((*(long *)(param_1 + 0x280) != 0) &&
         (*(int *)(param_1 + 0x2dc) == *(int *)(param_1 + 0x2d8))) {
        thunk_FUN_0104b1cc(*(long *)(param_1 + 0x280),0,"free");
        *(undefined8 *)(param_1 + 0x280) = 0;
        FUN_01042eb8(param_1);
      }
      if (iVar2 < 0) {
        return 0xffffffff;
      }
      local_48 = local_48 - 1;
    }
    else {
      iVar2 = FUN_010490d8(param_1,0);
      if (iVar2 < 0) {
                    /* catch() { ... } // from try @ 010558b8 with catch @ 01055974 */
        return 0xffffffff;
      }
    }
  }
                    /* catch() { ... } // from try @ 010558d0 with catch @ 01055958 */
  FUN_01044ef4(param_1,*param_2,0,local_48 & 0xffffffff);
  return 1;
}

