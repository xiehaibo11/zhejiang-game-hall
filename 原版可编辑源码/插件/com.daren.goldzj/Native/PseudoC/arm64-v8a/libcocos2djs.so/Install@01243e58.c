
/* v8::internal::WasmJs::Install(v8::internal::Isolate*, bool) */

void v8::internal::WasmJs::Install(Isolate *param_1,bool param_2)

{
  uint *puVar1;
  Isolate *pIVar2;
  undefined4 *puVar3;
  Isolate *pIVar4;
  byte bVar5;
  long lVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong *puVar16;
  CanonicalHandleScope *this;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  char *local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pIVar4 = param_1 + 0x95a0;
  local_a8 = *(char **)(param_1 + 0x2bc8);
  uVar9 = Context::global_object((Context *)&local_a8);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar4;
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar10 + 1;
    *puVar10 = uVar9;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
  }
  uVar9 = *puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar11 = *(ulong **)pIVar4;
    if (puVar11 == *(ulong **)(param_1 + 0x95a8)) {
      puVar11 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar11 + 1;
    *puVar11 = uVar9;
  }
  else {
    puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    uVar9 = *puVar11;
  }
  if (((*(uint *)(uVar9 + 0x32b) & 1) == 0) ||
     (*(uint *)(uVar9 + 0x32b) != *(uint *)(param_1 + 0xa0))) goto LAB_01245180;
  uStack_a0 = __strlen_chk("WebAssembly",0xc);
  local_a8 = "WebAssembly";
  lVar12 = Factory::NewStringFromOneByte(param_1,&local_a8,0);
  if (lVar12 == 0) goto LAB_012451b8;
  uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 699);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar13 = *(ulong **)pIVar4;
    if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
      puVar13 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar13 + 1;
    *puVar13 = uVar9;
  }
  else {
    puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
  }
  NewFunctionArgs::ForFunctionWithoutCode((NewFunctionArgs *)&local_a8,lVar12,puVar13,1);
  uVar14 = Factory::NewFunction((Factory *)param_1,(NewFunctionArgs *)&local_a8);
  uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 0x103);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar13 = *(ulong **)pIVar4;
    if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
      puVar13 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar13 + 1;
    *puVar13 = uVar9;
  }
  else {
    puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
  }
  JSFunction::SetPrototype(uVar14,puVar13);
  uVar14 = Factory::NewJSObject((Factory *)param_1,uVar14,1);
  pIVar2 = param_1 + 0xc78;
  JSObject::AddProperty(param_1,uVar14,pIVar2,lVar12,3);
  InstallFunc(param_1,uVar14,"compile",FUN_012451e4,1,0);
  InstallFunc(param_1,uVar14,"validate",FUN_01245438,1,0);
  InstallFunc(param_1,uVar14,"instantiate",FUN_01245594,1,0);
  if (FLAG_wasm_test_streaming == '\0') {
    if (*(long *)(param_1 + 0xb778) != 0) goto LAB_01244134;
  }
  else {
    *(code **)(param_1 + 0xb778) = FUN_012459dc;
LAB_01244134:
    InstallFunc(param_1,uVar14,"compileStreaming",FUN_01245bdc,1,0);
    InstallFunc(param_1,uVar14,"instantiateStreaming",FUN_01245f34,1,0);
  }
  if (param_2) {
    JSObject::AddProperty(param_1,puVar10,lVar12,uVar14,2);
  }
  puVar10 = (ulong *)InstallFunc(param_1,uVar14,"Module",FUN_012463cc,1,2);
  uVar19 = *puVar11;
  uVar9 = *puVar10;
  puVar3 = (undefined4 *)(uVar19 + 0x32b);
  *puVar3 = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar18 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar18 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar19,puVar3,uVar9);
      uVar18 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar19,puVar3,uVar9);
    }
  }
  SetDummyInstanceTemplate(param_1,puVar10);
  JSFunction::EnsureHasInitialMap(puVar10);
  uVar9 = *puVar10 & 0xffffffff00000000;
  uVar19 = uVar9 | *(uint *)(*puVar10 + 0x1b);
  if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2) {
    uVar19 = uVar9 | *(uint *)(uVar19 + 0xf);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar13 = *(ulong **)pIVar4;
    if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
      puVar13 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar13 + 1;
    *puVar13 = uVar19;
  }
  else {
    puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar19);
  }
  uVar15 = Factory::NewMap((Factory *)param_1,0x436,0x1c,3,0);
  JSFunction::SetInitialMap(puVar10,uVar15,puVar13);
  InstallFunc(param_1,puVar10,"imports",FUN_012465d8,1,0);
  InstallFunc(param_1,puVar10,"exports",FUN_012466e8,1,0);
  InstallFunc(param_1,puVar10,"customSections",FUN_012467f8,2,0);
  uStack_b0 = __strlen_chk("WebAssembly.Module",0x13);
  local_b8 = "WebAssembly.Module";
  lVar12 = Factory::NewStringFromOneByte(param_1,&local_b8,0);
  if (lVar12 == 0) {
LAB_012451b8:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  JSObject::AddProperty(param_1,puVar13,pIVar2,lVar12,3);
  puVar10 = (ulong *)InstallFunc(param_1,uVar14,"Instance",FUN_012469f4,1,2);
  uVar19 = *puVar11;
  uVar9 = *puVar10;
  puVar3 = (undefined4 *)(uVar19 + 0x323);
  *puVar3 = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar18 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar18 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar19,puVar3,uVar9);
      uVar18 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar19,puVar3,uVar9);
    }
  }
  SetDummyInstanceTemplate(param_1,puVar10);
  JSFunction::EnsureHasInitialMap(puVar10);
  uVar9 = *puVar10 & 0xffffffff00000000;
  uVar19 = uVar9 | *(uint *)(*puVar10 + 0x1b);
  if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2) {
    uVar19 = uVar9 | *(uint *)(uVar19 + 0xf);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar13 = *(ulong **)pIVar4;
    if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
      puVar13 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar13 + 1;
    *puVar13 = uVar19;
  }
  else {
    puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar19);
  }
  uVar15 = Factory::NewMap((Factory *)param_1,0x434,0xc4,3,0);
  JSFunction::SetInitialMap(puVar10,uVar15,puVar13);
  InstallGetter(param_1,puVar13,"exports",FUN_01246c68);
  uStack_b0 = __strlen_chk("WebAssembly.Instance",0x15);
  local_b8 = "WebAssembly.Instance";
  lVar12 = Factory::NewStringFromOneByte(param_1,&local_b8,0);
  if (lVar12 == 0) goto LAB_012451b8;
  JSObject::AddProperty(param_1,puVar13,pIVar2,lVar12,3);
  uVar8 = wasm::WasmFeatures::FromFlags();
  puVar10 = (ulong *)InstallFunc(param_1,uVar14,"Table",FUN_01246d70,1,2);
  uVar19 = *puVar11;
  uVar9 = *puVar10;
  puVar3 = (undefined4 *)(uVar19 + 0x32f);
  *puVar3 = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar18 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar18 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar19,puVar3,uVar9);
      uVar18 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar19,puVar3,uVar9);
    }
  }
  SetDummyInstanceTemplate(param_1,puVar10);
  JSFunction::EnsureHasInitialMap(puVar10);
  uVar9 = *puVar10 & 0xffffffff00000000;
  uVar19 = uVar9 | *(uint *)(*puVar10 + 0x1b);
  if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2) {
    uVar19 = uVar9 | *(uint *)(uVar19 + 0xf);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar13 = *(ulong **)pIVar4;
    if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
      puVar13 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar13 + 1;
    *puVar13 = uVar19;
  }
  else {
    puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar19);
  }
  uVar15 = Factory::NewMap((Factory *)param_1,0x437,0x20,3,0);
  JSFunction::SetInitialMap(puVar10,uVar15,puVar13);
  InstallGetter(param_1,puVar13,"length",FUN_01247068);
  InstallFunc(param_1,puVar13,"grow",FUN_01247134,1,0);
  InstallFunc(param_1,puVar13,"get",FUN_01247284,1,0);
  InstallFunc(param_1,puVar13,"set",FUN_012473c0,2,0);
  if ((uVar8 >> 8 & 1) != 0) {
    InstallFunc(param_1,puVar10,"type",FUN_01247534,1,0);
  }
  uStack_b0 = __strlen_chk("WebAssembly.Table",0x12);
  local_b8 = "WebAssembly.Table";
  lVar12 = Factory::NewStringFromOneByte(param_1,&local_b8,0);
  if (lVar12 == 0) goto LAB_012451b8;
  JSObject::AddProperty(param_1,puVar13,pIVar2,lVar12,3);
  puVar10 = (ulong *)InstallFunc(param_1,uVar14,"Memory",FUN_012476b4,1,2);
  uVar19 = *puVar11;
  uVar9 = *puVar10;
  puVar3 = (undefined4 *)(uVar19 + 0x327);
  *puVar3 = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar18 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar18 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar19,puVar3,uVar9);
      uVar18 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar19,puVar3,uVar9);
    }
  }
  SetDummyInstanceTemplate(param_1,puVar10);
  JSFunction::EnsureHasInitialMap(puVar10);
  uVar9 = *puVar10 & 0xffffffff00000000;
  uVar19 = uVar9 | *(uint *)(*puVar10 + 0x1b);
  if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2) {
    uVar19 = uVar9 | *(uint *)(uVar19 + 0xf);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar13 = *(ulong **)pIVar4;
    if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
      puVar13 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar13 + 1;
    *puVar13 = uVar19;
  }
  else {
    puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar19);
  }
  uVar15 = Factory::NewMap((Factory *)param_1,0x435,0x18,3,0);
  JSFunction::SetInitialMap(puVar10,uVar15,puVar13);
  InstallFunc(param_1,puVar13,"grow",FUN_012479ac,1,0);
  InstallGetter(param_1,puVar13,"buffer",FUN_01247b90);
  if ((uVar8 >> 8 & 1) != 0) {
    InstallFunc(param_1,puVar10,"type",FUN_01247d34,1,0);
  }
  uStack_b0 = __strlen_chk("WebAssembly.Memory",0x13);
  local_b8 = "WebAssembly.Memory";
  lVar12 = Factory::NewStringFromOneByte(param_1,&local_b8,0);
  if (lVar12 == 0) goto LAB_012451b8;
  JSObject::AddProperty(param_1,puVar13,pIVar2,lVar12,3);
  puVar10 = (ulong *)InstallFunc(param_1,uVar14,"Global",FUN_01247edc,1,2);
  uVar19 = *puVar11;
  uVar9 = *puVar10;
  puVar3 = (undefined4 *)(uVar19 + 799);
  *puVar3 = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar18 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar18 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar19,puVar3,uVar9);
      uVar18 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar19,puVar3,uVar9);
    }
  }
  SetDummyInstanceTemplate(param_1,puVar10);
  JSFunction::EnsureHasInitialMap(puVar10);
  uVar9 = *puVar10 & 0xffffffff00000000;
  uVar19 = uVar9 | *(uint *)(*puVar10 + 0x1b);
  if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2) {
    uVar19 = uVar9 | *(uint *)(uVar19 + 0xf);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar13 = *(ulong **)pIVar4;
    if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
      puVar13 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar13 + 1;
    *puVar13 = uVar19;
  }
  else {
    puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar19);
  }
  uVar15 = Factory::NewMap((Factory *)param_1,0x433,0x1c,3,0);
  JSFunction::SetInitialMap(puVar10,uVar15,puVar13);
  InstallFunc(param_1,puVar13,"valueOf",FUN_012484f4,0,0);
  InstallGetterSetter(param_1,puVar13,"value",FUN_01248500,FUN_0124850c);
  if ((uVar8 >> 8 & 1) != 0) {
    InstallFunc(param_1,puVar10,"type",FUN_01248914,1,0);
  }
  uStack_b0 = __strlen_chk("WebAssembly.Global",0x13);
  local_b8 = "WebAssembly.Global";
  lVar12 = Factory::NewStringFromOneByte(param_1,&local_b8,0);
  if (lVar12 == 0) goto LAB_012451b8;
  JSObject::AddProperty(param_1,puVar13,pIVar2,lVar12,3);
  if ((uVar8 & 1) != 0) {
    puVar10 = (ulong *)InstallFunc(param_1,uVar14,"Exception",FUN_01248a3c,1,2);
    uVar19 = *puVar11;
    uVar9 = *puVar10;
    puVar3 = (undefined4 *)(uVar19 + 0x31b);
    *puVar3 = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar18 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar18 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar19,puVar3,uVar9);
        uVar18 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar19,puVar3,uVar9);
      }
    }
    SetDummyInstanceTemplate(param_1,puVar10);
    JSFunction::EnsureHasInitialMap(puVar10);
    uVar9 = *puVar10 & 0xffffffff00000000;
    uVar19 = uVar9 | *(uint *)(*puVar10 + 0x1b);
    if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2) {
      uVar19 = uVar9 | *(uint *)(uVar19 + 0xf);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)pIVar4;
      if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
        puVar13 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar4 = puVar13 + 1;
      *puVar13 = uVar19;
    }
    else {
      puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar19);
    }
    uVar15 = Factory::NewMap((Factory *)param_1,0x432,0x14,3,0);
    JSFunction::SetInitialMap(puVar10,uVar15,puVar13);
  }
  if ((uVar8 >> 8 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 0x2b3);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)pIVar4;
      if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
        puVar10 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar4 = puVar10 + 1;
      *puVar10 = uVar9;
    }
    else {
      puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
      uVar9 = *puVar10;
    }
    uVar19 = *puVar11;
    puVar3 = (undefined4 *)(uVar19 + 0x317);
    *puVar3 = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar18 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar18 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar19,puVar3,uVar9);
        uVar18 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if ((uVar18 & 0x18) != 0) {
        bVar5 = *(byte *)((uVar19 & 0xfffffffffffc0000) + 8);
        goto joined_r0x01244e74;
      }
    }
  }
  else {
    puVar10 = (ulong *)InstallFunc(param_1,uVar14,"Function",FUN_01248aa8,1,2);
    SetDummyInstanceTemplate(param_1,puVar10);
    JSFunction::EnsureHasInitialMap(puVar10);
    uVar9 = *puVar10 & 0xffffffff00000000;
    uVar19 = uVar9 | *(uint *)(*puVar10 + 0x1b);
    if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0xa2) {
      uVar19 = uVar9 | *(uint *)(uVar19 + 0xf);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)pIVar4;
      if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
        puVar13 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar4 = puVar13 + 1;
      *puVar13 = uVar19;
    }
    else {
      puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar19);
    }
    puVar16 = (ulong *)Factory::CreateSloppyFunctionMap((Factory *)param_1,0,0);
    uVar9 = *puVar11 & 0xffffffff00000000;
    uVar19 = uVar9 | *(uint *)(*puVar11 + 0xcf);
    if ((*(byte *)((uVar9 | 9) + (ulong)*(uint *)(uVar19 - 1)) & 1) == 0) {
      uVar19 = uVar9 | *(uint *)(uVar19 + 0x1b);
      if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar19 - 1)) != 0xa2) goto LAB_01244df4;
      uVar19 = uVar9 | *(uint *)(uVar19 + 0xf);
      this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      if (this != (CanonicalHandleScope *)0x0) goto LAB_01244dfc;
