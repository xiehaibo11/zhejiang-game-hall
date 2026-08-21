
/* cocos2d::network::Downloader::~Downloader() */

void __thiscall cocos2d::network::Downloader::~Downloader(Downloader *this)

{
  long *plVar1;
  Downloader *pDVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = *(long **)(this + 0xc0);
  *(undefined8 *)(this + 0xc0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pDVar2 = *(Downloader **)(this + 0xb0);
  if (this + 0x90 == pDVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x20);
LAB_00ea1d24:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (pDVar2 != (Downloader *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x28);
    goto LAB_00ea1d24;
  }
  pDVar2 = *(Downloader **)(this + 0x80);
  if (this + 0x60 == pDVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x20);
LAB_00ea1d50:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (pDVar2 != (Downloader *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x28);
    goto LAB_00ea1d50;
  }
  pDVar2 = *(Downloader **)(this + 0x50);
  if (this + 0x30 == pDVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x20);
  }
  else {
    if (pDVar2 == (Downloader *)0x0) goto LAB_00ea1d80;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x28);
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_00ea1d80:
  pDVar2 = *(Downloader **)(this + 0x20);
  if (this == pDVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x20);
  }
  else {
    if (pDVar2 == (Downloader *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00ea1dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

