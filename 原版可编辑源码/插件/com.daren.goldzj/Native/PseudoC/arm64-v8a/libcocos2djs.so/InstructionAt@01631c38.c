
/* v8::internal::compiler::FrameElider::InstructionAt(int) const */

undefined8 __thiscall
v8::internal::compiler::FrameElider::InstructionAt(FrameElider *this,int param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(*(long *)this + 0xb0) + (long)param_1;
  return *(undefined8 *)
          (*(long *)(*(long *)(*(long *)this + 0x88) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
          (uVar1 & 0x1ff) * 8);
}

