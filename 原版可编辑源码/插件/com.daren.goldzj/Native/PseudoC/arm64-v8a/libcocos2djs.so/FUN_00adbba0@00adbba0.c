
/* WARNING: Removing unreachable block (ram,0x00adbce4) */

ulong FUN_00adbba0(long param_1,char *param_2,char *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_30;
  char *local_28;
  
                    /* catch() { ... } // from try @ 00adbb0c with catch @ 00adbba4
                       catch() { ... } // from try @ 00adbb9c with catch @ 00adbba4
                       try { // try from 00adbba4 to 00bdbbef has its CatchHandler @ 00adba5c */
                    /* catch() { ... } // from try @ 00adbb38 with catch @ 00adbbb4 */
  if (param_3 != (char *)0x0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x178) + 0x118);
    if (lVar2 != 0) {
      uVar1 = *(ulong *)(*(long *)(param_1 + 0x178) + 0x110);
      if (uVar1 == 0) {
        return 0;
      }
      uVar3 = 0;
      do {
        if (*param_3 == *(char *)(lVar2 + uVar3)) break;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
                    /* catch() { ... } // from try @ 00adbc54 with catch @ 00adbbf0 */
      if (uVar3 == uVar1) {
        return 0;
      }
    }
  }
  if (param_2 == (char *)0x0) {
    return 1;
  }
  uVar1 = FUN_00adb414(param_1,0,&local_28,&local_30);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (local_30 != 0) {
    uVar1 = 0;
    do {
                    /* try { // try from 00adbc40 to 00bdbc53 has its CatchHandler @ 00adbc88 */
      if ((*local_28 == *param_2) && (local_28[1] == param_2[1])) break;
      uVar1 = uVar1 + 1;
      local_28 = local_28 + 2;
    } while (uVar1 < local_30);
                    /* try { // try from 00adbc54 to 00bdbca3 has its CatchHandler @ 00adbbf0 */
    if (uVar1 != local_30) {
      if (*(int *)(param_1 + 0x38) == 0) {
        return 1;
      }
      uVar1 = FUN_00adb414(param_1,1,&local_28,&local_30);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      if (local_30 == 0) {
        return 1;
      }
                    /* catch() { ... } // from try @ 00adbc40 with catch @ 00adbc88 */
      uVar1 = 0;
      do {
                    /* catch() { ... } // from try @ 00adbd04 with catch @ 00adbca4 */
        if ((*local_28 == *param_2) && (local_28[1] == param_2[1])) break;
        uVar1 = uVar1 + 1;
        local_28 = local_28 + 2;
      } while (uVar1 < local_30);
      return (ulong)(uVar1 != local_30);
    }
  }
                    /* try { // try from 00adbd04 to 00bdbd53 has its CatchHandler @ 00adbca4 */
  return 0;
}

