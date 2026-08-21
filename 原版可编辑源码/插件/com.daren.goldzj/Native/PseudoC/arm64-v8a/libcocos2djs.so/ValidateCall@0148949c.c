
/* v8::internal::wasm::AsmJsParser::ValidateCall() */

AsmType * __thiscall v8::internal::wasm::AsmJsParser::ValidateCall(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  long *plVar1;
  int iVar2;
  AsmJsParser AVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  AsmType *pAVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  AsmFunctionType *this_01;
  Signature *pSVar14;
  WasmFunctionBuilder *this_02;
  undefined8 *puVar15;
  undefined8 uVar16;
  char *pcVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long *plVar21;
  AsmType *pAVar22;
  int iVar23;
  ulong uVar24;
  Zone *this_03;
  ulong uVar25;
  ulong uVar26;
  undefined2 uVar27;
  uint uVar28;
  int local_dc;
  AsmJsParser *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  Zone *local_a8;
  AsmJsParser *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  Zone *local_80;
  AsmJsParser *local_78;
  Signature *local_68;
  
  pAVar22 = *(AsmType **)(this + 0x270);
  uVar25 = *(ulong *)(this + 0x20);
  uVar24 = *(ulong *)(this + 0x278);
  uVar26 = *(ulong *)(this + 0x288);
  iVar23 = *(int *)(this + 0x10);
  this_00 = (AsmJsScanner *)(this + 8);
  *(undefined8 *)(this + 0x270) = 0;
  AsmJsScanner::Next(this_00);
  if (*(int *)(this + 0x10) == 0x5b) {
    AsmJsScanner::Next(this_00);
    uVar8 = GetCurrentStackPosition();
    if (uVar8 < *(ulong *)(this + 0x108)) {
      uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar17 = "Stack overflow while parsing asm.js module.";
      goto LAB_0148a0dc;
    }
    pAVar9 = (AsmType *)EqualityExpression(this);
    if (this[0x1e4] != (AsmJsParser)0x0) {
      return (AsmType *)0x0;
    }
    uVar8 = AsmType::IsA(pAVar9,(AsmType *)0x101);
    if ((uVar8 & 1) == 0) {
      uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar17 = "Expected intish index";
      goto LAB_0148a0dc;
    }
    if (*(int *)(this + 0x10) == 0x26) {
      AsmJsScanner::Next(this_00);
      if (*(int *)(this + 0x10) != -3) {
        uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar17 = "Expected mask literal";
        goto LAB_0148a0dc;
      }
      iVar2 = *(int *)(this + 0xe8);
      AsmJsScanner::Next(this_00);
      uVar6 = iVar2 + 1;
      uVar28 = CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                        CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                 CONCAT11(POPCOUNT((char)(uVar6 >> 8)),POPCOUNT((char)uVar6))));
      uVar27 = NEON_uaddlv((ulong)uVar28,1);
      if (CONCAT22((short)(uVar28 >> 0x10),uVar27) != 1) {
        uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar17 = "Expected power of 2 mask";
        goto LAB_0148a0dc;
      }
      WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),iVar2);
      WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x71);
      if (*(int *)(this + 0x10) == 0x5d) {
        AsmJsScanner::Next(this_00);
        lVar11 = GetVarInfo(this,iVar23);
        if (*(int *)(lVar11 + 0x20) == 5) {
          if (*(int *)(lVar11 + 0x18) != iVar2) {
            uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
            this[0x1e4] = (AsmJsParser)0x1;
            pcVar17 = "Mask size mismatch";
            goto LAB_0148a0dc;
          }
          iVar5 = *(int *)(lVar11 + 0x1c);
        }
        else {
          if (*(int *)(lVar11 + 0x20) != 0) {
            uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
            this[0x1e4] = (AsmJsParser)0x1;
            pcVar17 = "Expected call table";
            goto LAB_0148a0dc;
          }
          iVar5 = WasmModuleBuilder::AllocateIndirectFunctions
                            (*(WasmModuleBuilder **)(this + 0xf0),uVar6);
          if (iVar5 == -1) {
            uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
            this[0x1e4] = (AsmJsParser)0x1;
            pcVar17 = "Exceeded maximum function table size";
            goto LAB_0148a0dc;
          }
          *(int *)(lVar11 + 0x18) = iVar2;
          *(int *)(lVar11 + 0x1c) = iVar5;
          *(undefined4 *)(lVar11 + 0x20) = 5;
          *(undefined1 *)(lVar11 + 0x24) = 0;
        }
        WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),iVar5);
        WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x6a);
        local_dc = *(int *)(this + 0x1e0);
        *(int *)(this + 0x1e0) = local_dc + 1;
        if (*(int *)(this + 0x1dc) <= local_dc) {
          *(int *)(this + 0x1dc) = local_dc + 1;
        }
        WasmFunctionBuilder::EmitSetLocal
                  (*(WasmFunctionBuilder **)(this + 0xf8),*(int *)(this + 0x1d8) + local_dc);
        bVar4 = true;
        uVar8 = *(ulong *)(this + 0x20);
        local_c8 = this;
        goto LAB_014895bc;
      }
    }
    uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar17 = "Unexpected token";
