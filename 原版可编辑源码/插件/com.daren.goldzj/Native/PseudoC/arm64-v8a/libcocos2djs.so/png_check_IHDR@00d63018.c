
void png_check_IHDR(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                   int param_7,int param_8)

{
  uint uVar1;
  bool bVar2;
  char *pcVar3;
  
  if (param_2 == 0) {
    pcVar3 = "Image width is zero in IHDR";
LAB_00d63080:
    png_warning(param_1,pcVar3);
    bVar2 = true;
    if (param_3 != 0) goto LAB_00d63090;
LAB_00d630c0:
    pcVar3 = "Image height is zero in IHDR";
LAB_00d630c8:
    png_warning(param_1,pcVar3);
    bVar2 = true;
  }
  else {
    if ((int)param_2 < 0) {
      pcVar3 = "Invalid image width in IHDR";
      goto LAB_00d63080;
    }
    if (*(uint *)(param_1 + 0x494) < param_2) {
      pcVar3 = "Image width exceeds user limit in IHDR";
      goto LAB_00d63080;
    }
    bVar2 = false;
    if (param_3 == 0) goto LAB_00d630c0;
LAB_00d63090:
    if ((int)param_3 < 0) {
      pcVar3 = "Invalid image height in IHDR";
      goto LAB_00d630c8;
    }
    if (*(uint *)(param_1 + 0x498) < param_3) {
      pcVar3 = "Image height exceeds user limit in IHDR";
      goto LAB_00d630c8;
    }
  }
  if ((0x10 < param_4) || ((1 << (ulong)(param_4 & 0x1f) & 0x10116U) == 0)) {
    png_warning(param_1,"Invalid bit depth in IHDR");
    bVar2 = true;
  }
  uVar1 = param_5 | 4;
  if ((6 < param_5) || (uVar1 == 5)) {
    png_warning(param_1,"Invalid color type in IHDR");
    bVar2 = true;
  }
  if (((int)param_4 < 9) || (param_5 != 3)) {
    if (((int)param_4 < 8) && (param_5 == 4 || uVar1 == 6)) goto LAB_00d6314c;
  }
  else {
LAB_00d6314c:
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
      png_warning(param_1,"Invalid filter method in IHDR");
      goto LAB_00d63238;
    }
  }
  if (!bVar2) {
    return;
  }
LAB_00d63238:
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Invalid IHDR data");
}

