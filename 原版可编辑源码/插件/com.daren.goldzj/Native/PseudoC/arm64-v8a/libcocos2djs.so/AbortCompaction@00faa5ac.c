
/* v8::internal::MarkCompactCollector::AbortCompaction() */

void __thiscall v8::internal::MarkCompactCollector::AbortCompaction(MarkCompactCollector *this)

{
  Page *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (this[0x4e] != (MarkCompactCollector)0x0) {
    RememberedSet<(v8::internal::RememberedSetType)1>::ClearAll(*(Heap **)(this + 8));
    puVar1 = *(undefined8 **)(this + 0x2698);
    puVar3 = *(undefined8 **)(this + 0x26a0);
    if (puVar1 != puVar3) {
      do {
        puVar2 = puVar1 + 1;
        this_00 = (Page *)*puVar1;
        *(ulong *)(this_00 + 8) = *(ulong *)(this_00 + 8) & 0xffffffffffffffbf;
        Page::InitializeFreeListCategories(this_00);
        puVar1 = puVar2;
      } while (puVar3 != puVar2);
      puVar1 = *(undefined8 **)(this + 0x2698);
    }
    this[0x4e] = (MarkCompactCollector)0x0;
    *(undefined8 **)(this + 0x26a0) = puVar1;
  }
  return;
}

