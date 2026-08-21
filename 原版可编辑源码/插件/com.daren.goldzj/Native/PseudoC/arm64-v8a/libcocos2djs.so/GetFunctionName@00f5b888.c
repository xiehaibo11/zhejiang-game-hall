
/* v8::internal::JSStackFrame::GetFunctionName() */

long * __thiscall v8::internal::JSStackFrame::GetFunctionName(JSStackFrame *this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = (long *)JSFunction::GetDebugName(*(undefined8 *)(this + 0x18));
  if (*(int *)(*plVar1 + 7) == 0) {
    uVar2 = (**(code **)(*(long *)this + 0xc0))(this);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(this + 8);
    }
    else {
      plVar1 = (long *)(**(code **)(*(long *)this + 200))(this);
      lVar3 = *(long *)(this + 8);
      if ((*(byte *)(*plVar1 + 0x2f) >> 1 & 1) != 0) {
        return (long *)(lVar3 + 0x690);
      }
    }
    plVar1 = (long *)(lVar3 + 0xb0);
  }
  return plVar1;
}

