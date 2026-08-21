
/* fairygui::GComboBox::GComboBox() */

void __thiscall fairygui::GComboBox::GComboBox(GComboBox *this)

{
  GComponent::GComponent((GComponent *)this);
  *(undefined ***)this = &PTR__GComboBox_016a4ff8;
  *(undefined8 *)(this + 0x28c) = 0;
  *(undefined8 *)(this + 0x284) = 0;
  *(undefined8 *)(this + 0x29c) = 0;
  *(undefined8 *)(this + 0x294) = 0;
  *(undefined8 *)(this + 0x2ac) = 0;
  *(undefined8 *)(this + 0x2a4) = 0;
  *(undefined8 *)(this + 700) = 0;
  *(undefined8 *)(this + 0x2b4) = 0;
  *(undefined8 *)(this + 0x2cc) = 0;
  *(undefined8 *)(this + 0x2c4) = 0;
  *(undefined8 *)(this + 0x2dc) = 0;
  *(undefined8 *)(this + 0x2d4) = 0;
  *(undefined8 *)(this + 0x2ec) = 0;
  *(undefined8 *)(this + 0x2e4) = 0;
  *(undefined4 *)(this + 0x2f4) = 0;
  this[0x2f8] = (GComboBox)0x1;
  *(undefined4 *)(this + 0x2fc) = 0xffffffff;
  *(undefined4 *)(this + 0x280) = UIConfig::defaultComboBoxVisibleItemCount;
  return;
}

