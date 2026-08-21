
void jpeg_save_markers(undefined8 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar2 = param_1[0x4d];
  lVar4 = *(long *)(param_1[1] + 0x60) + -0x20;
  uVar3 = (uint)lVar4;
  if ((long)(ulong)param_3 <= lVar4) {
    uVar3 = param_3;
  }
  if (uVar3 == 0) {
    pcVar5 = FUN_00d8e15c;
    if (param_2 != 0xee && param_2 != 0xe0) {
      pcVar5 = FUN_00d8e078;
    }
  }
  else {
    if ((param_2 == 0xe0) && (uVar3 < 0xe)) {
      pcVar5 = FUN_00d8e46c;
      uVar3 = 0xe;
      goto LAB_00d8e43c;
    }
    uVar1 = 0xc;
    if (0xb < uVar3 || param_2 != 0xee) {
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    pcVar5 = FUN_00d8e46c;
  }
  if (param_2 == 0xfe) {
    *(code **)(lVar2 + 0x28) = pcVar5;
    *(uint *)(lVar2 + 0xb0) = uVar3;
    return;
  }
  if ((param_2 & 0xfffffff0) != 0xe0) {
    param_1 = (undefined8 *)*param_1;
    *(undefined4 *)(param_1 + 5) = 0x46;
    *(uint *)((long)param_1 + 0x2c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00d8e468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)();
    return;
  }
LAB_00d8e43c:
  *(code **)(lVar2 + ((long)(int)param_2 + -0xe0) * 8 + 0x30) = pcVar5;
  *(uint *)(lVar2 + ((long)(int)param_2 + -0xe0) * 4 + 0xb4) = uVar3;
  return;
}

