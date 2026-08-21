
/* v8::internal::WasmExceptionObject::New(v8::internal::Isolate*,
   v8::internal::Signature<v8::internal::wasm::ValueType> const*,
   v8::internal::Handle<v8::internal::HeapObject>) */

ulong * v8::internal::WasmExceptionObject::New(Isolate *param_1,long *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  Isolate *pIVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  uVar6 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  pIVar2 = param_1 + 0x95a0;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar2;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    uVar6 = *puVar4;
  }
  uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x31b);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar2;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
  }
  puVar5 = (ulong *)Factory::NewByteArray((Factory *)param_1,(int)param_2[1],1);
  lVar7 = param_2[1];
  if (lVar7 != 0) {
    lVar9 = param_2[2];
    lVar11 = *param_2;
    lVar10 = 0;
    do {
      puVar1 = (undefined1 *)(lVar9 + lVar11 + lVar10);
      lVar3 = lVar10 + *puVar5;
      lVar10 = lVar10 + 1;
      *(undefined1 *)(lVar3 + 7) = *puVar1;
    } while (lVar7 != lVar10);
  }
  puVar4 = (ulong *)Factory::NewJSObject((Factory *)param_1,puVar4,1);
  uVar12 = *puVar4;
  uVar6 = *puVar5;
  *(int *)(uVar12 + 0xb) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar8 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar12,uVar12 + 0xb,uVar6);
      uVar8 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0xb,uVar6);
    }
  }
  uVar12 = *puVar4;
  uVar6 = *param_3;
  *(int *)(uVar12 + 0xf) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar8 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar12,uVar12 + 0xf,uVar6);
      uVar8 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0xf,uVar6);
    }
  }
  return puVar4;
}

