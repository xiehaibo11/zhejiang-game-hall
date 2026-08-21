
/* v8::internal::wasm::IsWasmCodegenAllowed(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Context>) */

undefined8 v8::internal::wasm::IsWasmCodegenAllowed(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xb760);
  if ((UNRECOVERED_JUMPTABLE == (code *)0x0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xb750), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0124c3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_1 + 200);
  return uVar1;
}

