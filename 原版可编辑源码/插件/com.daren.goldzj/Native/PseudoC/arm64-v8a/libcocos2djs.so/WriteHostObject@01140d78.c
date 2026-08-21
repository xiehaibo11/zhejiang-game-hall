
/* v8::internal::ValueSerializer::WriteHostObject(v8::internal::Handle<v8::internal::JSObject>) */

undefined8 __thiscall
v8::internal::ValueSerializer::WriteHostObject(ValueSerializer *this,undefined8 param_2)

{
  size_t __size;
  long lVar1;
  void *pvVar2;
  long *plVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  size_t local_28;
  
  lVar1 = *(long *)(this + 0x18);
  uVar8 = lVar1 + 1;
  if (*(ulong *)(this + 0x20) < uVar8) {
    local_28 = 0;
    uVar7 = *(ulong *)(this + 0x20) * 2;
    plVar3 = *(long **)(this + 8);
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
      uVar7 = uVar8;
    }
    __size = uVar7 + 0x40;
    if (plVar3 == (long *)0x0) {
      pvVar2 = realloc(*(void **)(this + 0x10),__size);
      local_28 = __size;
    }
    else {
      pvVar2 = (void *)(**(code **)(*plVar3 + 0x30))
                                 (plVar3,*(void **)(this + 0x10),__size,&local_28);
    }
    if (pvVar2 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      plVar3 = *(long **)(this + 8);
      goto joined_r0x01140e84;
    }
    *(void **)(this + 0x10) = pvVar2;
    *(size_t *)(this + 0x20) = local_28;
  }
  else {
    pvVar2 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar8;
  *(undefined1 *)((long)pvVar2 + lVar1) = 0x5c;
  plVar3 = *(long **)(this + 8);
joined_r0x01140e84:
  if (plVar3 == (long *)0x0) {
    pIVar4 = *(Isolate **)this;
    uVar8 = *(ulong *)(pIVar4 + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(pIVar4 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 0x35f);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar8;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar8);
    }
    puVar6 = (undefined8 *)Factory::NewError((Factory *)pIVar4,puVar5,0x168,param_2,0,0);
    Isolate::Throw(pIVar4,*puVar6,0);
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)this,param_2);
    pIVar4 = *(Isolate **)this;
    if (*(int *)(pIVar4 + 0x2c20) == *(int *)(pIVar4 + 0xa8)) {
      if (this[0x29] == (ValueSerializer)0x0) {
        return 0x101;
      }
      ThrowDataCloneError(this,0x169,pIVar4 + 200);
    }
    else {
      Isolate::PromoteScheduledException(pIVar4);
    }
  }
  return 0;
}

