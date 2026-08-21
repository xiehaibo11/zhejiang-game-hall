
/* v8::internal::FunctionLiteral::set_raw_inferred_name(v8::internal::AstConsString const*) */

void __thiscall
v8::internal::FunctionLiteral::set_raw_inferred_name(FunctionLiteral *this,AstConsString *param_1)

{
  *(AstConsString **)(this + 0x40) = param_1;
  *(undefined8 *)(this + 0x48) = 0;
  *(ushort *)(*(long *)(this + 0x28) + 0x83) = *(ushort *)(*(long *)(this + 0x28) + 0x83) | 0x200;
  return;
}

