
/* cocos2d::experimental::Track::Track(cocos2d::experimental::PcmData const&) */

void __thiscall cocos2d::experimental::Track::Track(Track *this,PcmData *param_1)

{
  uint uVar1;
  uint uVar2;
  
  PcmBufferProvider::PcmBufferProvider((PcmBufferProvider *)this);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined ***)this = &PTR__Track_016f4118;
  *(undefined ***)(this + 0x30) = &PTR_getVolumeLR_016f4150;
  PcmData::PcmData((PcmData *)(this + 0x70),param_1);
  uVar2 = *(uint *)(this + 0x88);
  *(undefined8 *)(this + 0xd0) = 0x3f800000ffffffff;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  this[0xd8] = (Track)0x1;
  *(undefined8 *)(this + 0xe4) = 0;
  *(undefined8 *)(this + 0xdc) = 0;
  *(undefined8 *)(this + 0xf4) = 0;
  *(undefined8 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0xfe) = 0;
  *(undefined8 *)(this + 0xf6) = 0;
  this[0x106] = (Track)0x1;
  uVar1 = uVar2 + 7;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  PcmBufferProvider::init
            ((PcmBufferProvider *)this,(void *)**(undefined8 **)(this + 0x70),
             (long)*(int *)(this + 0x98),
             ((long)((ulong)uVar1 << 0x20) >> 0x23) * (long)*(int *)(this + 0x80));
  return;
}

