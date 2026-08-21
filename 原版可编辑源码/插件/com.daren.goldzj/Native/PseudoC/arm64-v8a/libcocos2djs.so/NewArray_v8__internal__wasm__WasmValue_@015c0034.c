
/* v8::internal::wasm::WasmValue* v8::internal::NewArray<v8::internal::wasm::WasmValue>(unsigned
   long) */

WasmValue * v8::internal::NewArray<v8::internal::wasm::WasmValue>(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  WasmValue *__s;
  long *plVar3;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  uVar1 = param_1 * 0x11;
  if (SUB168(auVar2 * ZEXT816(0x11),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar1,(nothrow_t *)&std::nothrow);
  if (__s == (WasmValue *)0x0) {
    plVar3 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar3 + 0x18))();
    __s = operator_new__(uVar1,(nothrow_t *)&std::nothrow);
    if (__s == (WasmValue *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  if (param_1 != 0) {
    memset(__s,0,((param_1 * 0x11 - 0x11) / 0x11) * 0x11 + 0x11);
  }
  return __s;
}

