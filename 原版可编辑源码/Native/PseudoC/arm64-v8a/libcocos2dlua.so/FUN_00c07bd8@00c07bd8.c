
void FUN_00c07bd8(long param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_3 != 0xffffffff) {
    uVar4 = *param_2;
    uVar5 = (ulong)uVar4;
    if (uVar4 == 0xffffffff) {
      *param_2 = param_3;
      return;
    }
    lVar6 = *(long *)(param_1 + 0x48);
    lVar3 = uVar5 * 8;
    uVar2 = *(uint *)(lVar6 + lVar3);
    while( true ) {
      if (uVar2 >> 0x10 == 0x7fff) break;
      uVar4 = (uint)uVar5;
      uVar1 = ((uVar2 >> 0x10) - 0x7fff) + uVar4;
      if (uVar1 == 0xffffffff) break;
      uVar5 = (ulong)uVar1;
      lVar3 = uVar5 * 8;
      uVar2 = *(uint *)(lVar6 + lVar3);
      uVar4 = uVar1;
    }
    uVar4 = (param_3 + 0x7fff) - uVar4;
    if (0xffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00c07bc4(*(undefined8 *)(param_1 + 8),0x91a);
    }
    *(short *)(lVar6 + lVar3 + 2) = (short)uVar4;
  }
  return;
}

