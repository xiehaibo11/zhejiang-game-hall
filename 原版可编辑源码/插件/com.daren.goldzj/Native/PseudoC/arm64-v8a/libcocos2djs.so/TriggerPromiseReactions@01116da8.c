
/* v8::internal::JSPromise::TriggerPromiseReactions(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PromiseReaction::Type) */

Isolate * v8::internal::JSPromise::TriggerPromiseReactions
                    (Isolate *param_1,ulong *param_2,ulong *param_3,int param_4)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar9 = *param_2;
  if ((uVar9 & 1) == 0) {
    uVar11 = 0;
  }
  else {
    if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 99) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","reactions->IsSmi() || reactions->IsPromiseReaction()");
    }
    uVar12 = 0;
    do {
      uVar11 = uVar9;
      puVar10 = (uint *)(uVar11 + 3);
      uVar2 = *puVar10;
      *puVar10 = (uint)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar11,puVar10,uVar12);
          uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar11,puVar10,uVar12);
        }
      }
      uVar9 = uVar11 & 0xffffffff00000000 | (ulong)uVar2;
      uVar12 = uVar11;
    } while ((uVar2 & 1) != 0);
  }
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar11;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
    uVar11 = *puVar3;
  }
  do {
    if ((uVar11 & 1) == 0) {
      return param_1 + 0xa0;
    }
    uVar9 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 3);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar9;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    }
    uVar9 = *puVar3;
    if (param_4 == 0) {
      uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar1;
        if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar5 + 1;
        *puVar5 = uVar9;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
      }
      uVar9 = *puVar3;
      uVar2 = *(uint *)(uVar9 + 7);
    }
    else {
      uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar1;
        if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar5 + 1;
        *puVar5 = uVar9;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
      }
      uVar9 = *puVar3;
      uVar2 = *(uint *)(uVar9 + 0xb);
    }
    uVar9 = uVar9 & 0xffffffff00000000 | (ulong)uVar2;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar9;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    }
    if (((*(ushort *)((*puVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar5 - 1)) < 0xa9) ||
        (puVar7 = (ulong *)JSReceiver::GetContextForMicrotask(puVar5), puVar7 == (ulong *)0x0)) &&
       ((*(ushort *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1)) < 0xa9 ||
        (puVar7 = (ulong *)JSReceiver::GetContextForMicrotask(puVar6), puVar7 == (ulong *)0x0)))) {
      uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar1;
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar7 + 1;
        *puVar7 = uVar9;
        uVar9 = *puVar3;
        goto joined_r0x0111706c;
      }
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
      uVar9 = *puVar3;
      if (param_4 != 0) goto LAB_01117070;
LAB_011170f0:
      uVar12 = *(ulong *)(param_1 + 0xc80);
      if ((int)uVar12 == 0) {
        *(undefined4 *)(uVar9 - 1) = 0;
      }
      else {
        Heap::VerifyObjectLayoutChange((Heap *)(uVar9 & 0xffffffff00000000 | 0x8850),uVar9,uVar12);
        *(int *)(uVar9 - 1) = (int)uVar12;
        if (((uVar12 & 1) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
        {
          Heap_MarkingBarrierSlow(uVar9,0,uVar12);
        }
      }
      uVar12 = *puVar3;
      uVar9 = *param_3;
      *(int *)(uVar12 + 3) = (int)uVar9;
      if ((uVar9 & 1) != 0) {
        uVar11 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar12,uVar12 + 3,uVar9);
          uVar11 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar12,uVar12 + 3,uVar9);
        }
      }
      uVar9 = *puVar3;
      uVar12 = *puVar7;
      *(int *)(uVar9 + 7) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar11 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        lVar8 = uVar9 + 7;
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,lVar8,uVar12);
          uVar11 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
LAB_0111736c:
          Heap_GenerationalBarrierSlow(uVar9,lVar8,uVar12);
        }
      }
    }
    else {
      uVar9 = *puVar3;
joined_r0x0111706c:
      if (param_4 == 0) goto LAB_011170f0;
LAB_01117070:
      uVar12 = *(ulong *)(param_1 + 0xc88);
      if ((int)uVar12 == 0) {
        *(undefined4 *)(uVar9 - 1) = 0;
      }
      else {
        Heap::VerifyObjectLayoutChange((Heap *)(uVar9 & 0xffffffff00000000 | 0x8850),uVar9,uVar12);
        *(int *)(uVar9 - 1) = (int)uVar12;
        if (((uVar12 & 1) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
        {
          Heap_MarkingBarrierSlow(uVar9,0,uVar12);
        }
      }
      uVar12 = *puVar3;
      uVar9 = *param_3;
      *(int *)(uVar12 + 3) = (int)uVar9;
      if ((uVar9 & 1) != 0) {
        uVar11 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar12,uVar12 + 3,uVar9);
          uVar11 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar12,uVar12 + 3,uVar9);
        }
      }
      uVar12 = *puVar3;
      uVar9 = *puVar7;
      *(int *)(uVar12 + 7) = (int)uVar9;
      if ((uVar9 & 1) != 0) {
        uVar11 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar12,uVar12 + 7,uVar9);
          uVar11 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar12,uVar12 + 7,uVar9);
        }
      }
      uVar9 = *puVar3;
      uVar12 = *puVar5;
      *(int *)(uVar9 + 0xb) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar11 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        lVar8 = uVar9 + 0xb;
        if (((uint)uVar11 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,lVar8,uVar12);
          uVar11 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar11 & 0x18) == 0) || ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) != 0))
        goto LAB_01117370;
        goto LAB_0111736c;
      }
    }
LAB_01117370:
    if (*(MicrotaskQueue **)(*puVar7 + 0x423) != (MicrotaskQueue *)0x0) {
      MicrotaskQueue::EnqueueMicrotask(*(MicrotaskQueue **)(*puVar7 + 0x423),*puVar3);
    }
    uVar11 = *puVar4;
    puVar3 = puVar4;
  } while( true );
}

