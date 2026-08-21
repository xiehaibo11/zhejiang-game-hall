
/* v8::internal::interpreter::BytecodeGenerator::ControlScopeForTryFinally::Execute(v8::internal::interpreter::BytecodeGenerator::ControlScope::Command,
   v8::internal::Statement*, int) */

undefined8
v8::internal::interpreter::BytecodeGenerator::ControlScopeForTryFinally::Execute
          (long param_1,uint param_2,undefined8 param_3)

{
  ulong uVar1;
  DeferredCommands *pDVar2;
  
  if (param_2 < 5) {
    if (*(long *)(*(long *)(param_1 + 8) + 0x2f8) != *(long *)(param_1 + 0x18)) {
      BytecodeArrayBuilder::PopContext
                ((BytecodeArrayBuilder *)(*(long *)(param_1 + 8) + 0x18),
                 *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18));
    }
    pDVar2 = *(DeferredCommands **)(param_1 + 0x28);
    uVar1 = ControlScope::DeferredCommands::GetTokenForCommand(pDVar2,param_2,param_3);
    if (1 < param_2) {
      BytecodeArrayBuilder::StoreAccumulatorInRegister
                ((BytecodeArrayBuilder *)(*(long *)pDVar2 + 0x18),*(undefined4 *)(pDVar2 + 0x2c));
    }
    BytecodeArrayBuilder::LoadLiteral
              ((BytecodeArrayBuilder *)(*(long *)pDVar2 + 0x18),
               -((uVar1 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 | (uVar1 & 0xffffffff) << 1);
    BytecodeArrayBuilder::StoreAccumulatorInRegister
              ((BytecodeArrayBuilder *)(*(long *)pDVar2 + 0x18),*(undefined4 *)(pDVar2 + 0x28));
    if (param_2 < 2) {
      BytecodeArrayBuilder::StoreAccumulatorInRegister
                ((BytecodeArrayBuilder *)(*(long *)pDVar2 + 0x18),*(undefined4 *)(pDVar2 + 0x2c));
    }
    TryFinallyBuilder::LeaveTry(*(TryFinallyBuilder **)(param_1 + 0x20));
    return 1;
  }
  return 0;
}

