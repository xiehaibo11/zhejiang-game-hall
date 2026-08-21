
/* v8::internal::Assembler::b(v8::internal::Label*) */

void __thiscall v8::internal::Assembler::b(Assembler *this,Label *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)param_1;
  if ((int)uVar2 < 0) {
    uVar1 = ~uVar2 + (*(int *)(this + 0x10) - *(int *)(this + 0x20));
  }
  else {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar2 + ~(*(int *)(this + 0x20) - *(int *)(this + 0x10));
    }
    *(uint *)param_1 = (*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 1;
  }
  if (((int)uVar1 >> 2) + 0x2000000U >> 0x1a == 0) {
    Emit(this,uVar1 >> 2 & 0x3ffffff | 0x14000000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int26(imm26)");
}

