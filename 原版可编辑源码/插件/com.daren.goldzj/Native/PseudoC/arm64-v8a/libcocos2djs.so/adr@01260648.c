
/* v8::internal::Assembler::adr(v8::internal::Register const&, v8::internal::Label*) */

void __thiscall v8::internal::Assembler::adr(Assembler *this,Register *param_1,Label *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)param_2;
  if ((int)uVar2 < 0) {
    uVar1 = ~uVar2 + (*(int *)(this + 0x10) - *(int *)(this + 0x20));
  }
  else {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar2 + ~(*(int *)(this + 0x20) - *(int *)(this + 0x10));
    }
    *(uint *)param_2 = (*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 1;
  }
  if ((long)(int)uVar1 + 0x100000U < 0x200000) {
    Emit(this,(uVar1 & 0x1ffffc) << 3 | (uVar1 & 3) << 0x1d | *(uint *)param_1 | 0x10000000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int21(imm21)");
}

