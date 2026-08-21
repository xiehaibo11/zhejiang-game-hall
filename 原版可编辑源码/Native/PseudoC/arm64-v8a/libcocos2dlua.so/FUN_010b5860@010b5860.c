
undefined8 FUN_010b5860(ulong *param_1,undefined8 *param_2,long *param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 local_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  ulong local_390 [96];
  ulong local_90;
  ulong uStack_88;
  int local_80;
  undefined4 uStack_7c;
  long local_78;
  long lStack_70;
  int local_68;
  
  local_3c0 = *param_2;
  uStack_398 = param_2[5];
  local_3a0 = param_2[4];
  uStack_3a8 = param_2[3];
  local_3b0 = param_2[2];
  uStack_3b8 = (undefined4)param_2[1];
  _uStack_3b8 = CONCAT44(2,uStack_3b8);
                    /* try { // try from 010b58bc to 011b58c7 has its CatchHandler @ 010b5aec */
  if ((*(int *)((long)param_2 + 0xc) == 10) || (*(int *)((long)param_2 + 0xc) == 7)) {
    _uStack_3b8 = CONCAT44(3,uStack_3b8);
  }
  FUN_010b4544(param_1,&local_78);
  if (local_68 == 3) {
    uVar7 = *param_1;
    uVar8 = param_1[2];
    puVar6 = local_390;
    *param_1 = local_78 + 1U;
    param_1[2] = lStack_70 - 1U;
    if (local_78 + 1U < lStack_70 - 1U) {
      puVar6 = local_390;
      do {
        FUN_010b4544(param_1,&local_90);
        uVar3 = uStack_88;
        uVar2 = local_90;
        if (local_80 == 0) break;
        if (puVar6 < &local_90) {
          puVar6[2] = CONCAT44(uStack_7c,local_80);
          puVar6[1] = uVar3;
          *puVar6 = uVar2;
        }
        puVar6 = puVar6 + 3;
      } while (*param_1 < param_1[2]);
    }
    uVar5 = (int)((ulong)((long)puVar6 - (long)local_390) >> 3) * -0x55555555;
    *param_1 = uVar7;
    param_1[2] = uVar8;
    if (-1 < (int)uVar5) {
      uVar1 = *(uint *)(param_2 + 4);
      if (uVar5 <= *(uint *)(param_2 + 4)) {
        uVar1 = uVar5;
      }
      if ((*(int *)((long)param_2 + 0xc) != 7) && (*(uint *)((long)param_2 + 0x24) != 0)) {
        *(char *)(*param_3 + (ulong)*(uint *)((long)param_2 + 0x24)) = (char)uVar1;
      }
                    /* try { // try from 010b59a0 to 011b59ab has its CatchHandler @ 010b5af0 */
      if (0 < (int)uVar1) {
        puVar6 = local_390;
        iVar9 = uVar1 + 1;
        do {
          *param_1 = *puVar6;
          param_1[2] = puVar6[1];
          uVar4 = FUN_010b4ca8(param_1,&local_3c0,param_3,param_4,0);
          if ((int)uVar4 != 0) goto LAB_010b5a00;
          iVar9 = iVar9 + -1;
          puVar6 = puVar6 + 3;
          uVar5 = (uint)uStack_3a8._4_1_;
          uStack_3a8 = CONCAT44(uStack_3a8._4_4_,(int)uStack_3a8 + uVar5);
        } while (1 < iVar9);
      }
      uVar4 = 0;
LAB_010b5a00:
      *param_1 = uVar7;
      param_1[2] = uVar8;
      return uVar4;
    }
  }
  return 0xa2;
}

