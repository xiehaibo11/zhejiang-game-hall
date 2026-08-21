
/* v8::internal::FunctionLiteral::set_inferred_name(v8::internal::Handle<v8::internal::String>) */

void __thiscall
v8::internal::FunctionLiteral::set_inferred_name(FunctionLiteral *this,undefined8 param_2)

{
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = param_2;
  *(ushort *)(*(long *)(this + 0x28) + 0x83) = *(ushort *)(*(long *)(this + 0x28) + 0x83) | 0x200;
  return;
}

