
/* fairygui::FUIRichText::setAnchorTextUnderline(bool) */

void __thiscall fairygui::FUIRichText::setAnchorTextUnderline(FUIRichText *this,bool param_1)

{
  if (this[0x3d0] != (FUIRichText)param_1) {
    this[0x3d0] = (FUIRichText)param_1;
    this[0x340] = (FUIRichText)0x1;
  }
  return;
}

