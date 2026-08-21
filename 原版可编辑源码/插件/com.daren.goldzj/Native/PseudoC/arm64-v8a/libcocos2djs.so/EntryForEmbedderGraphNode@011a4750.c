
/* v8::internal::NativeObjectsExplorer::EntryForEmbedderGraphNode(v8::EmbedderGraph::Node*) */

long __thiscall
v8::internal::NativeObjectsExplorer::EntryForEmbedderGraphNode
          (NativeObjectsExplorer *this,Node *param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  Node *pNVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  void *local_40;
  long lStack_38;
  
  pNVar5 = (Node *)(**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_40 = (void *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
  if (pNVar5 != (Node *)0x0) {
    param_1 = pNVar5;
  }
  uVar6 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  if ((uVar6 & 1) != 0) {
    lVar7 = HeapSnapshotGenerator::FindOrAddEntry
                      (*(HeapSnapshotGenerator **)(this + 0x28),param_1,
                       *(HeapEntriesAllocator **)(this + 0x20));
    return lVar7;
  }
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) == 0) {
    lVar7 = 0;
  }
  else {
    uVar9 = *(ulong *)(*(long *)(this + 0x28) + 0x120);
    if (uVar9 != 0) {
      uVar11 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
      uVar18 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar9 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar9
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar9
                                                                                        ))))))));
      uVar17 = NEON_uaddlv(uVar18,1);
      uVar12 = (uVar11 ^ uVar6 >> 0x20 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
      uVar11 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
      uVar12 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
      if (uVar11 < 2) {
        uVar13 = uVar9 - 1 & uVar12;
      }
      else {
        uVar13 = uVar12;
        if (uVar9 <= uVar12) {
          uVar13 = 0;
          if (uVar9 != 0) {
            uVar13 = uVar12 / uVar9;
          }
          uVar13 = uVar12 - uVar13 * uVar9;
        }
      }
      plVar14 = *(long **)(*(long *)(*(long *)(this + 0x28) + 0x118) + uVar13 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        do {
          uVar16 = plVar14[1];
          if (uVar16 == uVar12) {
            if (plVar14[2] == uVar6) {
              lVar7 = plVar14[3];
              goto joined_r0x011a4998;
            }
          }
          else {
            if (uVar11 < 2) {
              uVar16 = uVar16 & uVar9 - 1;
            }
            else if (uVar9 <= uVar16) {
              uVar4 = 0;
              if (uVar9 != 0) {
                uVar4 = uVar16 / uVar9;
              }
              uVar16 = uVar16 - uVar4 * uVar9;
            }
            if (uVar16 != uVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
    lVar7 = 0;
joined_r0x011a4998:
    if (local_40 != (void *)0x0) {
      lVar10 = *(long *)(this + 0x18);
      lVar8 = uVar6 - 1;
      uVar1 = ~(uint)lVar8 + (uint)lVar8 * 0x8000;
      uVar1 = (uVar1 ^ uVar1 >> 0xc) * 5;
      uVar1 = (uVar1 ^ uVar1 >> 4) * 0x809;
      uVar3 = *(int *)(lVar10 + 0x10) - 1;
      uVar6 = (ulong)(uVar3 & (uVar1 & 0x3fffffff ^ uVar1 >> 0x10));
      plVar14 = (long *)(*(long *)(lVar10 + 8) + uVar6 * 0x18);
      lVar15 = *plVar14;
      while (lVar15 != 0) {
        if (lVar15 == lVar8) goto LAB_011a494c;
        uVar6 = (ulong)((int)uVar6 + 1U & uVar3);
        plVar14 = (long *)(*(long *)(lVar10 + 8) + uVar6 * 0x18);
        lVar15 = *plVar14;
      }
      lVar8 = 0;
LAB_011a494c:
      plVar2 = (long *)0x0;
      if (lVar8 != 0) {
        plVar2 = plVar14;
      }
      lStack_38 = plVar2[1];
      auVar19 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,unsigned_long>>>
                ::__emplace_unique_key_args<void*,std::__ndk1::pair<void*const,unsigned_long>>
                          ((__hash_table<std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,unsigned_long>>>
                            *)(lVar10 + 0x50),&local_40,(pair *)&local_40);
      if ((auVar19._8_8_ & 0xff) == 0) {
        *(long *)(auVar19._0_8_ + 0x18) = plVar2[1];
      }
    }
  }
  return lVar7;
}

