
/* fairygui::ScrollPane::updateScrollBarVisible() */

void __thiscall fairygui::ScrollPane::updateScrollBarVisible(ScrollPane *this)

{
  GScrollBar *this_00;
  float fVar1;
  float fVar2;
  
  if (*(GScrollBar **)(this + 0x118) != (GScrollBar *)0x0) {
    fVar2 = *(float *)(this + 0x68);
    fVar1 = (float)GScrollBar::getMinSize(*(GScrollBar **)(this + 0x118));
    if ((fVar1 < fVar2) && (this[0x43] == (ScrollPane)0x0)) {
      updateScrollBarVisible2(this,*(GScrollBar **)(this + 0x118));
      this_00 = *(GScrollBar **)(this + 0x110);
      goto joined_r0x00a953ac;
    }
    GObject::setVisible(*(GObject **)(this + 0x118),false);
  }
  this_00 = *(GScrollBar **)(this + 0x110);
                    /* try { // try from 00a95368 to 00b95397 has its CatchHandler @ 00a952a0 */
joined_r0x00a953ac:
                    /* try { // try from 00a953ac to 00b9540b has its CatchHandler @ 00a952a0 */
  if (this_00 == (GScrollBar *)0x0) {
    return;
  }
  fVar2 = *(float *)(this + 100);
  fVar1 = (float)GScrollBar::getMinSize(this_00);
  if ((fVar1 < fVar2) && (this[0x44] == (ScrollPane)0x0)) {
    updateScrollBarVisible2(this,*(GScrollBar **)(this + 0x110));
    return;
  }
                    /* try { // try from 00a95398 to 00b953ab has its CatchHandler @ 00a953f0 */
  GObject::setVisible(*(GObject **)(this + 0x110),false);
  return;
}

