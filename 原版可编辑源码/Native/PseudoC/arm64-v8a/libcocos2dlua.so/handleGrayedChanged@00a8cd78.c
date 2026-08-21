
/* fairygui::GBasicTextField::handleGrayedChanged() */

void __thiscall fairygui::GBasicTextField::handleGrayedChanged(GBasicTextField *this)

{
                    /* try { // try from 00a8cd84 to 00b8cdbb has its CatchHandler @ 00a8ce40 */
  GObject::handleGrayedChanged((GObject *)this);
  FUILabel::setGrayed(*(FUILabel **)(this + 0x200),(bool)this[0xf7]);
  return;
}

