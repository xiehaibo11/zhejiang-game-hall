
/* fairygui::ScrollPane::scrollBottom(bool) */

void __thiscall fairygui::ScrollPane::scrollBottom(ScrollPane *this,bool param_1)

{
                    /* try { // try from 00a93c3c to 00b93c4f has its CatchHandler @ 00a93c94 */
                    /* try { // try from 00a93c50 to 00b93caf has its CatchHandler @ 00a93af8 */
  GComponent::ensureBoundsCorrect(*(GComponent **)(this + 0xf8));
  setPosY(this,*(float *)(this + 0x78),param_1);
  return;
}

