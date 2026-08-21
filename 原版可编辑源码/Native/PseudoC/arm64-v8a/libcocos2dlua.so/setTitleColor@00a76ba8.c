
/* fairygui::GLabel::setTitleColor(cocos2d::Color3B const&) */

void __thiscall fairygui::GLabel::setTitleColor(GLabel *this,Color3B *param_1)

{
  GTextField *this_00;
  long lVar1;
  GButton *this_01;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x280);
  while( true ) {
                    /* catch() { ... } // from try @ 00a76a94 with catch @ 00a76bc0
                       catch() { ... } // from try @ 00a76b94 with catch @ 00a76bc0 */
    if (lVar2 == 0) {
      return;
    }
    this_00 = (GTextField *)__dynamic_cast(lVar2,&GObject::typeinfo,&GTextField::typeinfo,0);
    if (this_00 != (GTextField *)0x0) break;
                    /* catch() { ... } // from try @ 00a76a50 with catch @ 00a76bfc */
                    /* catch() { ... } // from try @ 00a76a34 with catch @ 00a76c00 */
                    /* catch() { ... } // from try @ 00a76a18 with catch @ 00a76c04 */
    lVar1 = __dynamic_cast(lVar2,&GObject::typeinfo,&typeinfo,0);
    if (lVar1 == 0) {
                    /* catch() { ... } // from try @ 00a769f4 with catch @ 00a76c24 */
      this_01 = (GButton *)__dynamic_cast(lVar2,&GObject::typeinfo,&GButton::typeinfo,0);
      if (this_01 == (GButton *)0x0) {
        return;
      }
      this_00 = (GTextField *)GButton::getTextField(this_01);
      break;
    }
    lVar2 = *(long *)(lVar1 + 0x280);
  }
  if (this_00 == (GTextField *)0x0) {
    return;
  }
  GTextField::setColor(this_00,param_1);
  return;
}

