
/* v8::internal::DisassemblingDecoder::IsMovzMovnImm(unsigned int, unsigned long) */

undefined8 __thiscall
v8::internal::DisassemblingDecoder::IsMovzMovnImm
          (DisassemblingDecoder *this,uint param_1,ulong param_2)

{
  if ((((param_2 < 0x10000) || ((param_2 & 0xffffffff0000ffff) == 0)) ||
      ((param_2 & 0xffff0000ffffffff) == 0)) || ((param_2 & 0xffffffffffff) == 0)) {
    return 1;
  }
  if (param_1 == 0x20) {
    if ((~(uint)param_2 & 0xffff0000) == 0) {
      return 1;
    }
    if ((param_2 & 0xffff) == 0xffff) {
      return 1;
    }
  }
  else if (param_1 == 0x40) {
    if ((param_2 & 0xffffffffffff) == 0xffffffffffff) {
      return 1;
    }
    if ((param_2 & 0xffff0000ffffffff) == 0xffff0000ffffffff) {
      return 1;
    }
    if (0xfffffffffffeffff < param_2) {
      return 1;
    }
    if ((param_2 & 0xffffffff0000ffff) == 0xffffffff0000ffff) {
      return 1;
    }
  }
  return 0;
}

