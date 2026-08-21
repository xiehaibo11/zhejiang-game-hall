
/* v8::internal::V8HeapExplorer::GetConstructorName(v8::internal::JSObject) */

undefined8 v8::internal::V8HeapExplorer::GetConstructorName(ulong param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  
  pIVar3 = (Isolate *)(param_1 & 0xffffffff00000000);
  if (*(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(param_1 - 1)) == 0x439) {
    uVar4 = *(undefined8 *)(pIVar3 + 0x598);
  }
  else {
    puVar7 = *(ulong **)(pIVar3 + 0x95a0);
    pIVar5 = pIVar3 + 0x95a8;
    puVar6 = *(ulong **)pIVar5;
    pIVar8 = pIVar3 + 0x95b0;
    *(int *)pIVar8 = *(int *)pIVar8 + 1;
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = puVar7;
      if (puVar6 == puVar7) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
      *puVar1 = param_1;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar3 + 0x95b8),param_1);
    }
    puVar2 = (undefined8 *)JSReceiver::GetConstructorName();
    uVar4 = *puVar2;
    *(ulong **)(pIVar3 + 0x95a0) = puVar7;
    *(int *)pIVar8 = *(int *)pIVar8 + -1;
    if (*(ulong **)pIVar5 != puVar6) {
      *(ulong **)pIVar5 = puVar6;
      HandleScope::DeleteExtensions(pIVar3);
    }
  }
  return uVar4;
}

