
/* fairygui::HtmlParser::popTextFormat() */

void __thiscall fairygui::HtmlParser::popTextFormat(HtmlParser *this)

{
  if (*(long *)(this + 0xa0) != 0) {
    TextFormat::operator=
              ((TextFormat *)(this + 0x48),
               (TextFormat *)(*(long *)(this + 0x10) + *(long *)(this + 0xa0) * 0x58 + -0x58));
    *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + -1;
  }
  return;
}

