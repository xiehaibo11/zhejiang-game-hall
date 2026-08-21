
/* v8::internal::NativeObjectsExplorer::IterateAndExtractReferences(v8::internal::HeapSnapshotGenerator*)
    */

undefined8 __thiscall
v8::internal::NativeObjectsExplorer::IterateAndExtractReferences
          (NativeObjectsExplorer *this,HeapSnapshotGenerator *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  Node *pNVar7;
  long lVar8;
  char *pcVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  uint *puVar14;
  StringsStorage *this_00;
  long lVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  undefined **local_b0;
  long *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  HandleScope aHStack_78 [24];
  
  *(HeapSnapshotGenerator **)(this + 0x28) = param_1;
  if ((FLAG_heap_profiler_use_embedder_graph != '\0') &&
     (*(long *)(**(long **)(this + 8) + 0x70) != *(long *)(**(long **)(this + 8) + 0x78))) {
    v8::HandleScope::HandleScope(aHStack_78,*(Isolate **)this);
    plStack_a0 = (long *)0x0;
    local_a8 = (long *)0x0;
    puStack_90 = (undefined8 *)0x0;
    local_98 = 0;
    local_b0 = &PTR_V8Node_01cb75e8;
    uStack_80 = 0;
    local_88 = (undefined8 *)0x0;
    HeapProfiler::BuildEmbedderGraph
              ((HeapProfiler *)**(undefined8 **)(this + 8),*(Isolate **)this,
               (EmbedderGraph *)&local_b0);
    plVar4 = plStack_a0;
    puVar2 = local_88;
    for (plVar13 = local_a8; local_88 = puVar2, puVar3 = puStack_90, plVar13 != plVar4;
        plVar13 = plVar13 + 1) {
      uVar5 = (**(code **)(*(long *)*plVar13 + 0x28))();
      if ((uVar5 & 1) != 0) {
        puVar14 = *(uint **)(*(long *)(this + 8) + 8);
        uVar6 = EntryForEmbedderGraphNode(this,(Node *)*plVar13);
        uVar17 = puVar14[1];
        lVar15 = *(long *)(puVar14 + 4);
        puVar14[1] = uVar17 + 1;
        lVar8 = *(long *)(lVar15 + 0x108);
        lVar11 = *(long *)(lVar15 + 0x110);
        uVar5 = 0;
        if (lVar11 - lVar8 != 0) {
          uVar5 = (lVar11 - lVar8 >> 3) * 0xaa - 1;
        }
        uVar12 = *(long *)(lVar15 + 0x128) + *(long *)(lVar15 + 0x120);
        if (uVar5 == uVar12) {
          std::__ndk1::
          deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
          __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                               *)(lVar15 + 0x100));
          lVar8 = *(long *)(lVar15 + 0x108);
          lVar11 = *(long *)(lVar15 + 0x110);
          uVar12 = *(long *)(lVar15 + 0x120) + *(long *)(lVar15 + 0x128);
        }
        if (lVar11 == lVar8) {
          puVar10 = (uint *)0x0;
        }
        else {
          puVar10 = (uint *)(*(long *)(lVar8 + (uVar12 / 0xaa) * 8) + (uVar12 % 0xaa) * 0x18);
        }
        uVar1 = *puVar14;
        *(undefined8 *)(puVar10 + 2) = uVar6;
        puVar10[4] = uVar17 + 1;
        *puVar10 = uVar1 >> 1 & 0x7ffffff8 | 1;
        *(long *)(lVar15 + 0x128) = *(long *)(lVar15 + 0x128) + 1;
      }
      pNVar7 = (Node *)(**(code **)(*(long *)*plVar13 + 0x20))();
      if (pNVar7 != (Node *)0x0) {
        puVar14 = (uint *)EntryForEmbedderGraphNode(this,pNVar7);
        plVar16 = (long *)*plVar13;
        this_00 = *(StringsStorage **)(this + 0x10);
        lVar8 = (**(code **)(*plVar16 + 0x38))(plVar16);
        pcVar9 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16);
        if (lVar8 == 0) {
          uVar6 = StringsStorage::GetCopy(this_00,pcVar9);
        }
        else {
          uVar6 = StringsStorage::GetFormatted((char *)this_00,"%s %s",lVar8);
        }
        pcVar9 = strchr(*(char **)(puVar14 + 6),0x2f);
        if (pcVar9 != (char *)0x0) {
          uVar6 = StringsStorage::GetFormatted((char *)this_00,"%s %s",uVar6,pcVar9);
        }
        *(undefined8 *)(puVar14 + 6) = uVar6;
        uVar5 = (**(code **)(*(long *)*plVar13 + 0x28))();
        uVar17 = 8;
        if ((uVar5 & 1) != 0) {
          uVar17 = 9;
        }
        *puVar14 = *puVar14 & 0xfffffff0 | uVar17;
      }
      puVar2 = local_88;
    }
    for (; puVar3 != puVar2; puVar3 = puVar3 + 3) {
      puVar14 = (uint *)EntryForEmbedderGraphNode(this,(Node *)*puVar3);
      if ((puVar14 != (uint *)0x0) &&
         (lVar8 = EntryForEmbedderGraphNode(this,(Node *)puVar3[1]), lVar8 != 0)) {
        if ((char *)puVar3[2] == (char *)0x0) {
          uVar17 = puVar14[1];
          lVar18 = *(long *)(puVar14 + 4);
          puVar14[1] = uVar17 + 1;
          lVar11 = *(long *)(lVar18 + 0x108);
          lVar15 = *(long *)(lVar18 + 0x110);
          uVar5 = 0;
          if (lVar15 - lVar11 != 0) {
            uVar5 = (lVar15 - lVar11 >> 3) * 0xaa - 1;
          }
          uVar12 = *(long *)(lVar18 + 0x128) + *(long *)(lVar18 + 0x120);
          if (uVar5 == uVar12) {
            std::__ndk1::
            deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
            __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                                 *)(lVar18 + 0x100));
            lVar11 = *(long *)(lVar18 + 0x108);
            lVar15 = *(long *)(lVar18 + 0x110);
            uVar12 = *(long *)(lVar18 + 0x120) + *(long *)(lVar18 + 0x128);
          }
          if (lVar15 == lVar11) {
            puVar10 = (uint *)0x0;
          }
          else {
            puVar10 = (uint *)(*(long *)(lVar11 + (uVar12 / 0xaa) * 8) + (uVar12 % 0xaa) * 0x18);
          }
          uVar1 = *puVar14;
          *(long *)(puVar10 + 2) = lVar8;
          puVar10[4] = uVar17 + 1;
          *puVar10 = uVar1 >> 1 & 0x7ffffff8 | 1;
          *(long *)(lVar18 + 0x128) = *(long *)(lVar18 + 0x128) + 1;
        }
        else {
          uVar6 = StringsStorage::GetCopy(*(StringsStorage **)(this + 0x10),(char *)puVar3[2]);
          lVar18 = *(long *)(puVar14 + 4);
          puVar14[1] = puVar14[1] + 1;
          lVar11 = *(long *)(lVar18 + 0x108);
          lVar15 = *(long *)(lVar18 + 0x110);
          uVar5 = 0;
          if (lVar15 - lVar11 != 0) {
            uVar5 = (lVar15 - lVar11 >> 3) * 0xaa - 1;
          }
          uVar12 = *(long *)(lVar18 + 0x128) + *(long *)(lVar18 + 0x120);
          if (uVar5 == uVar12) {
            std::__ndk1::
            deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
            __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                                 *)(lVar18 + 0x100));
            lVar11 = *(long *)(lVar18 + 0x108);
            lVar15 = *(long *)(lVar18 + 0x110);
            uVar12 = *(long *)(lVar18 + 0x120) + *(long *)(lVar18 + 0x128);
          }
          if (lVar15 == lVar11) {
            puVar10 = (uint *)0x0;
          }
          else {
            puVar10 = (uint *)(*(long *)(lVar11 + (uVar12 / 0xaa) * 8) + (uVar12 % 0xaa) * 0x18);
          }
          uVar17 = *puVar14;
          *(long *)(puVar10 + 2) = lVar8;
          *(undefined8 *)(puVar10 + 4) = uVar6;
          *puVar10 = uVar17 >> 1 & 0x7ffffff8 | 3;
          *(long *)(lVar18 + 0x128) = *(long *)(lVar18 + 0x128) + 1;
        }
      }
    }
    local_b0 = &PTR_V8Node_01cb75e8;
    if (puStack_90 != (undefined8 *)0x0) {
      local_88 = puStack_90;
      operator_delete(puStack_90);
    }
    plVar4 = local_a8;
    plVar13 = plStack_a0;
    if (local_a8 != (long *)0x0) {
      while (plVar13 != plVar4) {
        plVar13 = plVar13 + -1;
        plVar16 = (long *)*plVar13;
        *plVar13 = 0;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 8))();
        }
      }
      plStack_a0 = plVar4;
      operator_delete(local_a8);
    }
    v8::HandleScope::~HandleScope(aHStack_78);
  }
  *(undefined8 *)(this + 0x28) = 0;
  return 1;
}

