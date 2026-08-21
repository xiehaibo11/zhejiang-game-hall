
/* v8::internal::Instruction::IsValidImmPCOffset(v8::internal::ImmBranchType, long) */

bool v8::internal::Instruction::IsValidImmPCOffset(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 + 3;
  if (-1 < param_2) {
    lVar1 = param_2;
  }
  if (param_1 - 1U < 4) {
    lVar2 = 1L << (*(ulong *)(&DAT_019f3ab0 + (long)(int)(param_1 - 1U) * 8) & 0x3f);
    return lVar1 >> 2 < lVar2 && -lVar2 <= lVar1 >> 2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

