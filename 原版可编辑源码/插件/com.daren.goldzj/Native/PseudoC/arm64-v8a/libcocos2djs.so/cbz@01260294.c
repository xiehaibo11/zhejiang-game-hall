
/* v8::internal::Assembler::cbz(v8::internal::Register const&, v8::internal::Label*) */

void __thiscall v8::internal::Assembler::cbz(Assembler *this,Register *param_1,Label *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)param_2;
  if ((int)uVar1 < 0) {
    iVar2 = ~uVar1 + (*(int *)(this + 0x10) - *(int *)(this + 0x20));
  }
  else {
    iVar2 = 0;
    if (uVar1 != 0) {
      iVar2 = uVar1 + ~(*(int *)(this + 0x20) - *(int *)(this + 0x10));
    }
    *(uint *)param_2 = (*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 1;
  }
  if ((iVar2 >> 2) + 0x40000U < 0x80000) {
    Emit(this,(iVar2 >> 2 & 0x7ffffU) << 5 | (uint)*(ulong *)param_1 |
              (uint)(*(ulong *)param_1 >> 0x20 == 0x40) << 0x1f | 0x34000000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int19(imm19)");
}

