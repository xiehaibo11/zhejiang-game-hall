
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::GL::invalidateStateCache() */

void cocos2d::GL::invalidateStateCache(void)

{
  Director::getInstance();
  Director::resetMatrixStack();
  DAT_0177eb20 = 0xffffffff;
  DAT_0177eb64 = 0xffffffff;
  DAT_0177eb68 = 0xffffffff;
  DAT_01792a9c = 0;
  _DAT_0177eb2c = 0xffffffffffffffff;
  _DAT_0177eb24 = 0xffffffffffffffff;
  _DAT_0177eb3c = 0xffffffffffffffff;
  _DAT_0177eb34 = 0xffffffffffffffff;
  _DAT_0177eb4c = 0xffffffffffffffff;
  _DAT_0177eb44 = 0xffffffffffffffff;
  _DAT_0177eb5c = 0xffffffffffffffff;
  _DAT_0177eb54 = 0xffffffffffffffff;
  DAT_01792aa0 = 0;
  return;
}

