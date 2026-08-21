
/* v8::internal::ValueSerializer::WriteJSRegExp(v8::internal::Handle<v8::internal::JSRegExp>) */

void __thiscall v8::internal::ValueSerializer::WriteJSRegExp(ValueSerializer *this,ulong *param_2)

{
  size_t __size;
  long lVar1;
  long *plVar2;
  void *pvVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  size_t local_28;
  
  lVar1 = *(long *)(this + 0x18);
  uVar7 = lVar1 + 1;
  if (*(ulong *)(this + 0x20) < uVar7) {
    local_28 = 0;
    uVar6 = *(ulong *)(this + 0x20) * 2;
    plVar2 = *(long **)(this + 8);
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    __size = uVar6 + 0x40;
    if (plVar2 == (long *)0x0) {
      pvVar3 = realloc(*(void **)(this + 0x10),__size);
      local_28 = __size;
    }
    else {
      pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))
                                 (plVar2,*(void **)(this + 0x10),__size,&local_28);
    }
    if (pvVar3 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      goto LAB_01141aa0;
    }
    *(void **)(this + 0x10) = pvVar3;
    *(size_t *)(this + 0x20) = local_28;
  }
  else {
    pvVar3 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar7;
  *(undefined1 *)((long)pvVar3 + lVar1) = 0x52;
LAB_01141aa0:
  uVar7 = *param_2 & 0xffffffff00000000;
  pIVar4 = *(Isolate **)this;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*param_2 + 0xb)) + 0xb);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar7);
  }
  WriteString(this,puVar5);
  WriteVarint<unsigned_int>
            (this,*(int *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0xf)
                  >> 1);
  return;
}

