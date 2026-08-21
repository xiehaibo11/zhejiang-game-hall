
/* cocos2d::TTFLabelAtlasCache::getInstance() */

void cocos2d::TTFLabelAtlasCache::getInstance(void)

{
  if (DAT_01d38070 == (undefined8 *)0x0) {
    DAT_01d38070 = operator_new(0x28);
    DAT_01d38070[1] = 0;
    *DAT_01d38070 = 0;
    DAT_01d38070[3] = 0;
    DAT_01d38070[2] = 0;
    *(undefined4 *)(DAT_01d38070 + 4) = 0x3f800000;
  }
  return;
}

