
/* cocos2d::Sprite::setPolygonInfo(cocos2d::PolygonInfo const&) */

void __thiscall cocos2d::Sprite::setPolygonInfo(Sprite *this,PolygonInfo *param_1)

{
  PolygonInfo::operator=((PolygonInfo *)(this + 0x4c0),param_1);
  *(undefined4 *)(this + 0x42c) = 1;
  return;
}

