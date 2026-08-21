
/* v8::internal::wasm::BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::BlockTypeImmediate(v8::internal::wasm::WasmFeatures
   const&, v8::internal::wasm::Decoder*, unsigned char const*) */

void __thiscall
v8::internal::wasm::BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
BlockTypeImmediate(BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *this,
                  WasmFeatures *param_1,Decoder *param_2,uchar *param_3)

{
  uchar *puVar1;
  uchar uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  
  *(undefined4 *)this = 1;
  this[4] = (BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  puVar1 = param_3 + 1;
  if ((*(uchar **)(param_2 + 0x18) < puVar1) || ((int)*(uchar **)(param_2 + 0x18) == (int)puVar1)) {
    Decoder::error(param_2,puVar1,"block type");
    uVar2 = '\0';
  }
  else {
    uVar2 = *puVar1;
  }
  uVar4 = function_body_decoder::decode_local_type(uVar2,this + 4);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if ((char)*param_1 < '\0') {
    if (((byte)param_2[0x30] & 1) == 0) {
      if ((byte)param_2[0x30] >> 1 != 0) {
        return;
      }
    }
    else if (*(long *)(param_2 + 0x38) != 0) {
      return;
    }
    iVar3 = Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                      (param_2,puVar1,(uint *)this,"block arity");
    if ((-1 < iVar3) && (*(int *)this != 0)) {
      *(int *)(this + 8) = iVar3;
      return;
    }
    pcVar5 = "invalid block type index";
  }
  else {
    pcVar5 = "invalid block type";
  }
  Decoder::error(param_2,puVar1,pcVar5);
  return;
}

