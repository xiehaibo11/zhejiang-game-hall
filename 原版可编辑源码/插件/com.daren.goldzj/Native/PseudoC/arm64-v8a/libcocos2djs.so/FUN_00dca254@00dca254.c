
void FUN_00dca254(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                 int param_6,int param_7,int param_8,long param_9)

{
  uint *puVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  long lVar12;
  int local_6c;
  int iStack_68;
  uint local_64;
  
  uVar5 = (uint)(param_5 >> 1) & 0x7fffffff;
  lVar7 = (long)(param_7 << 1);
  uVar6 = (ulong)(uVar5 - 1);
  lVar8 = uVar6 * 4;
  if ((param_5 & 1) == 0) {
    puVar11 = (undefined1 *)(param_9 + 1);
    do {
      lVar12 = 0;
      puVar9 = puVar11;
      iVar10 = -uVar5;
      do {
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        puVar1 = (uint *)(param_2 + lVar12);
        TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar9[-1],uVar3,uVar4,&local_64,&iStack_68,
                       &local_6c);
        *puVar1 = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
        TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*puVar9,uVar3,uVar4,&local_64,&iStack_68,
                       &local_6c);
        iVar10 = iVar10 + 1;
        lVar12 = lVar12 + 8;
        puVar1[1] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
        puVar9 = puVar9 + 4;
      } while (iVar10 != 0);
      param_6 = param_6 + -1;
      puVar11 = puVar11 + lVar8 + lVar7 + 4;
      param_2 = param_2 + uVar6 * 8 + (long)param_8 * 4 + 8;
    } while (param_6 != 0);
  }
  else {
    puVar11 = (undefined1 *)(param_9 + 3);
    do {
      lVar12 = 0;
      lVar2 = param_9 + lVar8;
      puVar9 = puVar11;
      iVar10 = -uVar5;
      do {
        uVar4 = puVar9[-1];
        uVar3 = *puVar9;
        puVar1 = (uint *)(param_2 + lVar12);
        TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar9[-3],uVar4,uVar3,&local_64,&iStack_68,
                       &local_6c);
        *puVar1 = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
        TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar9[-2],uVar4,uVar3,&local_64,&iStack_68,
                       &local_6c);
        puVar9 = puVar9 + 4;
        iVar10 = iVar10 + 1;
        lVar12 = lVar12 + 8;
        puVar1[1] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
      } while (iVar10 != 0);
      TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*(undefined1 *)(param_9 + lVar8 + 4),
                     *(undefined1 *)(lVar2 + 6),*(undefined1 *)(lVar2 + 7),&local_64,&iStack_68,
                     &local_6c);
      param_6 = param_6 + -1;
      *(uint *)(param_2 + (uVar6 * 2 + 2) * 4) =
           local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
      param_9 = lVar2 + lVar7 + 8;
      param_2 = param_2 + uVar6 * 8 + (long)param_8 * 4 + 0xc;
      puVar11 = puVar11 + lVar8 + lVar7 + 8;
    } while (param_6 != 0);
  }
  return;
}

