
/* v8::internal::Isolate::New(v8::internal::IsolateAllocationMode) */

Isolate * v8::internal::Isolate::New(undefined4 param_1)

{
  IsolateAllocator *pIVar1;
  Isolate *pIVar2;
  IsolateAllocator *local_28;
  
  pIVar1 = operator_new(0x30);
  IsolateAllocator::IsolateAllocator(pIVar1,param_1);
  pIVar2 = *(Isolate **)pIVar1;
  local_28 = pIVar1;
  Isolate(pIVar2,&local_28);
  pIVar1 = local_28;
  local_28 = (IsolateAllocator *)0x0;
  if (pIVar1 != (IsolateAllocator *)0x0) {
    IsolateAllocator::~IsolateAllocator(pIVar1);
    operator_delete(pIVar1);
  }
  return pIVar2;
}

