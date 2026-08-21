
void FUN_01128174(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,ulong param_8,long param_9,long param_10,long param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int local_6c;
  int local_68;
  uint uStack_64;
  
  if (param_6 != 0) {
    lVar2 = (long)param_7;
    lVar1 = (ulong)(param_5 - 1) + 1;
    do {
      lVar3 = 0;
      do {
        TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*(undefined1 *)(param_9 + lVar3),
                       *(undefined1 *)(param_10 + lVar3),*(undefined1 *)(param_11 + lVar3),
                       &uStack_64,&local_68,&local_6c);
        *(uint *)(param_2 + lVar3 * 4) = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
        lVar3 = lVar3 + 1;
      } while (param_5 != (int)lVar3);
      param_6 = param_6 + -1;
      param_10 = param_10 + lVar1 + lVar2;
      param_9 = param_9 + lVar1 + lVar2;
      param_11 = param_11 + lVar1 + lVar2;
      param_2 = param_2 + (-(param_8 >> 0x1f & 1) & 0xfffffffc00000000 | (param_8 & 0xffffffff) << 2
                          ) + (ulong)(param_5 - 1) * 4 + 4;
    } while (param_6 != 0);
  }
  return;
}

