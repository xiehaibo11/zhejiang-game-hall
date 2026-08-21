
/* v8::internal::DisassemblingDecoder::VisitMoveWideImmediate(v8::internal::Instruction*) */

void __thiscall
v8::internal::DisassemblingDecoder::VisitMoveWideImmediate
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *(int *)param_1 + 0x6d800000;
  uVar2 = uVar1 >> 0x1d | uVar1 * 8 & 0xfc000007;
  if ((uVar2 < 8) && ((0xddU >> (ulong)(uVar1 >> 0x1d) & 1) != 0)) {
    uVar3 = -(ulong)((uVar1 & 0x1fffffff) >> 0x1c) & 0xfffffff800000000 | (ulong)uVar2 << 3;
    Format(this,param_1,*(char **)((long)&PTR_DAT_01cbe488 + uVar3),
           *(char **)((long)&PTR_s__Rd___IMoveImm_01cbe4c8 + uVar3));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

