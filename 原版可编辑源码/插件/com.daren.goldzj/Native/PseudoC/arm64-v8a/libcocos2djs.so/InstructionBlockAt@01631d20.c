
/* v8::internal::compiler::FrameElider::InstructionBlockAt(v8::internal::compiler::RpoNumber) const
    */

undefined8 __thiscall
v8::internal::compiler::FrameElider::InstructionBlockAt(FrameElider *this,int param_2)

{
  long lVar1;
  
  lVar1 = **(long **)(*(long *)this + 0x10);
  if ((ulong)(long)param_2 < (ulong)((*(long **)(*(long *)this + 0x10))[1] - lVar1 >> 3)) {
    return *(undefined8 *)(lVar1 + (long)param_2 * 8);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

