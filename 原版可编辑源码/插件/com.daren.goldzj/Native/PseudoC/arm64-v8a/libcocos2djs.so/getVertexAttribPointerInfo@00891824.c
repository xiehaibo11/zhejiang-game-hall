
/* cocos2d::getVertexAttribPointerInfo(unsigned int) */

undefined * cocos2d::getVertexAttribPointerInfo(uint param_1)

{
  if (0xf < param_1) {
    return (undefined *)0x0;
  }
  if ((DAT_01d36d18 & 1 << (ulong)(param_1 & 0x1f)) != 0) {
    return &DAT_01d1b0e0 + (ulong)param_1 * 0x20;
  }
  return (undefined *)0x0;
}

