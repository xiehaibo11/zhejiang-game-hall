
/* v8::internal::Factory::NewJSBoundFunction(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::Object>,
   v8::internal::Vector<v8::internal::Handle<v8::internal::Object> >) */

ulong * v8::internal::Factory::NewJSBoundFunction
                  (Isolate *param_1,Isolate *param_2,ulong *param_3,undefined8 *param_4,uint param_5
                  )

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  Isolate *pIVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 local_98;
  Isolate *local_90;
  undefined8 uStack_88;
  Isolate *local_80;
  undefined4 local_78;
  char local_74;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pIVar1 = param_1 + 0x95a0;
  if ((int)param_5 < 0xfffe) {
    uStack_88 = 0;
    local_74 = '\0';
    local_78 = 1;
    local_70 = 0;
    local_90 = param_1;
    local_80 = param_2;
    if (param_2 == (Isolate *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!handle_.is_null()");
    }
    do {
      uVar7 = PrototypeIterator::HasAccess((PrototypeIterator *)&local_90);
      if ((uVar7 & 1) == 0) {
        pIVar11 = local_90 + 0xb0;
        goto LAB_00f7b928;
      }
      uVar7 = PrototypeIterator::AdvanceFollowingProxiesIgnoringAccessChecks
                        ((PrototypeIterator *)&local_90);
      if ((uVar7 & 1) == 0) goto LAB_00f7b8c4;
    } while (local_74 == '\0');
    pIVar11 = local_80;
    if (local_80 == (Isolate *)0x0) {
LAB_00f7b8c4:
      puVar12 = (ulong *)0x0;
    }
    else {
LAB_00f7b928:
      local_98 = *(undefined8 *)param_2;
      puVar5 = (undefined8 *)JSReceiver::GetCreationContext((JSReceiver *)&local_98);
      SaveAndSwitchContext::SaveAndSwitchContext((SaveAndSwitchContext *)&local_90,param_1,*puVar5);
      if (param_5 == 0) {
        pIVar6 = param_1 + 0x168;
      }
      else {
        pIVar6 = (Isolate *)
                 NewFixedArrayWithFiller
                           ((Factory *)param_1,0xc,param_5,*(undefined8 *)(param_1 + 0xa0),0);
        if (0 < (int)param_5) {
          lVar10 = 0;
          do {
            uVar13 = *(ulong *)pIVar6;
            uVar7 = *(ulong *)*param_4;
            lVar8 = uVar13 + (long)(int)lVar10;
            *(int *)(lVar8 + 7) = (int)uVar7;
            if ((uVar7 & 1) != 0) {
              uVar9 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
              lVar8 = lVar8 + 7;
              if (((uint)uVar9 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar13,lVar8,uVar7);
                uVar9 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar9 & 0x18) != 0) &&
                 ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar13,lVar8,uVar7);
              }
            }
            lVar10 = lVar10 + 4;
            param_4 = param_4 + 1;
          } while ((ulong)param_5 * 4 - lVar10 != 0);
        }
      }
      uVar7 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar13 = uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
      if ((*(byte *)((*(ulong *)param_2 & 0xffffffff00000000 | 9) +
                    (ulong)*(uint *)(*(ulong *)param_2 - 1)) >> 6 & 1) == 0) {
        uVar2 = *(uint *)(uVar13 + 0x83);
      }
      else {
        uVar2 = *(uint *)(uVar13 + 0x7f);
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pIVar1;
        if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar4 + 1;
        *puVar4 = uVar7 | uVar2;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7 | uVar2);
      }
      uVar7 = *puVar4;
      if (*(int *)(uVar7 + 0xf) != *(int *)pIVar11) {
        puVar4 = (ulong *)Map::TransitionToPrototype(param_1,puVar4,pIVar11);
        uVar7 = *puVar4;
      }
      lVar8 = *(long *)(param_1 + 0x8938);
      uVar7 = (ulong)*(byte *)(uVar7 + 3) * 4;
      lVar10 = *(long *)(lVar8 + 0x68);
      if ((((ulong)(*(long *)(lVar8 + 0x70) - lVar10) < uVar7) || (FLAG_inline_new == '\0')) ||
         (FLAG_gc_interval != 0)) {
        uVar13 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(param_1 + 0x8850),uVar7,0,1,0);
      }
      else {
        uVar13 = lVar10 + 1;
        *(ulong *)(lVar8 + 0x68) = lVar10 + uVar7;
        Heap::CreateFillerObjectAt((Heap *)(param_1 + 0x8850),lVar10,uVar7,1,1);
      }
      *(int *)(uVar13 - 1) = (int)*puVar4;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar12 = *(ulong **)pIVar1;
        if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
          puVar12 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar12 + 1;
        *puVar12 = uVar13;
      }
      else {
        puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
      }
      InitializeJSObjectFromMap((Factory *)param_1,puVar12,param_1 + 0x168,puVar4);
      uVar13 = *puVar12;
      uVar7 = *(ulong *)param_2;
      *(int *)(uVar13 + 0xb) = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar9 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar13,uVar13 + 0xb,uVar7);
          uVar9 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0xb,uVar7);
        }
      }
      uVar13 = *puVar12;
      uVar7 = *param_3;
      *(int *)(uVar13 + 0xf) = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar9 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar13,uVar13 + 0xf,uVar7);
          uVar9 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0xf,uVar7);
        }
      }
      uVar13 = *puVar12;
      uVar7 = *(ulong *)pIVar6;
      *(int *)(uVar13 + 0x13) = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar9 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar13,uVar13 + 0x13,uVar7);
          uVar9 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0x13,uVar7);
        }
      }
      SaveContext::~SaveContext((SaveContext *)&local_90);
    }
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 0x397);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
    }
    puVar5 = (undefined8 *)NewError((Factory *)param_1,puVar4,0x132,0,0,0);
    Isolate::Throw(param_1,*puVar5,0);
    puVar12 = (ulong *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar12;
}

