
/* cocos2d::renderer::DeviceGraphics::setStencilFuncBack(cocos2d::renderer::ComparisonFunc, int,
   unsigned int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setStencilFuncBack
          (DeviceGraphics *this,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xb8);
  *(undefined1 *)(lVar1 + 0x19) = 1;
  *(undefined2 *)(lVar1 + 0x30) = param_2;
  *(undefined4 *)(lVar1 + 0x34) = param_3;
  *(undefined4 *)(lVar1 + 0x38) = param_4;
  return;
}

