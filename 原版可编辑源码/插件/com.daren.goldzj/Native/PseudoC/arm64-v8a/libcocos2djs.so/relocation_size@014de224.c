
/* v8::internal::CodeReference::relocation_size() const */

int __thiscall v8::internal::CodeReference::relocation_size(CodeReference *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == 3) {
    return *(int *)(*(long *)(this + 8) + 0x34);
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      return *(int *)((**(ulong **)(this + 8) & 0xffffffff00000000 |
                      (ulong)*(uint *)(**(ulong **)(this + 8) + 3)) + 3) >> 1;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return *(int *)(*(long *)(this + 8) + 0x18);
}

