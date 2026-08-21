
/* cocos2d::iscjk_unicode(unsigned short) */

bool cocos2d::iscjk_unicode(ushort param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  return param_1 - 0x31c0 >> 6 < 0x71 ||
         (param_1 - 0xfe30 < 0x20 ||
         (uVar1 - 0xf900 < 0x200 ||
         (uVar1 - 0xac00 >> 4 < 699 ||
         (uVar1 - 0x3100 < 0xc0 ||
         (uVar1 - 0x2ff0 < 0x110 || (param_1 - 0x4e00 >> 6 < 0x147 || param_1 - 0x2e80 < 0x160))))))
  ;
}

