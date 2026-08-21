
/* v8::internal::InterpretedFrame::GetBytecodeOffset() const */

int __thiscall v8::internal::InterpretedFrame::GetBytecodeOffset(InterpretedFrame *this)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(long *)this + 0x90))(this,0xffffffff);
  return (*piVar1 >> 1) + -0x21;
}

