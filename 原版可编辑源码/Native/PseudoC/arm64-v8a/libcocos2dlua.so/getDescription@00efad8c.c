
/* cocos2d::experimental::TMXLayer::getDescription() const */

void __thiscall cocos2d::experimental::TMXLayer::getDescription(TMXLayer *this)

{
                    /* try { // try from 00efad8c to 00ffadcb has its CatchHandler @ 00efa57c */
  StringUtils::format("<FastTMXLayer | tag = %d, size = %d,%d>",(ulong)*(uint *)(this + 0x1a0),
                      (int)*(float *)(this + 0x318),(int)*(float *)(this + 0x31c));
  return;
}

