
/* v8::internal::CodeReference::relocation_end() const */

long __thiscall v8::internal::CodeReference::relocation_end(CodeReference *this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = *(int *)this;
  if (iVar1 == 3) {
    lVar3 = **(long **)(this + 8);
    iVar1 = (int)(*(long **)(this + 8))[1];
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        uVar2 = **(ulong **)(this + 8) & 0xffffffff00000000 |
                (ulong)*(uint *)(**(ulong **)(this + 8) + 3);
        return uVar2 + (long)(*(int *)(uVar2 + 3) >> 1) + 7;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar3 = *(long *)(*(long *)(this + 8) + 0x10);
    iVar1 = *(int *)(*(long *)(this + 8) + 0x18);
  }
  return lVar3 + iVar1;
}

