
/* fairygui::TweenValue::setVec4(cocos2d::Vec4 const&) */

void __thiscall fairygui::TweenValue::setVec4(TweenValue *this,Vec4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  return;
}

