
/* v8::internal::ExitFrame::FillState(unsigned long, unsigned long,
   v8::internal::StackFrame::State*) */

void v8::internal::ExitFrame::FillState(ulong param_1,ulong param_2,State *param_3)

{
  long lVar1;
  
  *(ulong *)param_3 = param_2;
  *(ulong *)(param_3 + 8) = param_1;
  lVar1 = param_2 - 8;
  if (StackFrame::return_address_location_resolver_ != (code *)0x0) {
    lVar1 = (*StackFrame::return_address_location_resolver_)();
  }
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(long *)(param_3 + 0x10) = lVar1;
  return;
}

