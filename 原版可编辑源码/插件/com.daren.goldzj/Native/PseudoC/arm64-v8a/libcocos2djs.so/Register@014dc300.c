
/* v8::internal::JSFinalizationGroup::Register(v8::internal::Handle<v8::internal::JSFinalizationGroup>,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Isolate*) */

void v8::internal::JSFinalizationGroup::Register
               (ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,Factory *param_5)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_68;
  
  puVar2 = (ulong *)Factory::NewWeakCell(param_5);
  uVar9 = *puVar2;
  uVar8 = *param_1;
  *(int *)(uVar9 + 3) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 3,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 3,uVar8);
    }
  }
  uVar9 = *puVar2;
  uVar8 = *param_2;
  *(int *)(uVar9 + 7) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 7,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 7,uVar8);
    }
  }
  uVar9 = *puVar2;
  uVar8 = *param_3;
  *(int *)(uVar9 + 0xb) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xb,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xb,uVar8);
    }
  }
  uVar9 = *puVar2;
  uVar8 = *(ulong *)(param_5 + 0xa0);
  *(int *)(uVar9 + 0xf) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xf,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xf,uVar8);
    }
  }
  uVar9 = *puVar2;
  uVar8 = *(ulong *)(param_5 + 0xa0);
  *(int *)(uVar9 + 0x13) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x13,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0x13,uVar8);
    }
  }
  uVar9 = *puVar2;
  uVar8 = *param_4;
  *(int *)(uVar9 + 0x17) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x17,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0x17,uVar8);
    }
  }
  uVar9 = *puVar2;
  uVar8 = *(ulong *)(param_5 + 0xa0);
  *(int *)(uVar9 + 0x1b) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x1b,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0x1b,uVar8);
    }
  }
  uVar9 = *puVar2;
  uVar8 = *(ulong *)(param_5 + 0xa0);
  *(int *)(uVar9 + 0x1f) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x1f,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0x1f,uVar8);
    }
  }
  uVar8 = *param_1;
  uVar9 = *puVar2;
  uVar1 = *(uint *)(uVar8 + 0x13);
  *(uint *)(uVar9 + 0x13) = uVar1;
  if ((uVar1 & 1) != 0) {
    uVar8 = uVar8 & 0xffffffff00000000;
    uVar7 = uVar8 | uVar1;
    uVar8 = uVar8 | (ulong)uVar1 & 0xfffffffffffc0000;
    uVar5 = *(ulong *)(uVar8 + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x13,uVar7);
      uVar5 = *(ulong *)(uVar8 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0x13,uVar7);
    }
  }
  uVar9 = (ulong)*(uint *)(*param_1 + 0x13);
  uVar8 = *param_1 & 0xffffffff00000000;
  uVar5 = uVar8 | uVar9;
  if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0xa8) {
    uVar7 = *puVar2;
    *(int *)(uVar5 + 0xf) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xf,uVar7);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) &&
         ((*(byte *)((uVar8 | uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xf,uVar7);
      }
    }
  }
  uVar9 = *param_1;
  uVar8 = *puVar2;
  *(int *)(uVar9 + 0x13) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x13,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0x13,uVar8);
      uVar8 = *param_4;
      iVar4 = (int)uVar8;
      goto joined_r0x014dc780;
    }
  }
  uVar8 = *param_4;
  iVar4 = (int)uVar8;
joined_r0x014dc780:
  if (((uVar8 & 1) == 0) || (iVar4 != *(int *)(param_5 + 0xa0))) {
    uVar1 = *(uint *)(*param_1 + 0x1b);
    if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_5 + 0xa0))) {
      uVar8 = *param_1 & 0xffffffff00000000 | (ulong)uVar1;
      if (*(CanonicalHandleScope **)(param_5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(param_5 + 0x95a0);
        if (puVar3 == *(ulong **)(param_5 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend((Isolate *)param_5);
        }
        *(ulong **)(param_5 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar8;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_5 + 0x95b8),uVar8);
      }
    }
    else {
      puVar3 = (ulong *)HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                        ::New(param_5,1,0,0);
    }
    local_68 = *puVar3;
    uVar8 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
            Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                    *)&local_68,param_4);
    if (((uVar8 & 1) != 0) &&
       (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0xa8)) {
      uVar9 = *puVar2;
      *(int *)(uVar8 + 0x1b) = (int)uVar9;
      if ((uVar9 & 1) != 0) {
        uVar5 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x1b,uVar9);
          uVar5 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x1b,uVar9);
        }
      }
      uVar5 = *puVar2;
      *(int *)(uVar5 + 0x1f) = (int)uVar8;
      uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x1f,uVar8);
        uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x1f,uVar8);
      }
    }
    puVar2 = (ulong *)ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                      ::Put(puVar3,param_4,puVar2);
    uVar9 = *param_1;
    uVar8 = *puVar2;
    *(int *)(uVar9 + 0x1b) = (int)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x1b,uVar8);
        uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0x1b,uVar8);
      }
    }
  }
  return;
}

