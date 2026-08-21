
/* cocos2d::Track::~Track() */

void __thiscall cocos2d::Track::~Track(Track *this)

{
  Track *pTVar1;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* try { // try from 00a97af8 to 00b97b37 has its CatchHandler @ 00a97a9c */
  *(undefined ***)this = &PTR__Track_01c6f4a0;
  *(undefined ***)(this + 0x30) = &PTR_getVolumeLR_01c6f4d8;
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xdc));
                    /* catch() { ... } // from try @ 00a97aec with catch @ 00a97b24 */
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xa8));
  PcmData::~PcmData((PcmData *)(this + 0x70));
  pTVar1 = *(Track **)(this + 0x60);
                    /* try { // try from 00a97b38 to 00b97b87 has its CatchHandler @ 00a97b38
                       catch() { ... } // from try @ 00a97b38 with catch @ 00a97b38
                       catch() { ... } // from try @ 00a97b94 with catch @ 00a97b38 */
  if (this + 0x40 == pTVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (Track *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pTVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00a97b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

