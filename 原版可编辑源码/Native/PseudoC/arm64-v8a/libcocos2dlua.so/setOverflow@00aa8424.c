
/* fairygui::FUIRichText::setOverflow(cocos2d::Label::Overflow) */

void __thiscall fairygui::FUIRichText::setOverflow(FUIRichText *this,int param_2)

{
                    /* try { // try from 00aa842c to 00ba843f has its CatchHandler @ 00aa84c4 */
  if (*(int *)(this + 0x358) != param_2) {
    *(int *)(this + 0x358) = param_2;
    this[0x340] = (FUIRichText)0x1;
  }
  return;
}

