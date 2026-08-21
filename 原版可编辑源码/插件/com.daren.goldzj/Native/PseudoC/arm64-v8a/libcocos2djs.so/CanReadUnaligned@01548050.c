
/* v8::internal::NativeRegExpMacroAssembler::CanReadUnaligned() */

bool __thiscall
v8::internal::NativeRegExpMacroAssembler::CanReadUnaligned(NativeRegExpMacroAssembler *this)

{
  if (FLAG_enable_regexp_unaligned_accesses != '\0') {
    return this[8] == (NativeRegExpMacroAssembler)0x0;
  }
  return false;
}

