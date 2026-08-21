
/* fairygui::GTweener::_to(cocos2d::Color4B const&, cocos2d::Color4B const&, float) */

GTweener * __thiscall
fairygui::GTweener::_to(GTweener *this,Color4B *param_1,Color4B *param_2,float param_3)

{
  *(undefined4 *)(this + 0xd8) = 4;
  TweenValue::setColor((TweenValue *)(this + 0x28),param_1);
  TweenValue::setColor((TweenValue *)(this + 0x40),param_2);
  TweenValue::setColor((TweenValue *)(this + 0x58),param_1);
  *(float *)(this + 0xa4) = param_3;
  return this;
}

