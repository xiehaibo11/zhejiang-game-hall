
/* v8::internal::AsmWasmData::New(v8::internal::Isolate*,
   std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>,
   v8::internal::Handle<v8::internal::FixedArray>, v8::internal::Handle<v8::internal::ByteArray>,
   v8::internal::Handle<v8::internal::HeapNumber>) */

ulong * v8::internal::AsmWasmData::New
                  (Isolate *param_1,shared_ptr *param_2,ulong *param_3,ulong *param_4,ulong *param_5
                  )

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  WasmModule *pWVar6;
  ulong uVar7;
  ulong uVar8;
  
  pWVar6 = *(WasmModule **)(*(long *)param_2 + 200);
  lVar1 = wasm::WasmCodeManager::EstimateNativeModuleCodeSize(pWVar6,false);
  lVar2 = wasm::WasmCodeManager::EstimateNativeModuleMetaDataSize(pWVar6);
  puVar3 = (ulong *)Managed<v8::internal::wasm::NativeModule>::FromSharedPtr
                              (param_1,lVar2 + lVar1,param_2);
  puVar4 = (ulong *)Factory::NewStruct((Factory *)param_1,0x57,1);
  uVar8 = *puVar4;
  uVar7 = *puVar3;
  *(int *)(uVar8 + 3) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 3,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 3,uVar7);
    }
  }
  uVar8 = *puVar4;
  uVar7 = *param_3;
  *(int *)(uVar8 + 7) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 7,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 7,uVar7);
    }
  }
  uVar8 = *puVar4;
  uVar7 = *param_4;
  *(int *)(uVar8 + 0xb) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar7);
    }
  }
  uVar8 = *puVar4;
  uVar7 = *param_5;
  *(int *)(uVar8 + 0xf) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xf,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xf,uVar7);
    }
  }
  return puVar4;
}

