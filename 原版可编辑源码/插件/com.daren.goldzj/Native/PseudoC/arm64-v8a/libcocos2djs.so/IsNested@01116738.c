
/* v8::internal::AllocationSite::IsNested() */

undefined8 __thiscall v8::internal::AllocationSite::IsNested(AllocationSite *this)

{
  uint *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(*(ulong *)this & 0xffffffff00000000 | 0x8e40);
  if ((uVar2 & 1) != 0) {
    do {
      if (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x55) {
        return 0;
      }
      if (*(int *)(uVar2 + 7) == (int)*(ulong *)this) {
        return 1;
      }
      puVar1 = (uint *)(uVar2 + 0x17);
      uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  return 0;
}

