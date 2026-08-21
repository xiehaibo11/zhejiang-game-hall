
/* cocos2d::ui::RadioButtonGroup::getNumberOfRadioButtons() const */

long __thiscall cocos2d::ui::RadioButtonGroup::getNumberOfRadioButtons(RadioButtonGroup *this)

{
                    /* try { // try from 00dc6614 to 00ec6743 has its CatchHandler @ 00dc60c0 */
                    /* catch() { ... } // from try @ 00dc6540 with catch @ 00dc661c */
  return *(long *)(this + 0x4f8) - *(long *)(this + 0x4f0) >> 3;
}

