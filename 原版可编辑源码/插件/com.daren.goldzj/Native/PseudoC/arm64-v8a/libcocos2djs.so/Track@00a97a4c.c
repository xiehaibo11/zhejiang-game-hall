
/* cocos2d::Track::Track(cocos2d::PcmData const&) */

void __thiscall cocos2d::Track::Track(Track *this,PcmData *param_1)

{
  uint uVar1;
  uint uVar2;
  
  PcmBufferProvider::PcmBufferProvider((PcmBufferProvider *)this);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined ***)this = &PTR__Track_01c6f4a0;
  *(undefined ***)(this + 0x30) = &PTR_getVolumeLR_01c6f4d8;
  PcmData::PcmData((PcmData *)(this + 0x70),param_1);
  uVar2 = *(uint *)(this + 0x88);
                    /* try { // try from 00a97a9c to 00b97aeb has its CatchHandler @ 00a97a9c
                       catch() { ... } // from try @ 00a97a9c with catch @ 00a97a9c
                       catch() { ... } // from try @ 00a97af8 with catch @ 00a97a9c */
  *(undefined8 *)(this + 0xd0) = 0x3f800000ffffffff;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  this[0xd8] = (Track)0x1;
  *(undefined8 *)(this + 0xfe) = 0;
  *(undefined8 *)(this + 0xf6) = 0;
  *(undefined8 *)(this + 0xf4) = 0;
  *(undefined8 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0xe4) = 0;
  *(undefined8 *)(this + 0xdc) = 0;
  this[0x106] = (Track)0x1;
  uVar1 = uVar2 + 7;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
                    /* try { // try from 00a97aec to 00b97af7 has its CatchHandler @ 00a97b24 */
  PcmBufferProvider::init
            ((PcmBufferProvider *)this,(void *)**(undefined8 **)(this + 0x70),
             (long)*(int *)(this + 0x98),
             ((long)((ulong)uVar1 << 0x20) >> 0x23) * (long)*(int *)(this + 0x80));
  return;
}

