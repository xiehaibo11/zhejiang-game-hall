
/* v8::internal::WasmExceptionPackage::New(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmExceptionTag>, int) */

undefined8
v8::internal::WasmExceptionPackage::New(Factory *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = Factory::NewWasmRuntimeError(param_1,0x163,0,0,0);
  lVar2 = Object::SetProperty(param_1,uVar1,param_1 + 0xbf8,param_2,0,1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "!Object::SetProperty(isolate, exception, isolate->factory()->wasm_exception_tag_symbol(), exception_tag, StoreOrigin::kMaybeKeyed, Just(ShouldThrow::kThrowOnError)) .is_null()"
            );
  }
  uVar3 = Factory::NewFixedArray(param_1,param_3,0);
  lVar2 = Object::SetProperty(param_1,uVar1,param_1 + 0xc00,uVar3,0,1);
  if (lVar2 != 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "!Object::SetProperty(isolate, exception, isolate->factory()->wasm_exception_values_symbol(), values, StoreOrigin::kMaybeKeyed, Just(ShouldThrow::kThrowOnError)) .is_null()"
          );
}

