
/* v8::internal::MinorMarkCompactCollector::~MinorMarkCompactCollector() */

void __thiscall
v8::internal::MinorMarkCompactCollector::~MinorMarkCompactCollector(MinorMarkCompactCollector *this)

{
  void *pvVar1;
  Worklist<v8::internal::HeapObject,64> *this_00;
  
  this_00 = *(Worklist<v8::internal::HeapObject,64> **)(this + 0x18);
  *(undefined ***)this = &PTR__MinorMarkCompactCollector_01ca80f0;
  if (this_00 != (Worklist<v8::internal::HeapObject,64> *)0x0) {
    Worklist<v8::internal::HeapObject,64>::~Worklist(this_00);
    operator_delete(this_00);
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x20));
  }
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar1;
    operator_delete(pvVar1);
  }
  base::Semaphore::~Semaphore((Semaphore *)(this + 0x28));
  return;
}

