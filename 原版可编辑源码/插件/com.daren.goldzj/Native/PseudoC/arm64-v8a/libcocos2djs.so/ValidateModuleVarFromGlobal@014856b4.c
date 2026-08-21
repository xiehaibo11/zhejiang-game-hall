
/* v8::internal::wasm::AsmJsParser::ValidateModuleVarFromGlobal(v8::internal::wasm::AsmJsParser::VarInfo*,
   bool) */

void __thiscall
v8::internal::wasm::AsmJsParser::ValidateModuleVarFromGlobal
          (AsmJsParser *this,VarInfo *param_1,bool param_2)

{
  AsmJsScanner *this_00;
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  char *pcVar7;
  double dVar8;
  uint uVar9;
  double dVar10;
  undefined4 local_50 [2];
  float local_48;
  
  iVar6 = *(int *)(this + 0x10);
  this_00 = (AsmJsScanner *)(this + 8);
  AsmJsScanner::Next(this_00);
  puVar4 = (undefined8 *)GetVarInfo(this,iVar6);
  uVar5 = AsmType::IsA((AsmType *)*puVar4,*(AsmType **)(this + 0x268));
  if ((uVar5 & 1) == 0) {
    if (*(char *)((long)puVar4 + 0x24) == '\0') {
      if (param_2) {
        uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar7 = "Can only define immutable variables with other immutables";
      }
      else {
        uVar5 = AsmType::IsA((AsmType *)*puVar4,(AsmType *)0x301);
        if ((((uVar5 & 1) != 0) ||
            (uVar5 = AsmType::IsA((AsmType *)*puVar4,(AsmType *)0xe00d), (uVar5 & 1) != 0)) ||
           (uVar5 = AsmType::IsA((AsmType *)*puVar4,(AsmType *)0xed), (uVar5 & 1) != 0)) {
          *(undefined4 *)(param_1 + 0x20) = 2;
          *(undefined8 *)param_1 = *puVar4;
          uVar3 = *(undefined4 *)((long)puVar4 + 0x1c);
          param_1[0x24] = (VarInfo)0x0;
          *(undefined4 *)(param_1 + 0x1c) = uVar3;
          return;
        }
        uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar7 = "Expected int, float, double, or fround for global definition";
      }
    }
    else {
      uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar7 = "Can only use immutable variables in global definition";
    }
    goto LAB_01485944;
  }
  if (*(int *)(this + 0x10) == 0x28) {
    AsmJsScanner::Next(this_00);
    iVar6 = *(int *)(this + 0x10);
    if (iVar6 == 0x2d) {
      AsmJsScanner::Next(this_00);
      iVar6 = *(int *)(this + 0x10);
      bVar2 = true;
      bVar1 = true;
      if (iVar6 == -3) goto LAB_014857dc;
LAB_01485744:
      if (iVar6 != -4) {
        uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar7 = "Expected numeric literal";
        goto LAB_01485944;
      }
      dVar10 = *(double *)(this + 0xe0);
      AsmJsScanner::Next(this_00);
      dVar8 = -dVar10;
      if (!bVar1) {
        dVar8 = dVar10;
      }
      if (dVar8 <= 3.4028234663852886e+38) {
        if (dVar8 < -3.4028234663852886e+38) {
          if (-3.4028235677973362e+38 <= dVar8) {
            local_48 = -3.4028235e+38;
          }
          else {
            local_48 = -INFINITY;
          }
        }
        else {
          local_48 = (float)dVar8;
        }
      }
      else if (dVar8 <= 3.4028235677973362e+38) {
        local_48 = 3.4028235e+38;
      }
      else {
        local_48 = INFINITY;
      }
    }
    else {
      bVar2 = false;
      bVar1 = false;
      if (iVar6 != -3) goto LAB_01485744;
LAB_014857dc:
      uVar9 = *(uint *)(this + 0xe8);
      AsmJsScanner::Next(this_00);
      dVar10 = (double)NEON_ucvtf((ulong)uVar9);
      dVar8 = -dVar10;
      if (!bVar2) {
        dVar8 = dVar10;
      }
      local_48 = (float)dVar8;
    }
    local_50[0] = 4;
    *(undefined4 *)(param_1 + 0x20) = 2;
    *(undefined8 *)param_1 = 0xe00d;
    uVar3 = WasmModuleBuilder::AddGlobal(*(WasmModuleBuilder **)(this + 0xf0),3,1,local_50);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    param_1[0x24] = (VarInfo)param_2;
    if (*(int *)(this + 0x10) == 0x29) {
      AsmJsScanner::Next(this_00);
      return;
    }
  }
  uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar7 = "Unexpected token";
LAB_01485944:
  *(char **)(this + 0x1e8) = pcVar7;
  *(undefined4 *)(this + 0x1f0) = uVar3;
  return;
}

