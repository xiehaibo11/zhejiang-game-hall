
/* v8::internal::Heap::CompactWeakArrayLists(v8::internal::AllocationType) */

void __thiscall v8::internal::Heap::CompactWeakArrayLists(Heap *this,undefined4 param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  CanonicalHandleScope *pCVar10;
  ulong *puVar11;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar12;
  int iVar13;
  long lVar14;
  MemoryChunk *this_00;
  SlotSet *pSVar15;
  long *plVar16;
  ulong *local_a8;
  ulong local_a0 [2];
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *plStack_68;
  
  local_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  local_78 = (long *)0x0;
  HeapObjectIterator::HeapObjectIterator((HeapObjectIterator *)local_a0,this,0);
  plVar4 = local_90;
  uVar6 = HeapObjectIterator::NextObject((HeapObjectIterator *)local_a0);
  if ((plVar4 == (long *)0x0) || ((int)uVar6 == 0)) {
LAB_00f98cec:
    if ((int)uVar6 != 0) {
      do {
        uVar7 = uVar6 & 0xffffffff00000000 | 7;
        if (((*(short *)(uVar7 + *(uint *)(uVar6 - 1)) == 100) && ((*(uint *)(uVar6 + 7) & 1) != 0))
           && (*(short *)(uVar7 + *(uint *)((uVar6 & 0xffffffff00000000 |
                                            (ulong)*(uint *)(uVar6 + 7)) - 1)) == 0xa7)) {
          if (*(CanonicalHandleScope **)(this + 0xd68) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)(this + 0xd50);
            if (puVar8 == *(ulong **)(this + 0xd58)) {
              puVar8 = (ulong *)HandleScope::Extend((Isolate *)(this + -0x8850));
            }
            *(ulong **)(this + 0xd50) = puVar8 + 1;
            *puVar8 = uVar6;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(this + 0xd68),uVar6);
          }
          local_a8 = puVar8;
          if (local_70 < plStack_68) {
            *local_70 = (long)puVar8;
            local_70 = local_70 + 1;
          }
          else {
            std::__ndk1::
            vector<v8::internal::Handle<v8::internal::PrototypeInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::PrototypeInfo>>>
            ::__emplace_back_slow_path<v8::internal::Handle<v8::internal::PrototypeInfo>>
                      ((vector<v8::internal::Handle<v8::internal::PrototypeInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::PrototypeInfo>>>
                        *)&local_78,(Handle *)&local_a8);
          }
        }
        plVar4 = local_90;
        uVar6 = HeapObjectIterator::NextObject((HeapObjectIterator *)local_a0);
        if (plVar4 != (long *)0x0) {
          iVar5 = (int)uVar6;
          while ((iVar5 != 0 &&
                 (uVar7 = (**(code **)(*local_90 + 0x10))(local_90,uVar6), (uVar7 & 1) != 0))) {
            uVar6 = HeapObjectIterator::NextObject((HeapObjectIterator *)local_a0);
            iVar5 = (int)uVar6;
          }
        }
      } while ((int)uVar6 != 0);
    }
  }
  else {
    do {
      uVar7 = (**(code **)(*local_90 + 0x10))(local_90,uVar6);
      if ((uVar7 & 1) == 0) goto LAB_00f98cec;
      uVar6 = HeapObjectIterator::NextObject((HeapObjectIterator *)local_a0);
    } while ((int)uVar6 != 0);
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 8))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 8))();
  }
  plVar4 = local_80;
  local_80 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = local_70;
  pIVar1 = (Isolate *)(this + -0x8850);
  if (local_78 != local_70) {
    plVar16 = local_78;
    do {
      uVar6 = *(ulong *)*plVar16 & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)*plVar16 + 7);
      if (*(CanonicalHandleScope **)(this + 0xd68) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(this + 0xd50);
        if (puVar8 == *(ulong **)(this + 0xd58)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar1);
        }
        *(ulong **)(this + 0xd50) = puVar8 + 1;
        *puVar8 = uVar6;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0xd68),uVar6);
      }
      uVar7 = PrototypeUsers::Compact
                        (puVar8,this,JSObject::PrototypeRegistryCompactionCallback,param_2);
      uVar6 = *(ulong *)*plVar16;
      *(int *)(uVar6 + 7) = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar12 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        lVar14 = uVar6 + 7;
        this_00 = (MemoryChunk *)(uVar6 & 0xfffffffffffc0000);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          IncrementalMarking::RecordWriteSlow
                    (*(IncrementalMarking **)(*(long *)(this_00 + 0x18) + 0x828),uVar6,lVar14);
          uVar12 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
          uVar6 = extraout_x1;
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((ulong)this_00 | 8) & 0x18) == 0)) {
          pSVar15 = *(SlotSet **)(this_00 + 0x30);
          if (pSVar15 == (SlotSet *)0x0) {
            pSVar15 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>(this_00);
            uVar6 = extraout_x1_00;
          }
          uVar7 = lVar14 - (long)this_00;
          puVar9 = *(undefined8 **)(pSVar15 + (uVar7 >> 0xc) * 8);
          uVar12 = uVar7 >> 7 & 0x1f;
          if (puVar9 == (undefined8 *)0x0) {
            puVar9 = Malloced::operator_new((Malloced *)0x80,uVar6);
            puVar9[1] = 0;
            *puVar9 = 0;
            puVar9[3] = 0;
            puVar9[2] = 0;
            puVar9[5] = 0;
            puVar9[4] = 0;
            puVar9[7] = 0;
            puVar9[6] = 0;
            puVar9[9] = 0;
            puVar9[8] = 0;
            puVar9[0xb] = 0;
            puVar9[10] = 0;
            puVar9[0xd] = 0;
            puVar9[0xc] = 0;
            puVar9[0xf] = 0;
            puVar9[0xe] = 0;
            *(undefined8 **)(pSVar15 + (uVar7 >> 0xc) * 8) = puVar9;
          }
          uVar2 = *(uint *)((long)puVar9 + uVar12 * 4);
          uVar3 = 1 << (ulong)((uint)uVar7 >> 2 & 0x1f);
          if ((uVar2 & uVar3) == 0) {
            *(uint *)((long)puVar9 + uVar12 * 4) = uVar2 | uVar3;
          }
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar4 != plVar16);
  }
  pCVar10 = *(CanonicalHandleScope **)(this + 0xd68);
  uVar6 = *(ulong *)(this + -0x78f8);
  if (pCVar10 == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(this + 0xd50);
    if (puVar8 == *(ulong **)(this + 0xd58)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(this + 0xd50) = puVar8 + 1;
    *puVar8 = uVar6;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup(pCVar10,uVar6);
    uVar6 = *puVar8;
  }
  if (1 < *(uint *)(uVar6 + 7)) {
    local_a0[0] = uVar6;
    iVar5 = WeakArrayList::CountLiveWeakReferences((WeakArrayList *)local_a0);
    uVar6 = *puVar8;
    if (iVar5 != *(int *)(uVar6 + 7) >> 1) {
      pCVar10 = *(CanonicalHandleScope **)(this + 0xd68);
      uVar6 = *(ulong *)(this + -0x8428);
      if (pCVar10 == (CanonicalHandleScope *)0x0) {
        puVar11 = *(ulong **)(this + 0xd50);
        if (puVar11 == *(ulong **)(this + 0xd58)) {
          puVar11 = (ulong *)HandleScope::Extend(pIVar1);
        }
        *(ulong **)(this + 0xd50) = puVar11 + 1;
        *puVar11 = uVar6;
      }
      else {
        puVar11 = (ulong *)CanonicalHandleScope::Lookup(pCVar10,uVar6);
      }
      puVar11 = (ulong *)WeakArrayList::EnsureSpace(pIVar1,puVar11,iVar5,param_2);
      uVar6 = *puVar8;
      if (*(int *)(uVar6 + 7) < 2) {
        iVar5 = 0;
      }
      else {
        iVar13 = 0;
        lVar14 = 0;
        iVar5 = 0;
        do {
          uVar2 = *(uint *)(uVar6 + (long)iVar13 + 0xb);
          if (uVar2 != 3) {
            local_a0[0] = *puVar11;
            WeakArrayList::Set((WeakArrayList *)local_a0,iVar5,
                               uVar6 & 0xffffffff00000000 | (ulong)uVar2,4);
            uVar6 = *puVar8;
            iVar5 = iVar5 + 1;
          }
          lVar14 = lVar14 + 1;
          iVar13 = iVar13 + 4;
        } while (lVar14 < *(int *)(uVar6 + 7) >> 1);
      }
      *(int *)(*puVar11 + 7) = iVar5 << 1;
      uVar6 = *puVar11;
    }
  }
  *(ulong *)(this + -0x78f8) = uVar6;
  if (local_78 != (long *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  return;
}

