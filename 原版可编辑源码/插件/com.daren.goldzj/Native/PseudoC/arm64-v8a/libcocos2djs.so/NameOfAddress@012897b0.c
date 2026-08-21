
/* disasm::NameConverter::NameOfAddress(unsigned char*) const */

undefined8 __thiscall disasm::NameConverter::NameOfAddress(NameConverter *this,uchar *param_1)

{
  v8::internal::SNPrintF(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10),"%p",param_1);
  return *(undefined8 *)(this + 8);
}

