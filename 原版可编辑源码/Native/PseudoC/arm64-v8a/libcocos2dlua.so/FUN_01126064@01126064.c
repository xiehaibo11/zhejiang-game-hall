
void FUN_01126064(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                 int param_6,int param_7,int param_8,long param_9)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int local_6c;
  int iStack_68;
  uint local_64;
  
  uVar6 = (ulong)((param_5 >> 2) - 1);
  lVar7 = uVar6 * 6;
  do {
    puVar8 = (undefined1 *)(param_9 + 2);
    lVar1 = param_9 + lVar7;
                    /* catch() { ... } // from try @ 011261bc with catch @ 011260f8 */
    puVar11 = param_2 + uVar6 * 4 + 4;
    puVar9 = param_2;
    iVar10 = -(param_5 >> 2);
    do {
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar8[-2],uVar3,uVar4,&local_64,&iStack_68,
                     &local_6c);
      *puVar9 = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
      TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar8[-1],uVar3,uVar4,&local_64,&iStack_68,
                     &local_6c);
      puVar9[1] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
      TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*puVar8,uVar3,uVar4,&local_64,&iStack_68,
                     &local_6c);
                    /* try { // try from 011261b0 to 012261bb has its CatchHandler @ 011261cc */
                    /* try { // try from 011261bc to 01226203 has its CatchHandler @ 011260f8 */
      puVar9[2] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
                    /* catch() { ... } // from try @ 011261b0 with catch @ 011261cc */
      TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),puVar8[1],uVar3,uVar4,&local_64,&iStack_68,
                     &local_6c);
      puVar8 = puVar8 + 6;
      iVar10 = iVar10 + 1;
      puVar9[3] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
      puVar9 = puVar9 + 4;
    } while (iVar10 != 0);
    lVar5 = lVar7;
    if ((param_5 & 3) != 0) {
      uVar3 = *(undefined1 *)(lVar1 + 10);
      uVar4 = *(undefined1 *)(lVar1 + 0xb);
      uVar2 = param_5 & 3;
      if (uVar2 == 1) {
LAB_011262ac:
        TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*(undefined1 *)(param_9 + lVar7 + 6),uVar3,
                       uVar4,&local_64,&iStack_68,&local_6c);
        *puVar11 = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
      }
      else {
        if (uVar2 == 2) {
LAB_01126274:
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*(undefined1 *)(lVar1 + 7),uVar3,uVar4,
                         &local_64,&iStack_68,&local_6c);
          param_2[uVar6 * 4 + 5] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          goto LAB_011262ac;
        }
        if (uVar2 == 3) {
          TIFFYCbCrtoRGB(*(undefined8 *)(param_1 + 0x68),*(undefined1 *)(lVar1 + 8),uVar3,uVar4,
                         &local_64,&iStack_68,&local_6c);
          param_2[uVar6 * 4 + 6] = local_64 | iStack_68 << 8 | local_6c << 0x10 | 0xff000000;
          goto LAB_01126274;
        }
      }
      puVar11 = puVar11 + (param_5 & 3);
      lVar5 = lVar7 + 6;
    }
    param_6 = param_6 + -1;
    param_2 = puVar11 + param_8;
    param_9 = param_9 + lVar5 + (long)param_7 + 6;
    if (param_6 == 0) {
      return;
    }
  } while( true );
}

