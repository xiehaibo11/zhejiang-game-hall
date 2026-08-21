
/* v8::internal::Heap::InSpace(v8::internal::HeapObject, v8::internal::AllocationSpace) */

ulong __thiscall v8::internal::Heap::InSpace(Heap *this,ulong param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (((*(ulong *)(*(long *)(this + 0x820) + 0x60) <= param_2 - 1) &&
      (param_2 - 1 < *(ulong *)(*(long *)(this + 0x820) + 0x68))) && (*(long *)(this + 0xe8) != 0))
  {
    switch(param_3) {
    case 0:
      uVar1 = ReadOnlyHeap::Contains(param_2);
      return uVar1;
    case 1:
      if (((param_2 & 1) != 0) &&
         (uVar1 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8), ((uint)uVar1 >> 5 & 1) == 0)) {
        if (*(int *)(*(long *)(this + 0xe8) + 0x15c) != 1) {
          return uVar1 >> 3 & 1;
        }
        return uVar1 >> 4 & 1;
      }
      break;
    case 2:
      if ((param_2 & 1) != 0) {
        lVar2 = *(long *)(this + 0xf0);
LAB_00f95958:
        return (ulong)(lVar2 == *(long *)(param_2 & 0xfffffffffffc0000 | 0x58));
      }
      break;
    case 3:
      if ((param_2 & 1) != 0) {
        lVar2 = *(long *)(this + 0xf8);
        goto LAB_00f95958;
      }
      break;
    case 4:
      if ((param_2 & 1) != 0) {
        lVar2 = *(long *)(this + 0x100);
        goto LAB_00f95958;
      }
      break;
    case 5:
      uVar1 = LargeObjectSpace::Contains(*(LargeObjectSpace **)(this + 0x108));
      return uVar1;
    case 6:
      uVar1 = LargeObjectSpace::Contains(*(LargeObjectSpace **)(this + 0x110));
      return uVar1;
    case 7:
      uVar1 = LargeObjectSpace::Contains(*(LargeObjectSpace **)(this + 0x118));
      return uVar1;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  return 0;
}

