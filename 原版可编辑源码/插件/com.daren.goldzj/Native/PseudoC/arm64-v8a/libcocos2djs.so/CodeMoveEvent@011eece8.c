
/* v8::internal::CodeAddressMap::CodeMoveEvent(v8::internal::AbstractCode,
   v8::internal::AbstractCode) */

void __thiscall
v8::internal::CodeAddressMap::CodeMoveEvent(CodeAddressMap *this,long param_2,long param_3)

{
  NameMap::Move((NameMap *)(this + 0x18),param_2 - 1,param_3 - 1);
  return;
}

