
/* cocos2d::ui::TextField::textfieldRendererScaleChangedWithSize() */

void __thiscall cocos2d::ui::TextField::textfieldRendererScaleChangedWithSize(TextField *this)

{
  if (this[0x387] == (TextField)0x0) {
                    /* try { // try from 00dcfd44 to 00ecfd57 has its CatchHandler @ 00dd03a8 */
    Label::setDimensions(*(Label **)(this + 0x4f0),*(float *)(this + 0x80),*(float *)(this + 0x84));
  }
                    /* try { // try from 00dcfd5c to 00ecfd73 has its CatchHandler @ 00dd0364 */
                    /* WARNING: Could not recover jumptable at 0x00dcfd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x4f0) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
  return;
}

