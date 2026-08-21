
void FUN_00c083f4(long *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  uVar1 = *(uint *)((long)param_1 + 0x9c);
  uVar3 = param_2 + *(int *)(lVar5 + 0x38);
  if (199 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_007b6014(*(undefined8 *)(lVar5 + 8),*(undefined4 *)(lVar5 + 0x44),200,"local variables");
  }
  if (uVar1 < *(uint *)(param_1 + 0x13)) {
    lVar4 = param_1[0x12];
  }
  else {
    if (0xffc3 < *(uint *)(param_1 + 0x13)) {
                    /* WARNING: Subroutine does not return */
      FUN_00c064c4(param_1,0,0x958,0xffc4);
    }
    lVar4 = FUN_00c1a384(param_1[1],param_1[0x12],param_1 + 0x13,0xffc4,0x18);
    iVar2 = *(int *)(lVar5 + 0x38);
    param_1[0x12] = lVar4;
    uVar3 = param_2 + iVar2;
  }
  *(undefined8 *)(lVar4 + (ulong)uVar1 * 0x18) = param_3;
  *(short *)(lVar5 + (ulong)uVar3 * 2 + 0x5c) = (short)uVar1;
  *(uint *)((long)param_1 + 0x9c) = uVar1 + 1;
  return;
}

