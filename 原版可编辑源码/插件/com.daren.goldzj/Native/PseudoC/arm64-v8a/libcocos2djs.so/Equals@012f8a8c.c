
/* v8::internal::compiler::Operator1<v8::internal::compiler::ObjectAccess,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::ObjectAccess>,
   v8::internal::compiler::OpHash<v8::internal::compiler::ObjectAccess>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::ObjectAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ObjectAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ObjectAccess>>
::Equals(Operator1<v8::internal::compiler::ObjectAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ObjectAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ObjectAccess>>
         *this,Operator *param_1)

{
  if ((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
     ((ushort)(byte)this[0x2c] == (*(ushort *)(param_1 + 0x2c) & 0xff))) {
    return (ushort)(byte)this[0x2d] == *(ushort *)(param_1 + 0x2c) >> 8 &&
           this[0x2e] ==
           *(Operator1<v8::internal::compiler::ObjectAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ObjectAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::ObjectAccess>>
             *)(param_1 + 0x2e);
  }
  return false;
}

