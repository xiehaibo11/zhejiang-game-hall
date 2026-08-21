
/* v8::internal::compiler::FrameStateDescriptor::GetSize() const */

long __thiscall v8::internal::compiler::FrameStateDescriptor::GetSize(FrameStateDescriptor *this)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)this;
  lVar1 = *(long *)(this + 0x10) + *(long *)(this + 0x18) + *(long *)(this + 0x20);
  if ((uVar2 < 6) && ((1 << (ulong)(uVar2 & 0x1f) & 0x31U) != 0)) {
    return lVar1 + 2;
  }
  return lVar1 + 1 + (ulong)((uVar2 | 1) == 3);
}

