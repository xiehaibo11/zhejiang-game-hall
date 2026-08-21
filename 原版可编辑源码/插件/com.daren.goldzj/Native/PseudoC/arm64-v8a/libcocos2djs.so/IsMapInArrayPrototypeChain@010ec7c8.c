
/* v8::internal::Map::IsMapInArrayPrototypeChain(v8::internal::Isolate*) const */

bool __thiscall v8::internal::Map::IsMapInArrayPrototypeChain(Map *this,Isolate *param_1)

{
  Isolate *pIVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  pIVar1 = param_1 + 0x95a0;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 0xe7);
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
  if (*(int *)(uVar4 - 1) == *(int *)this) {
    bVar2 = true;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 0x103);
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
    bVar2 = *(int *)(uVar4 - 1) == *(int *)this;
  }
  return bVar2;
}

