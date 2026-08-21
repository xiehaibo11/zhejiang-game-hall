
/* void 
   v8::internal::MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)3>(v8::internal::MemoryChunk*)
    */

void __thiscall
v8::internal::MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)3>
          (MemoryAllocator *this,MemoryChunk *param_1)

{
  ulong uVar1;
  Logger *this_00;
  
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) | 0x4000;
  this_00 = *(Logger **)(*(long *)this + 0x9558);
  uVar1 = Logger::is_logging(this_00);
  if ((uVar1 & 1) != 0) {
    Logger::DeleteEvent(this_00,"MemoryChunk",param_1);
  }
  UnregisterMemory(this,param_1);
  Heap::RememberUnmappedPage
            ((Heap *)(*(long *)this + 0x8850),(ulong)param_1,
             (bool)((byte)(*(ulong *)(param_1 + 8) >> 6) & 1));
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) | 0x2000;
  Unmapper::AddMemoryChunkSafe((Unmapper *)(this + 0x88),param_1);
  return;
}

