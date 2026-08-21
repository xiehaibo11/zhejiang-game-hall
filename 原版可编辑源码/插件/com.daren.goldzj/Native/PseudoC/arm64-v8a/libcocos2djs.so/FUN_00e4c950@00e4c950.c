
undefined8 FUN_00e4c950(long *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = *(long *)(param_2 + 4);
  if (param_2[7] != 0) {
    lVar1 = (long)(lVar1 * (ulong)(uint)param_2[7] + 0x24) / 0x48;
  }
  lVar1 = lVar1 + 0x20 >> 6;
  if (*param_2 == 1) {
    if (lVar1 != *(long *)(lVar2 + 0x188) + *(long *)(lVar2 + 0x180)) {
      return 0x17;
    }
  }
  else {
    if (*param_2 != 0) {
      return 7;
    }
    if (lVar1 != *(long *)(*(long *)(lVar2 + 0x40) + 0x18) + 0x20 >> 6) {
      return 0x17;
    }
  }
  FUN_00e16df4(lVar2,0);
  param_1[6] = *(long *)(lVar2 + 0x180) << 6;
  param_1[7] = *(long *)(lVar2 + 0x188) * -0x40;
  param_1[9] = (long)*(short *)(lVar2 + 0x1b4) << 6;
  return 0;
}

