
/* v8::internal::interpreter::JumpTableTargetOffsets::JumpTableTargetOffsets(v8::internal::interpreter::BytecodeArrayAccessor
   const*, int, int, int) */

void __thiscall
v8::internal::interpreter::JumpTableTargetOffsets::JumpTableTargetOffsets
          (JumpTableTargetOffsets *this,BytecodeArrayAccessor *param_1,int param_2,int param_3,
          int param_4)

{
  *(BytecodeArrayAccessor **)this = param_1;
  *(int *)(this + 8) = param_2;
  *(int *)(this + 0xc) = param_3;
  *(int *)(this + 0x10) = param_4;
  return;
}

