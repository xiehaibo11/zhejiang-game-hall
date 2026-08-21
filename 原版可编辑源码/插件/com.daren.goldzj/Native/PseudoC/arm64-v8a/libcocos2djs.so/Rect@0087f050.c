
/* cocos2d::Rect::Rect(cocos2d::Rect const&) */

void __thiscall cocos2d::Rect::Rect(Rect *this,Rect *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  return;
}

