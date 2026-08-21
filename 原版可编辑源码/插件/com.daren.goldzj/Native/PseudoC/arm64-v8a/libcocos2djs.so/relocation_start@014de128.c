
/* v8::internal::CodeReference::relocation_start() const */

long __thiscall v8::internal::CodeReference::relocation_start(CodeReference *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == 3) {
    return **(long **)(this + 8) + (long)(int)(*(long **)(this + 8))[6];
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      return (**(ulong **)(this + 8) & 0xffffffff00000000 |
             (ulong)*(uint *)(**(ulong **)(this + 8) + 3)) + 7;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return *(long *)(*(long *)(this + 8) + 0x10);
}

