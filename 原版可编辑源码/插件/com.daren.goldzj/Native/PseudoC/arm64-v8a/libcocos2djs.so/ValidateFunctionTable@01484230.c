
/* v8::internal::wasm::AsmJsParser::ValidateFunctionTable() */

void __thiscall v8::internal::wasm::AsmJsParser::ValidateFunctionTable(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  
  if (*(int *)(this + 0x10) == -0x26da) {
    this_00 = (AsmJsScanner *)(this + 8);
    AsmJsScanner::Next(this_00);
    iVar6 = *(int *)(this + 0x10);
    if (iVar6 < 0x100) {
      uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar4 = "Expected table name";
      goto LAB_0148444c;
    }
    AsmJsScanner::Next(this_00);
    puVar1 = (undefined8 *)GetVarInfo(this,iVar6);
    if (*(int *)(puVar1 + 4) != 0) {
      if (*(int *)(puVar1 + 4) != 5) {
        uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar4 = "Function table name collides";
        goto LAB_0148444c;
      }
      if (*(char *)((long)puVar1 + 0x25) != '\0') {
        uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar4 = "Function table redefined";
        goto LAB_0148444c;
      }
      *(undefined1 *)((long)puVar1 + 0x25) = 1;
    }
    if ((*(int *)(this + 0x10) == 0x3d) &&
       (AsmJsScanner::Next(this_00), *(int *)(this + 0x10) == 0x5b)) {
      AsmJsScanner::Next(this_00);
      iVar6 = *(int *)(this + 0x10);
      uVar3 = 0;
      do {
        uVar7 = uVar3;
        if (iVar6 < 0x100) {
          uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar4 = "Expected function name";
          goto LAB_0148444c;
        }
        AsmJsScanner::Next(this_00);
        puVar2 = (undefined8 *)GetVarInfo(this,iVar6);
        if (*(int *)(puVar2 + 4) != 4) {
          uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar4 = "Expected function";
          goto LAB_0148444c;
        }
        if (*(int *)(puVar1 + 4) == 5) {
          if (*(uint *)(puVar1 + 3) < uVar7) {
            uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
            this[0x1e4] = (AsmJsParser)0x1;
            pcVar4 = "Exceeded function table size";
            goto LAB_0148444c;
          }
          uVar3 = AsmType::IsA((AsmType *)*puVar2,(AsmType *)*puVar1);
          if ((uVar3 & 1) == 0) {
            uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
            this[0x1e4] = (AsmJsParser)0x1;
            pcVar4 = "Function table definition doesn\'t match use";
            goto LAB_0148444c;
          }
          WasmModuleBuilder::SetIndirectFunction
                    (*(WasmModuleBuilder **)(this + 0xf0),(int)uVar7 + *(int *)((long)puVar1 + 0x1c)
                     ,*(uint *)((long)puVar2 + 0x1c));
        }
        if (*(int *)(this + 0x10) != 0x2c) {
          if (*(int *)(this + 0x10) != 0x5d) goto LAB_01484438;
          break;
        }
        AsmJsScanner::Next(this_00);
        iVar6 = *(int *)(this + 0x10);
        uVar3 = uVar7 + 1;
      } while (iVar6 != 0x5d);
      AsmJsScanner::Next(this_00);
      if ((*(int *)(puVar1 + 4) == 5) && (*(uint *)(puVar1 + 3) != uVar7)) {
        uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar4 = "Function table size does not match uses";
      }
      else {
        if (*(int *)(this + 0x10) == 0x7d) {
          return;
        }
        if (*(int *)(this + 0x10) == 0x3b) {
          AsmJsScanner::Next(this_00);
          return;
        }
        if (this[0xec] != (AsmJsParser)0x0) {
          return;
        }
        uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar4 = "Expected ;";
      }
      goto LAB_0148444c;
    }
  }
LAB_01484438:
  uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar4 = "Unexpected token";
LAB_0148444c:
  *(char **)(this + 0x1e8) = pcVar4;
  *(undefined4 *)(this + 0x1f0) = uVar5;
  return;
}

