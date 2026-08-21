
void FUN_0102a978(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
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
    uVar5 = (ulong)local_68[0];
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
    uVar5 = 0;
    if (iVar2 != 0) {
      uVar3 = 0xffffffff;
      goto LAB_0102aac8;
    }
    uVar5 = 0;
  }
  iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_64,1);
  if (iVar2 == 1) {
    uVar4 = (ulong)local_64[0] << 8;
    uVar7 = (ulong)local_64[0];
LAB_0102aa38:
    iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_60,1);
    if (iVar2 == 1) {
      uVar7 = (ulong)local_60[0];
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
      if (iVar2 != 0) goto LAB_0102aab0;
    }
    iVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,local_5c,1);
    if (iVar2 == 1) {
      uVar6 = (ulong)local_5c[0];
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
      uVar6 = uVar7;
      if (iVar2 != 0) goto LAB_0102aab0;
    }
    uVar3 = 0;
    uVar5 = uVar5 | uVar4 | uVar7 << 0x10 | uVar6 << 0x18;
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
    if (iVar2 == 0) {
      uVar4 = (ulong)(uint)((int)uVar5 << 8);
      uVar7 = uVar5;
      goto LAB_0102aa38;
    }
LAB_0102aab0:
    uVar5 = 0;
    uVar3 = 0xffffffff;
  }
LAB_0102aac8:
  *param_3 = uVar5;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

