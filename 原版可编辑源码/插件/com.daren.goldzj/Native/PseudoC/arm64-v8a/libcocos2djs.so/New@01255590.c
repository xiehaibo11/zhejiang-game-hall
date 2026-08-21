
/* v8::internal::WasmCapiFunction::New(v8::internal::Isolate*, unsigned long,
   v8::internal::Handle<v8::internal::Foreign>,
   v8::internal::Handle<v8::internal::PodArray<v8::internal::wasm::ValueType> >) */

void v8::internal::WasmCapiFunction::New
               (Isolate *param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = (ulong *)Factory::NewStruct((Factory *)param_1,0x70,1);
  *(undefined8 *)(*puVar1 + 3) = param_2;
  uVar5 = *puVar1;
  uVar4 = *param_3;
  *(int *)(uVar5 + 0xb) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xb,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xb,uVar4);
    }
  }
  uVar5 = *puVar1;
  uVar4 = *param_4;
  *(int *)(uVar5 + 0x13) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x13,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x13,uVar4);
    }
  }
  uVar5 = *puVar1;
  uVar4 = Builtins::builtin((Builtins *)(param_1 + 0x9e00),0x97);
  *(int *)(uVar5 + 0xf) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar3 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xf,uVar4);
      uVar3 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xf,uVar4);
    }
  }
  uVar2 = Factory::NewSharedFunctionInfoForWasmCapiFunction((Factory *)param_1,puVar1);
  uVar4 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  Factory::NewFunctionFromSharedFunctionInfo((Factory *)param_1,uVar2,puVar1,1);
  return;
}