LAB_01244e88:
      puVar17 = *(ulong **)pIVar4;
      if (puVar17 == *(ulong **)(param_1 + 0x95a8)) {
        puVar17 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar4 = puVar17 + 1;
      *puVar17 = uVar19;
    }
    else {
      uVar8 = *(uint *)((uVar9 | 0x13) + (ulong)*(uint *)(uVar19 - 1));
      uVar19 = uVar9 | uVar8;
      if ((uVar8 & 1) != 0) {
        do {
          if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar19 - 1)) != 0xa2) break;
          puVar1 = (uint *)(uVar19 + 0x13);
          uVar19 = uVar9 | *puVar1;
        } while ((*puVar1 & 1) != 0);
      }
LAB_01244df4:
      this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      if (this == (CanonicalHandleScope *)0x0) goto LAB_01244e88;
LAB_01244dfc:
      puVar17 = (ulong *)CanonicalHandleScope::Lookup(this,uVar19);
    }
    uVar7 = JSObject::SetPrototype(puVar13,puVar17,0,1);
    if ((uVar7 & 0xff) == 0) {
      v8::V8::FromJustIsNothing();
    }
    if (uVar7 < 0x100) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "JSObject::SetPrototype( function_proto, handle(context->function_function().prototype(), isolate), false, kDontThrow) .FromJust()"
              );
    }
    JSFunction::SetInitialMap(puVar10,puVar16,puVar13);
    InstallFunc(param_1,puVar10,"type",FUN_01248fa0,1,0);
    uVar19 = *puVar11;
    uVar9 = *puVar16;
    puVar3 = (undefined4 *)(uVar19 + 0x317);
    *puVar3 = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar18 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar18 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar19,puVar3,uVar9);
        uVar18 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if ((uVar18 & 0x18) != 0) {
        bVar5 = *(byte *)((uVar19 & 0xfffffffffffc0000) + 8);
joined_r0x01244e74:
        if ((bVar5 & 0x18) == 0) {
          Heap_GenerationalBarrierSlow(uVar19,puVar3,uVar9);
        }
      }
    }
  }
  uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar4;
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar10 + 1;
    *puVar10 = uVar9;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    uVar9 = *puVar10;
  }
  uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0x3b7);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar4;
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar10 + 1;
    *puVar10 = uVar9;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
  }
  JSObject::AddProperty(param_1,uVar14,param_1 + 0x578,puVar10,2);
  uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar4;
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar10 + 1;
    *puVar10 = uVar9;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    uVar9 = *puVar10;
  }
  uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0x3bb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar4;
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar10 + 1;
    *puVar10 = uVar9;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
  }
  JSObject::AddProperty(param_1,uVar14,param_1 + 2000,puVar10,2);
  uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar4;
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar10 + 1;
    *puVar10 = uVar9;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    uVar9 = *puVar10;
  }
  uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0x3bf);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar4;
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar4 = puVar10 + 1;
    *puVar10 = uVar9;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
  }
  JSObject::AddProperty(param_1,uVar14,param_1 + 0x978,puVar10,2);
LAB_01245180:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

