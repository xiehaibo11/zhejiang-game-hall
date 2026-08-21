
/* v8::internal::Parser::SetLanguageMode(v8::internal::Scope*, v8::internal::LanguageMode) */

void __thiscall v8::internal::Parser::SetLanguageMode(Parser *this,long param_1,ushort param_3)

{
  long lVar1;
  
  lVar1 = 0x24;
  if ((param_3 & 1) == 0) {
    lVar1 = 0x20;
  }
  *(int *)(this + lVar1 + 0x310) = *(int *)(this + lVar1 + 0x310) + 1;
  *(ushort *)(param_1 + 0x81) = *(ushort *)(param_1 + 0x81) & 0xfffe | param_3 & 1;
  return;
}

