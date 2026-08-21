
/* v8::internal::compiler::BytecodeGraphBuilder::BuildLoopExitsForFunctionExit(v8::internal::compiler::BytecodeLivenessState
   const*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildLoopExitsForFunctionExit
          (BytecodeGraphBuilder *this,BytecodeLivenessState *param_1)

{
  BuildLoopExitsUntilLoop(this,-1,param_1);
  return;
}

