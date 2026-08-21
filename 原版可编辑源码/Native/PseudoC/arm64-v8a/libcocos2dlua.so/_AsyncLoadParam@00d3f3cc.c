
/* cocos2d::Sprite3D::AsyncLoadParam::~AsyncLoadParam() */

void __thiscall cocos2d::Sprite3D::AsyncLoadParam::~AsyncLoadParam(AsyncLoadParam *this)

{
  AsyncLoadParam *pAVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  pAVar1 = *(AsyncLoadParam **)(this + 0x20);
  if (this == pAVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pAVar1 + 0x20);
  }
  else {
    if (pAVar1 == (AsyncLoadParam *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pAVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00d3f428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

