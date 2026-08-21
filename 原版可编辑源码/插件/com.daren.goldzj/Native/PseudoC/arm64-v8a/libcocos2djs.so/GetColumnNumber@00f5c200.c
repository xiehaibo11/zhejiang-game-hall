
/* v8::internal::JSStackFrame::GetColumnNumber() */

int __thiscall v8::internal::JSStackFrame::GetColumnNumber(JSStackFrame *this)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = (**(code **)(*(long *)this + 0xc0))();
  if ((uVar3 & 1) == 0) {
    iVar2 = -1;
  }
  else {
    uVar4 = (**(code **)(*(long *)this + 200))(this);
    uVar1 = (**(code **)(*(long *)this + 0x60))(this);
    iVar2 = Script::GetColumnNumber(uVar4,uVar1);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

