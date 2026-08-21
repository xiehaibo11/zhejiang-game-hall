
/* v8::internal::MarkCompactCollector::ClearJSWeakRefs() */

void __thiscall v8::internal::MarkCompactCollector::ClearJSWeakRefs(MarkCompactCollector *this)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_e0;
  ulong local_d8;
  undefined **local_d0 [4];
  undefined ***local_b0;
  undefined **local_a0 [4];
  undefined ***local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (FLAG_harmony_weak_refs != '\0') {
    local_d8 = 0;
    uVar2 = Worklist<v8::internal::JSWeakRef,64>::Pop
                      ((Worklist<v8::internal::JSWeakRef,64> *)(this + 0x1b88),0,
                       (JSWeakRef *)&local_d8);
    while ((uVar2 & 1) != 0) {
      puVar3 = (uint *)(local_d8 + 0xb);
      uVar2 = local_d8 & 0xffffffff00000000 | (ulong)*puVar3 & 0xfffffffffffc0000;
      uVar6 = *puVar3 - uVar2;
      if ((*(uint *)(*(long *)(uVar2 + 0x10) + (uVar6 >> 7 & 0x1ffffff) * 4) >>
           (ulong)((uint)(uVar6 >> 2) & 0x1f) & 1) == 0) {
        uVar2 = *(ulong *)(*(long *)(this + 8) + -0x87b0);
        *puVar3 = (uint)uVar2;
        if ((uVar2 & 1) != 0) {
          uVar6 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
          lVar4 = local_d8 + 0xb;
          if (((uint)uVar6 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(local_d8,lVar4,uVar2);
            uVar6 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
            lVar4 = local_d8 + 0xb;
          }
          if (((uVar6 & 0x18) != 0) &&
             ((*(byte *)((local_d8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(local_d8,lVar4,uVar2);
          }
        }
      }
      else if (((uint)*(undefined8 *)(uVar2 + 8) >> 6 & 1) != 0) {
        uVar2 = *(ulong *)((MemoryChunk *)(local_d8 & 0xfffffffffffc0000) + 8);
        if ((((uint)uVar2 >> 0xf & 1) != 0) || ((uVar2 & 0x58) == 0)) {
          RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                    ((MemoryChunk *)(local_d8 & 0xfffffffffffc0000),(ulong)puVar3);
        }
      }
      uVar2 = Worklist<v8::internal::JSWeakRef,64>::Pop
                        ((Worklist<v8::internal::JSWeakRef,64> *)(this + 0x1b88),0,
                         (JSWeakRef *)&local_d8);
    }
    local_e0 = 0;
    uVar2 = Worklist<v8::internal::WeakCell,64>::Pop
                      ((Worklist<v8::internal::WeakCell,64> *)(this + 0x1e40),0,
                       (WeakCell *)&local_e0);
    if ((uVar2 & 1) != 0) {
      do {
        puVar3 = (uint *)(local_e0 + 7);
        uVar2 = (ulong)*puVar3;
        uVar7 = local_e0 & 0xffffffff00000000 | uVar2 & 0xfffffffffffc0000;
        uVar6 = uVar2 - uVar7;
        if ((*(uint *)(*(long *)(uVar7 + 0x10) + (uVar6 >> 7 & 0x1ffffff) * 4) >>
             (ulong)((uint)(uVar6 >> 2) & 0x1f) & 1) == 0) {
          uVar2 = local_e0 & 0xffffffff00000000 | (ulong)*(uint *)(local_e0 + 3);
          if ((*(byte *)(uVar2 + 0x23) >> 1 & 1) == 0) {
            local_a0[0] = &PTR_FUN_01ca8d90;
            local_80 = local_a0;
            Heap::AddDirtyJSFinalizationGroup(*(Heap **)(this + 8),uVar2,local_a0);
            if (local_a0 == local_80) {
              pcVar5 = (code *)(*local_80)[4];
            }
            else {
              if (local_80 == (undefined ***)0x0) goto LAB_00fc4c18;
              pcVar5 = (code *)(*local_80)[5];
            }
            (*pcVar5)();
          }
LAB_00fc4c18:
          local_d0[0] = &PTR_FUN_01ca8dd8;
          local_b0 = local_d0;
          WeakCell::Nullify((WeakCell *)&local_e0,*(long *)(this + 8) + -0x8850,local_d0);
          if (local_d0 == local_b0) {
            pcVar5 = (code *)(*local_b0)[4];
          }
          else {
            if (local_b0 == (undefined ***)0x0) goto LAB_00fc4b54;
            pcVar5 = (code *)(*local_b0)[5];
          }
          (*pcVar5)();
        }
        else if (((uint)*(undefined8 *)
                         (((ulong)puVar3 & 0xffffffff00000000 | uVar2 & 0xfffc0000) + 8) >> 6 & 1)
                 != 0) {
          uVar2 = *(ulong *)((MemoryChunk *)(local_e0 & 0xfffffffffffc0000) + 8);
          if ((((uint)uVar2 >> 0xf & 1) != 0) || ((uVar2 & 0x58) == 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      ((MemoryChunk *)(local_e0 & 0xfffffffffffc0000),(ulong)puVar3);
          }
        }
LAB_00fc4b54:
        uVar2 = Worklist<v8::internal::WeakCell,64>::Pop
                          ((Worklist<v8::internal::WeakCell,64> *)(this + 0x1e40),0,
                           (WeakCell *)&local_e0);
      } while ((uVar2 & 1) != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

