
/* v8::internal::compiler::Operator1<v8::internal::MachineType,
   v8::internal::compiler::OpEqualTo<v8::internal::MachineType>,
   v8::internal::compiler::OpHash<v8::internal::MachineType>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::MachineType,v8::internal::compiler::OpEqualTo<v8::internal::MachineType>,v8::internal::compiler::OpHash<v8::internal::MachineType>>
::Equals(Operator1<v8::internal::MachineType,v8::internal::compiler::OpEqualTo<v8::internal::MachineType>,v8::internal::compiler::OpHash<v8::internal::MachineType>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return (ushort)(byte)this[0x2c] == (*(ushort *)(param_1 + 0x2c) & 0xff) &&
           (ushort)(byte)this[0x2d] == *(ushort *)(param_1 + 0x2c) >> 8;
  }
  return false;
}

