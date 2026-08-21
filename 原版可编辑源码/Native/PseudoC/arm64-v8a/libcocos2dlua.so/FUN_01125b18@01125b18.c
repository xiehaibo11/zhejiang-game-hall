
void FUN_01125b18(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                 uint param_6,int param_7,int param_8,undefined1 *param_9)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int local_6c;
  int local_68;
  uint uStack_64;
  
  param_7 = param_7 * 10;
  iVar3 = param_7 + 3;
  if (-1 < param_7) {
    iVar3 = param_7;
  }
  iVar2 = param_5 + param_8 * 2;
  if ((param_6 & 3) == 0 && (param_5 & 1) == 0) {
    if (1 < param_6) {
                    /* catch() { ... } // from try @ 01125d7c with catch @ 01125df4 */
      uVar10 = (ulong)((param_5 >> 2) - 1);
      param_2 = param_2 + 2;
      param_9 = param_9 + 4;
      iVar6 = -(param_5 >> 2);
      iVar14 = iVar6;
      puVar13 = param_9;
      puVar12 = param_2;
      do {
        do {
          uVar4 = param_9[4];
          uVar5 = param_9[5];
          puVar1 = param_2 + (ulong)param_5 + (long)param_8;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[-4],uVar4,uVar5,&uStack_64,
                         &local_68,&local_6c);
          param_2[-2] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[-3],uVar4,uVar5,&uStack_64,
                         &local_68,&local_6c);
          param_2[-1] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[-2],uVar4,uVar5,&uStack_64,
                         &local_68,&local_6c);
          *param_2 = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[-1],uVar4,uVar5,&uStack_64,
                         &local_68,&local_6c);
          param_2[1] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*param_9,uVar4,uVar5,&uStack_64,&local_68,
                         &local_6c);
          puVar1[-2] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[1],uVar4,uVar5,&uStack_64,&local_68
                         ,&local_6c);
          puVar1[-1] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[2],uVar4,uVar5,&uStack_64,&local_68
                         ,&local_6c);
          *puVar1 = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[3],uVar4,uVar5,&uStack_64,&local_68
                         ,&local_6c);
          param_2 = param_2 + 4;
          iVar14 = iVar14 + 1;
          param_9 = param_9 + 10;
          puVar1[1] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
        } while (iVar14 != 0);
        param_6 = param_6 - 2;
        param_2 = puVar12 + (long)iVar2 + uVar10 * 4 + 4;
        param_9 = puVar13 + (long)(iVar3 >> 2) + uVar10 * 10 + 10;
        iVar14 = iVar6;
        puVar13 = param_9;
        puVar12 = param_2;
      } while (1 < param_6);
    }
  }
  else if (param_6 != 0) {
    puVar12 = param_2 + (ulong)param_5 + (long)param_8;
    uVar8 = param_5;
    do {
      while (uVar8 != 0) {
        uVar4 = param_9[8];
        uVar5 = param_9[9];
        if (uVar8 != 1) {
          if (uVar8 != 2) {
            if (uVar8 != 3) {
              if (param_6 != 1) {
                TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[7],uVar4,uVar5,&uStack_64,
                               &local_68,&local_6c);
                puVar12[3] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
              }
              TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[3],uVar4,uVar5,&uStack_64,
                             &local_68,&local_6c);
                    /* try { // try from 01125c20 to 01225c53 has its CatchHandler @ 01125c20
                       catch() { ... } // from try @ 01125c20 with catch @ 01125c20
                       catch() { ... } // from try @ 01125c60 with catch @ 01125c20 */
              param_2[3] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
            }
            if (param_6 != 1) {
                    /* try { // try from 01125c54 to 01225c5f has its CatchHandler @ 01125cd4 */
              TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[6],uVar4,uVar5,&uStack_64,
                             &local_68,&local_6c);
                    /* try { // try from 01125c60 to 01225d23 has its CatchHandler @ 01125c20 */
              puVar12[2] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
            }
            TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[2],uVar4,uVar5,&uStack_64,
                           &local_68,&local_6c);
            param_2[2] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
          }
          if (param_6 != 1) {
            TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[5],uVar4,uVar5,&uStack_64,
                           &local_68,&local_6c);
                    /* catch() { ... } // from try @ 01125c54 with catch @ 01125cd4 */
            puVar12[1] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
          }
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[1],uVar4,uVar5,&uStack_64,&local_68
                         ,&local_6c);
          param_2[1] = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
        }
                    /* try { // try from 01125d24 to 01225d7b has its CatchHandler @ 01125d24
                       catch() { ... } // from try @ 01125d24 with catch @ 01125d24
                       catch() { ... } // from try @ 01125d84 with catch @ 01125d24 */
        if (param_6 != 1) {
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),param_9[4],uVar4,uVar5,&uStack_64,&local_68
                         ,&local_6c);
          *puVar12 = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
        }
        puVar13 = param_9 + 10;
                    /* try { // try from 01125d7c to 01225d83 has its CatchHandler @ 01125df4 */
        TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*param_9,uVar4,uVar5,&uStack_64,&local_68,
                       &local_6c);
                    /* try { // try from 01125d84 to 01225e43 has its CatchHandler @ 01125d24 */
        puVar1 = puVar12 + 4;
        bVar9 = 3 < uVar8;
        uVar7 = uVar8 - 4;
        puVar11 = param_2 + 4;
        *param_2 = uStack_64 | local_68 << 8 | local_6c << 0x10 | 0xff000000;
        puVar12 = puVar12 + uVar8;
        if (bVar9) {
          puVar12 = puVar1;
        }
        param_2 = param_2 + uVar8;
        param_9 = puVar13;
        uVar8 = 0;
        if (bVar9) {
          param_2 = puVar11;
          uVar8 = uVar7;
        }
      }
      if (param_6 < 3) {
        return;
      }
      param_6 = param_6 - 2;
      puVar12 = puVar12 + iVar2;
      param_2 = param_2 + iVar2;
      param_9 = param_9 + (iVar3 >> 2);
      uVar8 = param_5;
    } while (param_6 != 0);
  }
  return;
}

