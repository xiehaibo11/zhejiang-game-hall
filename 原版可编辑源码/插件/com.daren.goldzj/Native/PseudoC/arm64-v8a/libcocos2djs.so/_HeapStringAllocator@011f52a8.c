
/* v8::internal::HeapStringAllocator::~HeapStringAllocator() */

void __thiscall v8::internal::HeapStringAllocator::~HeapStringAllocator(HeapStringAllocator *this)

{
  *(undefined ***)this = &PTR__HeapStringAllocator_01cbbc78;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  operator_delete(this);
  return;
}

