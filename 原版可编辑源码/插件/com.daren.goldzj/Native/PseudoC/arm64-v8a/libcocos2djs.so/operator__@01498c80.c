
/* v8::internal::SourceTextModuleDescriptor::AstRawStringComparer::TEMPNAMEPLACEHOLDERVALUE(v8::internal::AstRawString
   const*, v8::internal::AstRawString const*) const */

uint __thiscall
v8::internal::SourceTextModuleDescriptor::AstRawStringComparer::operator()
          (AstRawStringComparer *this,AstRawString *param_1,AstRawString *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return 0;
  }
  uVar1 = (uint)(param_1[0x1c] != (AstRawString)0x0);
  if ((param_1[0x1c] != (AstRawString)0x0) == (param_2[0x1c] != (AstRawString)0x0)) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
    if (iVar2 != *(int *)(param_2 + 0x10)) {
      return (uint)(iVar2 < *(int *)(param_2 + 0x10));
    }
    uVar1 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),(long)iVar2);
    uVar1 = uVar1 >> 0x1f;
  }
  return uVar1;
}

