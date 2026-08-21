
/* v8::internal::wasm::TableCopyImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::TableCopyImmediate(v8::internal::wasm::Decoder*,
   unsigned char const*) */

void __thiscall
v8::internal::wasm::TableCopyImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
TableCopyImmediate(TableCopyImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *this,
                  Decoder *param_1,uchar *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_38;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0x100000000;
  *(undefined8 *)this = 0x100000000;
  local_38 = 0x100000000;
  pbVar1 = param_2 + 2;
  if (pbVar1 < *(byte **)(param_1 + 0x18)) {
    uVar3 = *pbVar1 & 0x7f;
    if ((char)*pbVar1 < '\0') {
      uVar3 = Decoder::
              read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                        (param_1,param_2 + 3,(uint *)((ulong)&local_38 | 4),"table index",uVar3);
    }
    else {
      local_38 = 0x100000000;
    }
  }
  else {
    local_38 = 0;
    Decoder::errorf((uchar *)param_1,(char *)pbVar1,"expected %s","table index");
    uVar3 = 0;
  }
  uVar2 = local_38._4_4_;
  local_38 = CONCAT44(local_38._4_4_,uVar3);
  *(undefined8 *)this = local_38;
  local_38 = 0x100000000;
  pbVar1 = param_2 + (ulong)uVar2 + 2;
  if (pbVar1 < *(byte **)(param_1 + 0x18)) {
    uVar3 = *pbVar1 & 0x7f;
    if ((char)*pbVar1 < '\0') {
      uVar3 = Decoder::
              read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                        (param_1,param_2 + (ulong)uVar2 + 3,(uint *)((ulong)&local_38 | 4),
                         "table index",uVar3);
    }
    else {
      local_38 = 0x100000000;
    }
  }
  else {
    local_38 = 0;
    Decoder::errorf((uchar *)param_1,(char *)pbVar1,"expected %s","table index");
    uVar3 = 0;
  }
  local_38 = CONCAT44(local_38._4_4_,uVar3);
  *(undefined8 *)(this + 8) = local_38;
  *(uint *)(this + 0x10) = *(int *)(this + 4) + local_38._4_4_;
  return;
}

