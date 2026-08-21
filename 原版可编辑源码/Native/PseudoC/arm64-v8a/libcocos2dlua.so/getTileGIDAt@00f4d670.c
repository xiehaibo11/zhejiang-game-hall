
/* cocos2d::TMXLayer::getTileGIDAt(cocos2d::Vec2 const&, cocos2d::TMXTileFlags_*) */

uint __thiscall cocos2d::TMXLayer::getTileGIDAt(TMXLayer *this,Vec2 *param_1,TMXTileFlags_ *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(this + 0x3f0) +
                   (long)(int)(*(float *)(this + 0x3dc) * (float)(int)*(float *)(param_1 + 4) +
                              (float)(int)*(float *)param_1) * 4);
  if (param_2 != (TMXTileFlags_ *)0x0) {
    *(uint *)param_2 = uVar1 & 0xe0000000;
  }
  return uVar1 & 0x1fffffff;
}

