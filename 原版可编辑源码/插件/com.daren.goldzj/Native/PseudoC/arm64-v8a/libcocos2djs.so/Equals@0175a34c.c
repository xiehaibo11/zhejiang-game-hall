
/* v8::internal::compiler::Operator1<v8::internal::compiler::NamedAccess,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::NamedAccess>,
   v8::internal::compiler::OpHash<v8::internal::compiler::NamedAccess>
   >::Equals(v8::internal::compiler::Operator const*) const */

undefined8 __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::NamedAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::NamedAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::NamedAccess>>
::Equals(Operator1<v8::internal::compiler::NamedAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::NamedAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::NamedAccess>>
         *this,Operator *param_1)

{
  undefined8 uVar1;
  
  if (((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
      (*(long *)(this + 0x30) == *(long *)(param_1 + 0x30))) &&
     ((this[0x48] !=
      (Operator1<v8::internal::compiler::NamedAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::NamedAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::NamedAccess>>
       )0x0) == (param_1[0x48] != (Operator)0x0))) {
    uVar1 = compiler::operator==((FeedbackSource *)(this + 0x38),(FeedbackSource *)(param_1 + 0x38))
    ;
    return uVar1;
  }
  return 0;
}

