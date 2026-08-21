
/* v8::internal::Isolate::OptionalRescheduleException(bool) */

void __thiscall v8::internal::Isolate::OptionalRescheduleException(Isolate *this,bool param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  StackFrameIterator aSStack_5e8 [1416];
  long local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  PropagatePendingExceptionToExternalTryCatch(this);
  uVar2 = *(undefined8 *)(this + 0x2bd8);
  if ((int)uVar2 == *(int *)(this + 0x188)) {
    if (param_1) {
      uVar2 = 0;
      this[0x2c19] = (Isolate)0x0;
      goto LAB_00f5131c;
    }
  }
  else if (this[0x2c19] == (Isolate)0x0) {
    if (param_1) goto LAB_00f51304;
  }
  else {
    if (*(long *)(this + 0x2bb8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(ulong *)(*(long *)(this + 0x2bb8) + 0x20);
    }
    StackFrameIterator::StackFrameIterator(aSStack_5e8,this);
    if ((((local_60 == 0) ||
         (JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5e8), local_60 == 0))
        || (uVar3 < *(ulong *)(local_60 + 0x18))) || (param_1)) {
LAB_00f51304:
      uVar2 = 0;
      this[0x2c19] = (Isolate)0x0;
      goto LAB_00f5131c;
    }
    uVar2 = *(undefined8 *)(this + 0x2bd8);
  }
  *(undefined8 *)(this + 0x2c20) = uVar2;
  uVar2 = 1;
LAB_00f5131c:
  *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

