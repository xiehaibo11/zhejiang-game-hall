
/* non-virtual thunk to cocos2d::Track::~Track() */

void __thiscall cocos2d::Track::~Track(Track *this)

{
  Track *pTVar1;
  code *pcVar2;
  
                    /* try { // try from 00a97c70 to 00b97cbf has its CatchHandler @ 00a97c70
                       catch() { ... } // from try @ 00a97c70 with catch @ 00a97c70
                       catch() { ... } // from try @ 00a97ccc with catch @ 00a97c70 */
  *(undefined ***)(this + -0x30) = &PTR__Track_01c6f4a0;
  *(undefined ***)this = &PTR_getVolumeLR_01c6f4d8;
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xac));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x78));
  PcmData::~PcmData((PcmData *)(this + 0x40));
  pTVar1 = *(Track **)(this + 0x30);
  if (this + 0x10 == pTVar1) {
                    /* try { // try from 00a97ccc to 00b97d0b has its CatchHandler @ 00a97c70 */
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (Track *)0x0) goto LAB_00a97cd8;
                    /* try { // try from 00a97cc0 to 00b97ccb has its CatchHandler @ 00a97cf8 */
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a97cd8:
  operator_delete(this + -0x30);
  return;
}

