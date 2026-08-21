
ulong FUN_00a64cac(long *param_1,undefined4 *param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((int)param_1[0xd9] != 0) {
    uVar1 = FUN_00a550c0(param_1 + 0xc3);
    return uVar1;
  }
  uVar1 = 0x20001;
  *param_2 = (int)param_1[0x4c];
  if (*(char *)(*param_1 + 0x616) == '\0') {
    if ((int)param_1[0x4d] == -1) {
      uVar1 = 1;
      lVar2 = 1;
    }
    else {
      param_2[1] = (int)param_1[0x4d];
      lVar2 = 2;
    }
    if (*(int *)((long)param_1 + 0x26c) != -1) {
      param_2[lVar2] = *(int *)((long)param_1 + 0x26c);
      return (ulong)(1 << (ulong)((uint)lVar2 | 0x10) | (uint)uVar1);
    }
  }
  else {
    uVar1 = 0x20003;
    param_2[1] = *(undefined4 *)((long)param_1 + 0x264);
  }
  return uVar1;
}

