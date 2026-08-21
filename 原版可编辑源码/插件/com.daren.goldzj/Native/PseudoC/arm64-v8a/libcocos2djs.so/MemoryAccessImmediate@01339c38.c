
/* v8::internal::wasm::MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::MemoryAccessImmediate(v8::internal::wasm::Decoder*,
   unsigned char const*, unsigned int) */

void __thiscall
v8::internal::wasm::MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
MemoryAccessImmediate
          (MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *this,
          Decoder *param_1,uchar *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint local_38;
  uint local_34;
  
  *(undefined4 *)(this + 8) = 0;
  pbVar1 = param_2 + 1;
  if (pbVar1 < *(byte **)(param_1 + 0x18)) {
    uVar2 = *pbVar1 & 0x7f;
    if ((char)*pbVar1 < '\0') {
      uVar2 = Decoder::
              read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                        (param_1,param_2 + 2,&local_34,"alignment",uVar2);
    }
    else {
      local_34 = 1;
    }
    *(uint *)this = uVar2;
    if (param_3 < uVar2) {
      Decoder::errorf((uchar *)param_1,(char *)pbVar1,
                      "invalid alignment; expected maximum alignment is %u, actual alignment is %u",
                      (ulong)param_3);
    }
  }
  else {
    local_34 = 0;
    Decoder::errorf((uchar *)param_1,(char *)pbVar1,"expected %s","alignment");
    *(undefined4 *)this = 0;
  }
  pbVar1 = pbVar1 + local_34;
  if (pbVar1 < *(byte **)(param_1 + 0x18)) {
    uVar2 = *pbVar1 & 0x7f;
    if ((char)*pbVar1 < '\0') {
      uVar2 = Decoder::
              read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                        (param_1,pbVar1 + 1,&local_38,"offset",uVar2);
    }
    else {
      local_38 = 1;
    }
  }
  else {
    local_38 = 0;
    Decoder::errorf((uchar *)param_1,(char *)pbVar1,"expected %s","offset");
    uVar2 = 0;
  }
  *(uint *)(this + 4) = uVar2;
  *(uint *)(this + 8) = local_38 + local_34;
  return;
}

