
/* cocos2d::ui::Layout::updateBackGroundImageRGBA() */

void __thiscall cocos2d::ui::Layout::updateBackGroundImageRGBA(Layout *this)

{
  long *plVar1;
  
                    /* try { // try from 00dafc48 to 00eafceb has its CatchHandler @ 00dafdc8 */
  plVar1 = *(long **)(this + 0x538);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x4c0))(plVar1,this + 0x578);
                    /* WARNING: Could not recover jumptable at 0x00dafc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x538) + 0x490))(*(long **)(this + 0x538),this[0x57b]);
    return;
  }
  return;
}

