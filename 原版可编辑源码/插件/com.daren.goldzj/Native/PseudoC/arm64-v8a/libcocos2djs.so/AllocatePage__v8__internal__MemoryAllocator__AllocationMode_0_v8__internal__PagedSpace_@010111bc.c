
/* v8::internal::Page*
   v8::internal::MemoryAllocator::AllocatePage<(v8::internal::MemoryAllocator::AllocationMode)0,
   v8::internal::PagedSpace>(unsigned long, v8::internal::PagedSpace*, v8::internal::Executability)
    */

Page * __thiscall
v8::internal::MemoryAllocator::
AllocatePage<(v8::internal::MemoryAllocator::AllocationMode)0,v8::internal::PagedSpace>
          (MemoryAllocator *this,undefined8 param_1,PagedSpace *param_2,undefined8 param_4)

{
  MemoryChunk *pMVar1;
  Page *pPVar2;
  
  pMVar1 = (MemoryChunk *)AllocateChunk(this,param_1,param_1,param_4,param_2);
  if (pMVar1 != (MemoryChunk *)0x0) {
    pPVar2 = (Page *)PagedSpace::InitializePage(param_2,pMVar1);
    return pPVar2;
  }
  return (Page *)0x0;
}

