
/* cocos2d::renderer::DeviceGraphics::setScissor(int, int, int, int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setScissor
          (DeviceGraphics *this,int param_1,int param_2,int param_3,int param_4)

{
  if ((((*(int *)(this + 0x1c) == param_1) && (*(int *)(this + 0x20) == param_2)) &&
      (*(int *)(this + 0x24) == param_3)) && (*(int *)(this + 0x28) == param_4)) {
    return;
  }
  *(int *)(this + 0x1c) = param_1;
  *(int *)(this + 0x20) = param_2;
  *(int *)(this + 0x24) = param_3;
  *(int *)(this + 0x28) = param_4;
  ccScissor(param_1,param_2,param_3,param_4);
  return;
}

