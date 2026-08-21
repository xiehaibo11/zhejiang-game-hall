
/* cocos2d::renderer::DeviceGraphics::setBlendEquationSeparate(cocos2d::renderer::BlendOp,
   cocos2d::renderer::BlendOp) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setBlendEquationSeparate
          (DeviceGraphics *this,undefined2 param_2,undefined2 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xb8);
  *(undefined1 *)(lVar1 + 1) = 1;
  *(undefined2 *)(lVar1 + 8) = param_2;
  *(undefined2 *)(lVar1 + 10) = param_3;
  return;
}

