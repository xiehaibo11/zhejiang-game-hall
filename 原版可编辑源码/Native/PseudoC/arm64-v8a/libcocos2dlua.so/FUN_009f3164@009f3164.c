
void FUN_009f3164(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong unaff_x24;
  ulong uVar6;
  ulong uVar7;
  byte local_68 [4];
  byte local_64 [4];
  byte local_60 [4];
  byte local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_68,1);
  if (iVar2 == 1) {
    uVar4 = (ulong)local_68[0];
    unaff_x24 = uVar4;
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar3 = 0xffffffff;
      goto LAB_009f32b4;
    }
  }
  iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_64,1);
  if (iVar2 == 1) {
    unaff_x24 = (ulong)local_64[0];
    uVar6 = unaff_x24;
LAB_009f321c:
    iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_60,1);
    if (iVar2 == 1) {
      unaff_x24 = (ulong)local_60[0];
      uVar7 = unaff_x24;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
      if (iVar2 != 0) goto LAB_009f3294;
      uVar7 = (ulong)(int)unaff_x24;
    }
    uVar5 = (uint)unaff_x24;
    iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_5c,1);
    if (iVar2 == 1) {
      uVar5 = (uint)local_5c[0];
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
      if (iVar2 != 0) goto LAB_009f3294;
    }
    uVar3 = 0;
    uVar4 = (uVar4 | uVar6 << 8) + uVar7 * 0x10000 + (long)(int)uVar5 * 0x1000000;
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
    if (iVar2 == 0) {
      uVar6 = (ulong)(int)unaff_x24;
      goto LAB_009f321c;
    }
LAB_009f3294:
    uVar4 = 0;
    uVar3 = 0xffffffff;
  }
LAB_009f32b4:
  *param_3 = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

