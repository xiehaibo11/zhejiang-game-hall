
/* v8::internal::compiler::UsePosition::HintTypeForOperand(v8::internal::compiler::InstructionOperand
   const&) */

undefined1 v8::internal::compiler::UsePosition::HintTypeForOperand(InstructionOperand *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)param_1;
  uVar1 = (uint)uVar2 & 7;
  if (uVar1 - 2 < 2) {
    return false;
  }
  if (uVar1 != 4) {
    if (uVar1 == 1) {
      return 4;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (((uVar2 & 0x1c) == 4) && (((uint)(uVar2 >> 5) & 0xff) < 0xb)) {
    return true;
  }
  return (uVar2 & 0x1c) == 4 && 10 < ((uint)uVar2 >> 5 & 0xff);
}

