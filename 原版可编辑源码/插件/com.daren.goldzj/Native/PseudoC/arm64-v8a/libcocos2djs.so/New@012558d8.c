
/* v8::internal::WasmJSFunction::New(v8::internal::Isolate*,
   v8::internal::Signature<v8::internal::wasm::ValueType>*,
   v8::internal::Handle<v8::internal::JSReceiver>) */

void v8::internal::WasmJSFunction::New(Isolate *param_1,Signature *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  NewFunctionArgs aNStack_a8 [64];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = *(long *)(param_2 + 8);
  lVar9 = *(long *)param_2;
  uVar8 = lVar9 + lVar1;
  puVar3 = (ulong *)Factory::NewByteArray((Factory *)param_1,uVar8 & 0xffffffff,1);
  if (0 < (int)uVar8) {
    memcpy((void *)(*puVar3 + 7),*(void **)(param_2 + 0x10),uVar8 & 0xffffffff);
  }
  puVar4 = (ulong *)compiler::CompileJSToJSWrapper(param_1,param_2);
  if (puVar4 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  puVar5 = (ulong *)Factory::NewStruct((Factory *)param_1,0x75,1);
  *(int *)(*puVar5 + 0xb) = (int)lVar9 << 1;
  *(int *)(*puVar5 + 0xf) = (int)lVar1 << 1;
  uVar10 = *puVar5;
  uVar8 = *puVar3;
  *(int *)(uVar10 + 0x13) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x13,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0x13,uVar8);
    }
  }
  uVar10 = *puVar5;
  uVar8 = *param_3;
  *(int *)(uVar10 + 3) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 3,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 3,uVar8);
    }
  }
  uVar10 = *puVar5;
  uVar8 = *puVar4;
  *(int *)(uVar10 + 7) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 7,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 7,uVar8);
    }
  }
  if (*(short *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) == 0x439) {
    pIVar6 = (Isolate *)JSFunction::GetName(param_3);
  }
  else {
    pIVar6 = param_1 + 0x6d0;
  }
  uVar8 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 0x317);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x95a0);
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar8;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
  }
  NewFunctionArgs::ForWasm(aNStack_a8,pIVar6,puVar5,puVar3);
  puVar3 = (ulong *)Factory::NewFunction((Factory *)param_1,aNStack_a8);
  *(short *)((*puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 + 0xb)) + 0x15) = (short)lVar1
  ;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

