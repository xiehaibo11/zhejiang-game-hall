
/* v8::V8::SetReturnAddressLocationResolver(unsigned long (*)(unsigned long)) */

void v8::V8::SetReturnAddressLocationResolver(_func_ulong_ulong *param_1)

{
  internal::StackFrame::SetReturnAddressLocationResolver(param_1);
  return;
}

