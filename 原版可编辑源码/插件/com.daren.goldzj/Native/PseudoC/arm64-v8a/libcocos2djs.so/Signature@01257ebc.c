
/* v8::internal::wasm::WasmOpcodes::Signature(v8::internal::wasm::WasmOpcode) */

undefined8 v8::internal::wasm::WasmOpcodes::Signature(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = (int)param_1 >> 8;
  if (iVar1 < 0xfd) {
    if (iVar1 == 0) {
      puVar2 = &DAT_019f2a3d;
    }
    else {
      if (iVar1 != 0xfc) {
LAB_01257f3c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      param_1 = param_1 & 0xff;
      puVar2 = &DAT_019f2d3d;
    }
  }
  else if (iVar1 == 0xfe) {
    param_1 = param_1 & 0xff;
    puVar2 = &DAT_019f2c3d;
  }
  else {
    if (iVar1 != 0xfd) goto LAB_01257f3c;
    param_1 = param_1 & 0xff;
    puVar2 = &DAT_019f2b3d;
  }
  return *(undefined8 *)(&DAT_01cbc7c0 + (ulong)(byte)puVar2[param_1] * 8);
}

