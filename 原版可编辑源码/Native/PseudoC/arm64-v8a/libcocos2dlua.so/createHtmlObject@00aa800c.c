
/* fairygui::createHtmlObject(fairygui::HtmlElement*) */

HtmlObject * fairygui::createHtmlObject(HtmlElement *param_1)

{
  HtmlObject *this;
  
                    /* try { // try from 00aa8010 to 00ba80c7 has its CatchHandler @ 00aa7a4c */
  this = (HtmlObject *)0x0;
                    /* catch() { ... } // from try @ 00aa7c74 with catch @ 00aa8024
                       catch() { ... } // from try @ 00aa8008 with catch @ 00aa8024 */
                    /* catch() { ... } // from try @ 00aa7c40 with catch @ 00aa8028 */
  if ((*(uint *)(param_1 + 8) < 6) && ((1 << (ulong)(*(uint *)(param_1 + 8) & 0x1f) & 0x3aU) != 0))
  {
    this = operator_new(0x28);
    HtmlObject::HtmlObject(this);
  }
                    /* catch() { ... } // from try @ 00aa7d5c with catch @ 00aa8058
                       catch() { ... } // from try @ 00aa7ff0 with catch @ 00aa8058 */
  return this;
}

