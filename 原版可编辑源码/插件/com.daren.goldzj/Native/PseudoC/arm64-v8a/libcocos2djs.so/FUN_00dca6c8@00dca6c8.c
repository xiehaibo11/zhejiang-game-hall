
void FUN_00dca6c8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,ulong param_8,long param_9)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  int local_64;
  int local_58;
  uint uStack_54;
  
  puVar1 = (undefined1 *)(param_9 + 2);
  do {
    lVar2 = 0;
    puVar3 = puVar1;
    do {
      TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar3[-2],puVar3[-1],*puVar3,&uStack_54,
                     &local_58,&local_64);
      puVar3 = puVar3 + 3;
      *(uint *)(param_2 + lVar2 * 4) = uStack_54 | local_58 << 8 | local_64 << 0x10 | 0xff000000;
      lVar2 = lVar2 + 1;
    } while (param_5 != (int)lVar2);
    param_6 = param_6 + -1;
    puVar1 = puVar1 + (ulong)(param_5 - 1) * 3 + (long)(param_7 * 3) + 3;
    param_2 = param_2 + (-(param_8 >> 0x1f & 1) & 0xfffffffc00000000 | (param_8 & 0xffffffff) << 2)
                        + (ulong)(param_5 - 1) * 4 + 4;
  } while (param_6 != 0);
  return;
}

