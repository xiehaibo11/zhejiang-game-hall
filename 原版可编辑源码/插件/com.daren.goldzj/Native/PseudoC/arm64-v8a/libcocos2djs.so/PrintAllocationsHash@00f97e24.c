
/* v8::internal::Heap::PrintAllocationsHash() */

void __thiscall v8::internal::Heap::PrintAllocationsHash(Heap *this)

{
  uint uVar1;
  
  uVar1 = (*(int *)(this + 0x184) * 9 ^ (uint)(*(int *)(this + 0x184) * 9) >> 0xb) * 0x8001;
  PrintF("\n### Allocations = %u, hash = 0x%08x\n",(ulong)*(uint *)(this + 0x180),
         (ulong)((int)((uVar1 & 0x1fffffff) - 1) >> 0x1f & 0x1bU | uVar1));
  return;
}

