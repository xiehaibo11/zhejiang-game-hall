
/* v8::internal::WasmModuleObject::New(v8::internal::Isolate*,
   std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>,
   v8::internal::Handle<v8::internal::Script>, v8::internal::Handle<v8::internal::FixedArray>,
   unsigned long) */

ulong * v8::internal::WasmModuleObject::New
                  (Isolate *param_1,shared_ptr *param_2,ulong *param_3,ulong *param_4,long param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = wasm::WasmCodeManager::EstimateNativeModuleMetaDataSize
                    (*(WasmModule **)(*(long *)param_2 + 200));
  puVar2 = (ulong *)Managed<v8::internal::wasm::NativeModule>::FromSharedPtr
                              (param_1,lVar1 + param_5,param_2);
  uVar4 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 0x32b);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x95a0);
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  puVar3 = (ulong *)Factory::NewJSObject((Factory *)param_1,puVar3,0);
  uVar6 = *puVar3;
  uVar4 = *param_4;
  *(int *)(uVar6 + 0xf) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xf,uVar4);
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xf,uVar4);
    }
  }
  uVar4 = *param_3;
  if ((*(uint *)(uVar4 + 0x17) & 0xfffffffe) == 6) {
    uVar6 = *(ulong *)(param_1 + 0x168);
    *(int *)(uVar4 + 0x23) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x23,uVar6);
        uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x23,uVar6);
      }
    }
    uVar6 = *param_3;
    uVar4 = *puVar2;
    *(int *)(uVar6 + 0x27) = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x27,uVar4);
        uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x27,uVar4);
      }
    }
    uVar6 = *param_3;
    uVar4 = *(ulong *)(param_1 + 0x428);
    *(int *)(uVar6 + 0x2b) = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x2b,uVar4);
        uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x2b,uVar4);
      }
    }
  }
  uVar6 = *puVar3;
  uVar4 = *param_3;
  *(int *)(uVar6 + 0x13) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x13,uVar4);
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x13,uVar4);
    }
  }
  uVar6 = *puVar3;
  uVar4 = *puVar2;
  *(int *)(uVar6 + 0xb) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xb,uVar4);
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xb,uVar4);
    }
  }
  return puVar3;
}

