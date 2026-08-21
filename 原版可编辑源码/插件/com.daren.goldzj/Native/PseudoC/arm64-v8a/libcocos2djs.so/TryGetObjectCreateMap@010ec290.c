
/* v8::internal::Map::TryGetObjectCreateMap(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::HeapObject>) */

ulong * v8::internal::Map::TryGetObjectCreateMap(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  CanonicalHandleScope *this;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  pIVar1 = param_1 + 0x95a0;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    uVar4 = *puVar3;
  }
  uVar4 = uVar4 & 0xffffffff00000000 |
          (ulong)*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 499)) + 0x1b);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    uVar4 = *puVar3;
  }
  uVar5 = *param_2;
  if (*(int *)(uVar4 + 0xf) == (int)uVar5) {
    return puVar3;
  }
  if ((int)uVar5 == *(int *)(param_1 + 0xb0)) {
    uVar4 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 0x29b);
  }
  else {
    if ((*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xaa) ||
       ((*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1)) + 0xb) >> 0x14 & 1) ==
        0)) {
      return (ulong *)0x0;
    }
    puVar3 = (ulong *)GetOrCreatePrototypeInfo(param_2,param_1);
    uVar2 = *(uint *)(*puVar3 + 0x13);
    if (uVar2 == 3) {
      return (ulong *)0x0;
    }
    if ((uVar2 & 3) != 3) {
      return (ulong *)0x0;
    }
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar4 = *puVar3 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffffffd;
  }
  if (this == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(this,uVar4);
  }
  return puVar3;
}

