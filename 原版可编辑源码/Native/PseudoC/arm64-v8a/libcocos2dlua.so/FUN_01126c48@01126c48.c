
void FUN_01126c48(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  int local_78;
  int local_74;
  uint uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    do {
      lVar2 = 0;
      lVar3 = 0;
      param_6 = param_6 + -1;
      do {
        puVar1 = (undefined1 *)(param_9 + lVar3);
        TIFFCIELabToXYZ(*(undefined8 *)(param_1 + 0x70),*puVar1,(long)(char)puVar1[1],
                        (long)(char)puVar1[2],&uStack_64,&local_68,&local_6c);
        TIFFXYZToRGB(uStack_64,local_68,local_6c,*(undefined8 *)(param_1 + 0x70),&uStack_70,
                     &local_74,&local_78);
        lVar3 = lVar3 + 3;
        *(uint *)(param_2 + lVar2 * 4) = uStack_70 | local_74 << 8 | local_78 << 0x10 | 0xff000000;
        lVar2 = lVar2 + 1;
      } while (param_5 != (int)lVar2);
      param_9 = param_9 + (ulong)(param_5 - 1) * 3 + 3 + (long)(param_7 * 3);
      param_2 = param_2 + (long)param_8 * 4 + (ulong)(param_5 - 1) * 4 + 4;
    } while (param_6 != 0);
  }
  return;
}

