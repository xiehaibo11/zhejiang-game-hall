
/* cocos2d::_ttfConfig::~_ttfConfig() */

void __thiscall cocos2d::_ttfConfig::~_ttfConfig(_ttfConfig *this)

{
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}

