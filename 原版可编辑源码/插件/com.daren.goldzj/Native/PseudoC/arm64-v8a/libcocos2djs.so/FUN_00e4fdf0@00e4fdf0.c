
undefined8 FUN_00e4fdf0(long *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(param_2 + 4);
  lVar3 = *(long *)(lVar1 + 0x108);
  if (param_2[7] != 0) {
    lVar2 = (long)(lVar2 * (ulong)(uint)param_2[7] + 0x24) / 0x48;
  }
  lVar2 = lVar2 + 0x20 >> 6;
  if (*param_2 == 1) {
    if (lVar2 != *(long *)(lVar3 + 0x48) + *(long *)(lVar3 + 0x40)) {
      return 0x17;
    }
  }
  else {
    if (*param_2 != 0) {
      return 7;
    }
    if (lVar2 != *(long *)(*(long *)(lVar1 + 0x40) + 0x18) + 0x20 >> 6) {
      return 0x17;
    }
  }
  FUN_00e16df4(lVar1,0);
  param_1[6] = *(long *)(lVar3 + 0x40) << 6;
  param_1[7] = *(long *)(lVar3 + 0x48) * -0x40;
  param_1[9] = (ulong)*(ushort *)(lVar3 + 8) << 6;
  return 0;
}

