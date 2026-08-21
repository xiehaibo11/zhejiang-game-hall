
/* v8::internal::PagedSpaceObjectIterator::PagedSpaceObjectIterator(v8::internal::Heap*,
   v8::internal::PagedSpace*, v8::internal::Page*) */

void __thiscall
v8::internal::PagedSpaceObjectIterator::PagedSpaceObjectIterator
          (PagedSpaceObjectIterator *this,Heap *param_1,PagedSpace *param_2,Page *param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(Heap **)(this + 0x18) = param_1;
  *(PagedSpace **)(this + 0x20) = param_2;
  *(undefined ***)this = &PTR__ObjectIterator_01ca94f0;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *(undefined8 *)(param_3 + 0xe0);
  *(Page **)(this + 0x38) = param_3;
  *(Page **)(this + 0x28) = param_3;
  *(undefined8 *)(this + 0x30) = uVar1;
  MarkCompactCollector::EnsureSweepingCompleted(*(MarkCompactCollector **)(param_1 + 0x800));
  return;
}

