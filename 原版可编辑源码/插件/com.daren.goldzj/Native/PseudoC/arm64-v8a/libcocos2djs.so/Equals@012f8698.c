
/* v8::internal::compiler::Operator1<v8::internal::compiler::FieldAccess,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::FieldAccess>,
   v8::internal::compiler::OpHash<v8::internal::compiler::FieldAccess>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::FieldAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::FieldAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::FieldAccess>>
::Equals(Operator1<v8::internal::compiler::FieldAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::FieldAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::FieldAccess>>
         *this,Operator *param_1)

{
  if ((((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
       (this[0x30] ==
        *(Operator1<v8::internal::compiler::FieldAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::FieldAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::FieldAccess>>
          *)(param_1 + 0x30))) && (*(int *)(this + 0x34) == *(int *)(param_1 + 0x34))) &&
     (((*(long *)(this + 0x40) == *(long *)(param_1 + 0x40) &&
       ((ushort)(byte)this[0x50] == (*(ushort *)(param_1 + 0x50) & 0xff))) &&
      (((ushort)(byte)this[0x51] == *(ushort *)(param_1 + 0x50) >> 8 &&
       (*(long *)(this + 0x58) == *(long *)(param_1 + 0x58))))))) {
    return this[0x60] ==
           *(Operator1<v8::internal::compiler::FieldAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::FieldAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::FieldAccess>>
             *)(param_1 + 0x60);
  }
  return false;
}

