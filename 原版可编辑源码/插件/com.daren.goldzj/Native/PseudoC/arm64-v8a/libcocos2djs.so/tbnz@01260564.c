
/* v8::internal::Assembler::tbnz(v8::internal::Register const&, unsigned int, v8::internal::Label*)
    */

void __thiscall
v8::internal::Assembler::tbnz(Assembler *this,Register *param_1,uint param_2,Label *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)param_3;
  if ((int)uVar1 < 0) {
    iVar2 = ~uVar1 + (*(int *)(this + 0x10) - *(int *)(this + 0x20));
  }
  else {
    iVar2 = 0;
    if (uVar1 != 0) {
      iVar2 = uVar1 + ~(*(int *)(this + 0x20) - *(int *)(this + 0x10));
    }
    *(uint *)param_3 = (*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 1;
  }
  if ((iVar2 >> 2) + 0x2000U < 0x4000) {
    Emit(this,(param_2 & 0x20) << 0x1a | (param_2 & 0x1f) << 0x13 | (iVar2 >> 2 & 0x3fffU) << 5 |
              *(uint *)param_1 | 0x37000000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int14(imm14)");
}

