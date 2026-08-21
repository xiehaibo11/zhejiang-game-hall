
/* v8::internal::wasm::AsmJsParser::ValidateModuleVarStdlib(v8::internal::wasm::AsmJsParser::VarInfo*)
    */

void __thiscall
v8::internal::wasm::AsmJsParser::ValidateModuleVarStdlib(AsmJsParser *this,VarInfo *param_1)

{
  AsmJsScanner *this_00;
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 local_40 [2];
  undefined8 local_38;
  
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 == -0x26ec) {
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    local_40[0] = 5;
    local_38 = 0x7ff0000000000000;
    *(undefined4 *)(param_1 + 0x20) = 2;
    *(undefined8 *)param_1 = 0xed;
    uVar2 = WasmModuleBuilder::AddGlobal(*(WasmModuleBuilder **)(this + 0xf0),4,1,local_40);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    param_1[0x24] = (VarInfo)0x0;
    *(ulong *)(this + 0x110) = *(ulong *)(this + 0x110) | 1;
  }
  else if (iVar1 == -0x26eb) {
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    local_40[0] = 5;
    local_38 = 0x7ff8000000000000;
    *(undefined4 *)(param_1 + 0x20) = 2;
    *(undefined8 *)param_1 = 0xed;
    uVar2 = WasmModuleBuilder::AddGlobal(*(WasmModuleBuilder **)(this + 0xf0),4,1,local_40);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    param_1[0x24] = (VarInfo)0x0;
    *(ulong *)(this + 0x110) = *(ulong *)(this + 0x110) | 2;
  }
  else {
    if (iVar1 == -0x26ea) {
      this_00 = (AsmJsScanner *)(this + 8);
      AsmJsScanner::Next(this_00);
      if (*(int *)(this + 0x10) == 0x2e) {
        AsmJsScanner::Next(this_00);
        iVar1 = *(int *)(this + 0x10);
        AsmJsScanner::Next(this_00);
        if (iVar1 + 9999U < 0x23) {
                    /* WARNING: Jumptable with 0 entries at 0x01484cc8 */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_01484ccc +
                    (ulong)*(ushort *)(&DAT_01a3dfb0 + (ulong)(iVar1 + 9999U) * 2) * 4))();
          return;
        }
        uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar3 = "Invalid member of stdlib.Math";
      }
      else {
        uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar3 = "Unexpected token";
      }
    }
    else {
      uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar3 = "Invalid member of stdlib";
    }
    *(char **)(this + 0x1e8) = pcVar3;
    *(undefined4 *)(this + 0x1f0) = uVar2;
  }
  return;
}

