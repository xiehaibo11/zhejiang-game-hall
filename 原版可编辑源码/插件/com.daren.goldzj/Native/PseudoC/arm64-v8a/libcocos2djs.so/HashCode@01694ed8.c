
/* v8::internal::compiler::Operator1<v8::internal::CreateArgumentsType,
   v8::internal::compiler::OpEqualTo<v8::internal::CreateArgumentsType>,
   v8::internal::compiler::OpHash<v8::internal::CreateArgumentsType> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::CreateArgumentsType,v8::internal::compiler::OpEqualTo<v8::internal::CreateArgumentsType>,v8::internal::compiler::OpHash<v8::internal::CreateArgumentsType>>
::HashCode(Operator1<v8::internal::CreateArgumentsType,v8::internal::compiler::OpEqualTo<v8::internal::CreateArgumentsType>,v8::internal::compiler::OpHash<v8::internal::CreateArgumentsType>>
           *this)

{
  base::hash_combine((ulong)(byte)this[0x2c],(ulong)*(ushort *)(this + 0x10));
  return;
}

