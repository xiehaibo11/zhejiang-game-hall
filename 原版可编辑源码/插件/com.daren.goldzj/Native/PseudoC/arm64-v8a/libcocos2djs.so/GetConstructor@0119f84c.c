
/* v8::internal::V8HeapExplorer::GetConstructor(v8::internal::JSReceiver) */

undefined8 v8::internal::V8HeapExplorer::GetConstructor(ulong param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  int *piVar7;
  ulong *puVar8;
  
  pIVar3 = (Isolate *)(param_1 & 0xffffffff00000000);
  piVar7 = (int *)((ulong)pIVar3 | 0x95b0);
  puVar5 = (undefined8 *)((ulong)pIVar3 | 0x95a8);
  puVar8 = *(ulong **)((ulong)pIVar3 | 0x95a0);
  puVar6 = (ulong *)*puVar5;
  *piVar7 = *piVar7 + 1;
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = puVar8;
    if (puVar6 == puVar8) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
    *puVar2 = param_1;
    puVar1 = (undefined8 *)JSReceiver::GetConstructor();
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),param_1);
    puVar1 = (undefined8 *)JSReceiver::GetConstructor();
  }
  if (puVar1 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  if (pIVar3 != (Isolate *)0x0) {
    *(ulong **)((ulong)pIVar3 | 0x95a0) = puVar8;
    *piVar7 = *piVar7 + -1;
    if ((ulong *)*puVar5 != puVar6) {
      *puVar5 = puVar6;
      HandleScope::DeleteExtensions(pIVar3);
    }
  }
  return uVar4;
}

