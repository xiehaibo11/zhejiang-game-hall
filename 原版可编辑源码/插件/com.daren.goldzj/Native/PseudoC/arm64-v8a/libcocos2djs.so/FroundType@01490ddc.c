
/* v8::internal::wasm::AsmType::FroundType(v8::internal::Zone*) */

void v8::internal::wasm::AsmType::FroundType(Zone *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 8) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_1,8);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar1 + 1;
  }
  *puVar1 = &PTR_FUN_01cc4220;
  return;
}

