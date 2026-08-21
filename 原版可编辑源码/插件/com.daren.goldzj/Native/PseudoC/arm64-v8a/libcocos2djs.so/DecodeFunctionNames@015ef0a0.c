
/* v8::internal::wasm::DecodeFunctionNames(unsigned char const*, unsigned char const*,
   std::__ndk1::unordered_map<unsigned int, v8::internal::wasm::WireBytesRef,
   std::__ndk1::hash<unsigned int>, std::__ndk1::equal_to<unsigned int>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int const, v8::internal::wasm::WireBytesRef> >
   >*) */

void v8::internal::wasm::DecodeFunctionNames(uchar *param_1,uchar *param_2,unordered_map *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uchar *puVar9;
  uchar uVar10;
  undefined **local_b8;
  uchar *local_b0;
  uchar *local_a8;
  uchar *local_a0;
  int local_98;
  undefined4 local_90;
  ulong local_88;
  ulong local_80;
  void *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_b8 = &PTR__Decoder_01cbc3a8;
  local_b0 = param_1;
  local_a8 = param_1;
  local_a0 = param_2;
  uVar7 = FUN_015ef348(&local_b8);
  if ((uVar7 & 1) != 0) {
    uVar7 = local_88 >> 1 & 0x7f;
    if ((local_88 & 1) != 0) {
      uVar7 = local_80;
    }
    while( true ) {
      if ((uVar7 != 0) || (local_a0 <= local_a8)) goto LAB_015ef10c;
      if ((int)local_a0 == (int)local_a8) {
        Decoder::errorf((uchar *)&local_b8,(char *)local_a8,"expected %u bytes, fell off end",1);
        uVar10 = '\0';
        local_a8 = local_a0;
      }
      else {
        puVar9 = local_a8 + 1;
        uVar10 = *local_a8;
        local_a8 = puVar9;
        if ((char)uVar10 < '\0') goto LAB_015ef10c;
      }
      uVar4 = Decoder::consume_u32v((Decoder *)&local_b8,"name payload length");
      if ((uint)((int)local_a0 - (int)local_a8) < uVar4) break;
      if (uVar10 == '\x01') {
        iVar5 = Decoder::consume_u32v((Decoder *)&local_b8,"functions count");
        uVar7 = local_88 >> 1 & 0x7f;
        if ((local_88 & 1) != 0) {
          uVar7 = local_80;
        }
        while ((uVar8 = local_88 & 0xff, iVar5 != 0 && (uVar7 == 0))) {
          iVar5 = iVar5 + -1;
          uVar4 = Decoder::consume_u32v((Decoder *)&local_b8,"function index");
          uVar6 = Decoder::consume_u32v((Decoder *)&local_b8,"string length");
          iVar3 = local_98;
          iVar2 = (int)local_a8 - (int)local_b0;
          if (uVar6 != 0) {
            if ((uint)((int)local_a0 - (int)local_a8) < uVar6) {
              Decoder::errorf((uchar *)&local_b8,(char *)local_a8,"expected %u bytes, fell off end",
                              (ulong)uVar6);
              local_a8 = local_a0;
            }
            else {
              local_a8 = local_a8 + uVar6;
            }
          }
          uVar1 = iVar3 + iVar2;
          if ((local_88 & 1) == 0) {
            uVar7 = (ulong)uVar6 << 0x20;
            if (1 < (byte)local_88) {
              uVar7 = 0;
            }
            uVar7 = uVar7 | uVar1;
            if ((byte)local_88 >> 1 == 0) {
LAB_015ef28c:
              uVar8 = unibrow::Utf8::ValidateEncoding
                                (local_b0 + (uint)((int)uVar7 - local_98),uVar7 >> 0x20);
              if ((uVar8 & 1) != 0) {
                uStack_68 = (undefined4)(uVar7 >> 0x20);
                local_70 = uVar4;
                iStack_6c = (int)uVar7;
                std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>>>
                ::
                __emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,v8::internal::wasm::WireBytesRef>>
                          ((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::wasm::WireBytesRef>>>
                            *)param_3,&local_70,(pair *)&local_70);
              }
            }
          }
          else {
            uVar7 = (ulong)uVar6 << 0x20;
            if (local_80 != 0) {
              uVar7 = 0;
            }
            uVar7 = uVar7 | uVar1;
            if (local_80 == 0) goto LAB_015ef28c;
          }
          uVar7 = local_88 >> 1 & 0x7f;
          if ((local_88 & 1) != 0) {
            uVar7 = local_80;
          }
        }
      }
      else {
        uVar8 = local_88 & 0xff;
        local_a8 = local_a8 + uVar4;
      }
      uVar7 = uVar8 >> 1;
      if ((uVar8 & 1) != 0) {
        uVar7 = local_80;
      }
    }
    Decoder::errorf((uchar *)&local_b8,(char *)local_a8,"expected %u bytes, fell off end");
  }
LAB_015ef10c:
  if ((local_88 & 1) != 0) {
    local_b8 = &PTR__Decoder_01cbc3a8;
    operator_delete(local_78);
  }
  return;
}

