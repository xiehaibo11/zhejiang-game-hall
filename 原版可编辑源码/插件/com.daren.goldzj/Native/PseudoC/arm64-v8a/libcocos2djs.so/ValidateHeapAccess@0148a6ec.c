
/* v8::internal::wasm::AsmJsParser::ValidateHeapAccess() */

void __thiscall v8::internal::wasm::AsmJsParser::ValidateHeapAccess(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  AsmType *this_01;
  char *pcVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)(this + 0x10);
  this_00 = (AsmJsScanner *)(this + 8);
  AsmJsScanner::Next(this_00);
  puVar3 = (undefined8 *)GetVarInfo(this,iVar2);
  iVar2 = AsmType::ElementSizeInBytes((AsmType *)*puVar3);
  if (*(int *)(this + 0x10) == 0x5b) {
    AsmJsScanner::Next(this_00);
    if (*(int *)(this + 0x10) == -3) {
      uVar1 = *(uint *)(this + 0xe8);
      AsmJsScanner::Next(this_00);
      if (((int)uVar1 < 0) || ((ulong)uVar1 * (long)iVar2 >> 0x1f != 0)) {
        uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar5 = "Heap access out of range";
        goto LAB_0148a874;
      }
      if (*(int *)(this + 0x10) == 0x5d) {
        AsmJsScanner::Next(this_00);
        WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),uVar1 * iVar2);
        goto LAB_0148a82c;
      }
      AsmJsScanner::Rewind(this_00);
    }
    uVar4 = AsmType::IsA((AsmType *)*puVar3,(AsmType *)0x20003);
    if (((uVar4 & 1) == 0) &&
       (uVar4 = AsmType::IsA((AsmType *)*puVar3,(AsmType *)0x10003), (uVar4 & 1) == 0)) {
      uVar4 = GetCurrentStackPosition();
      if (uVar4 < *(ulong *)(this + 0x108)) {
LAB_0148a860:
        uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar5 = "Stack overflow while parsing asm.js module.";
        goto LAB_0148a874;
      }
      this_01 = (AsmType *)ShiftExpression(this);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return;
      }
      if (*(ulong *)(this + 0x290) == 0xffffffffffffffff) {
        uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar5 = "Expected shift of word size";
        goto LAB_0148a874;
      }
      if (3 < *(uint *)(this + 0x298)) {
        uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar5 = "Expected valid heap access shift";
        goto LAB_0148a874;
      }
      if (1 << (ulong)(*(uint *)(this + 0x298) & 0x1f) != iVar2) {
        uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar5 = "Expected heap access shift to match heap view";
        goto LAB_0148a874;
      }
      WasmFunctionBuilder::DeleteCodeAfter
                (*(WasmFunctionBuilder **)(this + 0xf8),*(ulong *)(this + 0x290));
      WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),-iVar2);
      WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x71);
    }
    else {
      uVar4 = GetCurrentStackPosition();
      if (uVar4 < *(ulong *)(this + 0x108)) goto LAB_0148a860;
      this_01 = (AsmType *)Expression(this,(AsmType *)0x0);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return;
      }
    }
    uVar4 = AsmType::IsA(this_01,(AsmType *)0x101);
    if ((uVar4 & 1) == 0) {
      uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar5 = "Expected intish index";
      goto LAB_0148a874;
    }
    if (*(int *)(this + 0x10) == 0x5d) {
      AsmJsScanner::Next(this_00);
LAB_0148a82c:
      *(undefined8 *)(this + 0x208) = *puVar3;
      return;
    }
  }
  uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar5 = "Unexpected token";
LAB_0148a874:
  *(char **)(this + 0x1e8) = pcVar5;
  *(undefined4 *)(this + 0x1f0) = uVar6;
  return;
}

