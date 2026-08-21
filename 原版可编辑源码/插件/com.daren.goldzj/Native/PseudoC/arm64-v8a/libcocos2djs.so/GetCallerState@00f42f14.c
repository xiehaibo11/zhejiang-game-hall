
/* v8::internal::EntryFrame::GetCallerState(v8::internal::StackFrame::State*) const */

ulong __thiscall v8::internal::EntryFrame::GetCallerState(EntryFrame *this,State *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(*(long *)(this + 0x20) + -0x18);
  if (lVar1 == 0) {
    uVar4 = 0;
    goto LAB_00f42f94;
  }
  if ((*(ulong *)(lVar1 + -8) & 1) == 0) {
    uVar4 = *(ulong *)(lVar1 + -8) >> 1;
    iVar3 = (int)uVar4;
    if ((iVar3 == 3) || (iVar3 == 0x15)) goto LAB_00f42f64;
    if (iVar3 != 10) goto LAB_00f42f60;
    lVar2 = lVar1 + -0x10;
    uVar4 = 10;
  }
  else {
LAB_00f42f60:
    uVar4 = 3;
LAB_00f42f64:
    lVar2 = *(long *)(lVar1 + -0x10);
  }
  *(long *)param_1 = lVar2;
  *(long *)(param_1 + 8) = lVar1;
  lVar2 = lVar2 + -8;
  if (StackFrame::return_address_location_resolver_ != (code *)0x0) {
    lVar2 = (*StackFrame::return_address_location_resolver_)();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(long *)(param_1 + 0x10) = lVar2;
LAB_00f42f94:
  return uVar4 & 0xffffffff;
}

