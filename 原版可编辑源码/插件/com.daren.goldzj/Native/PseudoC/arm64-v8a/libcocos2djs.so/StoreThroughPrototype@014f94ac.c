
/* v8::internal::StoreHandler::StoreThroughPrototype(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::Smi>, v8::internal::MaybeObjectHandle,
   v8::internal::MaybeObjectHandle) */

ulong * v8::internal::StoreHandler::StoreThroughPrototype
                  (Isolate *param_1,long *param_2,ulong *param_3,ulong *param_4,int param_5,
                  ulong *param_6,int param_7,ulong *param_8)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar7 = *param_2;
  if (param_6 != (ulong *)0x0) {
    param_3 = param_6;
  }
  iVar4 = 0;
  if (param_6 != (ulong *)0x0) {
    iVar4 = param_5;
  }
  pIVar1 = param_1 + 0x95a0;
  if ((*(ushort *)(lVar7 + 7) < 0x44) || ((*(byte *)(lVar7 + 9) >> 5 & 1) != 0)) {
    uVar6 = (int)*param_4 >> 1;
    uVar9 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar6 | 0x10) << 1;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_4 = *(ulong **)pIVar1;
      if (param_4 == *(ulong **)(param_1 + 0x95a8)) {
        param_4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = param_4 + 1;
      *param_4 = uVar9;
      iVar8 = 2;
    }
    else {
      param_4 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
      iVar8 = 2;
    }
  }
  else {
    iVar8 = 1;
    if ((*(ushort *)(lVar7 + 7) != 0xaa) && ((*(uint *)(lVar7 + 0xb) >> 0x15 & 1) != 0)) {
      uVar6 = (int)*param_4 >> 1;
      uVar9 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar6 | 0x20) << 1;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        param_4 = *(ulong **)pIVar1;
        if (param_4 == *(ulong **)(param_1 + 0x95a8)) {
          param_4 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = param_4 + 1;
        *param_4 = uVar9;
      }
      else {
        param_4 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
      }
      iVar8 = 1;
    }
  }
  if (param_8 != (ulong *)0x0) {
    iVar8 = iVar8 + 1;
  }
  puVar2 = (ulong *)Map::GetOrCreatePrototypeChainValidityCell(param_2,param_1);
  puVar3 = (ulong *)Factory::NewStoreHandler((Factory *)param_1,iVar8);
  uVar10 = *puVar3;
  uVar9 = *param_4;
  *(int *)(uVar10 + 3) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar5 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 3,uVar9);
      uVar5 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 3,uVar9);
    }
  }
  uVar10 = *puVar3;
  uVar9 = *puVar2;
  *(int *)(uVar10 + 7) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar5 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 7,uVar9);
      uVar5 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 7,uVar9);
    }
  }
  if ((*(ushort *)(*param_2 + 7) < 0x44) || ((*(byte *)(*param_2 + 9) >> 5 & 1) != 0)) {
    uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)pIVar1;
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar2 + 1;
      *puVar2 = uVar9;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
      uVar9 = *puVar2;
    }
    uVar10 = *puVar3;
    uVar6 = (uint)uVar9 | 2;
    iVar8 = 2;
    *(uint *)(uVar10 + 0xf) = uVar6;
    if (((uVar9 & 1) != 0) && (uVar6 != 3)) {
      uVar5 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar10,uVar10 + 0xf,uVar9 & 0xfffffffffffffffd);
        uVar5 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0xf,uVar9 & 0xfffffffffffffffd);
      }
      iVar8 = 2;
    }
  }
  else {
    iVar8 = 1;
  }
  uVar9 = *puVar3;
  if (iVar4 == 0) {
    if (param_3 == (ulong *)0x0) goto LAB_014f9910;
    uVar10 = *param_3 | 2;
  }
  else {
    if (param_3 == (ulong *)0x0) {
LAB_014f9910:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar10 = *param_3;
  }
  *(int *)(uVar9 + 0xb) = (int)uVar10;
  if (((int)uVar10 != 3) && ((uVar10 & 1) != 0)) {
    uVar5 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xb,uVar10 & 0xfffffffffffffffd);
      uVar5 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xb,uVar10 & 0xfffffffffffffffd);
    }
  }
  if (param_8 != (ulong *)0x0) {
    uVar10 = *puVar3;
    uVar9 = *param_8 | 2;
    if (param_7 != 0) {
      uVar9 = *param_8;
    }
    iVar4 = (int)uVar9;
    if (iVar8 == 1) {
      *(int *)(uVar10 + 0xf) = iVar4;
      if (iVar4 == 3) {
        return puVar3;
      }
      if ((uVar9 & 1) == 0) {
        return puVar3;
      }
      uVar5 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      lVar7 = uVar10 + 0xf;
      uVar6 = (uint)uVar5;
    }
    else {
      *(int *)(uVar10 + 0x13) = iVar4;
      if (iVar4 == 3) {
        return puVar3;
      }
      if ((uVar9 & 1) == 0) {
        return puVar3;
      }
      uVar5 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      lVar7 = uVar10 + 0x13;
      uVar6 = (uint)uVar5;
    }
    if ((uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,lVar7,uVar9 & 0xfffffffffffffffd);
      uVar5 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,lVar7,uVar9 & 0xfffffffffffffffd);
    }
  }
  return puVar3;
}

