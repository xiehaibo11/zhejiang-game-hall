
/* cocos2d::ui::RichText::ignoreContentAdaptWithSize(bool) */

void __thiscall cocos2d::ui::RichText::ignoreContentAdaptWithSize(RichText *this,bool param_1)

{
  if (this[0x387] == (RichText)param_1) {
    return;
  }
                    /* catch() { ... } // from try @ 00dd943c with catch @ 00dd95b0 */
                    /* catch() { ... } // from try @ 00dd94f4 with catch @ 00dd95b4 */
  this[0x4f0] = (RichText)0x1;
                    /* catch() { ... } // from try @ 00dd94ac with catch @ 00dd95b8 */
  Widget::ignoreContentAdaptWithSize((Widget *)this,param_1);
  return;
}

