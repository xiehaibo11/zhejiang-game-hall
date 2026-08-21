
/* fairygui::FUIRichText::FUIRichText() */

void __thiscall fairygui::FUIRichText::FUIRichText(FUIRichText *this)

{
                    /* catch() { ... } // from try @ 00aa7cec with catch @ 00aa8084 */
                    /* catch() { ... } // from try @ 00aa7bc8 with catch @ 00aa8088 */
  cocos2d::Node::Node((Node *)this);
                    /* catch() { ... } // from try @ 00aa7cb0 with catch @ 00aa80a8 */
  *(undefined ***)this = &PTR__FUIRichText_016a8818;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
                    /* catch() { ... } // from try @ 00aa7b8c with catch @ 00aa80ac */
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined2 *)(this + 0x340) = 1;
  cocos2d::Size::Size((Size *)(this + 0x344));
                    /* try { // try from 00aa80c8 to 00ba8113 has its CatchHandler @ 00aa80c8
                       catch() { ... } // from try @ 00aa80c8 with catch @ 00aa80c8
                       catch() { ... } // from try @ 00aa8118 with catch @ 00aa80c8 */
  *(undefined8 *)(this + 0x354) = 0;
  *(undefined8 *)(this + 0x34c) = 0;
  TextFormat::TextFormat((TextFormat *)(this + 0x360));
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  HtmlParseOptions::HtmlParseOptions((HtmlParseOptions *)(this + 0x3d0));
  *(undefined ***)(this + 0x3e0) = &PTR_FUN_016a8d70;
  *(code **)(this + 1000) = createHtmlObject;
  *(FUIRichText **)(this + 0x400) = this + 0x3e0;
                    /* try { // try from 00aa8114 to 00ba8117 has its CatchHandler @ 00aa814c */
                    /* try { // try from 00aa8118 to 00ba815f has its CatchHandler @ 00aa80c8 */
  return;
}

