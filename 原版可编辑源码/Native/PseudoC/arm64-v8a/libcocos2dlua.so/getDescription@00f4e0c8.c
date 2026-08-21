
/* cocos2d::TMXLayer::getDescription() const */

void __thiscall cocos2d::TMXLayer::getDescription(TMXLayer *this)

{
  StringUtils::format("<TMXLayer | tag = %d, size = %d,%d>",(ulong)*(uint *)(this + 0x1a0),
                      (int)*(float *)(this + 0x3e4),(int)*(float *)(this + 1000));
  return;
}

