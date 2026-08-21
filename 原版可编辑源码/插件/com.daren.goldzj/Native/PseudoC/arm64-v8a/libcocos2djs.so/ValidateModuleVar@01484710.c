
/* v8::internal::wasm::AsmJsParser::ValidateModuleVar(bool) */

void __thiscall v8::internal::wasm::AsmJsParser::ValidateModuleVar(AsmJsParser *this,bool param_1)

{
  AsmJsScanner *this_00;
  int iVar1;
  undefined4 uVar2;
  VarInfo *pVVar3;
  WasmModuleBuilder *pWVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  double dVar8;
  undefined4 local_50 [2];
  double local_48;
  
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 < 0x100) {
    uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar7 = "Expected identifier";
    goto LAB_0148478c;
  }
  this_00 = (AsmJsScanner *)(this + 8);
  AsmJsScanner::Next(this_00);
  pVVar3 = (VarInfo *)GetVarInfo(this,iVar1);
  if (*(int *)(pVVar3 + 0x20) != 0) {
    uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar7 = "Redefinition of variable";
    goto LAB_0148478c;
  }
  if (*(int *)(this + 0x10) == 0x3d) {
    AsmJsScanner::Next(this_00);
    iVar1 = *(int *)(this + 0x10);
    if (-4 < iVar1) {
      if (iVar1 == -3) {
        iVar1 = *(int *)(this + 0xe8);
        AsmJsScanner::Next(this_00);
        if (iVar1 < 0) {
LAB_01484a0c:
          uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar7 = "Numeric literal out of range";
          goto LAB_0148478c;
        }
        uVar6 = 0x301;
        if (!param_1) {
          uVar6 = 0x721;
        }
        local_48 = (double)CONCAT44(local_48._4_4_,iVar1);
        *(undefined4 *)(pVVar3 + 0x20) = 2;
      }
      else {
        if (iVar1 != 0x2d) goto LAB_01484878;
        AsmJsScanner::Next(this_00);
        if (*(int *)(this + 0x10) != -3) {
          if (*(int *)(this + 0x10) != -4) {
            uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
            this[0x1e4] = (AsmJsParser)0x1;
            pcVar7 = "Expected numeric literal";
            goto LAB_0148478c;
          }
          dVar8 = *(double *)(this + 0xe0);
          AsmJsScanner::Next(this_00);
          local_48 = -dVar8;
          goto LAB_0148485c;
        }
        iVar1 = *(int *)(this + 0xe8);
        AsmJsScanner::Next(this_00);
        if (iVar1 < 0) goto LAB_01484a0c;
        uVar6 = 0x301;
        if (!param_1) {
          uVar6 = 0x721;
        }
        local_48 = (double)CONCAT44(local_48._4_4_,-iVar1);
        *(undefined4 *)(pVVar3 + 0x20) = 2;
      }
      local_50[0] = 2;
      *(undefined8 *)pVVar3 = uVar6;
      pWVar4 = *(WasmModuleBuilder **)(this + 0xf0);
      uVar6 = 1;
LAB_014849f8:
      uVar2 = WasmModuleBuilder::AddGlobal(pWVar4,uVar6,1,local_50);
      *(undefined4 *)(pVVar3 + 0x1c) = uVar2;
      pVVar3[0x24] = (VarInfo)param_1;
      return;
    }
    if (iVar1 == -0x26dd) {
      AsmJsScanner::Next(this_00);
      uVar5 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x108) <= uVar5) {
        ValidateModuleVarNewStdlib((VarInfo *)this);
        return;
      }
    }
    else {
      if (iVar1 == -4) {
        dVar8 = *(double *)(this + 0xe0);
        AsmJsScanner::Next(this_00);
        local_48 = dVar8;
LAB_0148485c:
        local_50[0] = 5;
        *(undefined4 *)(pVVar3 + 0x20) = 2;
        *(undefined8 *)pVVar3 = 0xed;
        pWVar4 = *(WasmModuleBuilder **)(this + 0xf0);
        uVar6 = 4;
        goto LAB_014849f8;
      }
LAB_01484878:
      if (iVar1 == *(int *)(this + 500)) {
        AsmJsScanner::Next(this_00);
        if (*(int *)(this + 0x10) != 0x2e) goto LAB_014848d4;
        AsmJsScanner::Next(this_00);
        uVar5 = GetCurrentStackPosition();
        if (*(ulong *)(this + 0x108) <= uVar5) {
          ValidateModuleVarStdlib(this,pVVar3);
          return;
        }
      }
      else if ((iVar1 == *(int *)(this + 0x1f8)) || (iVar1 == 0x2b)) {
        uVar5 = GetCurrentStackPosition();
        if (*(ulong *)(this + 0x108) <= uVar5) {
          ValidateModuleVarImport(this,pVVar3,param_1);
          return;
        }
      }
      else {
        if (iVar1 < 0x100) {
          uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar7 = "Bad variable declaration";
          goto LAB_0148478c;
        }
        uVar5 = GetCurrentStackPosition();
        if (*(ulong *)(this + 0x108) <= uVar5) {
          ValidateModuleVarFromGlobal(this,pVVar3,param_1);
          return;
        }
      }
    }
    uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar7 = "Stack overflow while parsing asm.js module.";
  }
  else {
LAB_014848d4:
    uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar7 = "Unexpected token";
  }
LAB_0148478c:
  *(char **)(this + 0x1e8) = pcVar7;
  *(undefined4 *)(this + 0x1f0) = uVar2;
  return;
}

