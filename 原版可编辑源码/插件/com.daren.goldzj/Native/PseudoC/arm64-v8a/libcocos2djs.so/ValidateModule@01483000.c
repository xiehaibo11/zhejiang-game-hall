
/* v8::internal::wasm::AsmJsParser::ValidateModule() */

void __thiscall v8::internal::wasm::AsmJsParser::ValidateModule(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  long lVar1;
  undefined8 *puVar2;
  Signature *pSVar3;
  long lVar4;
  AsmJsParser AVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  WasmFunctionBuilder *this_01;
  Zone *pZVar9;
  Signature *pSVar10;
  ulong uVar11;
  char *pcVar12;
  AsmJsParser *pAVar13;
  int iVar14;
  
  uVar7 = GetCurrentStackPosition();
  if (uVar7 < *(ulong *)(this + 0x108)) goto LAB_01483024;
  ValidateModuleParameters(this);
  if (this[0x1e4] != (AsmJsParser)0x0) {
    return;
  }
  if (*(int *)(this + 0x10) == 0x7b) {
    this_00 = (AsmJsScanner *)(this + 8);
    AsmJsScanner::Next(this_00);
    if (*(int *)(this + 0x10) == -0x26d1) {
      AsmJsScanner::Next(this_00);
      uVar7 = GetCurrentStackPosition();
      if (uVar7 < *(ulong *)(this + 0x108)) goto LAB_01483024;
      if (*(int *)(this + 0x10) == 0x7d) {
LAB_014830d8:
        AVar5 = this[0x1e4];
      }
      else {
        if (*(int *)(this + 0x10) != 0x3b) {
          if (this[0xec] == (AsmJsParser)0x0) {
            this[0x1e4] = (AsmJsParser)0x1;
            *(char **)(this + 0x1e8) = "Expected ;";
            *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
          }
          goto LAB_014830d8;
        }
        AsmJsScanner::Next(this_00);
        AVar5 = this[0x1e4];
      }
      if (AVar5 != (AsmJsParser)0x0) {
        return;
      }
      uVar7 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x108) <= uVar7) {
        ValidateModuleVars(this);
        AVar5 = this[0x1e4];
        while( true ) {
          if (AVar5 != (AsmJsParser)0x0) {
            return;
          }
          iVar14 = *(int *)(this + 0x10);
          if (iVar14 != -0x26df) break;
          uVar7 = GetCurrentStackPosition();
          if (uVar7 < *(ulong *)(this + 0x108)) goto LAB_01483024;
          ValidateFunction(this);
          AVar5 = this[0x1e4];
        }
        uVar7 = GetCurrentStackPosition();
        uVar11 = *(ulong *)(this + 0x108);
        while (iVar14 == -0x26da) {
          if (uVar7 < uVar11) goto LAB_01483024;
          ValidateFunctionTable(this);
          if (this[0x1e4] != (AsmJsParser)0x0) {
            return;
          }
          iVar14 = *(int *)(this + 0x10);
          uVar7 = GetCurrentStackPosition();
          uVar11 = *(ulong *)(this + 0x108);
        }
        if (uVar7 >= uVar11) {
          ValidateExport(this);
          if (this[0x1e4] != (AsmJsParser)0x0) {
            return;
          }
          uVar7 = GetCurrentStackPosition();
          if (*(ulong *)(this + 0x108) <= uVar7) {
            if (*(int *)(this + 0x10) == 0x7d) {
LAB_014831e4:
              AVar5 = this[0x1e4];
            }
            else {
              if (*(int *)(this + 0x10) != 0x3b) {
                if (this[0xec] == (AsmJsParser)0x0) {
                  this[0x1e4] = (AsmJsParser)0x1;
                  *(char **)(this + 0x1e8) = "Expected ;";
                  *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
                }
                goto LAB_014831e4;
              }
              AsmJsScanner::Next(this_00);
              AVar5 = this[0x1e4];
            }
            if (AVar5 != (AsmJsParser)0x0) {
              return;
            }
            if (*(int *)(this + 0x10) == 0x7d) {
              AsmJsScanner::Next(this_00);
              lVar1 = *(long *)(this + 0x118);
              lVar4 = *(long *)(this + 0x120);
              do {
                if (lVar1 == lVar4) {
                  this_01 = (WasmFunctionBuilder *)
                            WasmModuleBuilder::AddFunction
                                      (*(WasmModuleBuilder **)(this + 0xf0),(Signature *)0x0);
                  WasmModuleBuilder::MarkStartFunction(*(WasmModuleBuilder **)(this + 0xf0),this_01)
                  ;
                  for (pAVar13 = *(AsmJsParser **)(this + 0x2a8); this + 0x2a0 != pAVar13;
                      pAVar13 = *(AsmJsParser **)(pAVar13 + 8)) {
                    uVar6 = WasmModuleBuilder::AddGlobalImport
                                      (*(undefined8 *)(this + 0xf0),*(undefined8 *)(pAVar13 + 0x10),
                                       *(undefined8 *)(pAVar13 + 0x18),pAVar13[0x20],0);
                    WasmFunctionBuilder::EmitWithI32V(this_01,0x23,uVar6);
                    WasmFunctionBuilder::EmitWithI32V
                              (this_01,0x24,
                               *(int *)(*(long *)(pAVar13 + 0x28) + 0x1c) + *(int *)(this + 0x2b0));
                  }
                  WasmFunctionBuilder::Emit(this_01,0xb);
                  pZVar9 = *(Zone **)this;
                  pSVar3 = *(Signature **)(pZVar9 + 0x10);
                  if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)pSVar3) < 0x18) {
                    pSVar10 = (Signature *)Zone::NewExpand(pZVar9,0x18);
                  }
                  else {
                    *(Signature **)(pZVar9 + 0x10) = pSVar3 + 0x18;
                    pSVar10 = pSVar3;
                  }
                  *(undefined8 *)pSVar10 = 0;
                  *(undefined8 *)(pSVar10 + 8) = 0;
                  *(Signature **)(pSVar10 + 0x10) = pSVar3;
                  WasmFunctionBuilder::SetSignature(this_01,pSVar10);
                  return;
                }
                iVar14 = *(int *)(lVar1 + 0x20);
                if (iVar14 == 6) {
                  if (*(char *)(lVar1 + 0x25) == '\0') {
                    pZVar9 = *(Zone **)this;
                    puVar2 = *(undefined8 **)(pZVar9 + 0x10);
                    if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)puVar2) < 0x18) {
                      puVar8 = (undefined8 *)Zone::NewExpand(pZVar9,0x18);
                    }
                    else {
                      *(undefined8 **)(pZVar9 + 0x10) = puVar2 + 3;
                      puVar8 = puVar2;
                    }
                    *puVar8 = 0;
                    puVar8[1] = 0;
                    puVar8[2] = puVar2;
                    WasmModuleBuilder::AddImport
                              (*(undefined8 *)(this + 0xf0),**(undefined8 **)(lVar1 + 0x10),
                               (*(undefined8 **)(lVar1 + 0x10))[1]);
                  }
                }
                else if (iVar14 == 5) {
                  if (*(char *)(lVar1 + 0x25) == '\0') {
                    uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
                    this[0x1e4] = (AsmJsParser)0x1;
                    pcVar12 = "Undefined function table";
                    goto LAB_01483224;
                  }
                }
                else if ((iVar14 == 4) && (*(char *)(lVar1 + 0x25) == '\0')) {
                  uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
                  this[0x1e4] = (AsmJsParser)0x1;
                  pcVar12 = "Undefined function";
                  goto LAB_01483224;
                }
                lVar1 = lVar1 + 0x28;
              } while( true );
            }
            goto LAB_01483210;
          }
        }
      }
LAB_01483024:
      uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar12 = "Stack overflow while parsing asm.js module.";
      goto LAB_01483224;
    }
  }
LAB_01483210:
  uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar12 = "Unexpected token";
LAB_01483224:
  *(char **)(this + 0x1e8) = pcVar12;
  *(undefined4 *)(this + 0x1f0) = uVar6;
  return;
}

