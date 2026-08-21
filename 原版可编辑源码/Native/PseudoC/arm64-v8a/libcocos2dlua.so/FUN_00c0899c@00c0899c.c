
ulong FUN_00c0899c(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar3 = iVar1 - 1;
  uVar5 = (ulong)uVar3;
  uVar2 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (((int)uVar3 < *(int *)(param_1 + 0x2c)) ||
     (*(char *)(*(long *)(param_1 + 0x48) + uVar5 * 8) != '2')) {
    uVar5 = FUN_00c07f70(param_1,*(int *)(param_1 + 0x34) << 8 | 0x7fff0058);
  }
  else {
    *(undefined2 *)(*(long *)(param_1 + 0x48) + uVar5 * 8 + 2) = 0x7fff;
    *(int *)(param_1 + 0x2c) = iVar1;
  }
  if (uVar2 != 0xffffffff) {
    if ((int)uVar5 == -1) {
      return (ulong)uVar2;
    }
    uVar6 = uVar5 & 0xffffffff;
    lVar7 = *(long *)(param_1 + 0x48);
    lVar4 = uVar6 * 8;
    uVar3 = *(uint *)(lVar7 + lVar4);
    while( true ) {
      if ((uVar3 >> 0x10 == 0x7fff) ||
         (uVar3 = ((uVar3 >> 0x10) - 0x7fff) + (int)uVar6, uVar3 == 0xffffffff)) break;
      uVar6 = (ulong)uVar3;
      lVar4 = uVar6 * 8;
      uVar3 = *(uint *)(lVar7 + lVar4);
    }
    uVar2 = (uVar2 + 0x7fff) - (int)uVar6;
    if (0xffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00c07bc4(*(undefined8 *)(param_1 + 8),0x91a);
    }
    *(short *)(lVar7 + lVar4 + 2) = (short)uVar2;
  }
  return uVar5;
}

