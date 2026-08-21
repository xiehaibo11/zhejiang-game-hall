
void png_icc_set_sRGB(long param_1,undefined8 param_2,uint *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  
  if ((~*(byte *)(param_1 + 0x400) & 0x30) != 0) {
    uVar8 = 0;
    uVar7 = 0;
    puVar9 = &DAT_01473c30;
    uVar1 = (param_3[0x15] & 0xff00ff00) >> 8 | (param_3[0x15] & 0xff00ff) << 8;
    uVar6 = 0x10000;
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010befb4 with catch @ 010bf044
                        */
      if (((((uVar1 >> 0x10 | uVar1 << 0x10) == puVar9[-1]) &&
           (uVar2 = (param_3[0x16] & 0xff00ff00) >> 8 | (param_3[0x16] & 0xff00ff) << 8,
           (uVar2 >> 0x10 | uVar2 << 0x10) == *puVar9)) &&
          (uVar2 = (param_3[0x17] & 0xff00ff00) >> 8 | (param_3[0x17] & 0xff00ff) << 8,
          (uVar2 >> 0x10 | uVar2 << 0x10) == puVar9[1])) &&
         (uVar2 = (param_3[0x18] & 0xff00ff00) >> 8 | (param_3[0x18] & 0xff00ff) << 8,
         (uVar2 >> 0x10 | uVar2 << 0x10) == puVar9[2])) {
        if (uVar7 == 0) {
          uVar7 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
          uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
          uVar6 = (param_3[0x10] & 0xff00ff00) >> 8 | (param_3[0x10] & 0xff00ff) << 8;
          uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
        }
        if ((uVar7 == puVar9[-2]) && (uVar6 == *(ushort *)((long)puVar9 + 0xe))) {
          if (param_4 == 0) {
            uVar3 = adler32(0,0,0);
            param_4 = adler32(uVar3,param_3,uVar7);
          }
          if (param_4 != puVar9[-4]) {
LAB_010bf148:
            png_chunk_report(param_1,"Not recognizing known sRGB profile that has been edited",0);
            return;
          }
          uVar3 = crc32(0,0,0);
          uVar4 = crc32(uVar3,param_3,uVar7);
          if (uVar4 != puVar9[-3]) goto LAB_010bf148;
          if (uVar8 - 5 < 2) {
            pcVar5 = "known incorrect sRGB profile";
            uVar3 = 2;
          }
          else {
            if (2 < uVar8 - 4) goto LAB_010bf18c;
            pcVar5 = "out-of-date sRGB profile with no signature";
            uVar3 = 0;
          }
          png_chunk_report(param_1,pcVar5,uVar3);
LAB_010bf18c:
          uVar1 = (param_3[0x10] & 0xff00ff00) >> 8 | (param_3[0x10] & 0xff00ff) << 8;
          png_colorspace_set_sRGB(param_1,param_2,uVar1 >> 0x10 | uVar1 << 0x10);
          return;
        }
      }
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 8;
    } while (uVar8 < 7);
  }
  return;
}

