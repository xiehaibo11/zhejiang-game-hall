
/* cocos2d::Color3B::Color3B(cocos2d::Color4B const&) */

void __thiscall cocos2d::Color3B::Color3B(Color3B *this,Color4B *param_1)

{
  *this = *(Color3B *)param_1;
  this[1] = *(Color3B *)(param_1 + 1);
  this[2] = *(Color3B *)(param_1 + 2);
  return;
}

