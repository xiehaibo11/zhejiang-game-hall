
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
LAB_009a5b58:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (pDVar2 != (Downloader *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x28);
    goto LAB_009a5b58;
  }
  pDVar2 = *(Downloader **)(this + 0x80);
  if (this + 0x60 == pDVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x20);
LAB_009a5b84:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (pDVar2 != (Downloader *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x28);
    goto LAB_009a5b84;
  }
                    /* try { // try from 009a5b88 to 00aa5c6b has its CatchHandler @ 009a59d0 */
  pDVar2 = *(Downloader **)(this + 0x50);
  if (this + 0x30 == pDVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x20);
  }
  else {
    if (pDVar2 == (Downloader *)0x0) goto LAB_009a5bb4;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pDVar2 + 0x28);
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_009a5bb4:
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
                    /* WARNING: Could not recover jumptable at 0x009a5be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

