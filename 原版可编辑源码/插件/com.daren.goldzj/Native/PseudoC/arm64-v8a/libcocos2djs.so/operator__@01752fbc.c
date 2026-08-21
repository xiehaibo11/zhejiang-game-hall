
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::PropertyAccess const&,
   v8::internal::compiler::PropertyAccess const&) */

undefined8 v8::internal::compiler::operator==(PropertyAccess *param_1,PropertyAccess *param_2)

{
  undefined8 uVar1;
  
  if ((param_1[0x10] != (PropertyAccess)0x0) != (param_2[0x10] != (PropertyAccess)0x0)) {
    return 0;
  }
  uVar1 = operator==((FeedbackSource *)param_1,(FeedbackSource *)param_2);
  return uVar1;
}

