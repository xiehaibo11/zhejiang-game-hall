
/* fairygui::ScrollPane::setPageX(int, bool) */

void __thiscall fairygui::ScrollPane::setPageX(ScrollPane *this,int param_1,bool param_2)

{
                    /* try { // try from 00a941ec to 00b942e3 has its CatchHandler @ 00a93da0 */
  if ((this[0x58] != (ScrollPane)0x0) &&
     (GComponent::ensureBoundsCorrect(*(GComponent **)(this + 0xf8)), 0.0 < *(float *)(this + 0x74))
     ) {
    setPosX(this,*(float *)(this + 0x7c) * (float)param_1,param_2);
    return;
  }
  return;
}

