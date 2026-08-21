
/* v8::internal::compiler::CodeGenerator::AssembleBranchPoisoning(v8::internal::compiler::FlagsCondition,
   v8::internal::compiler::Instruction*) */

void v8::internal::compiler::CodeGenerator::AssembleBranchPoisoning(long param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 | 1) == 0x13) {
    return;
  }
  uVar1 = (uint)((long)(int)param_2 ^ 1U);
  if ((uVar1 < 0x18) && ((0xf3ffffU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    Assembler::csel((Assembler *)(param_1 + 0xd0),&DAT_01a563b8,&DAT_01a5640c,&DAT_01a563b8,
                    *(undefined4 *)(&DAT_01a56430 + ((long)(int)param_2 ^ 1U) * 4));
    Assembler::csdb((Assembler *)(param_1 + 0xd0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

