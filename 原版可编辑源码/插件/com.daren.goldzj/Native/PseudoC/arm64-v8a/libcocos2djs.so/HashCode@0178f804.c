
/* v8::internal::compiler::Operator1<v8::internal::MachineType,
   v8::internal::compiler::OpEqualTo<v8::internal::MachineType>,
   v8::internal::compiler::OpHash<v8::internal::MachineType> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::MachineType,v8::internal::compiler::OpEqualTo<v8::internal::MachineType>,v8::internal::compiler::OpHash<v8::internal::MachineType>>
::HashCode(Operator1<v8::internal::MachineType,v8::internal::compiler::OpEqualTo<v8::internal::MachineType>,v8::internal::compiler::OpHash<v8::internal::MachineType>>
           *this)

{
  base::hash_combine(((ulong)(*(ushort *)(this + 0x2c) >> 4) & 0xff0) +
                     (ulong)(byte)*(ushort *)(this + 0x2c),(ulong)*(ushort *)(this + 0x10));
  return;
}

