
/* v8::internal::StackFrame::SetReturnAddressLocationResolver(unsigned long (*)(unsigned long)) */

void v8::internal::StackFrame::SetReturnAddressLocationResolver(_func_ulong_ulong *param_1)

{
  return_address_location_resolver_ = param_1;
  return;
}

