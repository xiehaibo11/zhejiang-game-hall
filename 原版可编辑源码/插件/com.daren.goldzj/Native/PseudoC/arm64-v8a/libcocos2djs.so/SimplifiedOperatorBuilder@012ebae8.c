
/* v8::internal::compiler::SimplifiedOperatorBuilder::SimplifiedOperatorBuilder(v8::internal::Zone*)
    */

void __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::SimplifiedOperatorBuilder
          (SimplifiedOperatorBuilder *this,Zone *param_1)

{
  int iVar1;
  
  if (((DAT_01d45e20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d45e20), iVar1 != 0)) {
    memset(&DAT_01d41900,0,0x4520);
    SimplifiedOperatorGlobalCache::SimplifiedOperatorGlobalCache
              ((SimplifiedOperatorGlobalCache *)&DAT_01d41900);
    __cxa_guard_release(&DAT_01d45e20);
  }
  *(undefined **)this = &DAT_01d41900;
  *(Zone **)(this + 8) = param_1;
  return;
}

