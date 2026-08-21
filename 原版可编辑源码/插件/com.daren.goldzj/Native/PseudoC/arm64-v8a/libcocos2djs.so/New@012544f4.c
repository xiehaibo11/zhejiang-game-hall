
/* v8::internal::WasmExportedFunction::New(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, int, int,
   v8::internal::Handle<v8::internal::Code>) */

void v8::internal::WasmExportedFunction::New
               (Isolate *param_1,ulong *param_2,uint param_3,undefined2 param_4,ulong *param_5)

{
  Isolate *pIVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  NativeModule *this;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  ulong uVar13;
  undefined1 *local_c0;
  long lStack_b8;
  undefined1 *local_b0;
  long lStack_a8;
  undefined1 auStack_a0 [56];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar8 = *param_2 & 0xffffffff00000000;
  this = (NativeModule *)
         **(undefined8 **)
           (*(long *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*param_2 + 0x6f)) + 0xb)) + 3) + 0x18);
  if ((int)param_3 < *(int *)(*(long *)(this + 200) + 0x3c)) {
    iVar5 = -2;
  }
  else {
    iVar5 = wasm::NativeModule::GetJumpTableOffset(this,param_3);
    iVar5 = iVar5 << 1;
  }
  puVar6 = (ulong *)Factory::NewStruct((Factory *)param_1,0x73,1);
  uVar13 = *puVar6;
  uVar8 = *param_5;
  *(int *)(uVar13 + 3) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar13,uVar13 + 3,uVar8);
      uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar13,uVar13 + 3,uVar8);
    }
  }
  uVar13 = *puVar6;
  uVar8 = *param_2;
  pIVar1 = param_1 + 0x95a0;
  *(int *)(uVar13 + 7) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar13,uVar13 + 7,uVar8);
      uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar13,uVar13 + 7,uVar8);
    }
  }
  *(int *)(*puVar6 + 0xb) = iVar5;
  *(uint *)(*puVar6 + 0xf) = param_3 << 1;
  *(undefined4 *)(*puVar6 + 0x13) = 0;
  *(undefined4 *)(*puVar6 + 0x17) = 0;
  *(undefined4 *)(*puVar6 + 0x1b) = 0;
  uVar8 = *param_2 & 0xffffffff00000000;
  uVar13 = uVar8 | *(uint *)(*param_2 + 0x6f);
  if (*(char *)(*(long *)(**(long **)(*(long *)((uVar8 | *(uint *)(uVar13 + 0xb)) + 3) + 0x18) + 200
                         ) + 0x178) == '\0') {
LAB_012547b8:
    local_b0 = auStack_a0;
    lStack_a8 = 0x10;
    iVar5 = SNPrintF(local_b0,0x10,"%d",param_3);
    lStack_b8 = (long)iVar5;
    local_c0 = local_b0;
    lVar10 = Factory::NewStringFromOneByte(param_1,&local_c0,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  else {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar1;
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar7 + 1;
      *puVar7 = uVar13;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
      uVar13 = *puVar7;
    }
    lVar10 = **(long **)(*(long *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0xb)) +
                                  3) + 0x18);
    puVar11 = *(undefined8 **)(lVar10 + 0xe0);
    lStack_a8 = puVar11[1];
    local_b0 = (undefined1 *)*puVar11;
    uVar8 = wasm::WasmModule::LookupFunctionName
                      (*(WasmModule **)(lVar10 + 200),(ModuleWireBytes *)&local_b0,param_3);
    if ((int)uVar8 == 0) goto LAB_012547b8;
    lStack_a8 = (long)uVar8 >> 0x20;
    local_b0 = (undefined1 *)
               (**(long **)(**(long **)(*(long *)((*puVar7 & 0xffffffff00000000 |
                                                  (ulong)*(uint *)(*puVar7 + 0xb)) + 3) + 0x18) +
                           0xe0) + (uVar8 & 0xffffffff));
    lVar10 = Factory::NewStringFromUtf8((Factory *)param_1,&local_b0,0);
    if (lVar10 == 0) goto LAB_012547b8;
  }
  uVar8 = *param_2 & 0xffffffff00000000;
  cVar3 = *(char *)(*(long *)(**(long **)(*(long *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*param_2 +
                                                                                         0x6f)) +
                                                                      0xb)) + 3) + 0x18) + 200) +
                   0x178);
  if (cVar3 == '\x02') {
    uVar8 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    puVar12 = (uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) +
                                         0x13)) + 699);
  }
  else if (cVar3 == '\x01') {
    uVar8 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    puVar12 = (uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) +
                                         0x13)) + 0x2ab);
  }
  else {
    if (cVar3 != '\0') {
      puVar7 = (ulong *)0x0;
      goto LAB_012548e8;
    }
    uVar8 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    puVar12 = (uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) +
                                         0x13)) + 0x317);
  }
  uVar2 = *puVar12;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar1;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar7 + 1;
    *puVar7 = uVar8 | uVar2;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8 | uVar2);
  }
LAB_012548e8:
  NewFunctionArgs::ForWasm((NewFunctionArgs *)&local_b0,lVar10,puVar6,puVar7);
  puVar6 = (ulong *)Factory::NewFunction((Factory *)param_1,(NewFunctionArgs *)&local_b0);
  *(undefined2 *)((*puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0xb)) + 0x13) = param_4
  ;
  *(undefined2 *)((*puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0xb)) + 0x15) = param_4
  ;
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

