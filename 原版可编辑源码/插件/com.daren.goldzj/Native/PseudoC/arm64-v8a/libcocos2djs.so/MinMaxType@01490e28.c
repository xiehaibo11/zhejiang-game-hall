
/* v8::internal::wasm::AsmType::MinMaxType(v8::internal::Zone*, v8::internal::wasm::AsmType*,
   v8::internal::wasm::AsmType*) */

void v8::internal::wasm::AsmType::MinMaxType(Zone *param_1,AsmType *param_2,AsmType *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 0x18) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_1,0x18);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar1 + 3;
  }
  *puVar1 = &PTR_FUN_01cc4268;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  return;
}

