
/* v8::internal::compiler::TypeCache::Get() */

undefined * v8::internal::compiler::TypeCache::Get(void)

{
  int iVar1;
  
  if (((DAT_01d46070 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d46070), iVar1 != 0)) {
    TypeCache((TypeCache *)&DAT_01d45e28);
    __cxa_guard_release(&DAT_01d46070);
  }
  return &DAT_01d45e28;
}

