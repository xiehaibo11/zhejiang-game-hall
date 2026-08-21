
/* cocos2d::StringUtils::isCJKUnicode(char32_t) */

bool cocos2d::StringUtils::isCJKUnicode(wchar32 param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (((((0x70 < (uint)(param_1 + L'\xffffce40') >> 6) && (0x1f < (uint)(param_1 + L'\xffff01d0')))
       && (0x1ff < (uint)(param_1 + L'\xffff0700'))) &&
      ((0x2ba < (uint)(param_1 + L'\xffff5400') >> 4 && (0xbf < (uint)(param_1 + L'\xffffcf00')))))
     && ((0x10f < (uint)(param_1 + L'\xffffd010') &&
         ((0x146 < (uint)(param_1 + L'\xffffb200') >> 6 && (0x15f < (uint)(param_1 + L'\xffffd180'))
          ))))) {
    bVar1 = (uint)(param_1 + L'\xfffe0ffc') < 0x67f;
  }
  return bVar1;
}

