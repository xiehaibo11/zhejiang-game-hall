
/* v8::internal::wasm::CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::CallIndirectImmediate(v8::internal::wasm::WasmFeatures,
   v8::internal::wasm::Decoder*, unsigned char const*) */

void __thiscall
v8::internal::wasm::CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
CallIndirectImmediate
          (CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *this,uint param_2,
          Decoder *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_48;
  uint local_24;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  local_24 = 0;
  pbVar1 = (byte *)(param_4 + 1);
  if (pbVar1 < *(byte **)(param_3 + 0x18)) {
    uVar4 = *pbVar1 & 0x7f;
    if ((char)*pbVar1 < '\0') {
      uVar4 = Decoder::
              read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                        (param_3,(uchar *)(param_4 + 2),&local_24,"signature index",uVar4);
      uVar6 = (ulong)local_24;
    }
    else {
      uVar6 = 1;
      local_24 = 1;
    }
  }
  else {
    local_24 = 0;
    Decoder::errorf((uchar *)param_3,(char *)pbVar1,"expected %s","signature index");
    uVar6 = 0;
    uVar4 = 0;
  }
  *(uint *)(this + 4) = uVar4;
  pbVar2 = (byte *)(param_4 + uVar6 + 1);
  local_48 = 0x100000000;
  if (pbVar2 < *(byte **)(param_3 + 0x18)) {
    bVar3 = *pbVar2;
    uVar4 = bVar3 & 0x7f;
    uVar5 = (ulong)uVar4;
    if ((char)bVar3 < '\0') {
      uVar4 = Decoder::
              read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                        (param_3,(uchar *)(param_4 + uVar6 + 2),(uint *)((ulong)&local_48 | 4),
                         "table index",uVar4);
      uVar5 = (ulong)uVar4;
      local_48 = CONCAT44(local_48._4_4_,uVar4);
      if (uVar4 == 0) goto LAB_01334b40;
    }
    else {
      local_48 = CONCAT44(1,(uint)bVar3) & 0xffffffff0000007f;
      if ((bVar3 & 0x7f) == 0) goto LAB_01334b40;
    }
  }
  else {
    local_48 = 0;
    Decoder::errorf((uchar *)param_3,(char *)pbVar2,"expected %s","table index");
    local_48 = local_48 & 0xffffffff00000000;
LAB_01334b40:
    uVar5 = 0;
    if (local_48._4_4_ == 1) goto LAB_01334ba0;
  }
  if ((param_2 >> 5 & 1) == 0) {
    Decoder::errorf((uchar *)param_3,(char *)(pbVar1 + local_24),"expected table index 0, found %u",
                    uVar5);
    uVar5 = local_48 & 0xffffffff;
  }
LAB_01334ba0:
  *(int *)this = (int)uVar5;
  *(uint *)(this + 0x10) = local_48._4_4_ + local_24;
  return;
}

