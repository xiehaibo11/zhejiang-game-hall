
/* v8::internal::compiler::Operator1<v8::internal::AllocationType,
   v8::internal::compiler::OpEqualTo<v8::internal::AllocationType>,
   v8::internal::compiler::OpHash<v8::internal::AllocationType>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::AllocationType,v8::internal::compiler::OpEqualTo<v8::internal::AllocationType>,v8::internal::compiler::OpHash<v8::internal::AllocationType>>
::Equals(Operator1<v8::internal::AllocationType,v8::internal::compiler::OpEqualTo<v8::internal::AllocationType>,v8::internal::compiler::OpHash<v8::internal::AllocationType>>
         *this,Operator *param_1)

{
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    return this[0x2c] ==
           *(Operator1<v8::internal::AllocationType,v8::internal::compiler::OpEqualTo<v8::internal::AllocationType>,v8::internal::compiler::OpHash<v8::internal::AllocationType>>
             *)(param_1 + 0x2c);
  }
  return false;
}

