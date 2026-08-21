
/* cocos2d::Label::drawSelf(bool, cocos2d::Renderer*, unsigned int) */

void __thiscall cocos2d::Label::drawSelf(Label *this,bool param_1,Renderer *param_2,uint param_3)

{
  Label *pLVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00f0e054 with catch @ 00f0e128 */
  pLVar1 = *(Label **)(this + 0x3c0);
  if (pLVar1 == (Label *)0x0) {
    if (!param_1) {
      return;
    }
    if (((byte)this[0x328] & 1) == 0) {
      if ((byte)this[0x328] >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(this + 0x330) == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x348);
    pLVar1 = this;
  }
  else {
    plVar2 = *(long **)(this + 0x3c8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x358))(plVar2,param_2,this + 0x8c,param_3);
      pLVar1 = *(Label **)(this + 0x3c0);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pLVar1 + 0x358);
  }
                    /* WARNING: Could not recover jumptable at 0x00f0e190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pLVar1,param_2,this + 0x8c,param_3);
  return;
}

