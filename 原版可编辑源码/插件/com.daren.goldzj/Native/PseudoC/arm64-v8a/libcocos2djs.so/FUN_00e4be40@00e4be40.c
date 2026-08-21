
undefined8 FUN_00e4be40(long *param_1,int *param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = *param_1;
  lVar3 = *(long *)(param_2 + 4);
  lVar5 = *(long *)(lVar2 + 0xf8);
  if (param_2[7] != 0) {
    lVar3 = (long)(lVar3 * (ulong)(uint)param_2[7] + 0x24) / 0x48;
  }
  uVar4 = lVar3 + 0x20 >> 6;
  if (*param_2 == 1) {
    if (uVar4 != *(ushort *)(lVar5 + 0x6c)) {
      return 0x17;
    }
  }
  else {
    if (*param_2 != 0) {
      return 7;
    }
    if (uVar4 != *(long *)(*(long *)(lVar2 + 0x40) + 0x18) + 0x20 >> 6) {
      return 0x17;
    }
  }
  FUN_00e16df4(lVar2,0);
  uVar1 = *(ushort *)(lVar5 + 0x5c);
  param_1[6] = (ulong)uVar1 << 6;
  param_1[7] = (long)(int)(((uint)uVar1 - (uint)*(ushort *)(lVar5 + 0x6c)) * 0x40);
  param_1[9] = (ulong)*(ushort *)(lVar5 + 0x72) << 6;
  return 0;
}

