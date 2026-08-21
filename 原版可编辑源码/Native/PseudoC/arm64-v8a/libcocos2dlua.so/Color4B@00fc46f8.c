
/* cocos2d::Color4B::Color4B(cocos2d::Color3B const&, unsigned char) */

void __thiscall cocos2d::Color4B::Color4B(Color4B *this,Color3B *param_1,uchar param_2)

{
  Color4B CVar1;
  
  *this = *(Color4B *)param_1;
  this[1] = *(Color4B *)(param_1 + 1);
  CVar1 = *(Color4B *)(param_1 + 2);
  this[3] = (Color4B)param_2;
  this[2] = CVar1;
  return;
}

