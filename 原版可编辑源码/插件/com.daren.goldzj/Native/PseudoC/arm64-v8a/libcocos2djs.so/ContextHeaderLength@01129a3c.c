
/* v8::internal::ScopeInfo::ContextHeaderLength() const */

undefined4 __thiscall v8::internal::ScopeInfo::ContextHeaderLength(ScopeInfo *this)

{
  undefined4 uVar1;
  
  if (1 < *(int *)(*(long *)this + 3)) {
    uVar1 = 2;
    if ((*(uint *)(*(long *)this + 7) & 0x8000000) != 0) {
      uVar1 = 3;
    }
    return uVar1;
  }
  return 2;
}