LAB_0148a0dc:
    *(char **)(this + 0x1e8) = pcVar17;
    *(undefined4 *)(this + 0x1f0) = uVar7;
    return (AsmType *)0x0;
  }
  lVar11 = GetVarInfo(this,iVar23);
  iVar2 = *(int *)(lVar11 + 0x20);
  if (iVar2 != 4) {
    if (iVar2 == 0) {
      *(undefined4 *)(lVar11 + 0x20) = 4;
      lVar13 = WasmModuleBuilder::AddFunction(*(WasmModuleBuilder **)(this + 0xf0),(Signature *)0x0)
      ;
      *(long *)(lVar11 + 8) = lVar13;
      uVar7 = *(undefined4 *)(lVar13 + 0x3c);
      *(undefined1 *)(lVar11 + 0x24) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = uVar7;
    }
    else if (iVar2 < 6) {
      uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar17 = "Expected function as call target";
      goto LAB_0148a0dc;
    }
  }
  local_c8 = (AsmJsParser *)0x0;
  bVar4 = false;
  uVar8 = uVar25;
LAB_014895bc:
  local_80 = *(Zone **)(this + 400);
  local_a0 = this + 0x178;
  local_90 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  plVar18 = *(long **)(this + 0x178);
  plVar1 = *(long **)(this + 0x180);
  local_a8 = local_80;
  plVar21 = plVar18;
  if (plVar18 != plVar1) {
    local_90 = (undefined8 *)plVar1[-4];
    plVar1[-4] = 0;
    plVar1[-3] = 0;
    local_88 = (undefined8 *)plVar1[-2];
    plVar1[-2] = 0;
    plVar18 = (long *)(*(long *)(this + 0x180) + -0x20);
    if (*plVar18 != 0) {
      *(long *)(*(long *)(this + 0x180) + -0x18) = *plVar18;
    }
    *(long **)(this + 0x180) = plVar18;
    local_a8 = *(Zone **)(this + 400);
    plVar21 = *(long **)(this + 0x178);
  }
  local_b8 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  if (plVar21 != plVar18) {
    local_b8 = (undefined8 *)plVar18[-4];
    plVar18[-4] = 0;
    plVar18[-3] = 0;
    local_b0 = (undefined8 *)plVar18[-2];
    plVar18[-2] = 0;
    plVar18 = (long *)(*(long *)(this + 0x180) + -0x20);
    lVar11 = *plVar18;
    if (lVar11 != 0) {
      *(long *)(*(long *)(this + 0x180) + -0x18) = lVar11;
    }
    *(long **)(this + 0x180) = plVar18;
  }
  local_c0 = local_b8;
  local_98 = local_90;
  local_78 = local_a0;
  if (*(int *)(this + 0x10) == 0x28) {
    AsmJsScanner::Next(this_00);
    AVar3 = this[0x1e4];
    while (AVar3 == (AsmJsParser)0x0) {
      if (*(int *)(this + 0x10) == 0x29) goto LAB_014896c4;
      uVar12 = GetCurrentStackPosition();
      if (uVar12 < *(ulong *)(this + 0x108)) {
        uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar17 = "Stack overflow while parsing asm.js module.";
        goto LAB_01489bb0;
      }
      pAVar9 = (AsmType *)AssignmentExpression(this);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        pAVar9 = (AsmType *)0x0;
        goto LAB_01489bbc;
      }
      if (local_b8 == local_b0) {
        lVar11 = (long)local_b8 - (long)local_c0 >> 3;
        uVar12 = lVar11 + 1;
        if (uVar12 >> 0x1c != 0) goto LAB_0148a6dc;
        uVar20 = (long)local_b0 - (long)local_c0 >> 2;
        if (uVar12 <= uVar20) {
          uVar12 = uVar20;
        }
        if (0x7fffffe < (ulong)((long)local_b0 - (long)local_c0 >> 3)) {
          uVar12 = 0xfffffff;
        }
        if (uVar12 == 0) {
          lVar13 = 0;
        }
        else {
          uVar20 = uVar12 * 8;
          lVar13 = *(long *)(local_a8 + 0x10);
          if (uVar20 < (ulong)(*(long *)(local_a8 + 0x18) - lVar13) ||
              uVar20 - (*(long *)(local_a8 + 0x18) - lVar13) == 0) {
            *(ulong *)(local_a8 + 0x10) = lVar13 + uVar20;
          }
          else {
            lVar13 = Zone::NewExpand(local_a8,uVar20);
          }
        }
        puVar10 = (undefined8 *)(lVar13 + lVar11 * 8);
        *puVar10 = pAVar9;
        local_b0 = (undefined8 *)(lVar13 + uVar12 * 8);
        puVar15 = puVar10;
        while (local_b8 != local_c0) {
          local_b8 = local_b8 + -1;
          puVar15 = puVar15 + -1;
          *puVar15 = *local_b8;
        }
      }
      else {
        *local_b8 = pAVar9;
        puVar15 = local_c0;
        puVar10 = local_b8;
      }
      local_c0 = puVar15;
      local_b8 = puVar10 + 1;
      uVar12 = AsmType::IsA(pAVar9,(AsmType *)0x301);
      if ((uVar12 & 1) == 0) {
        uVar12 = AsmType::IsA(pAVar9,(AsmType *)0xe00d);
        if ((uVar12 & 1) == 0) {
          uVar12 = AsmType::IsA(pAVar9,(AsmType *)0xed);
          if ((uVar12 & 1) == 0) {
            uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
            this[0x1e4] = (AsmJsParser)0x1;
            pcVar17 = "Bad function argument type";
            goto LAB_01489bb0;
          }
          if (local_90 < local_88) {
            uVar16 = 0xed;
            goto LAB_014899c4;
          }
          lVar11 = (long)local_90 - (long)local_98 >> 3;
          uVar12 = lVar11 + 1;
          if (uVar12 >> 0x1c != 0) goto LAB_0148a6dc;
          uVar20 = (long)local_88 - (long)local_98 >> 2;
          if (uVar12 <= uVar20) {
            uVar12 = uVar20;
          }
          if (0x7fffffe < (ulong)((long)local_88 - (long)local_98 >> 3)) {
            uVar12 = 0xfffffff;
          }
          if (uVar12 == 0) {
            lVar13 = 0;
          }
          else {
            uVar20 = uVar12 * 8;
            lVar13 = *(long *)(local_80 + 0x10);
            if (uVar20 < (ulong)(*(long *)(local_80 + 0x18) - lVar13) ||
                uVar20 - (*(long *)(local_80 + 0x18) - lVar13) == 0) {
              *(ulong *)(local_80 + 0x10) = lVar13 + uVar20;
            }
            else {
              lVar13 = Zone::NewExpand(local_80,uVar20);
            }
          }
          puVar10 = (undefined8 *)(lVar13 + lVar11 * 8);
          puVar19 = puVar10 + 1;
          *puVar10 = 0xed;
          local_88 = (undefined8 *)(lVar13 + uVar12 * 8);
          puVar15 = local_90;
          while (local_90 = puVar19, puVar15 != local_98) {
            puVar15 = puVar15 + -1;
            puVar10 = puVar10 + -1;
            *puVar10 = *puVar15;
          }
        }
        else {
          if (local_90 < local_88) {
            uVar16 = 0xe00d;
            goto LAB_014899c4;
          }
          lVar11 = (long)local_90 - (long)local_98 >> 3;
          uVar12 = lVar11 + 1;
          if (uVar12 >> 0x1c != 0) goto LAB_0148a6dc;
          uVar20 = (long)local_88 - (long)local_98 >> 2;
          if (uVar12 <= uVar20) {
            uVar12 = uVar20;
          }
          if (0x7fffffe < (ulong)((long)local_88 - (long)local_98 >> 3)) {
            uVar12 = 0xfffffff;
          }
          if (uVar12 == 0) {
            lVar13 = 0;
          }
          else {
            uVar20 = uVar12 * 8;
            lVar13 = *(long *)(local_80 + 0x10);
            if (uVar20 < (ulong)(*(long *)(local_80 + 0x18) - lVar13) ||
                uVar20 - (*(long *)(local_80 + 0x18) - lVar13) == 0) {
              *(ulong *)(local_80 + 0x10) = lVar13 + uVar20;
            }
            else {
              lVar13 = Zone::NewExpand(local_80,uVar20);
            }
          }
          puVar10 = (undefined8 *)(lVar13 + lVar11 * 8);
          puVar19 = puVar10 + 1;
          *puVar10 = 0xe00d;
          local_88 = (undefined8 *)(lVar13 + uVar12 * 8);
          puVar15 = local_90;
          while (local_90 = puVar19, puVar15 != local_98) {
            puVar15 = puVar15 + -1;
            puVar10 = puVar10 + -1;
            *puVar10 = *puVar15;
          }
        }
      }
      else if (local_90 < local_88) {
        uVar16 = 0x301;
LAB_014899c4:
        *local_90 = uVar16;
        puVar10 = local_98;
        local_90 = local_90 + 1;
      }
      else {
        lVar11 = (long)local_90 - (long)local_98 >> 3;
        uVar12 = lVar11 + 1;
        if (uVar12 >> 0x1c != 0) {
LAB_0148a6dc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar20 = (long)local_88 - (long)local_98 >> 2;
        if (uVar12 <= uVar20) {
          uVar12 = uVar20;
        }
        if (0x7fffffe < (ulong)((long)local_88 - (long)local_98 >> 3)) {
          uVar12 = 0xfffffff;
        }
        if (uVar12 == 0) {
          lVar13 = 0;
        }
        else {
          uVar20 = uVar12 * 8;
          lVar13 = *(long *)(local_80 + 0x10);
          if (uVar20 < (ulong)(*(long *)(local_80 + 0x18) - lVar13) ||
              uVar20 - (*(long *)(local_80 + 0x18) - lVar13) == 0) {
            *(ulong *)(local_80 + 0x10) = lVar13 + uVar20;
          }
          else {
            lVar13 = Zone::NewExpand(local_80,uVar20);
          }
        }
        puVar10 = (undefined8 *)(lVar13 + lVar11 * 8);
        puVar19 = puVar10 + 1;
        *puVar10 = 0x301;
        local_88 = (undefined8 *)(lVar13 + uVar12 * 8);
        puVar15 = local_90;
        while (local_90 = puVar19, puVar15 != local_98) {
          puVar15 = puVar15 + -1;
          puVar10 = puVar10 + -1;
          *puVar10 = *puVar15;
        }
      }
      local_98 = puVar10;
      if (*(int *)(this + 0x10) != 0x29) {
        if (*(int *)(this + 0x10) != 0x2c) goto LAB_01489b98;
        AsmJsScanner::Next(this_00);
      }
      AVar3 = this[0x1e4];
    }
    if (*(int *)(this + 0x10) != 0x29) goto LAB_01489b98;
LAB_014896c4:
    AsmJsScanner::Next(this_00);
    puVar10 = (undefined8 *)GetVarInfo(this,iVar23);
    if (((uVar26 == uVar25) && (*(int *)(this + 0x10) == 0x7c)) && (*(int *)(puVar10 + 4) < 7)) {
      if ((pAVar22 == (AsmType *)0x0) ||
         (uVar26 = AsmType::IsA(pAVar22,(AsmType *)0xe00d), pAVar9 = pAVar22, uVar25 = uVar24,
         (uVar26 & 1) != 0)) {
        *(undefined8 *)(this + 0x280) = 0x721;
        pAVar9 = (AsmType *)0x721;
        uVar25 = *(ulong *)(this + 0x20);
      }
    }
    else {
      pAVar9 = (AsmType *)0x11;
      uVar25 = uVar8;
      if (pAVar22 != (AsmType *)0x0) {
        pAVar9 = pAVar22;
        uVar25 = uVar24;
      }
    }
    this_03 = *(Zone **)this;
    plVar18 = *(long **)(this_03 + 0x10);
    if ((ulong)(*(long *)(this_03 + 0x18) - (long)plVar18) < 0x30) {
      plVar18 = (long *)Zone::NewExpand(this_03,0x30);
    }
    else {
      *(long **)(this_03 + 0x10) = plVar18 + 6;
    }
    puVar19 = local_90;
    plVar18[2] = 0;
    plVar18[3] = 0;
    plVar18[4] = 0;
    plVar18[5] = (long)this_03;
    *plVar18 = (long)&PTR_Name_01cc4190;
    plVar18[1] = (long)pAVar9;
    for (puVar15 = local_98; puVar15 != puVar19; puVar15 = puVar15 + 1) {
      pAVar22 = (AsmType *)*puVar15;
      if (((ulong)plVar18 & 1) == 0) {
        this_01 = (AsmFunctionType *)(**(code **)(*plVar18 + 0x10))(plVar18);
      }
      else {
        this_01 = (AsmFunctionType *)0x0;
      }
      AsmFunctionType::AddArgument(this_01,pAVar22);
    }
    pSVar14 = (Signature *)ConvertSignature(this,pAVar9,(ZoneVector *)&local_98);
    uVar6 = WasmModuleBuilder::AddSignature(*(WasmModuleBuilder **)(this + 0xf0),pSVar14);
    puVar19 = local_b8;
    puVar15 = local_c0;
    if (*(int *)(puVar10 + 4) == 6) {
      do {
        if (puVar15 == puVar19) {
          uVar24 = AsmType::IsA(pAVar9,(AsmType *)0xe00d);
          if ((uVar24 & 1) != 0) {
            uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
            this[0x1e4] = (AsmJsParser)0x1;
            pcVar17 = "Imported function can\'t be called as float";
            goto LAB_01489bb0;
          }
          lVar11 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
                   ::find<v8::internal::Signature<v8::internal::wasm::ValueType>>
                             ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
                               *)(puVar10[2] + 0x10),pSVar14);
          if (lVar11 == 0) {
            uVar7 = WasmModuleBuilder::AddImport
                              (*(undefined8 *)(this + 0xf0),*(undefined8 *)puVar10[2],
                               ((undefined8 *)puVar10[2])[1],pSVar14);
            local_68 = pSVar14;
            lVar11 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
                     ::
                     __emplace_unique_key_args<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Signature<v8::internal::wasm::ValueType>const&>,std::__ndk1::tuple<>>
                               ((Signature *)(puVar10[2] + 0x10),(piecewise_construct_t *)pSVar14,
                                (tuple *)0x1a3edc3,(tuple *)&local_68);
            *(undefined4 *)(lVar11 + 0x28) = uVar7;
            *(undefined1 *)((long)puVar10 + 0x25) = 1;
          }
          else {
            uVar7 = *(undefined4 *)(lVar11 + 0x28);
          }
          WasmFunctionBuilder::AddAsmWasmOffset(*(WasmFunctionBuilder **)(this + 0xf8),uVar8,uVar25)
          ;
          WasmFunctionBuilder::EmitWithU32V(*(WasmFunctionBuilder **)(this + 0xf8),0x10,uVar7);
          goto LAB_01489bbc;
        }
        uVar24 = AsmType::IsA((AsmType *)*puVar15,(AsmType *)0x21);
        puVar15 = puVar15 + 1;
      } while ((uVar24 & 1) != 0);
      uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar17 = "Imported function args must be type extern";
    }
    else {
      if (*(int *)(puVar10 + 4) < 7) {
        uVar24 = AsmType::IsA((AsmType *)*puVar10,(AsmType *)0x80000001);
        if ((uVar24 & 1) == 0) {
          plVar18 = (long *)AsmType::AsCallableType((AsmType *)*puVar10);
          if ((plVar18 == (long *)0x0) ||
             (uVar24 = (**(code **)(*plVar18 + 8))(plVar18,pAVar9,&local_c0), (uVar24 & 1) == 0)) {
LAB_0148a080:
            uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
            this[0x1e4] = (AsmJsParser)0x1;
            pcVar17 = "Function use doesn\'t match definition";
            goto LAB_01489bb0;
          }
        }
        else {
          *puVar10 = plVar18;
        }
        this_02 = *(WasmFunctionBuilder **)(this + 0xf8);
        if (*(int *)(puVar10 + 4) == 5) {
          if (*(int *)(local_c8 + 0x1dc) <= local_dc) {
            *(int *)(local_c8 + 0x1dc) = local_dc + 1;
          }
          WasmFunctionBuilder::EmitGetLocal(this_02,*(int *)(local_c8 + 0x1d8) + local_dc);
          WasmFunctionBuilder::AddAsmWasmOffset(*(WasmFunctionBuilder **)(this + 0xf8),uVar8,uVar25)
          ;
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x11);
          WasmFunctionBuilder::EmitU32V(*(WasmFunctionBuilder **)(this + 0xf8),uVar6);
          WasmFunctionBuilder::EmitU32V(*(WasmFunctionBuilder **)(this + 0xf8),0);
        }
        else {
          WasmFunctionBuilder::AddAsmWasmOffset(this_02,uVar8,uVar25);
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x10);
          WasmFunctionBuilder::EmitDirectCallIndex
                    (*(WasmFunctionBuilder **)(this + 0xf8),*(uint *)((long)puVar10 + 0x1c));
        }
        goto LAB_01489bbc;
      }
      plVar18 = (long *)AsmType::AsCallableType((AsmType *)*puVar10);
      if (plVar18 != (long *)0x0) {
        uVar24 = (**(code **)(*plVar18 + 8))(plVar18,pAVar9,&local_c0);
        if ((uVar24 & 1) == 0) {
          pAVar9 = (AsmType *)0xe00d;
          uVar24 = (**(code **)(*plVar18 + 8))(plVar18,0xe00d,&local_c0);
          if ((uVar24 & 1) == 0) {
            pAVar9 = (AsmType *)0x2005;
            uVar24 = (**(code **)(*plVar18 + 8))(plVar18,0x2005,&local_c0);
            if ((uVar24 & 1) == 0) {
              pAVar9 = (AsmType *)0xed;
              uVar24 = (**(code **)(*plVar18 + 8))(plVar18,0xed,&local_c0);
              if ((uVar24 & 1) == 0) {
                pAVar9 = (AsmType *)0x721;
                uVar24 = (**(code **)(*plVar18 + 8))(plVar18,0x721,&local_c0);
                if ((uVar24 & 1) == 0) {
                  pAVar9 = (AsmType *)0xb01;
                  uVar24 = (**(code **)(*plVar18 + 8))(plVar18,0xb01,&local_c0);
                  if ((uVar24 & 1) == 0) goto LAB_0148a080;
                }
              }
            }
          }
        }
        switch(*(undefined4 *)(puVar10 + 4)) {
        case 7:
        case 8:
          uVar24 = AsmType::IsA((AsmType *)*local_c0,(AsmType *)0xed);
          if ((uVar24 & 1) == 0) {
            uVar24 = AsmType::IsA((AsmType *)*local_c0,(AsmType *)0xe00d);
            if ((uVar24 & 1) == 0) {
              uVar24 = AsmType::IsA((AsmType *)*local_c0,(AsmType *)0x721);
              if ((uVar24 & 1) == 0) goto switchD_01489ec8_caseD_a;
              iVar2 = *(int *)(this + 0x1e0);
              iVar23 = iVar2 + 2;
              *(int *)(this + 0x1e0) = iVar23;
              if (1 < (ulong)((long)local_b8 - (long)local_c0 >> 3)) {
                iVar5 = iVar2 + 1;
                uVar24 = 1;
                do {
                  if (*(int *)(this + 0x1dc) <= iVar2) {
                    *(int *)(this + 0x1dc) = iVar5;
                  }
                  WasmFunctionBuilder::EmitSetLocal
                            (*(WasmFunctionBuilder **)(this + 0xf8),*(int *)(this + 0x1d8) + iVar2);
                  if (*(int *)(this + 0x1dc) <= iVar5) {
                    *(int *)(this + 0x1dc) = iVar23;
                  }
                  WasmFunctionBuilder::EmitTeeLocal
                            (*(WasmFunctionBuilder **)(this + 0xf8),*(int *)(this + 0x1d8) + iVar5);
                  if (*(int *)(this + 0x1dc) <= iVar2) {
                    *(int *)(this + 0x1dc) = iVar5;
                  }
                  WasmFunctionBuilder::EmitGetLocal
                            (*(WasmFunctionBuilder **)(this + 0xf8),*(int *)(this + 0x1d8) + iVar2);
                  uVar7 = 0x4e;
                  if (*(int *)(puVar10 + 4) != 7) {
                    uVar7 = 0x4c;
                  }
                  WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),uVar7);
                  WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),4,0x7f);
                  if (*(int *)(this + 0x1dc) <= iVar2) {
                    *(int *)(this + 0x1dc) = iVar5;
                  }
                  WasmFunctionBuilder::EmitGetLocal
                            (*(WasmFunctionBuilder **)(this + 0xf8),*(int *)(this + 0x1d8) + iVar2);
                  WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),5);
                  if (*(int *)(this + 0x1dc) <= iVar5) {
                    *(int *)(this + 0x1dc) = iVar23;
                  }
                  WasmFunctionBuilder::EmitGetLocal
                            (*(WasmFunctionBuilder **)(this + 0xf8),*(int *)(this + 0x1d8) + iVar5);
                  WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
                  uVar24 = uVar24 + 1;
                } while (uVar24 < (ulong)((long)local_b8 - (long)local_c0 >> 3));
                iVar23 = *(int *)(this + 0x1e0);
              }
              *(int *)(this + 0x1e0) = iVar23 + -2;
            }
            else if (1 < (ulong)((long)local_b8 - (long)local_c0 >> 3)) {
              uVar24 = 1;
              do {
                uVar7 = 0x96;
                if (*(int *)(puVar10 + 4) != 7) {
                  uVar7 = 0x97;
                }
                WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),uVar7);
                uVar24 = uVar24 + 1;
              } while (uVar24 < (ulong)((long)local_b8 - (long)local_c0 >> 3));
            }
          }
          else if (1 < (ulong)((long)local_b8 - (long)local_c0 >> 3)) {
            uVar24 = 1;
            do {
              uVar7 = 0xa4;
              if (*(int *)(puVar10 + 4) != 7) {
                uVar7 = 0xa5;
              }
              WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),uVar7);
              uVar24 = uVar24 + 1;
            } while (uVar24 < (ulong)((long)local_b8 - (long)local_c0 >> 3));
          }
          break;
        case 9:
          uVar24 = AsmType::IsA((AsmType *)*local_c0,(AsmType *)0x721);
          if ((uVar24 & 1) == 0) {
            uVar24 = AsmType::IsA((AsmType *)*local_c0,(AsmType *)0x4d);
            if ((uVar24 & 1) == 0) {
              uVar24 = AsmType::IsA((AsmType *)*local_c0,(AsmType *)0x600d);
              if ((uVar24 & 1) == 0) goto switchD_01489ec8_caseD_a;
              WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x8b);
            }
            else {
              WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x99);
            }
          }
          else {
            iVar2 = *(int *)(this + 0x1e0);
            iVar23 = iVar2 + 1;
            *(int *)(this + 0x1e0) = iVar23;
            if (*(int *)(this + 0x1dc) <= iVar2) {
              *(int *)(this + 0x1dc) = iVar23;
            }
            WasmFunctionBuilder::EmitTeeLocal
                      (*(WasmFunctionBuilder **)(this + 0xf8),*(int *)(this + 0x1d8) + iVar2);
            if (*(int *)(this + 0x1dc) <= iVar2) {
              *(int *)(this + 0x1dc) = iVar23;
            }
            WasmFunctionBuilder::EmitGetLocal
                      (*(WasmFunctionBuilder **)(this + 0xf8),*(int *)(this + 0x1d8) + iVar2);
            WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),0x1f);
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x75);
            if (*(int *)(this + 0x1dc) <= iVar2) {
              *(int *)(this + 0x1dc) = iVar23;
            }
            WasmFunctionBuilder::EmitTeeLocal
                      (*(WasmFunctionBuilder **)(this + 0xf8),*(int *)(this + 0x1d8) + iVar2);
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x73);
            if (*(int *)(this + 0x1dc) <= iVar2) {
              *(int *)(this + 0x1dc) = iVar23;
            }
            WasmFunctionBuilder::EmitGetLocal
                      (*(WasmFunctionBuilder **)(this + 0xf8),*(int *)(this + 0x1d8) + iVar2);
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x6b);
            *(int *)(this + 0x1e0) = *(int *)(this + 0x1e0) + -1;
          }
          break;
        default:
