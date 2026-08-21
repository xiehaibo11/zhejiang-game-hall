
/* cocos2d::StringUtils::isUnicodeSpace(char32_t) */

undefined8 cocos2d::StringUtils::isUnicodeSpace(wchar32 param_1)

{
  if (param_1 < L'\x85') {
    if (((uint)param_1 < 0x21) && ((1L << ((ulong)(uint)param_1 & 0x3f) & 0x100003e00U) != 0)) {
      return 1;
    }
  }
  else {
    if (param_1 == L'\x85') {
      return 1;
    }
    if (param_1 == L'\xa0') {
      return 1;
    }
    if (param_1 == L'\x1680') {
      return 1;
    }
  }
  if ((uint)(param_1 + L'\xffffe000') < 0xb) {
    return 1;
  }
  if (((0x37 < (uint)(param_1 + L'\xffffdfd8')) ||
      ((1L << ((ulong)(uint)(param_1 + L'\xffffdfd8') & 0x3f) & 0x80000000000083U) == 0)) &&
     (param_1 != L'\x3000')) {
    return 0;
  }
  return 1;
}

