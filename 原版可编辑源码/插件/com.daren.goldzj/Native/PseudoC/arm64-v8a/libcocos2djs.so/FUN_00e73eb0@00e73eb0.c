
undefined8 FUN_00e73eb0(ulong *param_1,undefined8 *param_2,long *param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 local_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  ulong local_398 [96];
  ulong local_98;
  ulong uStack_90;
  int local_88;
  undefined4 uStack_84;
  long local_80;
  long lStack_78;
  int local_70;
  
  local_3d0 = *param_2;
  local_3b8 = param_2[3];
  uStack_3c0 = param_2[2];
  uStack_3a8 = param_2[5];
  local_3b0 = param_2[4];
  uStack_3c8 = (undefined4)param_2[1];
  _uStack_3c8 = CONCAT44(2,uStack_3c8);
  if ((*(int *)((long)param_2 + 0xc) == 10) || (*(int *)((long)param_2 + 0xc) == 7)) {
    _uStack_3c8 = CONCAT44(3,uStack_3c8);
  }
  FUN_00e72cdc(param_1,&local_80);
  if (local_70 == 3) {
    uVar6 = *param_1;
    uVar7 = param_1[2];
    puVar5 = local_398;
    *param_1 = local_80 + 1U;
    param_1[2] = lStack_78 - 1U;
    if (local_80 + 1U < lStack_78 - 1U) {
      puVar5 = local_398;
      do {
        FUN_00e72cdc(param_1,&local_98);
        uVar2 = uStack_90;
        uVar1 = local_98;
        if (local_88 == 0) break;
        if (puVar5 < &local_98) {
          puVar5[2] = CONCAT44(uStack_84,local_88);
          puVar5[1] = uVar2;
          *puVar5 = uVar1;
        }
        puVar5 = puVar5 + 3;
      } while (*param_1 < param_1[2]);
    }
    uVar4 = (int)((ulong)((long)puVar5 - (long)local_398) >> 3) * -0x55555555;
    *param_1 = uVar6;
    param_1[2] = uVar7;
    if (-1 < (int)uVar4) {
      uVar8 = *(uint *)(param_2 + 4);
      if (uVar4 <= *(uint *)(param_2 + 4)) {
        uVar8 = uVar4;
      }
      if ((*(int *)((long)param_2 + 0xc) != 7) && (*(uint *)((long)param_2 + 0x24) != 0)) {
        *(char *)(*param_3 + (ulong)*(uint *)((long)param_2 + 0x24)) = (char)uVar8;
      }
      if (0 < (int)uVar8) {
        puVar5 = local_398;
        do {
          *param_1 = *puVar5;
          param_1[2] = puVar5[1];
          uVar3 = FUN_00e73148(param_1,&local_3d0,param_3,param_4,0);
          if ((int)uVar3 != 0) goto LAB_00e74040;
          uVar8 = uVar8 - 1;
          puVar5 = puVar5 + 3;
          uVar4 = (uint)local_3b8._4_1_;
          local_3b8 = CONCAT44(local_3b8._4_4_,(int)local_3b8 + uVar4);
        } while (0 < (int)uVar8);
      }
      uVar3 = 0;
LAB_00e74040:
      *param_1 = uVar6;
      param_1[2] = uVar7;
      return uVar3;
    }
  }
  return 0xa2;
}

