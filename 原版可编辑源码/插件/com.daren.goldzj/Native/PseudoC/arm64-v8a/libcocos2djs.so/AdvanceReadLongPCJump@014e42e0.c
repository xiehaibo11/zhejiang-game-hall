
/* v8::internal::RelocIterator::AdvanceReadLongPCJump() */

void __thiscall v8::internal::RelocIterator::AdvanceReadLongPCJump(RelocIterator *this)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar4 = *(byte **)this;
  uVar3 = 0;
  uVar2 = 0;
  uVar5 = 1;
  do {
    pbVar4 = pbVar4 + -1;
    *(byte **)this = pbVar4;
    uVar2 = (uint)(*pbVar4 >> 1) << (ulong)(uVar3 & 0x1f) | uVar2;
    if ((*pbVar4 & 1) != 0) break;
    bVar1 = uVar5 < 4;
    uVar5 = uVar5 + 1;
    uVar3 = uVar3 + 7;
  } while (bVar1);
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (ulong)(uVar2 << 6);
  return;
}

