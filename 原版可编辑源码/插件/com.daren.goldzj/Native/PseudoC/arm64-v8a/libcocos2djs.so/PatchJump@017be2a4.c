
/* v8::internal::interpreter::BytecodeArrayWriter::PatchJump(unsigned long, unsigned long) */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::PatchJump
          (BytecodeArrayWriter *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = *(long *)(this + 0x18) - *(long *)(this + 0x10);
  if (param_2 < uVar5) {
    bVar3 = *(byte *)(*(long *)(this + 0x10) + param_2);
    iVar4 = (int)param_1 - (int)param_2;
    if (bVar3 < 4) {
      uVar1 = param_2 + 1;
      if (uVar5 <= uVar1) goto LAB_017be344;
      uVar2 = 0x8a2U >> (ulong)((uint)bVar3 * 3 & 0x1f) & 7;
      iVar4 = iVar4 + -1;
      if (uVar2 == 2) {
        PatchJumpWith16BitOperand(this,uVar1,iVar4);
      }
      else {
        if (uVar2 != 4) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        PatchJumpWith32BitOperand(this,uVar1,iVar4);
      }
    }
    else {
      PatchJumpWith8BitOperand(this,param_2,iVar4);
    }
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + -1;
    return;
  }
LAB_017be344:
                    /* WARNING: Subroutine does not return */
  abort();
}

