
void png_check_IHDR(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                   int param_7,int param_8)

{
  uint uVar1;
  bool bVar2;
  char *pcVar3;
  
  if (param_2 == 0) {
    pcVar3 = "Image width is zero in IHDR";
LAB_010bf528:
    png_warning(param_1,pcVar3);
    bVar2 = true;
    if (param_3 != 0) goto LAB_010bf538;
LAB_010bf568:
    pcVar3 = "Image height is zero in IHDR";
LAB_010bf570:
    png_warning(param_1,pcVar3);
    bVar2 = true;
  }
  else {
    if ((int)param_2 < 0) {
      pcVar3 = "Invalid image width in IHDR";
      goto LAB_010bf528;
    }
    if (*(uint *)(param_1 + 0x494) < param_2) {
      pcVar3 = "Image width exceeds user limit in IHDR";
      goto LAB_010bf528;
    }
    bVar2 = false;
    if (param_3 == 0) goto LAB_010bf568;
LAB_010bf538:
    if ((int)param_3 < 0) {
                    /* try { // try from 010bf554 to 011bf563 has its CatchHandler @ 010bf6c0 */
      pcVar3 = "Invalid image height in IHDR";
      goto LAB_010bf570;
    }
    if (*(uint *)(param_1 + 0x498) < param_3) {
                    /* try { // try from 010bf548 to 011bf54f has its CatchHandler @ 010bf6d8 */
      pcVar3 = "Image height exceeds user limit in IHDR";
      goto LAB_010bf570;
    }
  }
  if ((0x10 < param_4) || ((1 << (ulong)(param_4 & 0x1f) & 0x10116U) == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010bf554 with catch @ 010bf6c0
                        */
    png_warning(param_1,"Invalid bit depth in IHDR");
    bVar2 = true;
  }
  uVar1 = param_5 | 4;
  if ((6 < param_5) || (uVar1 == 5)) {
    png_warning(param_1,"Invalid color type in IHDR");
                    /* try { // try from 010bf5c0 to 011bf5c7 has its CatchHandler @ 010bf6a8 */
    bVar2 = true;
  }
                    /* try { // try from 010bf5c8 to 011bf6ef has its CatchHandler @ 010bf398 */
  if (((int)param_4 < 9) || (param_5 != 3)) {
    if (((int)param_4 < 8) && (param_5 == 4 || uVar1 == 6)) goto LAB_010bf5f4;
  }
  else {
LAB_010bf5f4:
    png_warning(param_1,"Invalid color type/bit depth combination in IHDR");
    bVar2 = true;
  }
  if (1 < param_6) {
    png_warning(param_1,"Unknown interlace method in IHDR");
    bVar2 = true;
  }
  if (param_7 != 0) {
    png_warning(param_1,"Unknown compression method in IHDR");
    bVar2 = true;
  }
  if (((*(byte *)(param_1 + 0x165) >> 4 & 1) != 0) && (*(int *)(param_1 + 0x450) != 0)) {
    png_warning(param_1,"MNG features are not allowed in a PNG datastream");
  }
  if (param_8 != 0) {
    if ((((param_8 != 0x40) || ((*(uint *)(param_1 + 0x450) >> 2 & 1) == 0)) || (uVar1 != 6)) ||
       (uVar1 = *(uint *)(param_1 + 0x164), (uVar1 >> 0xc & 1) != 0)) {
      png_warning(param_1,"Unknown filter method in IHDR");
      uVar1 = *(uint *)(param_1 + 0x164);
      bVar2 = true;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010bf548 with catch @ 010bf6d8
                        */
      png_warning(param_1,"Invalid filter method in IHDR");
      goto LAB_010bf6e0;
    }
  }
  if (!bVar2) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010bf5c0 with catch @ 010bf6a8
                        */
    return;
  }
LAB_010bf6e0:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010bf3e8 with catch @ 010bf6ec
                        */
  png_error(param_1,"Invalid IHDR data");
}

