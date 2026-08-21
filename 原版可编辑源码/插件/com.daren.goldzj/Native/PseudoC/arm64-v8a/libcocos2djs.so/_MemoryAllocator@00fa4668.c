
/* v8::internal::MemoryAllocator::~MemoryAllocator() */

void __thiscall v8::internal::MemoryAllocator::~MemoryAllocator(MemoryAllocator *this)

{
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = *(void **)(this + 0x158);
  while (puVar1 != (void *)0x0) {
    pvVar3 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0x148);
  *(undefined8 *)(this + 0x148) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  base::Semaphore::~Semaphore((Semaphore *)(this + 0x128));
  pvVar3 = *(void **)(this + 0xf0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xf8) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0xd8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xe0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0xc0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 200) = pvVar3;
    operator_delete(pvVar3);
  }
  base::Mutex::~Mutex((Mutex *)(this + 0x98));
  VirtualMemory::~VirtualMemory((VirtualMemory *)(this + 0x70));
  plVar2 = *(long **)(this + 0x40);
  *(undefined8 *)(this + 0x40) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  VirtualMemory::~VirtualMemory((VirtualMemory *)(this + 8));
  return;
}

