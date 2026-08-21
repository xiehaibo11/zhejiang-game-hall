
/* v8::internal::Deoptimizer::ComputeInputFrameSize() const */

void __thiscall v8::internal::Deoptimizer::ComputeInputFrameSize(Deoptimizer *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 8);
  if ((uVar4 & 1) == 0) {
    iVar3 = 0x10;
  }
  else {
    uVar1 = *(ushort *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)) + 0x15) + 1 &
            0xffff;
    uVar2 = ShouldPadArguments(uVar1);
    iVar3 = ((uVar2 & 1) + uVar1) * 8 + 0x10;
  }
  if (((*(uint *)(*(long *)(this + 0x10) + 0x17) & 0x3e) == 0) &&
     (iVar3 + (*(uint *)(*(long *)(this + 0x10) + 0x17) >> 4 & 0x7fffff8) + -0x10 !=
      *(int *)(this + 0x28) + iVar3)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "fixed_size_above_fp + (stack_slots * kSystemPointerSize) - CommonFrameConstants::kFixedFrameSizeAboveFp + outgoing_size == result"
            );
  }
  return;
}

