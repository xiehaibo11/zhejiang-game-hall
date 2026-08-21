
undefined8 FUN_00aea904(void *param_1,int param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  char acStack_44 [20];
  
  uVar2 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aeaa54 with catch @ 00aea92c
                       catch(type#1 @ 00000000) { ... } // from try @ 00aeaad8 with catch @ 00aea92c
                       catch(type#1 @ 00000000) { ... } // from try @ 00aeaae8 with catch @ 00aea92c
                        */
  if (((param_1 != (void *)0x0) && (uVar2 = 0, param_2 < 0x14)) && (*param_3 != 0x1c)) {
    memcpy(acStack_44,param_1,(long)param_2);
    acStack_44[param_2] = '\0';
    iVar1 = EC_curve_nist2nid(acStack_44);
    if ((iVar1 == 0) && (iVar1 = OBJ_sn2nid(acStack_44), iVar1 == 0)) {
      iVar1 = OBJ_ln2nid(acStack_44);
      if (iVar1 == 0) {
        return 0;
      }
    }
                    /* try { // try from 00aea980 to 00bea983 has its CatchHandler @ 00aeaa94 */
    uVar3 = *param_3;
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)((long)param_3 + uVar4 * 4 + 8) == iVar1) {
          return 0;
        }
                    /* try { // try from 00aea998 to 00bea99f has its CatchHandler @ 00aeaab0 */
        uVar4 = uVar4 + 1;
                    /* try { // try from 00aea9a0 to 00bea9af has its CatchHandler @ 00aeaaa0 */
      } while (uVar4 < uVar3);
    }
    *param_3 = uVar3 + 1;
    *(int *)((long)param_3 + uVar3 * 4 + 8) = iVar1;
    uVar2 = 1;
  }
  return uVar2;
}

