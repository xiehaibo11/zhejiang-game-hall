
/* void std::__ndk1::vector<v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport,
   v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport>
   >::__push_back_slow_path<v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport>(v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport&&)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport>>
::__push_back_slow_path<v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport>
          (vector<v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmFunctionImport>>
           *this,WasmFunctionImport *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  Zone *this_00;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (uVar1 < 0x5555556) {
    lVar3 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x2aaaaa9 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar1 = 0x5555555;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar5 = uVar1 * 0x18;
      lVar3 = *(long *)(this_00 + 0x10);
      if (uVar5 < (ulong)(*(long *)(this_00 + 0x18) - lVar3) ||
          uVar5 - (*(long *)(this_00 + 0x18) - lVar3) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar3 + uVar5;
      }
      else {
        lVar3 = v8::internal::Zone::NewExpand(this_00,uVar5);
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar8 = *(undefined8 *)param_1;
    puVar4 = (undefined8 *)(lVar3 + lVar6 * 8);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar9;
    *puVar4 = uVar8;
    lVar6 = *(long *)this;
    puVar2 = puVar4;
    for (lVar7 = *(long *)(this + 8); lVar7 != lVar6; lVar7 = lVar7 + -0x18) {
      uVar9 = *(undefined8 *)(lVar7 + -0x10);
      uVar8 = *(undefined8 *)(lVar7 + -0x18);
      puVar2[-1] = *(undefined8 *)(lVar7 + -8);
      puVar2[-2] = uVar9;
      puVar2[-3] = uVar8;
      puVar2 = puVar2 + -3;
    }
    *(undefined8 **)this = puVar2;
    *(undefined8 **)(this + 8) = puVar4 + 3;
    *(ulong *)(this + 0x10) = lVar3 + uVar1 * 0x18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

