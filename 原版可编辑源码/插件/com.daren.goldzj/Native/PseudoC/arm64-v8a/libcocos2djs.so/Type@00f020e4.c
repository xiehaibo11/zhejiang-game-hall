
/* v8::internal::ScopeIterator::Type() const */

undefined4 __thiscall v8::internal::ScopeIterator::Type(ScopeIterator *this)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)(this + 0x20) != 0) {
    if ((ulong)(long)*(char *)(*(long *)(this + 0x50) + 0x80) < 8) {
      return *(undefined4 *)(&DAT_019a754c + (long)*(char *)(*(long *)(this + 0x50) + 0x80) * 4);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar2 = **(ulong **)(this + 0x28);
  uVar3 = uVar2 & 0xffffffff00000000;
  if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x8f) {
    uVar1 = 6;
    if (this[0x58] != (ScopeIterator)0x0) {
      uVar1 = 0;
    }
    return uVar1;
  }
  if (((*(short *)((uVar3 | *(uint *)(uVar2 - 1)) + 7) != 0x8d) &&
      (*(short *)((uVar3 | *(uint *)(uVar2 - 1)) + 7) != 0x8c)) &&
     (*(short *)((uVar3 | *(uint *)(uVar2 - 1)) + 7) != 0x8b)) {
    if (*(short *)((uVar3 | *(uint *)(uVar2 - 1)) + 7) == 0x8a) {
      return 4;
    }
    if (*(short *)((uVar3 | *(uint *)(uVar2 - 1)) + 7) == 0x89) {
      return 5;
    }
    if (*(short *)((uVar3 | *(uint *)(uVar2 - 1)) + 7) == 0x8e) {
      return 8;
    }
    uVar1 = 6;
    if (*(short *)((uVar3 | *(uint *)(uVar2 - 1)) + 7) != 0x90) {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 3;
}

