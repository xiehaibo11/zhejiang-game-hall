
/* v8::internal::wasm::AsmType::IsA(v8::internal::wasm::AsmType*) */

ulong __thiscall v8::internal::wasm::AsmType::IsA(AsmType *this,AsmType *param_1)

{
  ulong uVar1;
  
  if (((ulong)this & 1) != 0) {
    if (((ulong)param_1 & 1) == 0) {
      return 0;
    }
    return (ulong)(((uint)param_1 & ((uint)this ^ 0xffffffff) & 0xfffffffe) == 0);
  }
  if (this != (AsmType *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014909f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)this + 0x30))();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

