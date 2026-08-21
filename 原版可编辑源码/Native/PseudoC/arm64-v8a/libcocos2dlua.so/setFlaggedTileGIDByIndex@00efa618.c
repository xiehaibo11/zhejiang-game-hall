
/* cocos2d::experimental::TMXLayer::setFlaggedTileGIDByIndex(int, unsigned int) */

void __thiscall
cocos2d::experimental::TMXLayer::setFlaggedTileGIDByIndex(TMXLayer *this,int param_1,uint param_2)

{
  if (*(uint *)(*(long *)(this + 800) + (long)param_1 * 4) != param_2) {
    *(uint *)(*(long *)(this + 800) + (long)param_1 * 4) = param_2;
    this[0x3e4] = (TMXLayer)0x1;
    this[0x488] = (TMXLayer)0x1;
  }
  return;
}

