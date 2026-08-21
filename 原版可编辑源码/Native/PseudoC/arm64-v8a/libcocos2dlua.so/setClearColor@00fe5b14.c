
/* cocos2d::Renderer::setClearColor(cocos2d::Color4F const&) */

void __thiscall cocos2d::Renderer::setClearColor(Renderer *this,Color4F *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  return;
}

