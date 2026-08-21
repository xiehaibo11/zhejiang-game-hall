
/* cocos2d::PixelModeSize(cocos2d::PixelMode) */

undefined4 cocos2d::PixelModeSize(uint param_1)

{
  if (param_1 < 4) {
    return *(undefined4 *)(&DAT_0188d9bc + (long)(int)param_1 * 4);
  }
  return 0;
}

