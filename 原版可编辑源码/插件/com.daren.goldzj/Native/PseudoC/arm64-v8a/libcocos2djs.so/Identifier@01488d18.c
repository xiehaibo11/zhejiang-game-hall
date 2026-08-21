
/* v8::internal::wasm::AsmJsParser::Identifier() */

undefined8 __thiscall v8::internal::wasm::AsmJsParser::Identifier(AsmJsParser *this)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined8 *)(this + 0x270) = 0;
  if (iVar1 < -9999) {
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    puVar2 = (undefined8 *)GetVarInfo(this,iVar1);
    if (*(int *)(puVar2 + 4) != 1) {
      uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar3 = "Undefined local variable";
LAB_01488dec:
      *(char **)(this + 0x1e8) = pcVar3;
      *(undefined4 *)(this + 0x1f0) = uVar4;
      return 0;
    }
    WasmFunctionBuilder::EmitGetLocal
              (*(WasmFunctionBuilder **)(this + 0xf8),*(uint *)((long)puVar2 + 0x1c));
  }
  else {
    if (iVar1 < 0x100) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    puVar2 = (undefined8 *)GetVarInfo(this,iVar1);
    if (*(int *)(puVar2 + 4) != 2) {
      uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar3 = "Undefined global variable";
      goto LAB_01488dec;
    }
    WasmFunctionBuilder::EmitWithI32V
              (*(WasmFunctionBuilder **)(this + 0xf8),0x23,
               *(int *)((long)puVar2 + 0x1c) + *(int *)(this + 0x2b0));
  }
  return *puVar2;
}

