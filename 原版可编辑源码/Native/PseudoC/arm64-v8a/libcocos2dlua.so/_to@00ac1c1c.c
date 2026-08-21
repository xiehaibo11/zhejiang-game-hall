
/* fairygui::GTweener::_to(cocos2d::Vec3 const&, cocos2d::Vec3 const&, float) */

GTweener * __thiscall
fairygui::GTweener::_to(GTweener *this,Vec3 *param_1,Vec3 *param_2,float param_3)

{
  *(undefined4 *)(this + 0xd8) = 3;
  TweenValue::setVec3((TweenValue *)(this + 0x28),param_1);
  TweenValue::setVec3((TweenValue *)(this + 0x40),param_2);
  TweenValue::setVec3((TweenValue *)(this + 0x58),param_1);
  *(float *)(this + 0xa4) = param_3;
  return this;
}

