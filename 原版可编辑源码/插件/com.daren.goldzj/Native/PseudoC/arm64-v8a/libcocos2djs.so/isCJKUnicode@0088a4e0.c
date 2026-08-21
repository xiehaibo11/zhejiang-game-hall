
/* cocos2d::StringUtils::isCJKUnicode(char16_t) */

bool cocos2d::StringUtils::isCJKUnicode(wchar16 param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = (uint)(ushort)param_1;
  bVar1 = true;
  if ((((0x1f < (uVar2 + 0x1d0 & 0xffff)) && (0x1ff < (uVar2 + 0x700 & 0xffff))) &&
      (0x2ba < (uVar2 + 0x5400 >> 4 & 0xfff))) &&
     (((0xbf < (uVar2 - 0x3100 & 0xffff) && (0x10f < (uVar2 - 0x2ff0 & 0xffff))) &&
      ((0x146 < (uVar2 - 0x4e00 >> 6 & 0x3ff) && (0x15f < (uVar2 - 0x2e80 & 0xffff))))))) {
    bVar1 = (uVar2 - 0x31c0 >> 6 & 0x3ff) < 0x71;
  }
  return bVar1;
}

