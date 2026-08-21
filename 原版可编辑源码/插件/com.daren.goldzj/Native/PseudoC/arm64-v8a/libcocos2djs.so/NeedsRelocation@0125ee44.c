
/* v8::internal::Operand::NeedsRelocation(v8::internal::Assembler const*) const */

bool __thiscall v8::internal::Operand::NeedsRelocation(Operand *this,Assembler *param_1)

{
  Operand OVar1;
  
  OVar1 = this[0x28];
  if (OVar1 != (Operand)0x7) {
    if (OVar1 == (Operand)0x13) {
      return false;
    }
    if (OVar1 != (Operand)0xa) {
      return true;
    }
  }
  return param_1[0xa0] != (Assembler)0x0;
}

