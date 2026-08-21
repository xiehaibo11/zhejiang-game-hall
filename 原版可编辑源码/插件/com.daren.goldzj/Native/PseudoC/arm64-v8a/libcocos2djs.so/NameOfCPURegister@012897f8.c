
/* disasm::NameConverter::NameOfCPURegister(int) const */

char * __thiscall disasm::NameConverter::NameOfCPURegister(NameConverter *this,int param_1)

{
  if (0x1f < (uint)param_1) {
    return "noreg";
  }
  if (param_1 == 0x1f) {
    return "xzr";
  }
  v8::internal::SNPrintF
            (*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10),&DAT_019f63dc,param_1);
  return *(char **)(this + 8);
}

