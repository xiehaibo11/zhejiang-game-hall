
/* v8::internal::Instruction::IsTargetInImmPCOffsetRange(v8::internal::Instruction*) */

bool __thiscall
v8::internal::Instruction::IsTargetInImmPCOffsetRange(Instruction *this,Instruction *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(uint *)this;
  if (uVar2 >> 0x19 != 0x2a) {
    if ((uVar2 & 0x7c000000) == 0x14000000) {
      lVar3 = 0x19;
      goto LAB_0126bcc8;
    }
    if ((uVar2 & 0x7e000000) != 0x34000000) {
      if ((uVar2 & 0x7e000000) != 0x36000000) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      lVar3 = 0xd;
      goto LAB_0126bcc8;
    }
  }
  lVar3 = 0x12;
LAB_0126bcc8:
  lVar4 = (long)param_1 - (long)this;
  lVar1 = lVar4 + 3;
  if (-1 < lVar4) {
    lVar1 = lVar4;
  }
  return lVar1 >> 2 < 1L << lVar3 && -(1L << lVar3) <= lVar1 >> 2;
}

