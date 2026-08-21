
/* cocos2d::network::IDownloaderImpl::~IDownloaderImpl() */

void __thiscall cocos2d::network::IDownloaderImpl::~IDownloaderImpl(IDownloaderImpl *this)

{
  IDownloaderImpl *pIVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pIVar1 = *(IDownloaderImpl **)(this + 0x60);
  *(undefined ***)this = &PTR__IDownloaderImpl_016f4cc8;
  if (this + 0x40 == pIVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x20);
  }
  else {
    if (pIVar1 == (IDownloaderImpl *)0x0) goto LAB_00ea3474;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x28);
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_00ea3474:
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
                    /* WARNING: Could not recover jumptable at 0x00ea34a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

