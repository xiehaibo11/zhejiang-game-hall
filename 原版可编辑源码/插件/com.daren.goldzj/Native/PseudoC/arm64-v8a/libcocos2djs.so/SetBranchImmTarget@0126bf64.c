
/* v8::internal::Instruction::SetBranchImmTarget(v8::internal::Instruction*) */

void __thiscall
v8::internal::Instruction::SetBranchImmTarget(Instruction *this,Instruction *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)this;
  uVar2 = (uint)((ulong)((long)param_1 - (long)this) >> 2);
  if (uVar1 >> 0x19 != 0x2a) {
    if ((uVar1 & 0x7c000000) == 0x14000000) {
      if ((long)(int)uVar2 + 0x2000000U >> 0x1a != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","is_int26(imm26)");
      }
      uVar2 = uVar2 & 0x3ffffff;
      uVar3 = 0xfc000000;
      goto LAB_0126c000;
    }
    if ((uVar1 & 0x7e000000) != 0x34000000) {
      if ((uVar1 & 0x7e000000) != 0x36000000) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if (0x3fff < (long)(int)uVar2 + 0x2000U) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","is_int14(imm14)");
      }
      uVar2 = (uVar2 & 0x3fff) << 5;
      uVar3 = 0xfff8001f;
      goto LAB_0126c000;
    }
  }
  if (0x7ffff < (long)(int)uVar2 + 0x40000U) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","is_int19(imm19)");
  }
  uVar2 = (uVar2 & 0x7ffff) << 5;
  uVar3 = 0xff00001f;
LAB_0126c000:
  *(uint *)this = uVar3 & uVar1 | uVar2;
  return;
}

