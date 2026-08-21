
/* v8::internal::compiler::CommonOperatorBuilder::CommonOperatorBuilder(v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::CommonOperatorBuilder::CommonOperatorBuilder
          (CommonOperatorBuilder *this,Zone *param_1)

{
  int iVar1;
  
  if (((DAT_01d49580 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d49580), iVar1 != 0)) {
    memset(&DAT_01d478f0,0,0x1c90);
    CommonOperatorGlobalCache::CommonOperatorGlobalCache((CommonOperatorGlobalCache *)&DAT_01d478f0)
    ;
    __cxa_guard_release(&DAT_01d49580);
  }
  *(undefined **)this = &DAT_01d478f0;
  *(Zone **)(this + 8) = param_1;
  return;
}

