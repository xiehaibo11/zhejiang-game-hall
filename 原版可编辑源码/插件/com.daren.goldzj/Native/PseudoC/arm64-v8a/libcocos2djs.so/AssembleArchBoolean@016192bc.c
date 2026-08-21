
/* v8::internal::compiler::CodeGenerator::AssembleArchBoolean(v8::internal::compiler::Instruction*,
   v8::internal::compiler::FlagsCondition) */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleArchBoolean
          (CodeGenerator *this,long param_1,uint param_3)

{
  ulong local_20;
  undefined4 local_18;
  
  local_18 = 0;
  local_20 = *(long *)(param_1 + (ulong)*(byte *)(param_1 + 4) * 8 + 0x20) >> 0x23 & 0xffffffffU |
             0x4000000000;
  if ((param_3 < 0x18) && ((0xf3ffffU >> (ulong)(param_3 & 0x1f) & 1) != 0)) {
    Assembler::cset((Assembler *)(this + 0xd0),&local_20,
                    *(undefined4 *)(&DAT_01a56430 + (long)(int)param_3 * 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

