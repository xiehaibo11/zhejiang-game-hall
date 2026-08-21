
/* cocos2d::StringUtils::isUnicodeNonBreaking(char32_t) */

undefined8 cocos2d::StringUtils::isUnicodeNonBreaking(wchar32 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_1 < L'\x202f') {
    if ((param_1 == L'\xa0') || (param_1 == L'\x2007')) {
      return uVar1;
    }
  }
  else {
    if (param_1 == L'\x202f') {
      return uVar1;
    }
    if (param_1 == L'\x2060') {
      return uVar1;
    }
  }
  return 0;
}

