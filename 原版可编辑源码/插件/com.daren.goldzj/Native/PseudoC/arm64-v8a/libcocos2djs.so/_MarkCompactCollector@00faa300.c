
/* v8::internal::MarkCompactCollector::~MarkCompactCollector() */

void __thiscall
v8::internal::MarkCompactCollector::~MarkCompactCollector(MarkCompactCollector *this)

{
  void *pvVar1;
  Sweeper *this_00;
  
  this_00 = *(Sweeper **)(this + 0x26f8);
  *(undefined ***)this = &PTR__MarkCompactCollector_01ca8068;
  if (this_00 != (Sweeper *)0x0) {
    Sweeper::~Sweeper(this_00);
    operator_delete(this_00);
  }
  pvVar1 = *(void **)(this + 0x26e0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x26e8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x26c8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x26d0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x26b0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x26b8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2698);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x26a0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2690);
  *(undefined8 *)(this + 0x2690) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2668);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x2670) = pvVar1;
    operator_delete(pvVar1);
  }
  Worklist<v8::internal::JSFunction,64>::~Worklist
            ((Worklist<v8::internal::JSFunction,64> *)(this + 0x23b0));
  Worklist<v8::internal::SharedFunctionInfo,64>::~Worklist
            ((Worklist<v8::internal::SharedFunctionInfo,64> *)(this + 0x20f8));
  Worklist<v8::internal::WeakCell,64>::~Worklist
            ((Worklist<v8::internal::WeakCell,64> *)(this + 0x1e40));
  Worklist<v8::internal::JSWeakRef,64>::~Worklist
            ((Worklist<v8::internal::JSWeakRef,64> *)(this + 0x1b88));
  Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Code>,64>::~Worklist
            ((Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Code>,64> *)
             (this + 0x18d0));
  Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::CompressedHeapObjectSlot>,64>::
  ~Worklist((Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::CompressedHeapObjectSlot>,64>
             *)(this + 0x1618));
  Worklist<v8::internal::Ephemeron,64>::~Worklist
            ((Worklist<v8::internal::Ephemeron,64> *)(this + 0x1360));
  Worklist<v8::internal::Ephemeron,64>::~Worklist
            ((Worklist<v8::internal::Ephemeron,64> *)(this + 0x10a8));
  Worklist<v8::internal::Ephemeron,64>::~Worklist
            ((Worklist<v8::internal::Ephemeron,64> *)(this + 0xdf0));
  Worklist<v8::internal::EphemeronHashTable,64>::~Worklist
            ((Worklist<v8::internal::EphemeronHashTable,64> *)(this + 0xb38));
  Worklist<v8::internal::TransitionArray,64>::~Worklist
            ((Worklist<v8::internal::TransitionArray,64> *)(this + 0x880));
  Worklist<v8::internal::HeapObject,16>::~Worklist
            ((Worklist<v8::internal::HeapObject,16> *)(this + 0x5c8));
  Worklist<v8::internal::HeapObject,64>::~Worklist
            ((Worklist<v8::internal::HeapObject,64> *)(this + 0x310));
  Worklist<v8::internal::HeapObject,64>::~Worklist
            ((Worklist<v8::internal::HeapObject,64> *)(this + 0x58));
  base::Semaphore::~Semaphore((Semaphore *)(this + 0x3c));
  base::Mutex::~Mutex((Mutex *)(this + 0x14));
  return;
}

