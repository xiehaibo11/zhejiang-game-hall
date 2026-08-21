
/* v8::internal::wasm::WasmError::WasmError(unsigned int, char const*, ...) */

void __thiscall
v8::internal::wasm::WasmError::WasmError(WasmError *this,uint param_1,char *param_2,...)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  WasmError *pWVar1;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puStack_80 = auStack_c0;
  ppuStack_88 = &local_90;
  *(uint *)this = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  pWVar1 = this + 8;
  *(undefined8 *)pWVar1 = 0;
  uStack_78 = 0xffffff80ffffffd8;
  local_b8 = in_x3;
  uStack_b0 = in_x4;
  local_a8 = in_x5;
  uStack_a0 = in_x6;
  local_98 = in_x7;
  local_90 = (undefined1 *)register0x00000008;
  FormatError((WasmError *)&local_68,param_2,&local_90);
  if (((byte)*pWVar1 & 1) == 0) {
    *(undefined2 *)pWVar1 = 0;
  }
  else {
    **(undefined1 **)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    if (((byte)this[8] & 1) != 0) {
      operator_delete(*(void **)(this + 0x18));
      *(undefined8 *)(this + 8) = 0;
    }
  }
  *(undefined8 *)(this + 0x18) = local_58;
  *(undefined8 *)(this + 0x10) = uStack_60;
  *(undefined8 *)pWVar1 = local_68;
  return;
}

