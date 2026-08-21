
long FUN_01587498(long *param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong local_a8;
  undefined **local_a0;
  long lStack_98;
  undefined ***local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_a0 = &PTR_FUN_01cc9268;
  lStack_98 = param_2;
  local_80 = &local_a0;
  uVar6 = *(ulong *)param_1[5];
  uVar2 = *(uint *)(uVar6 + 3);
  if ((int)uVar2 < 4) {
LAB_01587554:
    iVar8 = -1;
  }
  else {
    uVar7 = 0;
    local_a8 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 7);
    iVar8 = 0xf;
    while (uVar4 = (*(code *)(*local_80)[6])(local_80,&local_a8), (uVar4 & 1) == 0) {
      uVar7 = uVar7 + 1;
      if (uVar2 >> 2 <= uVar7) goto LAB_01587554;
      lVar1 = (long)iVar8;
      iVar8 = iVar8 + 8;
      local_a8 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + lVar1);
      if (local_80 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
    }
    iVar8 = *(int *)(uVar6 + (long)(iVar8 + -0xb) + 7) >> 1;
  }
  if (&local_a0 == local_80) {
    pcVar5 = (code *)(*local_80)[4];
  }
  else {
    if (local_80 == (undefined ***)0x0) goto LAB_01587594;
    pcVar5 = (code *)(*local_80)[5];
  }
  (*pcVar5)();
LAB_01587594:
  if (iVar8 == -1) {
    *param_3 = 0;
  }
  else {
    param_2 = (**(code **)(*param_1 + 0x28))(param_1,iVar8,&local_a0);
    if (param_2 != 0) {
      if ((char)local_a0 == '\0') {
        *param_3 = 1;
        param_2 = param_1[1] + 200;
      }
      else {
        *param_3 = 2;
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

