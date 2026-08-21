
/* cocos2d::Rect::Rect(cocos2d::Vec2 const&, cocos2d::Size const&) */

void __thiscall cocos2d::Rect::Rect(Rect *this,Vec2 *param_1,Size *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}

