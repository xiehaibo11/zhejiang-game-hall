
/* v8::internal::compiler::CodeAssembler::GenerateCode(v8::internal::compiler::CodeAssemblerState*,
   v8::internal::AssemblerOptions const&) */

void v8::internal::compiler::CodeAssembler::GenerateCode
               (CodeAssemblerState *param_1,AssemblerOptions *param_2)

{
  undefined8 uVar1;
  long lVar2;
  RawMachineAssembler *this;
  
  this = *(RawMachineAssembler **)param_1;
  uVar1 = RawMachineAssembler::ExportForOptimization(this);
  lVar2 = Pipeline::GenerateCodeForCodeStub
                    (*(undefined8 *)this,*(undefined8 *)(this + 0x68),uVar1,
                     *(undefined8 *)(this + 0x18),*(undefined4 *)(param_1 + 8),
                     *(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                     *(undefined4 *)(this + 0xa0),param_2);
  if (lVar2 != 0) {
    param_1[0x1c] = (CodeAssemblerState)0x1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

