
/* cocos2d::ui::EditBoxImplCommon::refreshInactiveText() */

void __thiscall cocos2d::ui::EditBoxImplCommon::refreshInactiveText(EditBoxImplCommon *this)

{
  EditBoxImplCommon EVar1;
  long *plVar2;
  EditBoxImplCommon *pEVar3;
  ulong uVar4;
  
  if (((byte)this[0x38] & 1) == 0) {
    pEVar3 = this + 0x39;
  }
  else {
    pEVar3 = *(EditBoxImplCommon **)(this + 0x48);
  }
  setInactiveText(this,(char *)pEVar3);
                    /* catch() { ... } // from try @ 00deed94 with catch @ 00deeec4 */
  Label::setAlignment(*(Label **)(this + 0x18),*(undefined4 *)(this + 0x34),
                      *(undefined4 *)(*(Label **)(this + 0x18) + 0x454));
  Label::setAlignment(*(Label **)(this + 0x20),*(undefined4 *)(this + 0x34),
                      *(undefined4 *)(*(Label **)(this + 0x20) + 0x454));
  if (this[0xb4] != (EditBoxImplCommon)0x0) {
    return;
  }
  EVar1 = this[0x38];
  if (((byte)EVar1 & 1) == 0) {
    uVar4 = (ulong)((byte)EVar1 >> 1);
  }
  else {
                    /* catch() { ... } // from try @ 00deec54 with catch @ 00deeefc */
    uVar4 = *(ulong *)(this + 0x40);
  }
                    /* catch() { ... } // from try @ 00deebe4 with catch @ 00deef00 */
  plVar2 = *(long **)(this + 0x18);
                    /* catch() { ... } // from try @ 00deeb3c with catch @ 00deef04 */
  if (uVar4 == 0) {
                    /* catch() { ... } // from try @ 00deec38 with catch @ 00deef28 */
    (**(code **)(*plVar2 + 0x170))(plVar2,0);
                    /* catch() { ... } // from try @ 00deeb88 with catch @ 00deef2c */
    plVar2 = *(long **)(this + 0x20);
                    /* catch() { ... } // from try @ 00deec8c with catch @ 00deef30 */
  }
  else {
                    /* catch() { ... } // from try @ 00deeca4 with catch @ 00deef14 */
    (**(code **)(*plVar2 + 0x170))(plVar2,1);
                    /* catch() { ... } // from try @ 00deecb0 with catch @ 00deef18 */
    plVar2 = *(long **)(this + 0x20);
  }
                    /* catch() { ... } // from try @ 00deec1c with catch @ 00deef34 */
                    /* catch() { ... } // from try @ 00deeb94 with catch @ 00deef3c */
                    /* WARNING: Could not recover jumptable at 0x00deef44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x170))(plVar2,uVar4 == 0);
  return;
}

