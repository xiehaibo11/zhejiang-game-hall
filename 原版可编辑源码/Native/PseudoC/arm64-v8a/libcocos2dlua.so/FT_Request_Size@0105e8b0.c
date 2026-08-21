
undefined8 FT_Request_Size(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((((param_2 == (uint *)0x0) || (lVar6 = *(long *)(param_2 + 2), lVar6 < 0)) ||
      (lVar8 = *(long *)(param_2 + 4), lVar8 < 0)) || (4 < *param_2)) {
    return 6;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0xb0) + 0x18);
                    /* try { // try from 0105e8ec to 0115e8ef has its CatchHandler @ 0105e928 */
  UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0xb0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* try { // try from 0105e908 to 0115e917 has its CatchHandler @ 0105e93c */
    if ((*(ulong *)(param_1 + 0x10) & 3) == 2) {
      if (((uint)*(ulong *)(param_1 + 0x10) >> 1 & 1) == 0) {
        return 0x23;
      }
      if (*param_2 != 0) {
        return 7;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105e908 with catch @ 0105e93c
                        */
      if (param_2[6] == 0) {
        uVar2 = param_2[7];
        lVar4 = lVar6;
      }
      else {
        lVar4 = (long)(lVar6 * (ulong)param_2[6] + 0x24) / 0x48;
        uVar2 = param_2[7];
      }
      lVar9 = lVar8;
      if (uVar2 != 0) {
        lVar9 = (long)(lVar8 * (ulong)uVar2 + 0x24) / 0x48;
      }
      iVar3 = *(int *)(param_1 + 0x38);
      lVar1 = lVar4;
      if (lVar8 != 0) {
        lVar1 = lVar9;
      }
      if (lVar6 != 0) {
        lVar9 = lVar1;
        lVar1 = lVar4;
      }
      if (iVar3 < 1) {
        return 0x17;
      }
      lVar6 = 0;
                    /* try { // try from 0105e9d4 to 0115e9db has its CatchHandler @ 0105ea68 */
      plVar10 = (long *)(*(long *)(param_1 + 0x40) + 0x18);
                    /* try { // try from 0105e9dc to 0115ea83 has its CatchHandler @ 0105e9a4 */
      while ((0x3f < (*plVar10 + 0x20U ^ lVar9 + 0x20U) ||
             (0x3f < (plVar10[-1] + 0x20U ^ lVar1 + 0x20U)))) {
        lVar6 = lVar6 + 1;
        plVar10 = plVar10 + 4;
        if (iVar3 <= lVar6) {
          return 0x17;
        }
      }
      if ((int)lVar6 < 0) {
        return 6;
      }
      if (iVar3 <= (int)lVar6) {
        return 6;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0xb8);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_0105e8f4;
      FT_Select_Metrics();
    }
    else {
      FT_Request_Metrics();
    }
    return 0;
  }
LAB_0105e8f4:
                    /* WARNING: Could not recover jumptable at 0x0105e8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0xa0));
  return uVar5;
}

