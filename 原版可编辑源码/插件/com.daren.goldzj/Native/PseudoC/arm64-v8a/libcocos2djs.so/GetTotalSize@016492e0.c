
/* v8::internal::compiler::FrameStateDescriptor::GetTotalSize() const */

long __thiscall
v8::internal::compiler::FrameStateDescriptor::GetTotalSize(FrameStateDescriptor *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  for (; this != (FrameStateDescriptor *)0x0; this = *(FrameStateDescriptor **)(this + 0x78)) {
    uVar1 = *(uint *)this;
    if ((uVar1 < 6) && ((1 << (ulong)(uVar1 & 0x1f) & 0x31U) != 0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)((uVar1 | 1) == 3);
    }
    lVar2 = lVar2 + *(long *)(this + 0x10) + *(long *)(this + 0x18) + *(long *)(this + 0x20) + uVar3
            + 1;
  }
  return lVar2;
}

