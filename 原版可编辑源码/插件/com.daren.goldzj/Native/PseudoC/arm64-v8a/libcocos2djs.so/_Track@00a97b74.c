
/* non-virtual thunk to cocos2d::Track::~Track() */

void __thiscall cocos2d::Track::~Track(Track *this)

{
  Track *pTVar1;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* try { // try from 00a97b88 to 00b97b93 has its CatchHandler @ 00a97bc0 */
                    /* try { // try from 00a97b94 to 00b97bd3 has its CatchHandler @ 00a97b38 */
  *(undefined ***)(this + -0x30) = &PTR__Track_01c6f4a0;
  *(undefined ***)this = &PTR_getVolumeLR_01c6f4d8;
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xac));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x78));
  PcmData::~PcmData((PcmData *)(this + 0x40));
  pTVar1 = *(Track **)(this + 0x30);
  if (this + 0x10 == pTVar1) {
                    /* try { // try from 00a97bd4 to 00b97c23 has its CatchHandler @ 00a97bd4
                       catch() { ... } // from try @ 00a97bd4 with catch @ 00a97bd4
                       catch() { ... } // from try @ 00a97c30 with catch @ 00a97bd4 */
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
                    /* catch() { ... } // from try @ 00a97b88 with catch @ 00a97bc0 */
    if (pTVar1 == (Track *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pTVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00a97be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

