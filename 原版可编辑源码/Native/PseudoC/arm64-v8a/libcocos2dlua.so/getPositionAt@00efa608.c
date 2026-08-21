
/* cocos2d::experimental::TMXLayer::getPositionAt(cocos2d::Vec2 const&) */

void __thiscall cocos2d::experimental::TMXLayer::getPositionAt(TMXLayer *this,Vec2 *param_1)

{
  PointApplyTransform(param_1,(Mat4 *)(this + 0x3a4));
  return;
}

