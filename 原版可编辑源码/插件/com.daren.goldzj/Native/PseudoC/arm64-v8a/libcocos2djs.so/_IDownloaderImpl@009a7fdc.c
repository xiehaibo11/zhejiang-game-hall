
/* cocos2d::network::IDownloaderImpl::~IDownloaderImpl() */

void __thiscall cocos2d::network::IDownloaderImpl::~IDownloaderImpl(IDownloaderImpl *this)

{
  IDownloaderImpl *pIVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pIVar1 = *(IDownloaderImpl **)(this + 0x60);
  *(undefined ***)this = &PTR__IDownloaderImpl_01c6a938;
  if (this + 0x40 == pIVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x20);
  }
  else {
    if (pIVar1 == (IDownloaderImpl *)0x0) goto LAB_009a8028;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x28);
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_009a8028:
                    /* try { // try from 009a8028 to 00aa810b has its CatchHandler @ 009a7e68 */
  pIVar1 = *(IDownloaderImpl **)(this + 0x30);
  if (this + 0x10 == pIVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x20);
  }
  else {
    if (pIVar1 == (IDownloaderImpl *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x009a8058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

