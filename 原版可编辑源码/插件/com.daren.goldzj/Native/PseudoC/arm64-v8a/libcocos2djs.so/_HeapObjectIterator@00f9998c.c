
/* v8::internal::HeapObjectIterator::~HeapObjectIterator() */

void __thiscall v8::internal::HeapObjectIterator::~HeapObjectIterator(HeapObjectIterator *this)

{
  long *plVar1;
  
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  plVar1 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f999e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

