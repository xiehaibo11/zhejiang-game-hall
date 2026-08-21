
/* non-virtual thunk to cocos2d::experimental::Track::~Track() */

void __thiscall cocos2d::experimental::Track::~Track(Track *this)

{
  Track *pTVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined ***)(this + -0x30) = &PTR__Track_016f4118;
  *(undefined ***)this = &PTR_getVolumeLR_016f4150;
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xac));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x78));
  PcmData::~PcmData((PcmData *)(this + 0x40));
  pTVar1 = *(Track **)(this + 0x30);
  if (this + 0x10 == pTVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (Track *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pTVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00e8dd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

