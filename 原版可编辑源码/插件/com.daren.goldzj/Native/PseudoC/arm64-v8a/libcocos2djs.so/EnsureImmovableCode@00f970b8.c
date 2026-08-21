
/* v8::internal::Heap::EnsureImmovableCode(v8::internal::HeapObject, int) */

ulong __thiscall v8::internal::Heap::EnsureImmovableCode(Heap *this,ulong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong extraout_x1;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar7;
  MemoryChunk *local_38;
  undefined8 *puVar6;
  
  uVar4 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
  if ((uVar4 & 0xa0) == 0) {
    if (this[0x2e68] == (Heap)0x0) {
      puVar3 = (undefined4 *)(param_2 - 1);
      if ((puVar3 < *(undefined4 **)(*(long *)(*(long *)(this + 0xf8) + 0x20) + 0x20)) ||
         (*(undefined4 **)(*(long *)(*(long *)(this + 0xf8) + 0x20) + 0x28) <= puVar3)) {
        if (param_3 != 0) {
          if (param_3 == 8) {
            *puVar3 = *(undefined4 *)(this + -0x87c0);
          }
          else if (param_3 == 4) {
            *puVar3 = *(undefined4 *)(this + -0x87c8);
          }
          else {
            *(undefined4 *)(param_2 - 1) = *(undefined4 *)(this + -0x87d0);
            *(int *)(param_2 + 3) = param_3 << 1;
          }
        }
        uVar4 = AllocateRawCodeInLargeObjectSpace(this,param_3);
        local_38 = (MemoryChunk *)(uVar4 & 0xfffffffffffc0000);
        if (this[0xba0] != (Heap)0x0) {
          base::Mutex::Lock((Mutex *)(this + 0xb50));
          std::__ndk1::
          __hash_table<v8::internal::MemoryChunk*,std::__ndk1::hash<v8::internal::MemoryChunk*>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,std::__ndk1::allocator<v8::internal::MemoryChunk*>>
          ::__emplace_unique_key_args<v8::internal::MemoryChunk*,v8::internal::MemoryChunk*const&>
                    ((__hash_table<v8::internal::MemoryChunk*,std::__ndk1::hash<v8::internal::MemoryChunk*>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,std::__ndk1::allocator<v8::internal::MemoryChunk*>>
                      *)(this + 0xb78),&local_38,&local_38);
          if ((extraout_x1 & 1) != 0) {
            MemoryChunk::SetReadAndWritable(local_38);
          }
          base::Mutex::Unlock((Mutex *)(this + 0xb50));
        }
        puVar7 = *(undefined8 **)(this + 0xc10);
        if (*(undefined8 **)(this + 0xc08) != puVar7) {
          puVar5 = *(undefined8 **)(this + 0xc08);
          do {
            puVar6 = puVar5 + 1;
            (*(code *)**(undefined8 **)*puVar5)((undefined8 *)*puVar5,uVar4 - 1,param_3);
            puVar5 = puVar6;
          } while (puVar7 != puVar6);
        }
        if (FLAG_fuzzer_gc_analysis != '\0') {
          *(int *)(this + 0x180) = *(int *)(this + 0x180) + 1;
          return uVar4;
        }
        if ((int)FLAG_trace_allocation_stack_interval < 1) {
          return uVar4;
        }
        uVar1 = *(int *)(this + 0x180) + 1;
        uVar2 = 0;
        if (FLAG_trace_allocation_stack_interval != 0) {
          uVar2 = uVar1 / FLAG_trace_allocation_stack_interval;
        }
        uVar2 = uVar2 * FLAG_trace_allocation_stack_interval;
        *(uint *)(this + 0x180) = uVar1;
        if (uVar1 != uVar2) {
          return uVar4;
        }
        Isolate::PrintStack((Isolate *)(this + -0x8850),waitpid,0);
        return uVar4;
      }
    }
    *(ulong *)((param_2 & 0xfffffffffffc0000) + 8) = uVar4 | 0x80;
  }
  return param_2;
}

