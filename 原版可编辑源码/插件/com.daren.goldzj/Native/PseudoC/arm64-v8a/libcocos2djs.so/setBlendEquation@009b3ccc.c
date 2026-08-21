
/* cocos2d::renderer::DeviceGraphics::setBlendEquation(cocos2d::renderer::BlendOp) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setBlendEquation(DeviceGraphics *this,undefined2 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xb8);
  *(undefined1 *)(lVar1 + 1) = 0;
  *(undefined2 *)(lVar1 + 8) = param_2;
  return;
}

