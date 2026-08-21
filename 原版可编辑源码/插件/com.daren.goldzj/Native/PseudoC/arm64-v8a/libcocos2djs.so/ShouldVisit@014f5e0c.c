
/* v8::internal::ConcurrentMarkingVisitor::ShouldVisit(v8::internal::HeapObject) */

undefined8 __thiscall
v8::internal::ConcurrentMarkingVisitor::ShouldVisit(ConcurrentMarkingVisitor *this,ulong param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong local_48;
  ulong local_40 [2];
  ulong *local_18;
  
  uVar10 = param_2 & 0xfffffffffffc0000;
  puVar1 = (uint *)(*(long *)(uVar10 + 0x10) + (~uVar10 + param_2 >> 7 & 0x1ffffff) * 4);
  uVar4 = 1 << (ulong)((uint)(~uVar10 + param_2 >> 2) & 0x1f);
  if ((*puVar1 & uVar4) != 0) {
    uVar4 = uVar4 << 1;
    bVar7 = uVar4 == 0;
    puVar2 = puVar1;
    if (bVar7) {
      uVar4 = 1;
      puVar2 = puVar1 + 1;
    }
    while (uVar3 = puVar1[bVar7], (uVar4 & (uVar3 ^ 0xffffffff)) != 0) {
      while (*puVar2 == uVar3) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar3 | uVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          local_48 = param_2;
          iVar8 = HeapObject::SizeFromMap
                            ((HeapObject *)&local_48,
                             param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
          local_18 = local_40;
          local_40[0] = uVar10;
          lVar9 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,v8::internal::MemoryChunk::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>>>
                  ::
                  __emplace_unique_key_args<v8::internal::MemoryChunk*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::MemoryChunk*const&>,std::__ndk1::tuple<>>
                            (*(MemoryChunk ***)(this + 0x38),(piecewise_construct_t *)local_40,
                             (tuple *)&DAT_01a495e9,(tuple *)&local_18);
          *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + (long)iVar8;
          return 1;
        }
      }
      ClearExclusiveLocal();
    }
  }
  return 0;
}

