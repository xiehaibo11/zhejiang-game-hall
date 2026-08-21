
undefined8 FUN_0107c4ac(long param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long local_50 [3];
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x2b0);
  plVar4 = *(long **)(*(long *)(lVar3 + 0xf0) + 0x60);
  *(undefined8 *)(param_1 + 0xac8) = *(undefined8 *)(lVar3 + 0x2b8);
  *(undefined8 *)(param_1 + 0xac0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x2a0);
  *(undefined8 *)(param_1 + 0xab8) = *(undefined8 *)(lVar3 + 0x2a8);
  *(undefined8 *)(param_1 + 0xab0) = uVar2;
  uVar2 = *(undefined8 *)(lVar3 + 0x2c0);
  *(undefined8 *)(param_1 + 0xad8) = *(undefined8 *)(lVar3 + 0x2c8);
  *(undefined8 *)(param_1 + 0xad0) = uVar2;
  if (plVar4 == (long *)0x0) {
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x288) + (ulong)param_2 * 8);
    *param_3 = uVar2;
    uVar1 = *(undefined4 *)(*(long *)(lVar3 + 0x290) + (ulong)param_2 * 8);
    *(undefined4 *)(param_3 + 1) = uVar1;
  }
  else {
    uVar2 = (**(code **)*plVar4)(plVar4[1],param_2,param_3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = *param_3;
    uVar1 = *(undefined4 *)(param_3 + 1);
  }
  uVar2 = (**(code **)(param_1 + 0xb80))(param_1,uVar2,uVar1);
  if ((plVar4 != (long *)0x0) && ((int)uVar2 == 0)) {
    if (*(long *)(*plVar4 + 0x10) == 0) {
      uVar2 = 0;
    }
    else {
      local_50[0] = FT_RoundFix(*(undefined8 *)(param_1 + 0x40));
      local_50[0] = local_50[0] >> 0x10;
      local_50[1] = 0;
      local_50[2] = FT_RoundFix(*(undefined8 *)(param_1 + 0x50));
      local_50[2] = local_50[2] >> 0x10;
      lStack_38 = FT_RoundFix(*(undefined8 *)(param_1 + 0x58));
      lStack_38 = lStack_38 >> 0x10;
      uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4[1],param_2,0,local_50);
      *(long *)(param_1 + 0x40) = local_50[0] << 0x10;
      *(long *)(param_1 + 0x58) = lStack_38 << 0x10;
      *(long *)(param_1 + 0x50) = local_50[2] << 0x10;
    }
  }
  return uVar2;
}

