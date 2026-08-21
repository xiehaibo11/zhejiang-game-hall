
/* fairygui::ScrollPane::setPageY(int, bool) */

void __thiscall fairygui::ScrollPane::setPageY(ScrollPane *this,int param_1,bool param_2)

{
                    /* catch() { ... } // from try @ 00a93eec with catch @ 00a942b4
                       catch() { ... } // from try @ 00a941c0 with catch @ 00a942b4 */
                    /* catch() { ... } // from try @ 00a93fb0 with catch @ 00a942b8
                       catch() { ... } // from try @ 00a941d8 with catch @ 00a942b8 */
  if ((this[0x58] != (ScrollPane)0x0) &&
     (GComponent::ensureBoundsCorrect(*(GComponent **)(this + 0xf8)), 0.0 < *(float *)(this + 0x78))
     ) {
    setPosY(this,*(float *)(this + 0x80) * (float)param_1,param_2);
    return;
  }
  return;
}

