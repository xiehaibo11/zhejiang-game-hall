
/* cocos2d::ui::TextField::adaptRenderers() */

void __thiscall cocos2d::ui::TextField::adaptRenderers(TextField *this)

{
                    /* try { // try from 00dcfcd0 to 00ecfce3 has its CatchHandler @ 00dd03ac */
  if (this[0x550] != (TextField)0x0) {
    if (this[0x387] == (TextField)0x0) {
      Label::setDimensions
                (*(Label **)(this + 0x4f0),*(float *)(this + 0x80),*(float *)(this + 0x84));
    }
                    /* try { // try from 00dcfd0c to 00ecfd3f has its CatchHandler @ 00dd03b8 */
    (**(code **)(**(long **)(this + 0x4f0) + 200))
              (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
    this[0x550] = (TextField)0x0;
  }
  return;
}

