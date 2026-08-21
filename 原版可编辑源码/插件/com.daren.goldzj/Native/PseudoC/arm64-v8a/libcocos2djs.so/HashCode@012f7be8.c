
/* v8::internal::compiler::Operator1<v8::internal::compiler::Type,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::Type>,
   v8::internal::compiler::OpHash<v8::internal::compiler::Type> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::Type,v8::internal::compiler::OpEqualTo<v8::internal::compiler::Type>,v8::internal::compiler::OpHash<v8::internal::compiler::Type>>
::HashCode(Operator1<v8::internal::compiler::Type,v8::internal::compiler::OpEqualTo<v8::internal::compiler::Type>,v8::internal::compiler::OpHash<v8::internal::compiler::Type>>
           *this)

{
  base::hash_combine(*(ulong *)(this + 0x30),(ulong)*(ushort *)(this + 0x10));
  return;
}

