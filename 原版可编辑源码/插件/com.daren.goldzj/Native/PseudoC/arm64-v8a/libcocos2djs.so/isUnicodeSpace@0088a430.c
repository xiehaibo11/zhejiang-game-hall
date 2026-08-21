
/* cocos2d::StringUtils::isUnicodeSpace(char16_t) */

undefined8 cocos2d::StringUtils::isUnicodeSpace(wchar16 param_1)

{
  uint uVar1;
  
  if ((ushort)(param_1 + L'\xfff7') < 5) {
    return 1;
  }
  if ((ushort)param_1 < 0xa0) {
    if (param_1 == L' ') {
      return 1;
    }
    if (param_1 == L'\x85') {
      return 1;
    }
  }
  else {
    if (param_1 == L'\xa0') {
      return 1;
    }
    if (param_1 == L'\x1680') {
      return 1;
    }
  }
  uVar1 = (uint)(ushort)param_1;
  if ((uVar1 - 0x2000 & 0xffff) < 0xb) {
    return 1;
  }
  if (((0x37 < uVar1 - 0x2028) ||
      ((1L << ((ulong)(uVar1 - 0x2028) & 0x3f) & 0x80000000000083U) == 0)) && (uVar1 != 0x3000)) {
    return 0;
  }
  return 1;
}