switchD_01489ec8_caseD_a:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        case 0xb:
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xc5);
          break;
        case 0xc:
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xc6);
          break;
        case 0xd:
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),199);
          break;
        case 0xe:
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),200);
          break;
        case 0xf:
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xc9);
          break;
        case 0x10:
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xca);
          break;
        case 0x11:
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xcb);
          break;
        case 0x12:
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xcc);
          break;
        case 0x13:
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xcd);
          break;
        case 0x14:
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xce);
          break;
        case 0x15:
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x6c);
          break;
        case 0x16:
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x67);
          break;
        case 0x17:
          uVar24 = AsmType::IsA((AsmType *)*local_c0,(AsmType *)0x4d);
          if ((uVar24 & 1) == 0) {
            uVar24 = AsmType::IsA((AsmType *)*local_c0,(AsmType *)0x600d);
            if ((uVar24 & 1) == 0) goto switchD_01489ec8_caseD_a;
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x8d);
          }
          else {
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x9b);
          }
          break;
        case 0x18:
          uVar24 = AsmType::IsA((AsmType *)*local_c0,(AsmType *)0x4d);
          if ((uVar24 & 1) == 0) {
            uVar24 = AsmType::IsA((AsmType *)*local_c0,(AsmType *)0x600d);
            if ((uVar24 & 1) == 0) goto switchD_01489ec8_caseD_a;
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x8e);
          }
          else {
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x9c);
          }
          break;
        case 0x19:
          uVar24 = AsmType::IsA((AsmType *)*local_c0,(AsmType *)0x4d);
          if ((uVar24 & 1) == 0) {
            uVar24 = AsmType::IsA((AsmType *)*local_c0,(AsmType *)0x600d);
            if ((uVar24 & 1) == 0) goto switchD_01489ec8_caseD_a;
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x91);
          }
          else {
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x9f);
          }
        }
        goto LAB_01489bbc;
      }
      uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar17 = "Expected callable function";
    }
  }
  else {
LAB_01489b98:
    uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar17 = "Unexpected token";
  }
