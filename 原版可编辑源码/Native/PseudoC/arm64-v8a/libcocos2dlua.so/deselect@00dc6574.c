
/* cocos2d::ui::RadioButtonGroup::deselect() */

void __thiscall cocos2d::ui::RadioButtonGroup::deselect(RadioButtonGroup *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x540);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x680))(plVar1,0);
                    /* try { // try from 00dc65a4 to 00ec6613 has its CatchHandler @ 00dc6690 */
    (**(code **)(**(long **)(this + 0x540) + 0x6b8))(*(long **)(this + 0x540),0);
  }
  *(undefined8 *)(this + 0x540) = 0;
  return;
}

