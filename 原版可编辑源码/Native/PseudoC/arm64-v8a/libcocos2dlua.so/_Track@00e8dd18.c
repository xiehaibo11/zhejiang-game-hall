
/* cocos2d::experimental::Track::~Track() */

void __thiscall cocos2d::experimental::Track::~Track(Track *this)

{
  Track *pTVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__Track_016f4118;
  *(undefined ***)(this + 0x30) = &PTR_getVolumeLR_016f4150;
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xdc));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xa8));
  PcmData::~PcmData((PcmData *)(this + 0x70));
  pTVar1 = *(Track **)(this + 0x60);
  if (this + 0x40 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (Track *)0x0) goto LAB_00e8dd84;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00e8dd84:
  operator_delete(this);
  return;
}

