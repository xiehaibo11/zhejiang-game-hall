
/* tinyxml2::XMLPrinter::XMLPrinter(__sFILE*, bool) */

void __thiscall tinyxml2::XMLPrinter::XMLPrinter(XMLPrinter *this,__sFILE *param_1,bool param_2)

{
  this[0x21] = (XMLPrinter)param_2;
  *(XMLPrinter **)(this + 0xa8) = this + 0xb0;
  *(undefined8 *)(this + 0x18) = 0xffffffff00000000;
  *(undefined8 *)(this + 0x9a) = 0;
  *(undefined8 *)(this + 0x92) = 0;
  *(undefined8 *)(this + 0x8a) = 0;
  *(undefined8 *)(this + 0x82) = 0;
  *(undefined8 *)(this + 0x7a) = 0;
  *(undefined8 *)(this + 0x72) = 0;
  *(undefined8 *)(this + 0x6a) = 0;
  *(undefined8 *)(this + 0x62) = 0;
  *(undefined8 *)(this + 0x5a) = 0;
  *(undefined8 *)(this + 0x52) = 0;
  *(undefined8 *)(this + 0x4a) = 0;
  *(undefined8 *)(this + 0x42) = 0;
  *(undefined8 *)(this + 0x3a) = 0;
  *(undefined8 *)(this + 0x32) = 0;
  *(undefined8 *)(this + 0x2a) = 0;
  *(undefined8 *)(this + 0x22) = 0;
  *(XMLPrinter **)(this + 0x108) = this + 0x110;
  *(undefined2 *)(this + 8) = 0x100;
  *(undefined4 *)(this + 0x124) = 0x14;
  *(__sFILE **)(this + 0x10) = param_1;
  this[0x20] = (XMLPrinter)0x1;
  this[0x44] = (XMLPrinter)0x1;
  *(undefined2 *)(this + 0x48) = 0x101;
  this[0x5e] = (XMLPrinter)0x1;
  this[0x60] = (XMLPrinter)0x1;
  this[0x88] = (XMLPrinter)0x1;
  this[0x9e] = (XMLPrinter)0x1;
  this[0xa0] = (XMLPrinter)0x1;
  *(undefined4 *)(this + 0x128) = 1;
  *(undefined ***)this = &PTR__XMLPrinter_01c68fe8;
  *(undefined8 *)(this + 0x100) = 10;
  this[0x110] = (XMLPrinter)0x0;
  return;
}

