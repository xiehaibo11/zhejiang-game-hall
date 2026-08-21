
long ov_bitrate_instant(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0xb0) < 2) {
    return -0x83;
  }
  lVar2 = *(long *)(param_1 + 200);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar3 / lVar2;
    }
    return *(long *)(param_1 + 0x58) * lVar1;
  }
  return -1;
}

