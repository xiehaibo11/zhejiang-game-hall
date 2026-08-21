
void FUN_00dc9e94(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                 uint param_6,uint param_7,int param_8,undefined1 *param_9)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  int local_6c;
  int local_68;
  uint uStack_64;
  
  if (1 < param_6) {
    uVar6 = param_5 - 2;
    puVar11 = param_2 + (ulong)param_5 + (long)param_8;
    if ((int)param_7 < 0) {
      param_7 = param_7 + 1;
    }
    iVar2 = param_5 + param_8 * 2;
    lVar1 = (ulong)(uVar6 & 0xfffffffe) + 2;
    uVar7 = param_6;
    do {
      uVar9 = param_5;
      if (1 < param_5) {
        puVar3 = puVar11 + lVar1;
        puVar10 = param_9 + 2;
        puVar8 = param_2;
        do {
          uVar4 = puVar10[2];
          uVar5 = puVar10[3];
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar10[-2],uVar4,uVar5,&uStack_64,
                         &local_68,&local_6c);
          *puVar8 = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar10[-1],uVar4,uVar5,&uStack_64,
                         &local_68,&local_6c);
          puVar8[1] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*puVar10,uVar4,uVar5,&uStack_64,&local_68,
                         &local_6c);
          *puVar11 = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar10[1],uVar4,uVar5,&uStack_64,&local_68
                         ,&local_6c);
          uVar9 = uVar9 - 2;
          puVar10 = puVar10 + 6;
          puVar8 = puVar8 + 2;
          puVar11[1] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
          puVar11 = puVar11 + 2;
        } while (1 < uVar9);
        param_9 = param_9 + (ulong)(uVar6 >> 1) * 6 + 6;
        param_2 = param_2 + lVar1;
        puVar11 = puVar3;
        uVar9 = uVar6 & 1;
      }
      if (uVar9 == 1) {
        uVar4 = param_9[4];
        uVar5 = param_9[5];
        TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*param_9,uVar4,uVar5,&uStack_64,&local_68,
                       &local_6c);
        *param_2 = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
        TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[2],uVar4,uVar5,&uStack_64,&local_68,
                       &local_6c);
        param_9 = param_9 + 6;
        *puVar11 = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
        param_2 = param_2 + 1;
        puVar11 = puVar11 + 1;
      }
      uVar7 = uVar7 - 2;
      param_9 = param_9 + (int)(((param_7 & 0xfffffffe) + ((int)param_7 >> 1)) * 2);
      param_2 = param_2 + iVar2;
      puVar11 = puVar11 + iVar2;
    } while (1 < uVar7);
    param_6 = param_6 & 1;
  }
  if (param_6 == 1) {
    uVar6 = param_5 - 2;
    if (1 < param_5) {
      puVar10 = param_9 + 4;
      puVar11 = param_2;
      do {
        uVar4 = *puVar10;
        uVar5 = puVar10[1];
        TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar10[-4],uVar4,uVar5,&uStack_64,&local_68,
                       &local_6c);
        *puVar11 = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
        TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar10[-3],uVar4,uVar5,&uStack_64,&local_68,
                       &local_6c);
        param_5 = param_5 - 2;
        puVar10 = puVar10 + 6;
        puVar11[1] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
        puVar11 = puVar11 + 2;
      } while (1 < param_5);
      param_2 = param_2 + (ulong)(uVar6 & 0xfffffffe) + 2;
      param_5 = uVar6 & 1;
      param_9 = param_9 + (ulong)(uVar6 >> 1) * 6 + 6;
    }
    if (param_5 == 1) {
      TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*param_9,param_9[4],param_9[5],&uStack_64,
                     &local_68,&local_6c);
      *param_2 = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
    }
  }
  return;
}

