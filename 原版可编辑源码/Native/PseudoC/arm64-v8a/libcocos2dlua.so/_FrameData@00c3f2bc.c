
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::FrameData::~FrameData() */

void __thiscall cocostudio::FrameData::~FrameData(FrameData *this)

{
  FrameData FVar1;
  
  *(undefined ***)this = &PTR__FrameData_016c8e20;
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x68));
  }
  *(undefined8 *)(this + 0x68) = 0;
  if (((byte)this[200] & 1) == 0) {
    FVar1 = this[0xb0];
  }
  else {
    operator_delete(*(void **)(this + 0xd8));
    FVar1 = this[0xb0];
  }
  if (((byte)FVar1 & 1) == 0) {
    FVar1 = this[0x98];
  }
  else {
    operator_delete(*(void **)(this + 0xc0));
    FVar1 = this[0x98];
  }
  if (((byte)FVar1 & 1) == 0) {
    FVar1 = this[0x80];
  }
  else {
    operator_delete(*(void **)(this + 0xa8));
    FVar1 = this[0x80];
  }
  if (((byte)FVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x90));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

