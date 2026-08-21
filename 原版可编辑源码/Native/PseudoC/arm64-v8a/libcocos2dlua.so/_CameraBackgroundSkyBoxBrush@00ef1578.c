
/* cocos2d::CameraBackgroundSkyBoxBrush::~CameraBackgroundSkyBoxBrush() */

void __thiscall
cocos2d::CameraBackgroundSkyBoxBrush::~CameraBackgroundSkyBoxBrush
          (CameraBackgroundSkyBoxBrush *this)

{
  Configuration *this_00;
  ulong uVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__CameraBackgroundSkyBoxBrush_016fb128;
  if (*(Ref **)(this + 0x40) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x40));
  }
  glDeleteBuffers(1,this + 0x34);
  glDeleteBuffers(1,this + 0x38);
  *(undefined8 *)(this + 0x34) = 0;
  this_00 = (Configuration *)Configuration::getInstance();
  uVar1 = Configuration::supportsShareableVAO(this_00);
  if ((uVar1 & 1) != 0) {
    (*glDeleteVertexArraysOESEXT)(1,this + 0x30);
    GL::bindVAO(0);
    *(undefined4 *)(this + 0x30) = 0;
  }
  lVar2 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar2 + 0xb0),*(EventListener **)(this + 0x48));
  *(undefined ***)this = &PTR__CameraBackgroundBrush_016fb068;
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x28));
  }
  Ref::~Ref((Ref *)this);
  return;
}

