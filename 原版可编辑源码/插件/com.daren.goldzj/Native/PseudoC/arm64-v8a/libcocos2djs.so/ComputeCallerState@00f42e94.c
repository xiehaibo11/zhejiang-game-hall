
/* v8::internal::NativeFrame::ComputeCallerState(v8::internal::StackFrame::State*) const */

void __thiscall v8::internal::NativeFrame::ComputeCallerState(NativeFrame *this,State *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*(long *)this + 0x38))();
  *(undefined8 *)param_1 = uVar1;
  *(undefined8 *)(param_1 + 8) = **(undefined8 **)(this + 0x20);
  lVar2 = *(long *)(this + 0x20) + 8;
  if (StackFrame::return_address_location_resolver_ != (code *)0x0) {
    lVar2 = (*StackFrame::return_address_location_resolver_)();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(long *)(param_1 + 0x10) = lVar2;
  return;
}

