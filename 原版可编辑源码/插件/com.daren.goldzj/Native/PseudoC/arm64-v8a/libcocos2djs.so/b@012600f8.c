
/* v8::internal::Assembler::b(v8::internal::Label*, v8::internal::Condition) */

void __thiscall v8::internal::Assembler::b(Assembler *this,uint *param_1,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    iVar2 = ~uVar1 + (*(int *)(this + 0x10) - *(int *)(this + 0x20));
  }
  else {
    iVar2 = 0;
    if (uVar1 != 0) {
      iVar2 = uVar1 + ~(*(int *)(this + 0x20) - *(int *)(this + 0x10));
    }
    *param_1 = (*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 1;
  }
  if ((iVar2 >> 2) + 0x40000U < 0x80000) {
    Emit(this,(iVar2 >> 2 & 0x7ffffU) << 5 | param_3 | 0x54000000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int19(imm19)");
}

