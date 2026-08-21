
/* v8::internal::wasm::WasmModuleSourceMap::DecodeMapping(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
v8::internal::wasm::WasmModuleSourceMap::DecodeMapping
          (WasmModuleSourceMap *this,basic_string *param_1)

{
  basic_string *pbVar1;
  ulong uVar2;
  basic_string *pbVar3;
  basic_string bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  bVar4 = *param_1;
  uVar7 = *(ulong *)(param_1 + 8);
  bVar5 = ((byte)bVar4 & 1) == 0;
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (!bVar5) {
    uVar2 = uVar7;
  }
  if (uVar2 != 0) {
    pbVar1 = param_1 + 1;
    do {
      pbVar3 = pbVar1;
      if (!bVar5) {
        pbVar3 = *(basic_string **)(param_1 + 0x10);
      }
      if (pbVar3[local_48] == (basic_string)0x2c) {
        local_48 = local_48 + 1;
      }
      else {
        uVar2 = (ulong)((byte)bVar4 >> 1);
        if (!bVar5) {
          uVar2 = uVar7;
        }
        iVar6 = base::VLQBase64Decode((char *)pbVar3,uVar2,&local_48);
        if (iVar6 == -0x80000000) {
          return 0;
        }
        local_50 = local_50 + (long)iVar6;
        uVar2 = (ulong)((byte)*param_1 >> 1);
        pbVar3 = pbVar1;
        if (((byte)*param_1 & 1) != 0) {
          uVar2 = *(ulong *)(param_1 + 8);
          pbVar3 = *(basic_string **)(param_1 + 0x10);
        }
        iVar6 = base::VLQBase64Decode((char *)pbVar3,uVar2,&local_48);
        if (iVar6 == -0x80000000) {
          return 0;
        }
        local_58 = local_58 + (long)iVar6;
        uVar2 = (ulong)((byte)*param_1 >> 1);
        pbVar3 = pbVar1;
        if (((byte)*param_1 & 1) != 0) {
          uVar2 = *(ulong *)(param_1 + 8);
          pbVar3 = *(basic_string **)(param_1 + 0x10);
        }
        iVar6 = base::VLQBase64Decode((char *)pbVar3,uVar2,&local_48);
        if (iVar6 == -0x80000000) {
          return 0;
        }
        local_60 = local_60 + (long)iVar6;
        uVar2 = (ulong)((byte)*param_1 >> 1);
        pbVar3 = pbVar1;
        if (((byte)*param_1 & 1) != 0) {
          uVar2 = *(ulong *)(param_1 + 8);
          pbVar3 = *(basic_string **)(param_1 + 0x10);
        }
        iVar6 = base::VLQBase64Decode((char *)pbVar3,uVar2,&local_48);
        if (iVar6 == -0x80000000) {
          return 0;
        }
        bVar4 = *param_1;
        uVar2 = (ulong)((byte)bVar4 >> 1);
        if (((byte)bVar4 & 1) != 0) {
          uVar2 = *(ulong *)(param_1 + 8);
        }
        if (local_48 < uVar2) {
          pbVar3 = pbVar1;
          if (((byte)bVar4 & 1) != 0) {
            pbVar3 = *(basic_string **)(param_1 + 0x10);
          }
          if (pbVar3[local_48] != (basic_string)0x2c) {
            return 0;
          }
        }
        local_48 = local_48 + 1;
        if (*(ulong **)(this + 0x38) == *(ulong **)(this + 0x40)) {
          std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
          __push_back_slow_path<unsigned_long_const&>
                    ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(this + 0x30),
                     &local_58);
        }
        else {
          **(ulong **)(this + 0x38) = local_58;
          *(long *)(this + 0x38) = *(long *)(this + 0x38) + 8;
        }
        if (*(ulong **)(this + 0x50) == *(ulong **)(this + 0x58)) {
          std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
          __push_back_slow_path<unsigned_long_const&>
                    ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(this + 0x48),
                     &local_60);
        }
        else {
          **(ulong **)(this + 0x50) = local_60;
          *(long *)(this + 0x50) = *(long *)(this + 0x50) + 8;
        }
        if (*(ulong **)(this + 8) == *(ulong **)(this + 0x10)) {
          std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
          __push_back_slow_path<unsigned_long_const&>
                    ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)this,&local_50);
        }
        else {
          **(ulong **)(this + 8) = local_50;
          *(long *)(this + 8) = *(long *)(this + 8) + 8;
        }
      }
      bVar4 = *param_1;
      uVar7 = *(ulong *)(param_1 + 8);
      bVar5 = ((byte)bVar4 & 1) == 0;
      uVar2 = (ulong)((byte)bVar4 >> 1);
      if (!bVar5) {
        uVar2 = uVar7;
      }
    } while (local_48 < uVar2);
  }
  return 1;
}

