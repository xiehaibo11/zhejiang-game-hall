
/* v8::internal::Deoptimizer::ComputeInputFrameAboveFpFixedSize() const */

int __thiscall v8::internal::Deoptimizer::ComputeInputFrameAboveFpFixedSize(Deoptimizer *this)

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
  return iVar3;
}

