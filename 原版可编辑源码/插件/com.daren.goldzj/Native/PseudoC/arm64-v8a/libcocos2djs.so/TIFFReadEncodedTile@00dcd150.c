
long TIFFReadEncodedTile(undefined8 *param_1,uint param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  if (*(int *)((long)param_1 + 0xc) == 1) {
    uVar4 = param_1[0x77];
    uVar5 = *param_1;
    pcVar6 = "File not open for reading";
  }
  else {
    if ((*(byte *)((long)param_1 + 0x11) >> 2 & 1) != 0) {
      if (*(uint *)((long)param_1 + 0xe4) <= param_2) {
        TIFFErrorExt(param_1[0x77],"TIFFReadEncodedTile","%lu: Tile out of range, max %lu",param_2);
        return -1;
      }
      lVar1 = param_1[0x56];
      if (param_4 <= (long)param_1[0x56] && param_4 != -1) {
        lVar1 = param_4;
      }
      iVar3 = TIFFFillTile(param_1,param_2);
      if (iVar3 == 0) {
        return -1;
      }
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x1c) != 0) {
        uVar2 = param_2 / *(uint *)(param_1 + 0x1c);
      }
      iVar3 = (*(code *)param_1[99])(param_1,param_3,lVar1,uVar2);
      if (iVar3 == 0) {
        return -1;
      }
      (*(code *)param_1[0x7d])(param_1,param_3,lVar1);
      return lVar1;
    }
    uVar4 = param_1[0x77];
    uVar5 = *param_1;
    pcVar6 = "Can not read tiles from a stripped image";
  }
  TIFFErrorExt(uVar4,uVar5,pcVar6);
  return -1;
}

