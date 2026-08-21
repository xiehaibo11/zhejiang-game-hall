
/* v8::internal::compiler::Operator1<v8::internal::compiler::ParameterInfo,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::ParameterInfo>,
   v8::internal::compiler::OpHash<v8::internal::compiler::ParameterInfo> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::ParameterInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ParameterInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::ParameterInfo>>
::HashCode(Operator1<v8::internal::compiler::ParameterInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ParameterInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::ParameterInfo>>
           *this)

{
  base::hash_combine((long)*(int *)(this + 0x30),(ulong)*(ushort *)(this + 0x10));
  return;
}

