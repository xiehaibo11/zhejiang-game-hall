
/* v8::internal::Map::GetObjectCreateMap(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::HeapObject>) */

ulong * v8::internal::Map::GetObjectCreateMap(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  byte bVar2;
  ulong *puVar3;
  CanonicalHandleScope *this;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar5 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  pIVar1 = param_1 + 0x95a0;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    uVar5 = *puVar3;
  }
  uVar5 = uVar5 & 0xffffffff00000000 |
          (ulong)*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 499)) + 0x1b);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    uVar5 = *puVar3;
  }
  uVar6 = *param_2;
  if (*(int *)(uVar5 + 0xf) == (int)uVar6) {
    return puVar3;
  }
  if ((int)uVar6 == *(int *)(param_1 + 0xb0)) {
    uVar5 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 0x29b);
  }
  else {
    if (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xaa) {
      puVar3 = (ulong *)TransitionToPrototype(param_1,puVar3,param_2);
      return puVar3;
    }
    if ((*(uint *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1)) + 0xb) >> 0x14 & 1) ==
        0) {
      JSObject::OptimizeAsPrototype(param_2,1);
    }
    puVar4 = (ulong *)GetOrCreatePrototypeInfo(param_2,param_1);
    uVar8 = *(uint *)(*puVar4 + 0x13);
    if ((uVar8 == 3) || ((uVar8 & 3) != 3)) {
      uVar5 = *puVar3;
      bVar2 = *(byte *)(uVar5 + 5);
      uVar8 = (uint)bVar2;
      if (2 < bVar2) {
        uVar8 = (uint)*(byte *)(uVar5 + 3) - (uint)bVar2;
      }
      puVar3 = (ulong *)CopyInitialMap(param_1,puVar3,(ulong)*(byte *)(uVar5 + 3) << 2,
                                       (uint)*(byte *)(uVar5 + 3) - (uint)*(byte *)(uVar5 + 4),uVar8
                                      );
      SetPrototype(param_1,puVar3,param_2,1);
      uVar5 = *puVar3;
      uVar6 = *puVar4;
      uVar8 = (uint)uVar5 | 2;
      *(uint *)(uVar6 + 0x13) = uVar8;
      if ((uVar5 & 1) == 0) {
        return puVar3;
      }
      if (uVar8 == 3) {
        return puVar3;
      }
      uVar7 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x13,uVar5 & 0xfffffffffffffffd);
        uVar7 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if ((uVar7 & 0x18) == 0) {
        return puVar3;
      }
      if ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
        return puVar3;
      }
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x13,uVar5 & 0xfffffffffffffffd);
      return puVar3;
    }
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar5 = *puVar4 & 0xffffffff00000000 | (ulong)uVar8 & 0xfffffffffffffffd;
  }
  if (this == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(this,uVar5);
  }
  return puVar3;
}

