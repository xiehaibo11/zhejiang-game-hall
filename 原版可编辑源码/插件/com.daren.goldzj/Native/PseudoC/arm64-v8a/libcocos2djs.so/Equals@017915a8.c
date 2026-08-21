
/* v8::internal::compiler::Operator1<v8::internal::compiler::S8x16ShuffleParameter,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::S8x16ShuffleParameter>,
   v8::internal::compiler::OpHash<v8::internal::compiler::S8x16ShuffleParameter>
   >::Equals(v8::internal::compiler::Operator const*) const */

undefined8 __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::S8x16ShuffleParameter,v8::internal::compiler::OpEqualTo<v8::internal::compiler::S8x16ShuffleParameter>,v8::internal::compiler::OpHash<v8::internal::compiler::S8x16ShuffleParameter>>
::Equals(Operator1<v8::internal::compiler::S8x16ShuffleParameter,v8::internal::compiler::OpEqualTo<v8::internal::compiler::S8x16ShuffleParameter>,v8::internal::compiler::OpHash<v8::internal::compiler::S8x16ShuffleParameter>>
         *this,Operator *param_1)

{
  undefined8 uVar1;
  
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    uVar1 = compiler::operator==
                      ((S8x16ShuffleParameter *)(this + 0x2c),
                       (S8x16ShuffleParameter *)(param_1 + 0x2c));
    return uVar1;
  }
  return 0;
}

