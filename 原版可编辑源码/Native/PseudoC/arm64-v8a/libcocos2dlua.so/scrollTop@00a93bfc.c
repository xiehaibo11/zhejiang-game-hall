
/* fairygui::ScrollPane::scrollTop(bool) */

void __thiscall fairygui::ScrollPane::scrollTop(ScrollPane *this,bool param_1)

{
  GComponent::ensureBoundsCorrect(*(GComponent **)(this + 0xf8));
                    /* try { // try from 00a93c24 to 00b93c37 has its CatchHandler @ 00a93c90 */
  setPosY(this,*(float *)(this + 0x78) * 0.0,param_1);
  return;
}

