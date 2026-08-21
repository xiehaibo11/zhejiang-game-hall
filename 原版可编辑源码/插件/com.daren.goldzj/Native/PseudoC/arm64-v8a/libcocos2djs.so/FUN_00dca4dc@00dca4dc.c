
void FUN_00dca4dc(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                 uint param_6,uint param_7,int param_8,long param_9)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  int local_6c;
  int local_68;
  uint uStack_64;
  
  uVar6 = param_6 - 2;
  puVar12 = param_2;
  lVar13 = param_9;
  if (1 < param_6) {
    iVar2 = param_5 + param_8 * 2;
    uVar7 = (ulong)(param_5 - 1);
    lVar8 = uVar7 * 4;
    puVar15 = param_2 + (ulong)param_5 + (long)param_8;
    if ((int)param_7 < 0) {
      param_7 = param_7 + 1;
    }
    lVar1 = (long)iVar2;
    uVar10 = (ulong)(uVar6 >> 1);
    lVar9 = (long)(int)((param_7 & 0x7ffffffe) << 1);
    puVar12 = (uint *)((long)param_2 +
                      (lVar8 + lVar1 * 4 + 4) * uVar10 + (uVar7 + (long)iVar2) * 4 + 4);
    lVar13 = param_9 + lVar8 + (lVar8 + lVar9 + 4) * uVar10 + lVar9 + 4;
    do {
      lVar14 = 0;
      uVar5 = param_5;
      do {
        puVar11 = (undefined1 *)(param_9 + lVar14);
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*puVar11,uVar3,uVar4,&uStack_64,&local_68,
                       &local_6c);
        *(uint *)((long)param_2 + lVar14) =
             uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
        TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar11[1],uVar3,uVar4,&uStack_64,&local_68,
                       &local_6c);
        uVar5 = uVar5 - 1;
        *(uint *)((long)puVar15 + lVar14) =
             uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
        lVar14 = lVar14 + 4;
      } while (uVar5 != 0);
      param_6 = param_6 - 2;
      puVar15 = puVar15 + lVar1 + uVar7 + 1;
      param_9 = param_9 + lVar8 + 4 + lVar9;
      param_2 = param_2 + lVar1 + uVar7 + 1;
    } while (1 < param_6);
    param_6 = uVar6 & 1;
  }
  if (param_6 == 1) {
    puVar11 = (undefined1 *)(lVar13 + 3);
    do {
      TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar11[-3],puVar11[-1],*puVar11,&uStack_64,
                     &local_68,&local_6c);
      param_5 = param_5 - 1;
      puVar11 = puVar11 + 4;
      *puVar12 = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
      puVar12 = puVar12 + 1;
    } while (param_5 != 0);
  }
  return;
}

