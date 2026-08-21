
long TIFFReadEncodedStrip(undefined8 *param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  
  if (*(int *)((long)param_1 + 0xc) == 1) {
    uVar6 = param_1[0x77];
    uVar8 = *param_1;
    pcVar9 = "File not open for reading";
  }
  else {
    if ((*(byte *)((long)param_1 + 0x11) >> 2 & 1) == 0) {
      if (*(uint *)((long)param_1 + 0xe4) <= param_2) {
        TIFFErrorExt(param_1[0x77],"TIFFReadEncodedStrip","%lu: Strip out of range, max %lu",param_2
                    );
        return -1;
      }
      uVar2 = *(uint *)((long)param_1 + 0x5c);
      uVar1 = uVar2;
      if (*(uint *)((long)param_1 + 0x84) <= uVar2) {
        uVar1 = *(uint *)((long)param_1 + 0x84);
      }
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = ((uVar2 + uVar1) - 1) / uVar1;
      }
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = param_2 / uVar3;
      }
      uVar2 = uVar2 - (param_2 - uVar4 * uVar3) * uVar1;
      if (uVar2 <= uVar1) {
        uVar1 = uVar2;
      }
      lVar7 = TIFFVStripSize(param_1,uVar1);
      if (lVar7 == 0) {
        return -1;
      }
      if (lVar7 <= param_4 || param_4 == -1) {
        param_4 = lVar7;
      }
      iVar5 = TIFFFillStrip(param_1,param_2);
      if (iVar5 == 0) {
        return -1;
      }
      iVar5 = (*(code *)param_1[0x61])(param_1,param_3,param_4,uVar4);
      if (iVar5 < 1) {
        return -1;
      }
      (*(code *)param_1[0x7d])(param_1,param_3,param_4);
      return param_4;
    }
    uVar6 = param_1[0x77];
    uVar8 = *param_1;
    pcVar9 = "Can not read scanlines from a tiled image";
  }
  TIFFErrorExt(uVar6,uVar8,pcVar9);
  return -1;
}

