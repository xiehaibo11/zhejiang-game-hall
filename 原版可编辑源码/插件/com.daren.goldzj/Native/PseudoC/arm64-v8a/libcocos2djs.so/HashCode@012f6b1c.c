
/* v8::internal::compiler::Operator1<v8::internal::ConvertReceiverMode,
   v8::internal::compiler::OpEqualTo<v8::internal::ConvertReceiverMode>,
   v8::internal::compiler::OpHash<v8::internal::ConvertReceiverMode> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::ConvertReceiverMode,v8::internal::compiler::OpEqualTo<v8::internal::ConvertReceiverMode>,v8::internal::compiler::OpHash<v8::internal::ConvertReceiverMode>>
::HashCode(Operator1<v8::internal::ConvertReceiverMode,v8::internal::compiler::OpEqualTo<v8::internal::ConvertReceiverMode>,v8::internal::compiler::OpHash<v8::internal::ConvertReceiverMode>>
           *this)

{
  base::hash_combine((ulong)*(uint *)(this + 0x2c),(ulong)*(ushort *)(this + 0x10));
  return;
}

