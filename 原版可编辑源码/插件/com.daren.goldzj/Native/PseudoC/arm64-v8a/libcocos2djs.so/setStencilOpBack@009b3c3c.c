
/* cocos2d::renderer::DeviceGraphics::setStencilOpBack(cocos2d::renderer::StencilOp,
   cocos2d::renderer::StencilOp, cocos2d::renderer::StencilOp, unsigned int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setStencilOpBack
          (DeviceGraphics *this,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          undefined4 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xb8);
  *(undefined1 *)(lVar1 + 0x19) = 1;
  *(undefined2 *)(lVar1 + 0x3c) = param_2;
  *(undefined2 *)(lVar1 + 0x3e) = param_3;
  *(undefined2 *)(lVar1 + 0x40) = param_4;
  *(undefined4 *)(lVar1 + 0x44) = param_5;
  return;
}

