
/* cocos2d::Track::~Track() */

void __thiscall cocos2d::Track::~Track(Track *this)

{
  Track *pTVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__Track_01c6f4a0;
  *(undefined ***)(this + 0x30) = &PTR_getVolumeLR_01c6f4d8;
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xdc));
                    /* try { // try from 00a97c24 to 00b97c2f has its CatchHandler @ 00a97c5c */
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xa8));
  PcmData::~PcmData((PcmData *)(this + 0x70));
                    /* try { // try from 00a97c30 to 00b97c6f has its CatchHandler @ 00a97bd4 */
  pTVar1 = *(Track **)(this + 0x60);
  if (this + 0x40 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (Track *)0x0) goto LAB_00a97c5c;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a97c5c:
                    /* catch() { ... } // from try @ 00a97c24 with catch @ 00a97c5c */
  operator_delete(this);
  return;
}

