
ulong FUN_00c0e7d0(long *param_1,uint param_2,uint param_3)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  
  uVar3 = (param_2 ^ param_3) - (param_3 >> 0x12 | param_3 << 0xe);
  uVar4 = (ulong)((uVar3 ^ param_3 >> 0xd) - (uVar3 >> 0x13)) & 0x7f;
  uVar6 = *(ushort *)((long)param_1 + uVar4 * 2 + 0xd8);
  if (uVar6 != 0) {
    uVar2 = uVar6;
    do {
      lVar1 = (ulong)uVar2 * 0x18;
      lVar5 = *param_1 + lVar1;
      if ((*(uint *)(*param_1 + lVar1) == param_2) && (*(uint *)(lVar5 + 4) == param_3)) {
        return (ulong)uVar2;
      }
      uVar2 = *(ushort *)(lVar5 + 10);
    } while (uVar2 != 0);
  }
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 < *(uint *)((long)param_1 + 0xc)) {
    lVar5 = *param_1;
  }
  else {
    if (0xffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfaf54(param_1[2],0x8b);
    }
    lVar5 = FUN_00c1a384(param_1[2],*param_1,(long)param_1 + 0xc,0x10000,0x18);
    *param_1 = lVar5;
    uVar6 = *(ushort *)((long)param_1 + uVar4 * 2 + 0xd8);
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  lVar1 = lVar5 + (ulong)uVar3 * 0x18;
  *(uint *)(lVar5 + (ulong)uVar3 * 0x18) = param_2;
  *(uint *)(lVar1 + 4) = param_3;
  *(undefined2 *)(lVar1 + 8) = 0;
  *(ushort *)(lVar1 + 10) = uVar6;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(short *)((long)param_1 + uVar4 * 2 + 0xd8) = (short)uVar3;
  return (ulong)uVar3;
}

