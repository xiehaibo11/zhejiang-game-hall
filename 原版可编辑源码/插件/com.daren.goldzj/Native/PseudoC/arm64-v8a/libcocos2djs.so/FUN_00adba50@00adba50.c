
undefined8 FUN_00adba50(void *param_1,int param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  char acStack_44 [20];
  
                    /* catch() { ... } // from try @ 00adbb14 with catch @ 00adba5c
                       catch() { ... } // from try @ 00adbb50 with catch @ 00adba5c
                       catch() { ... } // from try @ 00adbba4 with catch @ 00adba5c */
  uVar2 = 0;
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
    uVar3 = *param_3;
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)((long)param_3 + uVar4 * 4 + 8) == iVar1) {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    *param_3 = uVar3 + 1;
    *(int *)((long)param_3 + uVar3 * 4 + 8) = iVar1;
    uVar2 = 1;
  }
                    /* try { // try from 00adbb0c to 00bdbb13 has its CatchHandler @ 00adbba4 */
                    /* try { // try from 00adbb14 to 00bdbb37 has its CatchHandler @ 00adba5c */
  return uVar2;
}

