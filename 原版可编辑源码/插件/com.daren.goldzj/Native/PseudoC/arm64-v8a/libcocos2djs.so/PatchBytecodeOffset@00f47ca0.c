
/* v8::internal::InterpretedFrame::PatchBytecodeOffset(int) */

void __thiscall
v8::internal::InterpretedFrame::PatchBytecodeOffset(InterpretedFrame *this,int param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(**(code **)(*(long *)this + 0x90))(this,0xffffffff);
  *puVar1 = -(ulong)(param_1 + 0x21U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_1 + 0x21U) << 1;
  return;
}

