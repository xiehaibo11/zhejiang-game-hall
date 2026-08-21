
/* v8::internal::RegExpGlobalCache::LastSuccessfulMatch() */

long __thiscall v8::internal::RegExpGlobalCache::LastSuccessfulMatch(RegExpGlobalCache *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc);
  if (*(int *)this != 0) {
    iVar1 = 0;
  }
  return *(long *)(this + 0x10) + (long)(*(int *)(this + 0xc) * *(int *)(this + 8) - iVar1) * 4;
}

