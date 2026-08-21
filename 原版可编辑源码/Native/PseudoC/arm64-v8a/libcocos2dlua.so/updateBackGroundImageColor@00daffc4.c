
/* cocos2d::ui::Layout::updateBackGroundImageColor() */

void __thiscall cocos2d::ui::Layout::updateBackGroundImageColor(Layout *this)

{
  long *plVar1;
  
                    /* try { // try from 00daffc4 to 00eb005b has its CatchHandler @ 00daff04 */
  plVar1 = *(long **)(this + 0x538);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00daffdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4c0))(plVar1,this + 0x578);
    return;
  }
  return;
}

