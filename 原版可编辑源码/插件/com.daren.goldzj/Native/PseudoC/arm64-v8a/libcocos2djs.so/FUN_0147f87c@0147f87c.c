
void FUN_0147f87c(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  
  if (*(char *)(param_1 + 1) != '\0') {
    puVar4 = (ulong *)param_1[2];
    pIVar5 = (Isolate *)*param_1;
    uVar3 = *puVar4;
    uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar1 = (ulong *)v8::internal::HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar3);
    }
    plVar2 = (long *)v8::internal::Map::Copy(pIVar5,puVar1,"EnableAccessChecks");
    *(byte *)(*plVar2 + 9) = *(byte *)(*plVar2 + 9) | 0x20;
    *(uint *)(*plVar2 + 0xb) = *(uint *)(*plVar2 + 0xb) | 0x10000000;
    v8::internal::JSObject::MigrateToMap(pIVar5,puVar4,plVar2,0);
    return;
  }
  return;
}

