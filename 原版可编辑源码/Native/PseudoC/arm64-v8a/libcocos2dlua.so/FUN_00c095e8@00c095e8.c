
uint FUN_00c095e8(long *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(uint *)((long)param_1 + 0x9c);
  lVar4 = *param_1;
  if (uVar1 < *(uint *)(param_1 + 0x13)) {
    lVar3 = param_1[0x12];
  }
  else {
    if (0xffc3 < *(uint *)(param_1 + 0x13)) {
                    /* WARNING: Subroutine does not return */
      FUN_00c064c4(param_1,0,0x958,0xffc4);
    }
    lVar3 = FUN_00c1a384(param_1[1],param_1[0x12],param_1 + 0x13,0xffc4,0x18);
    param_1[0x12] = lVar3;
  }
  uVar2 = *(undefined4 *)(lVar4 + 0x38);
  lVar4 = (ulong)uVar1 * 0x18;
  *(undefined8 *)(lVar3 + lVar4) = param_2;
  *(char *)(lVar3 + lVar4 + 0x10) = (char)uVar2;
  *(undefined4 *)(lVar3 + lVar4 + 8) = param_4;
  *(undefined1 *)(param_1[0x12] + lVar4 + 0x11) = param_3;
  *(uint *)((long)param_1 + 0x9c) = uVar1 + 1;
  return uVar1;
}

