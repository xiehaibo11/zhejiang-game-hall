
/* v8::internal::wasm::AsmJsParser::ValidateModuleVarNewStdlib(v8::internal::wasm::AsmJsParser::VarInfo*)
    */

void v8::internal::wasm::AsmJsParser::ValidateModuleVarNewStdlib(VarInfo *param_1)

{
  AsmJsScanner *this;
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 500)) {
    this = (AsmJsScanner *)(param_1 + 8);
    AsmJsScanner::Next(this);
    if (*(int *)(param_1 + 0x10) == 0x2e) {
      AsmJsScanner::Next(this);
      iVar1 = *(int *)(param_1 + 0x10);
      AsmJsScanner::Next(this);
      if (iVar1 + 0x26fcU < 8) {
                    /* WARNING: Jumptable with 0 entries at 0x01484b2c */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_01484b30 + (ulong)(byte)(&DAT_01a3dfa8)[iVar1 + 0x26fcU] * 4))(0x20000000);
        return;
      }
      uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x20);
      param_1[0x1e4] = (VarInfo)0x1;
      pcVar2 = "Expected ArrayBuffer view";
      goto LAB_01484c1c;
    }
  }
  uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x20);
  param_1[0x1e4] = (VarInfo)0x1;
  pcVar2 = "Unexpected token";
LAB_01484c1c:
  *(char **)(param_1 + 0x1e8) = pcVar2;
  *(undefined4 *)(param_1 + 0x1f0) = uVar3;
  return;
}

