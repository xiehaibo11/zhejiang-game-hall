
/* cocos2d::isspace_unicode(unsigned short) */

undefined8 cocos2d::isspace_unicode(ushort param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (param_1 < 0x85) {
    if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003e00U) != 0)) {
      return 1;
    }
  }
  else {
    if (param_1 == 0x85) {
      return 1;
    }
    if (param_1 == 0xa0) {
      return 1;
    }
    if (param_1 == 0x1680) {
      return 1;
    }
  }
  if (uVar1 - 0x2000 < 0xb) {
    return 1;
  }
  if (((0x37 < uVar1 - 0x2028) ||
      ((1L << ((ulong)(uVar1 - 0x2028) & 0x3f) & 0x80000000000083U) == 0)) && (uVar1 != 0x3000)) {
    return 0;
  }
  return 1;
}

