
/* fairygui::GComboBox::setTitleColor(cocos2d::Color3B const&) */

void __thiscall fairygui::GComboBox::setTitleColor(GComboBox *this,Color3B *param_1)

{
  GTextField *this_00;
  
                    /* try { // try from 00a6e6d4 to 00b6e6e7 has its CatchHandler @ 00a6e930 */
  this_00 = (GTextField *)getTextField(this);
  if (this_00 != (GTextField *)0x0) {
    GTextField::setColor(this_00,param_1);
    return;
  }
  return;
}

