
/* v8::internal::JSModuleNamespace::GetExport(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>) */

Isolate * __thiscall
v8::internal::JSModuleNamespace::GetExport
          (JSModuleNamespace *this,Isolate *param_1,undefined8 param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  undefined8 *puVar6;
  ulong local_38;
  
  pIVar1 = param_1 + 0x95a0;
  local_38 = *(ulong *)this & 0xffffffff00000000;
  local_38 = local_38 | *(uint *)((local_38 | *(uint *)(*(ulong *)this + 0xb)) + 3);
  uVar3 = ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
          Lookup((ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                  *)&local_38,param_3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar3;
    uVar3 = *puVar4;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    uVar3 = *puVar4;
  }
  if (((uVar3 & 1) == 0) || ((int)uVar3 != *(int *)(param_1 + 0xa8))) {
    uVar2 = *(uint *)(uVar3 + 3);
    uVar3 = uVar3 & 0xffffffff00000000 | (ulong)uVar2;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar5 = *(Isolate **)pIVar1;
      if (pIVar5 == *(Isolate **)(param_1 + 0x95a8)) {
        pIVar5 = (Isolate *)HandleScope::Extend(param_1);
      }
      *(Isolate **)pIVar1 = pIVar5 + 8;
      *(ulong *)pIVar5 = uVar3;
      if ((uVar2 & 1) == 0) {
        return pIVar5;
      }
    }
    else {
      pIVar5 = (Isolate *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
      uVar3 = *(ulong *)pIVar5;
      if ((uVar3 & 1) == 0) {
        return pIVar5;
      }
    }
    if ((int)uVar3 == *(int *)(param_1 + 0xa8)) {
      puVar6 = (undefined8 *)Factory::NewReferenceError((Factory *)param_1,0xb2,param_3,0,0);
      Isolate::Throw(param_1,*puVar6,0);
      pIVar5 = (Isolate *)0x0;
    }
  }
  else {
    pIVar5 = param_1 + 0xa0;
  }
  return pIVar5;
}

