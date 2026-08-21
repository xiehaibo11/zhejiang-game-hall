
ulong FUN_00c07f70(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar5 = (ulong)uVar1;
  lVar7 = *(long *)(param_1 + 8);
  FUN_00c07d88(param_1,*(undefined4 *)(param_1 + 0x30),uVar5,0xff,uVar5);
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (uVar1 < *(uint *)(param_1 + 0x50)) {
    lVar4 = *(long *)(param_1 + 0x48);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x48) - *(long *)(lVar7 + 0xa0);
    if (0x3ffffff < *(uint *)(lVar7 + 0xa8)) {
                    /* WARNING: Subroutine does not return */
      FUN_007b6014(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x44),0x4000000,
                   "bytecode instructions");
    }
    lVar4 = FUN_00c1a384(*(undefined8 *)(param_1 + 0x10),*(long *)(lVar7 + 0xa0),lVar7 + 0xa8,
                         0x4000000,8);
    *(long *)(lVar7 + 0xa0) = lVar4;
    iVar3 = *(int *)(lVar7 + 0xa8);
    lVar4 = lVar4 + lVar6;
    *(long *)(param_1 + 0x48) = lVar4;
    *(int *)(param_1 + 0x50) = iVar3 - (int)(lVar6 >> 3);
  }
  uVar2 = *(undefined4 *)(lVar7 + 0x74);
  *(undefined4 *)(lVar4 + uVar5 * 8) = param_2;
  *(undefined4 *)(lVar4 + uVar5 * 8 + 4) = uVar2;
  *(uint *)(param_1 + 0x28) = uVar1 + 1;
  return uVar5;
}

