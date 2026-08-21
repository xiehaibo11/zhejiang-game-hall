
/* v8::internal::SemiSpace::FixPagesFlags(long, long) */

void __thiscall v8::internal::SemiSpace::FixPagesFlags(SemiSpace *this,long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x20);
  if (lVar1 != 0) {
    do {
      while( true ) {
        *(SemiSpace **)(lVar1 + 0x58) = this;
        uVar2 = *(ulong *)(lVar1 + 8) & ~param_2 | param_2 & param_1;
        *(ulong *)(lVar1 + 8) = uVar2;
        if (*(int *)(this + 0x8c) != 1) break;
        *(ulong *)(lVar1 + 8) = uVar2 & 0xfffffffffff7ffe7 | 0x10;
        *(undefined8 *)(lVar1 + 0x68) = 0;
        lVar1 = *(long *)(lVar1 + 0xe0);
        if (lVar1 == 0) {
          return;
        }
      }
      *(ulong *)(lVar1 + 8) = uVar2 & 0xffffffffffffffe7 | 8;
      lVar1 = *(long *)(lVar1 + 0xe0);
    } while (lVar1 != 0);
  }
  return;
}

