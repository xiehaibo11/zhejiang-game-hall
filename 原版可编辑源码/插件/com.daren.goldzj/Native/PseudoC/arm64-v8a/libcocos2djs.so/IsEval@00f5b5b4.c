
/* v8::internal::StackFrameBase::IsEval() */

byte __thiscall v8::internal::StackFrameBase::IsEval(StackFrameBase *this)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = (**(code **)(*(long *)this + 0xc0))();
  if ((uVar2 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    plVar3 = (long *)(**(code **)(*(long *)this + 200))(this);
    bVar1 = *(byte *)(*plVar3 + 0x2f) >> 1 & 1;
  }
  return bVar1;
}

