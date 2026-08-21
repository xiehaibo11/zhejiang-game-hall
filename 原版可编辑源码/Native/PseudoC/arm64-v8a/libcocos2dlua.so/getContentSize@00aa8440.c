
/* fairygui::FUIRichText::getContentSize() const */

void __thiscall fairygui::FUIRichText::getContentSize(FUIRichText *this)

{
                    /* try { // try from 00aa8444 to 00ba8477 has its CatchHandler @ 00aa84c8 */
  if (this[0x340] != (FUIRichText)0x0) {
    formatText(this);
  }
  cocos2d::Node::getContentSize((Node *)this);
  return;
}

