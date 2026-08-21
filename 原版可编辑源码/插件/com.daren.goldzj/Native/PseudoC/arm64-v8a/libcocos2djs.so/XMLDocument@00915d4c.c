
/* tinyxml2::XMLDocument::XMLDocument(bool, tinyxml2::Whitespace) */

void __thiscall
tinyxml2::XMLDocument::XMLDocument(XMLDocument *this,byte param_1,undefined4 param_3)

{
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x58] = (XMLDocument)0x0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = param_3;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined8 *)(this + 0xf4) = 0;
  *(undefined8 *)(this + 0xec) = 0;
  this[0x59] = (XMLDocument)(param_1 & 1);
  *(XMLDocument **)(this + 0x88) = this + 0x90;
  *(undefined ***)this = &PTR_ToElement_01c68f48;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined ***)(this + 0x80) = &PTR__MemPoolT_01c691d0;
  *(undefined ***)(this + 0x100) = &PTR__MemPoolT_01c69238;
  *(XMLDocument **)(this + 0x108) = this + 0x110;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0xe0) = 10;
  *(undefined4 *)(this + 0x160) = 10;
  *(undefined8 *)(this + 0x164) = 0;
  *(undefined8 *)(this + 0x174) = 0;
  *(undefined8 *)(this + 0x16c) = 0;
  *(undefined ***)(this + 0x180) = &PTR__MemPoolT_01c69290;
  *(XMLDocument **)(this + 0x188) = this + 400;
  *(undefined4 *)(this + 0x1e0) = 10;
  *(undefined8 *)(this + 0x1e4) = 0;
  *(undefined8 *)(this + 500) = 0;
  *(undefined8 *)(this + 0x1ec) = 0;
  *(undefined ***)(this + 0x200) = &PTR__MemPoolT_01c692e8;
  *(XMLDocument **)(this + 0x208) = this + 0x210;
  *(undefined4 *)(this + 0x260) = 10;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined8 *)(this + 0x264) = 0;
  *(undefined4 *)(this + 0x27c) = 0;
  *(undefined8 *)(this + 0x274) = 0;
  *(undefined8 *)(this + 0x26c) = 0;
  *(XMLDocument **)(this + 8) = this;
  return;
}

