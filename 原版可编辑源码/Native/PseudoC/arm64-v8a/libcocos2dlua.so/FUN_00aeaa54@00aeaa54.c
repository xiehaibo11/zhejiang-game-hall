
/* WARNING: Removing unreachable block (ram,0x00aeab98) */

ulong FUN_00aeaa54(long param_1,char *param_2,char *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_30;
  char *local_28;
  
                    /* try { // try from 00aeaa54 to 00beaad3 has its CatchHandler @ 00aea92c */
  if (param_3 != (char *)0x0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x178) + 0x118);
    if (lVar2 != 0) {
      uVar1 = *(ulong *)(*(long *)(param_1 + 0x178) + 0x110);
      if (uVar1 == 0) {
        return 0;
      }
      uVar3 = 0;
      do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aeaa50 with catch @ 00aeaa90
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aea980 with catch @ 00aeaa94
                        */
        if (*param_3 == *(char *)(lVar2 + uVar3)) break;
        uVar3 = uVar3 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aea9e4 with catch @ 00aeaa9c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aea9a0 with catch @ 00aeaaa0
                        */
      } while (uVar3 < uVar1);
      if (uVar3 == uVar1) {
        return 0;
      }
    }
  }
  if (param_2 == (char *)0x0) {
    return 1;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aea998 with catch @ 00aeaab0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aea9d8 with catch @ 00aeaab4
                       catch(type#1 @ 00000000) { ... } // from try @ 00aeaa20 with catch @ 00aeaab4
                        */
  uVar1 = FUN_00aea2c8(param_1,0,&local_28,&local_30);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (local_30 != 0) {
                    /* try { // try from 00aeaad4 to 00beaad7 has its CatchHandler @ 00aeaae0 */
                    /* try { // try from 00aeaad8 to 00beaae3 has its CatchHandler @ 00aea92c */
    uVar1 = 0;
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aeaad4 with catch @ 00aeaae0
                        */
                    /* try { // try from 00aeaae4 to 00beaae7 has its CatchHandler @ 00aeaaf0 */
                    /* try { // try from 00aeaae8 to 00beaaf3 has its CatchHandler @ 00aea92c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aeaae4 with catch @ 00aeaaf0
                        */
      if ((*local_28 == *param_2) && (local_28[1] == param_2[1])) break;
      uVar1 = uVar1 + 1;
      local_28 = local_28 + 2;
    } while (uVar1 < local_30);
    if (uVar1 != local_30) {
      if (*(int *)(param_1 + 0x38) == 0) {
        return 1;
      }
      uVar1 = FUN_00aea2c8(param_1,1,&local_28,&local_30);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      if (local_30 == 0) {
        return 1;
      }
      uVar1 = 0;
      do {
                    /* try { // try from 00aeab60 to 00beabf3 has its CatchHandler @ 00aeab60
                       catch() { ... } // from try @ 00aeab60 with catch @ 00aeab60
                       catch() { ... } // from try @ 00aead94 with catch @ 00aeab60 */
        if ((*local_28 == *param_2) && (local_28[1] == param_2[1])) break;
        uVar1 = uVar1 + 1;
        local_28 = local_28 + 2;
      } while (uVar1 < local_30);
      return (ulong)(uVar1 != local_30);
    }
  }
  return 0;
}