LAB_01489bb0:
  pAVar9 = (AsmType *)0x0;
  *(char **)(this + 0x1e8) = pcVar17;
  *(undefined4 *)(this + 0x1f0) = uVar7;
LAB_01489bbc:
  plVar18 = *(long **)(local_a0 + 8);
  if (plVar18 < *(long **)(local_a0 + 0x10)) {
    *plVar18 = 0;
    plVar18[1] = 0;
    plVar18[2] = 0;
    plVar18[3] = (long)local_a8;
    *plVar18 = (long)local_c0;
    plVar18[1] = (long)local_b8;
    plVar18[2] = (long)local_b0;
    local_b8 = (undefined8 *)0x0;
    local_b0 = (undefined8 *)0x0;
    local_c0 = (undefined8 *)0x0;
    *(long *)(local_a0 + 8) = *(long *)(local_a0 + 8) + 0x20;
  }
  else {
    std::__ndk1::
    vector<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>>>
    ::__emplace_back_slow_path<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>>
              ((vector<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>>>
                *)local_a0,(ZoneVector *)&local_c0);
    if (local_c0 != (undefined8 *)0x0) {
      local_b8 = local_c0;
    }
  }
  puVar10 = *(undefined8 **)(local_78 + 8);
  if (puVar10 < *(undefined8 **)(local_78 + 0x10)) {
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = local_80;
    *puVar10 = local_98;
    puVar10[1] = local_90;
    puVar10[2] = local_88;
    *(long *)(local_78 + 8) = *(long *)(local_78 + 8) + 0x20;
  }
  else {
    std::__ndk1::
    vector<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>>>
    ::__emplace_back_slow_path<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>>
              ((vector<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::wasm::AsmType*>>>
                *)local_78,(ZoneVector *)&local_98);
  }
  if (bVar4) {
    *(int *)(local_c8 + 0x1e0) = *(int *)(local_c8 + 0x1e0) + -1;
  }
  return pAVar9;
}

