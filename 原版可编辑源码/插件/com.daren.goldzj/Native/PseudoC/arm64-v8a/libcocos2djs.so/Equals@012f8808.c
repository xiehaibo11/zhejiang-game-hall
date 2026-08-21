
/* v8::internal::compiler::Operator1<v8::internal::compiler::ElementAccess,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementAccess>,
   v8::internal::compiler::OpHash<v8::internal::compiler::ElementAccess>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::ElementAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ElementAccess>>
::Equals(Operator1<v8::internal::compiler::ElementAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ElementAccess>>
         *this,Operator *param_1)

{
  if ((((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
       (this[0x30] ==
        *(Operator1<v8::internal::compiler::ElementAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ElementAccess>>
          *)(param_1 + 0x30))) && (*(int *)(this + 0x34) == *(int *)(param_1 + 0x34))) &&
     ((ushort)(byte)this[0x40] == (*(ushort *)(param_1 + 0x40) & 0xff))) {
    return (ushort)(byte)this[0x41] == *(ushort *)(param_1 + 0x40) >> 8;
  }
  return false;
}

