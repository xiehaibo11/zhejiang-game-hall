
/* v8::internal::ExitFrame::GetStateForFramePointer(unsigned long, v8::internal::StackFrame::State*)
    */

ulong v8::internal::ExitFrame::GetStateForFramePointer(ulong param_1,State *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
    goto LAB_00f41a7c;
  }
  if ((*(ulong *)(param_1 - 8) & 1) == 0) {
    uVar3 = *(ulong *)(param_1 - 8) >> 1;
    iVar2 = (int)uVar3;
    if ((iVar2 == 3) || (iVar2 == 0x15)) goto LAB_00f41a4c;
    if (iVar2 != 10) goto LAB_00f41a48;
    lVar1 = param_1 - 0x10;
    uVar3 = 10;
  }
  else {
LAB_00f41a48:
    uVar3 = 3;
LAB_00f41a4c:
    lVar1 = *(long *)(param_1 - 0x10);
  }
  *(long *)param_2 = lVar1;
  *(ulong *)(param_2 + 8) = param_1;
  lVar1 = lVar1 + -8;
  if (StackFrame::return_address_location_resolver_ != (code *)0x0) {
    lVar1 = (*StackFrame::return_address_location_resolver_)();
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(long *)(param_2 + 0x10) = lVar1;
LAB_00f41a7c:
  return uVar3 & 0xffffffff;
}

