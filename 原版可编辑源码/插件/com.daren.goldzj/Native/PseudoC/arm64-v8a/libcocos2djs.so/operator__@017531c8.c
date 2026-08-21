
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::StoreGlobalParameters
   const&, v8::internal::compiler::StoreGlobalParameters const&) */

undefined8
v8::internal::compiler::operator==(StoreGlobalParameters *param_1,StoreGlobalParameters *param_2)

{
  undefined8 uVar1;
  
  if (((*param_1 != (StoreGlobalParameters)0x0) == (*param_2 != (StoreGlobalParameters)0x0)) &&
     (*(long *)(param_1 + 8) == *(long *)(param_2 + 8))) {
    uVar1 = operator==((FeedbackSource *)(param_1 + 0x10),(FeedbackSource *)(param_2 + 0x10));
    return uVar1;
  }
  return 0;
}

