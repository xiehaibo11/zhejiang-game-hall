
/* v8::internal::DisassemblingDecoder::VisitConditionalCompareImmediate(v8::internal::Instruction*)
    */

void __thiscall
v8::internal::DisassemblingDecoder::VisitConditionalCompareImmediate
          (DisassemblingDecoder *this,Instruction *param_1)

{
  uint uVar1;
  
  uVar1 = (*(uint *)param_1 & 0xffe00c10) + 0x45bff800;
  uVar1 = uVar1 >> 0x1e | uVar1 * 4;
  if (uVar1 < 4) {
    Format(this,param_1,*(char **)(&DAT_01cbe468 + (long)(int)uVar1 * 8),
           "\'Rn, \'IP, \'INzcv, \'Cond");
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

