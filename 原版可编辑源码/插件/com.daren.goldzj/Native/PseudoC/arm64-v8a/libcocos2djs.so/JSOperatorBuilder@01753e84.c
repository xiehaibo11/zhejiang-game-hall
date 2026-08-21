
/* v8::internal::compiler::JSOperatorBuilder::JSOperatorBuilder(v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::JSOperatorBuilder::JSOperatorBuilder(JSOperatorBuilder *this,Zone *param_1)

{
  int iVar1;
  
  if (((DAT_01d4acf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d4acf8), iVar1 != 0)) {
    memset(&DAT_01d49588,0,6000);
    JSOperatorGlobalCache::JSOperatorGlobalCache((JSOperatorGlobalCache *)&DAT_01d49588);
    __cxa_guard_release(&DAT_01d4acf8);
  }
  *(undefined **)this = &DAT_01d49588;
  *(Zone **)(this + 8) = param_1;
  return;
}

