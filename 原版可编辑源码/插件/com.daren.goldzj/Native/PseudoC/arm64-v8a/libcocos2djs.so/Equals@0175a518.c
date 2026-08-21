
/* v8::internal::compiler::Operator1<v8::internal::compiler::PropertyAccess,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::PropertyAccess>,
   v8::internal::compiler::OpHash<v8::internal::compiler::PropertyAccess>
   >::Equals(v8::internal::compiler::Operator const*) const */

undefined8 __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::PropertyAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::PropertyAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::PropertyAccess>>
::Equals(Operator1<v8::internal::compiler::PropertyAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::PropertyAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::PropertyAccess>>
         *this,Operator *param_1)

{
  undefined8 uVar1;
  
  if ((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
     ((this[0x40] !=
      (Operator1<v8::internal::compiler::PropertyAccess,v8::internal::compiler::OpEqualTo<v8::internal::compiler::PropertyAccess>,v8::internal::compiler::OpHash<v8::internal::compiler::PropertyAccess>>
       )0x0) == (param_1[0x40] != (Operator)0x0))) {
    uVar1 = compiler::operator==((FeedbackSource *)(this + 0x30),(FeedbackSource *)(param_1 + 0x30))
    ;
    return uVar1;
  }
  return 0;
}

