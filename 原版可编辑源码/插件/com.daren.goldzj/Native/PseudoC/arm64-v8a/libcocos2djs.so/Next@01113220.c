
/* v8::internal::SharedFunctionInfo::ScriptIterator::Next() */

ulong __thiscall v8::internal::SharedFunctionInfo::ScriptIterator::Next(ScriptIterator *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  iVar2 = *(int *)(this + 8);
  uVar4 = **(ulong **)this;
  if (iVar2 < *(int *)(uVar4 + 3) >> 1) {
    iVar3 = iVar2 << 2;
    do {
      iVar2 = iVar2 + 1;
      *(int *)(this + 8) = iVar2;
      uVar1 = *(uint *)(uVar4 + (long)iVar3 + 7);
      if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
        if ((int)((ulong)uVar1 & 0xfffffffffffffffd) !=
            *(int *)((uVar4 & 0xffffffff00000000) + 0xa0)) {
          return (ulong)uVar1 & 0xfffffffffffffffd | uVar4 & 0xffffffff00000000;
        }
      }
      uVar4 = **(ulong **)this;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(uVar4 + 3) >> 1);
  }
  return 0;
}

