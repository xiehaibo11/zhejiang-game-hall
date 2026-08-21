
/* v8::internal::Heap::Contains(v8::internal::HeapObject) */

undefined8 __thiscall v8::internal::Heap::Contains(Heap *this,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = ReadOnlyHeap::Contains(param_2);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if (param_2 - 1 < *(ulong *)(*(long *)(this + 0x820) + 0x60)) {
    return 0;
  }
  if (*(ulong *)(*(long *)(this + 0x820) + 0x68) <= param_2 - 1) {
    return 0;
  }
  if (*(long *)(this + 0xe8) != 0) {
    if ((param_2 & 1) != 0) {
      uVar1 = param_2 & 0xfffffffffffc0000;
      uVar3 = (uint)*(undefined8 *)(uVar1 + 8);
      if ((uVar3 >> 5 & 1) == 0) {
        if (*(int *)(*(long *)(this + 0xe8) + 0x15c) == 1) {
          uVar3 = uVar3 >> 4;
        }
        else {
          uVar3 = uVar3 >> 3;
        }
        if ((uVar3 & 1) != 0) {
          return 1;
        }
      }
      if (*(long *)(this + 0xf0) == *(long *)(uVar1 + 0x58)) {
        return 1;
      }
      if (*(long *)(this + 0xf8) == *(long *)(uVar1 + 0x58)) {
        return 1;
      }
      if (*(long *)(this + 0x100) == *(long *)(uVar1 + 0x58)) {
        return 1;
      }
    }
    uVar1 = LargeObjectSpace::Contains(*(LargeObjectSpace **)(this + 0x108),param_2);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = LargeObjectSpace::Contains(*(LargeObjectSpace **)(this + 0x110),param_2),
       (uVar1 & 1) == 0)) {
      uVar2 = LargeObjectSpace::Contains(*(LargeObjectSpace **)(this + 0x118),param_2);
      return uVar2;
    }
    return 1;
  }
  return 0;
}

