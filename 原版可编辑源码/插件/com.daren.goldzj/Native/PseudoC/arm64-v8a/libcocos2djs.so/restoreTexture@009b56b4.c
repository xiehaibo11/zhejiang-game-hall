
/* cocos2d::renderer::DeviceGraphics::restoreTexture(unsigned int) */

void __thiscall cocos2d::renderer::DeviceGraphics::restoreTexture(DeviceGraphics *this,uint param_1)

{
  long lVar1;
  
  lVar1 = State::getTexture(*(State **)(this + 0xc0),(ulong)param_1);
  if (lVar1 != 0) {
    glBindTexture(*(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0xc));
    return;
  }
  glBindTexture(0xde1,0);
  return;
}

