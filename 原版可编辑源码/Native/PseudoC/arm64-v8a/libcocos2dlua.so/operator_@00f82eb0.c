
/* cocos2d::Rect::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Rect const&) */

void __thiscall cocos2d::Rect::operator=(Rect *this,Rect *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  return;
}

