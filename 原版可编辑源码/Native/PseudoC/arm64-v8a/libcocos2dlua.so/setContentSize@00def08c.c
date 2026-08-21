
/* cocos2d::ui::EditBoxImplCommon::setContentSize(cocos2d::Size const&) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::setContentSize(EditBoxImplCommon *this,Size *param_1)

{
  long lVar1;
  Size aSStack_40 [8];
  long local_38;
  
                    /* try { // try from 00def090 to 00eef093 has its CatchHandler @ 00def0b0 */
                    /* try { // try from 00def094 to 00eef0ff has its CatchHandler @ 00def044 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00def07c with catch @ 00def0ac */
                    /* catch() { ... } // from try @ 00def090 with catch @ 00def0b0 */
  Size::Size(aSStack_40,*(float *)param_1 + -10.0,*(float *)(param_1 + 4));
  Size::operator=((Size *)(this + 0xac),aSStack_40);
  placeInactiveLabels(this,(Size *)(this + 0xac));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

