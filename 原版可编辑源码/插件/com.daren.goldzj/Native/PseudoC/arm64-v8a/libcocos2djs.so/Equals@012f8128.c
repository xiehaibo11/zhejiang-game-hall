
/* v8::internal::compiler::Operator1<v8::internal::compiler::ElementsTransition,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementsTransition>,
   v8::internal::compiler::OpHash<v8::internal::compiler::ElementsTransition>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::ElementsTransition,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementsTransition>,v8::internal::compiler::OpHash<v8::internal::compiler::ElementsTransition>>
::Equals(Operator1<v8::internal::compiler::ElementsTransition,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementsTransition>,v8::internal::compiler::OpHash<v8::internal::compiler::ElementsTransition>>
         *this,Operator *param_1)

{
  if (((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
      (this[0x30] ==
       *(Operator1<v8::internal::compiler::ElementsTransition,v8::internal::compiler::OpEqualTo<v8::internal::compiler::ElementsTransition>,v8::internal::compiler::OpHash<v8::internal::compiler::ElementsTransition>>
         *)(param_1 + 0x30))) && (*(long *)(this + 0x38) == *(long *)(param_1 + 0x38))) {
    return *(long *)(this + 0x40) == *(long *)(param_1 + 0x40);
  }
  return false;
}

