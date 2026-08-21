
/* v8::internal::CodeEntry::SetBuiltinId(v8::internal::Builtins::Name) */

void __thiscall v8::internal::CodeEntry::SetBuiltinId(CodeEntry *this,int param_2)

{
  *(uint *)this = *(uint *)this & 0xc0000000 | param_2 << 8 | 8;
  return;
}

