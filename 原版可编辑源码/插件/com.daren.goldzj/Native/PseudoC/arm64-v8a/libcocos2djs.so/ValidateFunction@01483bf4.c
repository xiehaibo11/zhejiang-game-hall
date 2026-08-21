
/* v8::internal::wasm::AsmJsParser::ValidateFunction() */

void __thiscall v8::internal::wasm::AsmJsParser::ValidateFunction(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  WasmFunctionBuilder *this_01;
  Signature *pSVar7;
  AsmFunctionType *this_02;
  undefined8 *puVar8;
  AsmType *this_03;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  char *pcVar12;
  undefined4 uVar13;
  Zone *this_04;
  AsmType *pAVar14;
  int iVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined1 auVar18 [16];
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  AsmJsParser *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  long local_60;
  AsmJsParser *local_58;
  
  if (*(int *)(this + 0x10) != -0x26df) {
    uVar13 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar12 = "Unexpected token";
LAB_01483d04:
    *(char **)(this + 0x1e8) = pcVar12;
    *(undefined4 *)(this + 0x1f0) = uVar13;
    return;
  }
  this_00 = (AsmJsScanner *)(this + 8);
  AsmJsScanner::Next(this_00);
  if (*(int *)(this + 0x10) < 0x100) {
    uVar13 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar12 = "Expected function name";
    goto LAB_01483d04;
  }
  auVar18 = CopyCurrentIdentifierString(this);
  iVar1 = *(int *)(this + 0x10);
  AsmJsScanner::Next(this_00);
  lVar5 = GetVarInfo(this,iVar1);
  if (*(int *)(lVar5 + 0x20) == 4) {
    if (*(char *)(lVar5 + 0x25) != '\0') {
      uVar13 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar12 = "Function redefined";
      goto LAB_01483d04;
    }
    lVar6 = *(long *)(lVar5 + 8);
  }
  else {
    if (*(int *)(lVar5 + 0x20) != 0) {
      uVar13 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar12 = "Function name collides with variable";
      goto LAB_01483d04;
    }
    *(undefined4 *)(lVar5 + 0x20) = 4;
    lVar6 = WasmModuleBuilder::AddFunction(*(WasmModuleBuilder **)(this + 0xf0),(Signature *)0x0);
    *(long *)(lVar5 + 8) = lVar6;
    uVar13 = *(undefined4 *)(lVar6 + 0x3c);
    *(undefined1 *)(lVar5 + 0x24) = 0;
    *(undefined4 *)(lVar5 + 0x1c) = uVar13;
  }
  *(undefined1 *)(lVar5 + 0x25) = 1;
  WasmFunctionBuilder::SetName(lVar6,auVar18._0_8_,auVar18._8_8_);
  this_01 = *(WasmFunctionBuilder **)(lVar5 + 8);
  *(WasmFunctionBuilder **)(this + 0xf8) = this_01;
  *(undefined8 *)(this + 0x100) = 0;
  WasmFunctionBuilder::SetAsmFunctionStartPosition(this_01,*(ulong *)(this + 0x20));
  local_60 = *(long *)(this + 400);
  local_58 = this + 0x178;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  lVar5 = *(long *)(this + 0x180);
  if (*(long *)(this + 0x178) != lVar5) {
    local_70 = *(undefined8 **)(lVar5 + -0x20);
    *(undefined8 *)(lVar5 + -0x20) = 0;
    *(undefined8 *)(lVar5 + -0x18) = 0;
    local_68 = *(long *)(lVar5 + -0x10);
    *(undefined8 *)(lVar5 + -0x10) = 0;
    plVar11 = (long *)(*(long *)(this + 0x180) + -0x20);
    lVar5 = *plVar11;
    if (lVar5 != 0) {
      *(long *)(*(long *)(this + 0x180) + -0x18) = lVar5;
    }
    *(long **)(this + 0x180) = plVar11;
  }
  local_78 = local_70;
  ValidateFunctionParams(this,(ZoneVector *)&local_78);
  uVar9 = (long)local_70 - (long)local_78 >> 3;
  if (999 < uVar9) {
    this[0x1e4] = (AsmJsParser)0x1;
    *(char **)(this + 0x1e8) = "Number of parameters exceeds internal limit";
    *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
    goto LAB_014841ac;
  }
  local_88 = *(undefined8 *)(this + 0x170);
  local_80 = this + 0x158;
  local_98 = (undefined1 *)0x0;
  local_90 = 0;
  lVar5 = *(long *)(this + 0x160);
  if (*(long *)(this + 0x158) != lVar5) {
    local_98 = *(undefined1 **)(lVar5 + -0x20);
    *(undefined8 *)(lVar5 + -0x20) = 0;
    *(undefined8 *)(lVar5 + -0x18) = 0;
    local_90 = *(undefined8 *)(lVar5 + -0x10);
    *(undefined8 *)(lVar5 + -0x10) = 0;
    plVar11 = (long *)(*(long *)(this + 0x160) + -0x20);
    lVar5 = *plVar11;
    if (lVar5 != 0) {
      *(long *)(*(long *)(this + 0x160) + -0x18) = lVar5;
    }
    *(long **)(this + 0x160) = plVar11;
    uVar9 = (long)local_70 - (long)local_78 >> 3;
  }
  local_a0 = local_98;
  ValidateFunctionLocals(this,uVar9,(ZoneVector *)&local_a0);
  *(undefined4 *)(this + 0x1e0) = 0;
  *(int *)(this + 0x1d8) =
       ((int)local_98 - (int)local_a0) + (int)((ulong)((long)local_70 - (long)local_78) >> 3);
  *(undefined4 *)(this + 0x1dc) = 0;
  if (this[0x1e4] == (AsmJsParser)0x0) {
    iVar10 = *(int *)(this + 0x10);
    if (*(int *)(this + 0x10) == 0x7d) goto LAB_01483ee0;
    do {
      iVar15 = iVar10;
      uVar9 = GetCurrentStackPosition();
      if (uVar9 < *(ulong *)(this + 0x108)) {
        uVar13 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar12 = "Stack overflow while parsing asm.js module.";
        goto LAB_01484138;
      }
      ValidateStatement(this);
      if (this[0x1e4] != (AsmJsParser)0x0) goto LAB_01484140;
      iVar10 = *(int *)(this + 0x10);
    } while (*(int *)(this + 0x10) != 0x7d);
    AsmJsScanner::Next(this_00);
    if (iVar15 != -0x26dc) goto LAB_01483ee8;
LAB_01483f64:
    pSVar7 = (Signature *)ConvertSignature(this,*(AsmType **)(this + 0x100),(ZoneVector *)&local_78)
    ;
    WasmFunctionBuilder::SetSignature(*(WasmFunctionBuilder **)(this + 0xf8),pSVar7);
    puVar3 = local_98;
    puVar2 = local_a0;
    for (puVar17 = local_a0; puVar17 != puVar3; puVar17 = puVar17 + 1) {
      WasmFunctionBuilder::AddLocal(*(WasmFunctionBuilder **)(this + 0xf8),*puVar17);
    }
    iVar10 = *(int *)(this + 0x1dc);
    if (0 < iVar10) {
      iVar15 = 0;
      do {
        WasmFunctionBuilder::AddLocal(*(WasmFunctionBuilder **)(this + 0xf8),1);
        iVar10 = *(int *)(this + 0x1dc);
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar10);
    }
    if ((undefined1 *)0xc350 < puVar3 + ((long)iVar10 - (long)puVar2)) {
      uVar13 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar12 = "Number of local variables exceeds internal limit";
      goto LAB_01484138;
    }
    WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
    if (0x74cbb1 <
        (ulong)(*(long *)(*(long *)(this + 0xf8) + 0x50) - *(long *)(*(long *)(this + 0xf8) + 0x48))
       ) {
      uVar13 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar12 = "Size of function body exceeds internal limit";
      goto LAB_01484138;
    }
    this_04 = *(Zone **)this;
    uVar16 = *(undefined8 *)(this + 0x100);
    this_03 = *(AsmType **)(this_04 + 0x10);
    if ((ulong)(*(long *)(this_04 + 0x18) - (long)this_03) < 0x30) {
      this_03 = (AsmType *)Zone::NewExpand(this_04,0x30);
    }
    else {
      *(AsmType **)(this_04 + 0x10) = this_03 + 0x30;
    }
    puVar4 = local_70;
    *(undefined8 *)(this_03 + 0x10) = 0;
    *(undefined8 *)(this_03 + 0x18) = 0;
    *(undefined8 *)(this_03 + 0x20) = 0;
    *(Zone **)(this_03 + 0x28) = this_04;
    *(undefined ***)this_03 = &PTR_Name_01cc4190;
    *(undefined8 *)(this_03 + 8) = uVar16;
    for (puVar8 = local_78; puVar8 != puVar4; puVar8 = puVar8 + 1) {
      pAVar14 = (AsmType *)*puVar8;
      if (((ulong)this_03 & 1) == 0) {
        this_02 = (AsmFunctionType *)(**(code **)(*(long *)this_03 + 0x10))(this_03);
      }
      else {
        this_02 = (AsmFunctionType *)0x0;
      }
      AsmFunctionType::AddArgument(this_02,pAVar14);
    }
    puVar8 = (undefined8 *)GetVarInfo(this,iVar1);
    uVar9 = AsmType::IsA((AsmType *)*puVar8,(AsmType *)0x80000001);
    if ((uVar9 & 1) == 0) {
      uVar9 = AsmType::IsA(this_03,(AsmType *)*puVar8);
      if ((uVar9 & 1) == 0) {
        uVar13 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar12 = "Function definition doesn\'t match use";
        goto LAB_01484138;
      }
    }
    else {
      *puVar8 = this_03;
    }
    AsmJsScanner::ResetLocals(this_00);
    *(undefined8 *)(this + 0x140) = *(undefined8 *)(this + 0x138);
  }
  else {
    if (*(int *)(this + 0x10) == 0x7d) {
LAB_01483ee0:
      AsmJsScanner::Next(this_00);
LAB_01483ee8:
      if (*(AsmType **)(this + 0x100) == (AsmType *)0x0) {
        *(undefined8 *)(this + 0x100) = 0x11;
      }
      else {
        uVar9 = AsmType::IsA(*(AsmType **)(this + 0x100),(AsmType *)0x11);
        if ((uVar9 & 1) == 0) {
          uVar13 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar12 = "Expected return at end of non-void function";
          goto LAB_01484138;
        }
      }
      goto LAB_01483f64;
    }
    uVar13 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar12 = "Unexpected token";
LAB_01484138:
    *(char **)(this + 0x1e8) = pcVar12;
    *(undefined4 *)(this + 0x1f0) = uVar13;
  }
LAB_01484140:
  puVar8 = *(undefined8 **)(local_80 + 8);
  if (puVar8 < *(undefined8 **)(local_80 + 0x10)) {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = local_88;
    *puVar8 = local_a0;
    puVar8[1] = local_98;
    puVar8[2] = local_90;
    local_98 = (undefined1 *)0x0;
    local_90 = 0;
    local_a0 = (undefined1 *)0x0;
    *(long *)(local_80 + 8) = *(long *)(local_80 + 8) + 0x20;
  }
  else {
    std::__ndk1::
    vector<v8::internal::ZoneVector<v8::internal::wasm::ValueType>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::wasm::ValueType>>>
    ::__emplace_back_slow_path<v8::internal::ZoneVector<v8::internal::wasm::ValueType>>
              ((vector<v8::internal::ZoneVector<v8::internal::wasm::ValueType>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::wasm::ValueType>>>
                *)local_80,(ZoneVector *)&local_a0);
    if (local_a0 != (undefined1 *)0x0) {
      local_98 = local_a0;
    }
  }
LAB_014841ac:
  plVar11 = *(long **)(local_58 + 8);
  if (plVar11 < *(long **)(local_58 + 0x10)) {
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = local_60;
    *plVar11 = (long)local_78;
    plVar11[1] = (long)local_70;
    plVar11[2] = local_68;
    *(long *)(local_58 + 8) = *(long *)(local_58 + 8) + 0x20;
    return;
  }
  std::__ndk1::
  vector<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>>>
  ::__emplace_back_slow_path<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>>
            ((vector<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>>>
              *)local_58,(ZoneVector *)&local_78);
  return;
}

