
/* cocos2d::RenderTexture::RenderTexture(int, int) */

void __thiscall cocos2d::RenderTexture::RenderTexture(RenderTexture *this,int param_1,int param_2)

{
  *(undefined8 *)this = 0xffffffff00000000;
  *(float *)(this + 0x38) = (float)param_1;
  *(float *)(this + 0x3c) = (float)param_2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x60] = (RenderTexture)0x0;
  *(undefined8 *)(this + 0x2c) = 0xffffffff;
  *(undefined8 *)(this + 0x24) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  return;
}

