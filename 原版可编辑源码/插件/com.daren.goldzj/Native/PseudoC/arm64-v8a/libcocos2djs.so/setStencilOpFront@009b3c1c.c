
/* cocos2d::renderer::DeviceGraphics::setStencilOpFront(cocos2d::renderer::StencilOp,
   cocos2d::renderer::StencilOp, cocos2d::renderer::StencilOp, unsigned int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setStencilOpFront
          (DeviceGraphics *this,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          undefined4 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xb8);
  *(undefined1 *)(lVar1 + 0x19) = 1;
  *(undefined2 *)(lVar1 + 0x24) = param_2;
  *(undefined2 *)(lVar1 + 0x26) = param_3;
  *(undefined2 *)(lVar1 + 0x28) = param_4;
  *(undefined4 *)(lVar1 + 0x2c) = param_5;
  return;
}

