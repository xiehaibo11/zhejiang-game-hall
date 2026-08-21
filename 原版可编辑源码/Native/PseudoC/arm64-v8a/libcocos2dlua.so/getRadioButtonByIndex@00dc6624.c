
/* cocos2d::ui::RadioButtonGroup::getRadioButtonByIndex(int) const */

undefined8 __thiscall
cocos2d::ui::RadioButtonGroup::getRadioButtonByIndex(RadioButtonGroup *this,int param_1)

{
  if ((long)param_1 < *(long *)(this + 0x4f8) - *(long *)(this + 0x4f0) >> 3) {
    return *(undefined8 *)(*(long *)(this + 0x4f0) + (long)param_1 * 8);
  }
  return 0;
}

