
/* v8::internal::interpreter::Interpreter::GetBytecodeHandler(v8::internal::interpreter::Bytecode,
   v8::internal::interpreter::OperandScale) */

void __thiscall
v8::internal::interpreter::Interpreter::GetBytecodeHandler
          (Interpreter *this,ulong param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_019cb668 + ((param_2 & 0xff) + (ulong)(param_3 >> 1 & 0x7f) * 0xb7) * 4) +
          0x3d9;
  if (*(int *)(&DAT_019cb668 + ((param_2 & 0xff) + (ulong)(param_3 >> 1 & 0x7f) * 0xb7) * 4) < 0) {
    iVar1 = 0x48f;
  }
  Builtins::builtin((Builtins *)(*(long *)(this + 8) + 0x9e00),iVar1);
  return;
}

