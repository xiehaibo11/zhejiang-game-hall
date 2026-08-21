
/* v8::internal::StackFrameBase::GetScriptId() const */

int __thiscall v8::internal::StackFrameBase::GetScriptId(StackFrameBase *this)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = (**(code **)(*(long *)this + 0xc0))();
  if ((uVar2 & 1) == 0) {
    iVar1 = -1;
  }
  else {
    plVar3 = (long *)(**(code **)(*(long *)this + 200))(this);
    iVar1 = *(int *)(*plVar3 + 0x1f) >> 1;
  }
  return iVar1;
}

