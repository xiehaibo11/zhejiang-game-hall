
/* v8::internal::Heap::RegisterDeserializedObjectsForBlackAllocation(std::__ndk1::vector<v8::internal::Heap::Chunk,
   std::__ndk1::allocator<v8::internal::Heap::Chunk> >*,
   std::__ndk1::vector<v8::internal::HeapObject, std::__ndk1::allocator<v8::internal::HeapObject> >
   const&, std::__ndk1::vector<unsigned long, std::__ndk1::allocator<unsigned long> > const&) */

void __thiscall
v8::internal::Heap::RegisterDeserializedObjectsForBlackAllocation
          (Heap *this,vector *param_1,vector *param_2,vector *param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong local_68;
  
  if (*(char *)(*(long *)(this + 0x828) + 0x5f) != '\0') {
    lVar12 = 2;
    do {
      lVar3 = *(long *)(param_1 + lVar12 * 0x18 + 8);
      for (lVar2 = *(long *)(param_1 + lVar12 * 0x18); lVar2 != lVar3; lVar2 = lVar2 + 0x18) {
        uVar13 = *(ulong *)(lVar2 + 8);
        if (uVar13 < *(ulong *)(lVar2 + 0x10)) {
          do {
            local_68 = uVar13 + 1;
            uVar9 = local_68 - (local_68 & 0xfffffffffffc0000);
            puVar1 = (uint *)(*(long *)((local_68 & 0xfffffffffffc0000) + 0x10) +
                             (uVar9 >> 7 & 0x1ffffff) * 4);
            uVar6 = 1 << (ulong)((uint)(uVar9 >> 2) & 0x1f);
            if ((*puVar1 & uVar6) != 0) {
              uVar6 = uVar6 << 1;
              bVar7 = uVar6 == 0;
              if (bVar7) {
                uVar6 = 1;
              }
              if ((puVar1[bVar7] & uVar6) != 0) {
                IncrementalMarking::ProcessBlackAllocatedObject
                          (*(IncrementalMarking **)(this + 0x828),local_68);
              }
            }
            iVar8 = HeapObject::SizeFromMap
                              ((HeapObject *)&local_68,
                               local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 - 1));
            uVar13 = uVar13 + (long)iVar8;
          } while (uVar13 < *(ulong *)(lVar2 + 0x10));
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 6);
    puVar4 = *(undefined8 **)(param_2 + 8);
    for (puVar11 = *(undefined8 **)param_2; puVar11 != puVar4; puVar11 = puVar11 + 1) {
      IncrementalMarking::ProcessBlackAllocatedObject
                (*(IncrementalMarking **)(this + 0x828),*puVar11);
    }
    plVar5 = *(long **)(param_3 + 8);
    for (plVar10 = *(long **)param_3; plVar10 != plVar5; plVar10 = plVar10 + 1) {
      IncrementalMarking::ProcessBlackAllocatedObject
                (*(IncrementalMarking **)(this + 0x828),*plVar10 + 1);
    }
  }
  return;
}

