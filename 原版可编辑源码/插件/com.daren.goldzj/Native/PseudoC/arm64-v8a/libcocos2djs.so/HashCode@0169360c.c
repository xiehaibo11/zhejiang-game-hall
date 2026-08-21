
/* v8::internal::compiler::Operator1<v8::internal::compiler::TrapId,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::TrapId>,
   v8::internal::compiler::OpHash<v8::internal::compiler::TrapId> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::TrapId,v8::internal::compiler::OpEqualTo<v8::internal::compiler::TrapId>,v8::internal::compiler::OpHash<v8::internal::compiler::TrapId>>
::HashCode(Operator1<v8::internal::compiler::TrapId,v8::internal::compiler::OpEqualTo<v8::internal::compiler::TrapId>,v8::internal::compiler::OpHash<v8::internal::compiler::TrapId>>
           *this)

{
  base::hash_combine((ulong)*(uint *)(this + 0x2c),(ulong)*(ushort *)(this + 0x10));
  return;
}

