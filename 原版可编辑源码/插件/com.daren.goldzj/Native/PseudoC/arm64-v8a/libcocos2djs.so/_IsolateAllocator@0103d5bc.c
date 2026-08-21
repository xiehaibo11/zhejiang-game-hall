
/* v8::internal::IsolateAllocator::~IsolateAllocator() */

void __thiscall v8::internal::IsolateAllocator::~IsolateAllocator(IsolateAllocator *this)

{
  long *plVar1;
  
  if (*(long *)(this + 0x20) == 0) {
    operator_delete(*(void **)this);
  }
  VirtualMemory::~VirtualMemory((VirtualMemory *)(this + 0x18));
  plVar1 = *(long **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0103d604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

