
/* cocos2d::renderer::DeviceGraphics::setBlendFunc(cocos2d::renderer::BlendFactor,
   cocos2d::renderer::BlendFactor) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setBlendFunc
          (DeviceGraphics *this,undefined2 param_2,undefined2 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xb8);
  *(undefined1 *)(lVar1 + 1) = 0;
  *(undefined2 *)(lVar1 + 0xc) = param_2;
  *(undefined2 *)(lVar1 + 0xe) = param_3;
  return;
}

