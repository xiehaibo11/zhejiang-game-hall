
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::StoreNamedOwnParameters
   const&, v8::internal::compiler::StoreNamedOwnParameters const&) */

undefined8
v8::internal::compiler::operator==
          (StoreNamedOwnParameters *param_1,StoreNamedOwnParameters *param_2)

{
  undefined8 uVar1;
  
  if (*(long *)param_1 != *(long *)param_2) {
    return 0;
  }
  uVar1 = operator==((FeedbackSource *)(param_1 + 8),(FeedbackSource *)(param_2 + 8));
  return uVar1;
}

