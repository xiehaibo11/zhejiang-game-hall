
/* cocos2d::renderer::DeviceGraphics::setViewport(int, int, int, int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setViewport
          (DeviceGraphics *this,int param_1,int param_2,int param_3,int param_4)

{
  if ((((*(int *)(this + 0xc) == param_1) && (*(int *)(this + 0x10) == param_2)) &&
      (*(int *)(this + 0x14) == param_3)) && (*(int *)(this + 0x18) == param_4)) {
    return;
  }
  *(int *)(this + 0xc) = param_1;
  *(int *)(this + 0x10) = param_2;
  *(int *)(this + 0x14) = param_3;
  *(int *)(this + 0x18) = param_4;
  ccViewport(param_1,param_2,param_3,param_4);
  return;
}

