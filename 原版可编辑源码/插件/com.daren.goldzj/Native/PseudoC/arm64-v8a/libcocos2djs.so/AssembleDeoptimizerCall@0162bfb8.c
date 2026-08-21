
/* v8::internal::compiler::CodeGenerator::AssembleDeoptimizerCall(v8::internal::compiler::DeoptimizationExit*)
    */

undefined8 __thiscall
v8::internal::compiler::CodeGenerator::AssembleDeoptimizerCall
          (CodeGenerator *this,DeoptimizationExit *param_1)

{
  int iVar1;
  DeoptimizationExit DVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)param_1;
  if (iVar1 < 0x4001) {
    DVar2 = param_1[0x25];
    iVar3 = Deoptimizer::GetDeoptimizationEntry(*(undefined8 *)(this + 0x248),param_1[0x24]);
    if ((**(byte **)(this + 0xa0) >> 4 & 1) != 0) {
      Assembler::RecordDeoptReason
                ((Assembler *)(this + 0xd0),DVar2,*(undefined8 *)(param_1 + 8),iVar1);
    }
    TurboAssembler::CallForDeoptimization((ulong)(this + 0xd0),iVar3);
    uVar4 = 0;
    param_1[0x26] = (DeoptimizationExit)0x1;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

