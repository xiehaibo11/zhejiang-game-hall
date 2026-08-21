
/* cocos2d::ui::Layout::setBackGroundImageOpacity(unsigned char) */

void __thiscall cocos2d::ui::Layout::setBackGroundImageOpacity(Layout *this,uchar param_1)

{
  this[0x57b] = (Layout)param_1;
  if (*(long **)(this + 0x538) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dafffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x538) + 0x490))();
    return;
  }
  return;
}

