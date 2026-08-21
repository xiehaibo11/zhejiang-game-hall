
/* v8::internal::WasmTableObject::New(v8::internal::Isolate*, v8::internal::wasm::ValueType,
   unsigned int, bool, unsigned int, v8::internal::Handle<v8::internal::FixedArray>*) */

ulong * v8::internal::WasmTableObject::New
                  (Factory *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  undefined8 *param_6)

{
  long lVar1;
  Factory *pFVar2;
  ulong *puVar3;
  Factory *pFVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  pFVar2 = param_1 + 0x95a0;
  puVar3 = (ulong *)Factory::NewFixedArray(param_1,param_3,0);
  if (0 < (int)param_3) {
    uVar8 = *(ulong *)(param_1 + 0xb0);
    lVar6 = 0;
    puVar7 = (ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    do {
      uVar9 = *puVar3;
      lVar1 = uVar9 + (long)(int)lVar6;
      *(int *)(lVar1 + 7) = (int)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar5 = *puVar7;
        lVar1 = lVar1 + 7;
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,lVar1,uVar8);
          uVar5 = *puVar7;
        }
        if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar8);
        }
      }
      lVar6 = lVar6 + 4;
    } while ((ulong)param_3 * 4 - lVar6 != 0);
  }
  if ((param_4 & 1) == 0) {
    pFVar4 = param_1 + 0xa0;
  }
  else {
    pFVar4 = (Factory *)Factory::NewNumberFromUint(param_1,param_5);
  }
  uVar8 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pFVar2;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)pFVar2 = puVar7 + 1;
    *puVar7 = uVar8;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
    uVar8 = *puVar7;
  }
  uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0x32f);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pFVar2;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)pFVar2 = puVar7 + 1;
    *puVar7 = uVar8;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
  }
  puVar7 = (ulong *)Factory::NewJSObject(param_1,puVar7,0);
  uVar9 = *puVar7;
  uVar8 = *puVar3;
  *(int *)(uVar9 + 0xb) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xb,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xb,uVar8);
    }
  }
  *(uint *)(*puVar7 + 0xf) = param_3 << 1;
  uVar9 = *puVar7;
  uVar8 = *(ulong *)pFVar4;
  *(int *)(uVar9 + 0x13) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x13,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0x13,uVar8);
    }
  }
  *(uint *)(*puVar7 + 0x1b) = (param_2 & 0xff) << 1;
  uVar9 = *puVar7;
  uVar8 = *(ulong *)(param_1 + 0x168);
  *(int *)(uVar9 + 0x17) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x17,uVar8);
      uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0x17,uVar8);
    }
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = puVar3;
  }
  return puVar7;
}

