
undefined8 FUN_00f128d8(long param_1,ulong param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong local_38;
  ulong local_18;
  
  local_38 = param_2;
  iVar1 = v8::internal::SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_38);
  uVar5 = local_38 & 0xffffffff00000000;
  uVar3 = uVar5 | *(uint *)(local_38 + 0xf);
  uVar8 = uVar3;
  if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x5b) {
    uVar8 = uVar5 | *(uint *)(uVar3 + 0xb);
  }
  if ((iVar1 != -1) &&
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x65)) {
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x5b) {
      uVar3 = uVar5 | *(uint *)(uVar3 + 0xb);
    }
    iVar1 = *(int *)(uVar3 + 0x1f);
    local_18 = local_38;
    iVar2 = v8::internal::SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_18);
    plVar9 = (long *)(param_1 + 0x10);
    if ((*(uint *)(local_18 + 0x1b) & 0x10000000) != 0) {
      iVar2 = -1;
    }
    if ((long *)*plVar9 != (long *)0x0) {
      iVar1 = iVar1 >> 1;
      plVar4 = plVar9;
      plVar6 = (long *)*plVar9;
      do {
        while ((int)plVar6[4] < iVar1) {
          plVar6 = (long *)plVar6[1];
joined_r0x00f129d0:
          if (plVar6 == (long *)0x0) goto LAB_00f129e4;
        }
        if (((int)plVar6[4] <= iVar1) && (*(int *)((long)plVar6 + 0x24) < iVar2)) {
          plVar6 = (long *)plVar6[1];
          goto joined_r0x00f129d0;
        }
        plVar7 = (long *)*plVar6;
        plVar4 = plVar6;
        plVar6 = plVar7;
      } while (plVar7 != (long *)0x0);
LAB_00f129e4:
      if (((plVar4 != plVar9) && ((int)plVar4[4] <= iVar1)) &&
         (((int)plVar4[4] < iVar1 || (*(int *)((long)plVar4 + 0x24) <= iVar2)))) {
        *param_3 = (long)(plVar4 + 5);
        return 1;
      }
    }
  }
  return 0;
}

