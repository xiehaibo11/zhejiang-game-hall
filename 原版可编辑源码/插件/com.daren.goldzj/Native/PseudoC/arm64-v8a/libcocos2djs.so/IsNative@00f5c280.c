
/* v8::internal::JSStackFrame::IsNative() */

bool __thiscall v8::internal::JSStackFrame::IsNative(JSStackFrame *this)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = (**(code **)(*(long *)this + 0xc0))();
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    plVar3 = (long *)(**(code **)(*(long *)this + 200))(this);
    bVar1 = *(uint *)(*plVar3 + 0x17) < 2;
  }
  return bVar1;
}

