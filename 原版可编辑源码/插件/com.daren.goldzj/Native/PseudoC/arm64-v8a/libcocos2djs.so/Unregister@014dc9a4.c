
/* v8::internal::JSFinalizationGroup::Unregister(v8::internal::Handle<v8::internal::JSFinalizationGroup>,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::Isolate*) */

bool v8::internal::JSFinalizationGroup::Unregister
               (ulong *param_1,undefined8 param_2,Isolate *param_3)

{
  uint uVar1;
  bool bVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong local_58;
  
  uVar1 = *(uint *)(*param_1 + 0x1b);
  if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_3 + 0xa0))) {
    uVar7 = *param_1 & 0xffffffff00000000 | (ulong)uVar1;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(param_3 + 0x95a0);
      if (puVar3 == *(ulong **)(param_3 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar7;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
    }
    local_58 = *puVar3;
    uVar7 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
            Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                    *)&local_58,param_2);
    if ((uVar7 & 1) != 0) {
      uVar8 = *(ulong *)(param_3 + 0xa0);
      puVar9 = (ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
LAB_014dca6c:
      do {
        if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0xa8)
        break;
        local_58 = uVar7;
        WeakCell::RemoveFromFinalizationGroupCells((WeakCell *)&local_58,param_3);
        uVar1 = *(uint *)(local_58 + 0x1f);
        uVar6 = (undefined4)uVar8;
        *(undefined4 *)(local_58 + 0x1b) = uVar6;
        uVar7 = local_58 & 0xffffffff00000000 | (ulong)uVar1;
        if ((uVar8 & 1) == 0) {
          *(undefined4 *)(local_58 + 0x1f) = uVar6;
        }
        else {
          uVar5 = *puVar9;
          lVar4 = local_58 + 0x1b;
          if (((uint)uVar5 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(local_58,lVar4,uVar8);
            uVar5 = *puVar9;
            lVar4 = local_58 + 0x1b;
          }
          if (((uVar5 & 0x18) != 0) &&
             ((*(byte *)((local_58 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(local_58,lVar4,uVar8);
          }
          *(undefined4 *)(local_58 + 0x1f) = uVar6;
          uVar5 = *puVar9;
          if (((uint)uVar5 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(local_58,local_58 + 0x1f,uVar8);
            uVar5 = *puVar9;
          }
          if (((uVar5 & 0x18) != 0) &&
             ((*(byte *)((local_58 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(local_58,local_58 + 0x1f,uVar8);
            if ((uVar1 & 1) == 0) break;
            goto LAB_014dca6c;
          }
        }
      } while ((uVar1 & 1) != 0);
    }
    puVar3 = (ulong *)ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                      ::Remove(param_3,puVar3,param_2,&local_58);
    uVar8 = *param_1;
    uVar7 = *puVar3;
    *(int *)(uVar8 + 0x1b) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x1b,uVar7);
        uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x1b,uVar7);
      }
    }
    bVar2 = local_58._0_1_ !=
            (ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>)
            0x0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

