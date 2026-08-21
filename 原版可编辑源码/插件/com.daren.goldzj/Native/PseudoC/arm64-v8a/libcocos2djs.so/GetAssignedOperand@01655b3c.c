
/* v8::internal::compiler::LiveRange::GetAssignedOperand() const */

ulong __thiscall v8::internal::compiler::LiveRange::GetAssignedOperand(LiveRange *this)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(this + 4);
  if ((uVar1 & 0x1f80) != 0x1000) {
    return (ulong)(uVar1 >> 8 & 0x1fe0 | 4) | (ulong)(uVar1 >> 7 & 0x3f) << 0x23;
  }
  lVar2 = *(long *)(this + 0x20);
  if ((*(uint *)(lVar2 + 4) & 0x60) == 0x20) {
    return **(ulong **)(lVar2 + 0x70);
  }
  return (ulong)(*(uint *)(lVar2 + 4) >> 8) & 0x1fe0 |
         (ulong)*(uint *)(*(long *)(lVar2 + 0x70) + 0x2c) << 0x23 | 0xc;
}

