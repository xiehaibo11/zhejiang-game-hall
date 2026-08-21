
/* cocos2d::renderer::DeviceGraphics::setBlendFuncSeparate(cocos2d::renderer::BlendFactor,
   cocos2d::renderer::BlendFactor, cocos2d::renderer::BlendFactor, cocos2d::renderer::BlendFactor)
    */

void __thiscall
cocos2d::renderer::DeviceGraphics::setBlendFuncSeparate
          (DeviceGraphics *this,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          undefined2 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xb8);
  *(undefined1 *)(lVar1 + 1) = 1;
  *(undefined2 *)(lVar1 + 0xc) = param_2;
  *(undefined2 *)(lVar1 + 0xe) = param_3;
  *(undefined2 *)(lVar1 + 0x10) = param_4;
  *(undefined2 *)(lVar1 + 0x12) = param_5;
  return;
}

