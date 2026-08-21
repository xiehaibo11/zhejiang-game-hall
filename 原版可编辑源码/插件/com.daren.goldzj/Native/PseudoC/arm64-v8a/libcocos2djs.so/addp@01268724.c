
/* v8::internal::Assembler::addp(v8::internal::VRegister const&, v8::internal::VRegister const&) */

void __thiscall v8::internal::Assembler::addp(Assembler *this,VRegister *param_1,VRegister *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar1 = *(long *)param_1;
  uVar2 = (uint)((ulong)lVar1 >> 0x20);
  uVar3 = uVar2 + 7;
  if (-1 < lVar1) {
    uVar3 = uVar2;
  }
  lVar4 = ((long)((ulong)uVar3 << 0x20) >> 0x23) + -1;
  uVar3 = (uint)lVar4;
  if ((uVar3 < 8) && ((0x8bU >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
    Emit(this,*(uint *)(&DAT_019f38e8 + lVar4 * 4) | (uint)lVar1 | *(int *)param_2 << 5 | 0x5eb1b800
        );
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

