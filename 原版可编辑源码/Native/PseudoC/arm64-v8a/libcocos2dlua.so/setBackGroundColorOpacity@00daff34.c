
/* cocos2d::ui::Layout::setBackGroundColorOpacity(unsigned char) */

void __thiscall cocos2d::ui::Layout::setBackGroundColorOpacity(Layout *this,uchar param_1)

{
  long *plVar1;
  
  this[0x5a4] = (Layout)param_1;
  if (*(int *)(this + 0x568) == 2) {
    plVar1 = *(long **)(this + 0x588);
  }
  else {
    if (*(int *)(this + 0x568) != 1) {
      return;
    }
    plVar1 = *(long **)(this + 0x580);
  }
                    /* WARNING: Could not recover jumptable at 0x00daff60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x490))();
  return;
}

