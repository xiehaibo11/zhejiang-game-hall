
/* v8::internal::WasmInstanceObject::GetCallTarget(unsigned int) */

undefined8 __thiscall
v8::internal::WasmInstanceObject::GetCallTarget(WasmInstanceObject *this,uint param_1)

{
  NativeModule *this_00;
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)this;
  this_00 = (NativeModule *)
            **(undefined8 **)
              (*(long *)((uVar2 & 0xffffffff00000000 |
                         (ulong)*(uint *)((uVar2 & 0xffffffff00000000 |
                                          (ulong)*(uint *)(uVar2 + 0x6f)) + 0xb)) + 3) + 0x18);
  if (param_1 < *(uint *)(*(long *)(this_00 + 200) + 0x3c)) {
    return *(undefined8 *)(*(long *)(uVar2 + 0x2f) + (ulong)param_1 * 8);
  }
  uVar1 = wasm::NativeModule::GetCallTargetForFunction(this_00,param_1);
  return uVar1;
}

