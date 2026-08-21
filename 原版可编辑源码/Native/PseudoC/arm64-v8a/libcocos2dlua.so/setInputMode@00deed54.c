
/* cocos2d::ui::EditBoxImplCommon::setInputMode(cocos2d::ui::EditBox::InputMode) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::setInputMode(EditBoxImplCommon *this,undefined4 param_2)

{
  long lVar1;
  float *pfVar2;
  Size aSStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0x28) = param_2;
  (**(code **)(*(long *)this + 0x168))();
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x10) + 0x168))();
                    /* try { // try from 00deed94 to 00eeeda7 has its CatchHandler @ 00deeec4 */
  Size::Size(aSStack_30,*pfVar2 + -10.0,pfVar2[1]);
                    /* try { // try from 00deeda8 to 00eeef9f has its CatchHandler @ 00deeaa0 */
  placeInactiveLabels(this,aSStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

