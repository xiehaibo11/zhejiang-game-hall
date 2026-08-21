
/* v8::internal::Map::GetOrCreatePrototypeChainValidityCell(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Isolate*) */

ulong * v8::internal::Map::GetOrCreatePrototypeChainValidityCell(ulong *param_1,Isolate *param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  CanonicalHandleScope *this;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_28;
  
  uVar7 = *param_1;
  pIVar1 = param_2 + 0x95a0;
  if (*(ushort *)(uVar7 + 7) == 0xaa) {
    local_28 = *(undefined8 *)(param_2 + 0x2bc8);
    uVar7 = Context::global_object((Context *)&local_28);
    this = *(CanonicalHandleScope **)(param_2 + 0x95b8);
  }
  else {
    if (*(ushort *)(uVar7 + 7) < 0xa9) {
      if (*(byte *)(uVar7 + 4) == 0) {
        uVar7 = *(ulong *)(param_2 + 0xb0) & 0xffffffff00000000 |
                (ulong)*(uint *)(*(ulong *)(param_2 + 0xb0) - 1);
      }
      else {
        uVar11 = *(ulong *)(param_2 + 0x2bc8) & 0xffffffff00000000;
        uVar7 = uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(
                                                  ulong *)(param_2 + 0x2bc8) - 1)) + 0x13)) +
                                                  (ulong)*(byte *)(uVar7 + 4) * 4 + 7)) + 0x1b);
      }
    }
    this = *(CanonicalHandleScope **)(param_2 + 0x95b8);
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xf);
  }
  if (this == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_2 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar7;
    uVar7 = *puVar4;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(this,uVar7);
    uVar7 = *puVar4;
  }
  if (((uVar7 & 1) == 0) ||
     (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xaa)) {
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_2 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_2);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = 0;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_2 + 0x95b8),0)
      ;
    }
  }
  else {
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1);
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_2 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_2);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar7);
    }
    JSObject::LazyRegisterPrototypeUser(puVar5,param_2);
    uVar7 = *puVar4 & 0xffffffff00000000;
    uVar2 = *(uint *)((uVar7 | *(uint *)(*puVar4 - 1)) + 0x1f);
    if (((uVar2 & 1) != 0) &&
       (uVar11 = uVar7 | uVar2, *(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x99)) {
      if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar1;
        if (puVar5 == *(ulong **)(param_2 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_2);
        }
        *(ulong **)pIVar1 = puVar5 + 1;
        *puVar5 = uVar11;
        iVar3 = *(int *)(uVar11 + 3);
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar11);
        iVar3 = *(int *)(*puVar5 + 3);
      }
      if (iVar3 == 0) {
        return puVar5;
      }
    }
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(undefined8 **)pIVar1;
      if (puVar6 == *(undefined8 **)(param_2 + 0x95a8)) {
        puVar6 = (undefined8 *)HandleScope::Extend(param_2);
      }
      *(undefined8 **)pIVar1 = puVar6 + 1;
      *puVar6 = 0;
    }
    else {
      puVar6 = (undefined8 *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_2 + 0x95b8),0);
    }
    puVar5 = (ulong *)Factory::NewCell((Factory *)param_2,puVar6);
    uVar11 = (ulong)*(uint *)(*puVar4 - 1);
    uVar9 = *puVar5;
    uVar7 = *puVar4 & 0xffffffff00000000;
    uVar10 = uVar7 | uVar11;
    *(int *)(uVar10 + 0x1f) = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar8 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x1f,uVar9);
        uVar8 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) &&
         ((*(byte *)((uVar7 | uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0x1f,uVar9);
      }
    }
  }
  return puVar5;
}

