
/* cocos2d::renderer::DeviceGraphics::clear(unsigned char, cocos2d::Color4F*, double, int) */

void __thiscall
cocos2d::renderer::DeviceGraphics::clear
          (DeviceGraphics *this,uchar param_1,Color4F *param_2,double param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  
  if ((param_1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    glClearColor(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 0xc));
    uVar2 = 0x4000;
  }
  if ((param_1 >> 1 & 1) != 0) {
    uVar2 = uVar2 | 0x100;
    glClearDepthf((float)param_3);
    glEnable(0xb71);
    glDepthMask(1);
    glDepthFunc(0x207);
  }
  if ((param_1 >> 2 & 1) != 0) {
    uVar2 = uVar2 | 0x400;
    glClearStencil(param_4);
  }
  glClear(uVar2);
  if ((param_1 >> 1 & 1) != 0) {
    lVar1 = *(long *)(this + 0xc0);
    if (*(char *)(lVar1 + 0x14) == '\0') {
      glDisable(0xb71);
      return;
    }
    if (*(char *)(lVar1 + 0x15) == '\0') {
      glDepthMask(0);
      lVar1 = *(long *)(this + 0xc0);
    }
    if (*(short *)(lVar1 + 0x16) != 0x207) {
      glDepthFunc();
      return;
    }
  }
  return;
}

