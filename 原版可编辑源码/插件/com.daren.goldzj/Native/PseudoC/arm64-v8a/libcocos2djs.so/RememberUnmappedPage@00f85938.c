
/* v8::internal::Heap::RememberUnmappedPage(unsigned long, bool) */

void __thiscall v8::internal::Heap::RememberUnmappedPage(Heap *this,ulong param_1,bool param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = 0x1ead;
  if (!param_2) {
    uVar2 = 0x1d1ed;
  }
  *(ulong *)(this + (long)*(int *)(this + 0x1c8) * 8 + 0x1d0) = uVar2 ^ param_1;
  iVar3 = *(int *)(this + 0x1c8);
  uVar1 = iVar3 + 0x80;
  if (-1 < iVar3 + 1) {
    uVar1 = iVar3 + 1;
  }
  *(uint *)(this + 0x1c8) = (iVar3 + 1) - (uVar1 & 0xffffff80);
  return;
}

