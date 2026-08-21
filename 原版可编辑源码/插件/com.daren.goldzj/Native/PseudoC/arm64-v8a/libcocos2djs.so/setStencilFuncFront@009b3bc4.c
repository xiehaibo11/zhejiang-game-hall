
/* cocos2d::renderer::DeviceGraphics::setStencilFuncFront(cocos2d::renderer::ComparisonFunc, int,
   unsigned int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setStencilFuncFront
          (DeviceGraphics *this,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xb8);
  *(undefined1 *)(lVar1 + 0x19) = 1;
  *(undefined2 *)(lVar1 + 0x1a) = param_2;
  *(undefined4 *)(lVar1 + 0x1c) = param_3;
  *(undefined4 *)(lVar1 + 0x20) = param_4;
  return;
}

