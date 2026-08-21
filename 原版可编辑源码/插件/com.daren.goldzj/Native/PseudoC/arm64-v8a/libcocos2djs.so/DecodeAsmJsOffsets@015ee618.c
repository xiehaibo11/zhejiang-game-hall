
/* v8::internal::wasm::DecodeAsmJsOffsets(unsigned char const*, unsigned char const*) */

void __thiscall v8::internal::wasm::DecodeAsmJsOffsets(wasm *this,uchar *param_1,uchar *param_2)

{
  wasm *pwVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  undefined8 *in_x8;
  ulong uVar12;
  uint uVar13;
  long *local_110;
  long *plStack_108;
  long *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  int local_d8;
  uint uStack_d4;
  uint local_d0;
  undefined **local_c8;
  wasm *pwStack_c0;
  wasm *local_b8;
  wasm *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  ulong local_98;
  ulong local_90;
  void *local_88;
  long *local_80;
  long *local_78;
  long *plStack_70;
  
  local_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  local_80 = (long *)0x0;
  local_c8 = &PTR__Decoder_01cbc3a8;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = (void *)0x0;
  pwStack_c0 = this;
  local_b8 = this;
  local_b0 = (wasm *)param_1;
  uVar6 = Decoder::consume_u32v((Decoder *)&local_c8,"functions count");
  if (uVar6 < (uint)((int)param_1 - (int)this)) {
    std::__ndk1::
    vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>
    ::reserve((vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>
               *)&local_80,(ulong)uVar6);
  }
  if (uVar6 != 0) {
    uVar13 = 0;
    do {
      uVar12 = local_98 >> 1 & 0x7f;
      if ((local_98 & 1) != 0) {
        uVar12 = local_90;
      }
      if (uVar12 != 0) break;
      uVar7 = Decoder::consume_u32v((Decoder *)&local_c8,"table size");
      if (uVar7 == 0) {
        if (local_78 < plStack_70) {
          *local_78 = 0;
          local_78[1] = 0;
          local_78[2] = 0;
          goto LAB_015ee8d8;
        }
        std::__ndk1::
        vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>
        ::__emplace_back_slow_path<>
                  ((vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>
                    *)&local_80);
      }
      else {
        if ((uint)((int)local_b0 - (int)local_b8) < uVar7) {
          Decoder::errorf((uchar *)&local_c8,(char *)local_b8,"expected %u bytes, fell off end",
                          (ulong)uVar7);
          Decoder::error((Decoder *)&local_c8,"illegal asm function offset table size");
        }
        pwVar1 = local_b8 + uVar7;
        iVar8 = Decoder::consume_u32v((Decoder *)&local_c8,"locals size");
        uVar9 = Decoder::consume_u32v((Decoder *)&local_c8,"function start pos");
        plStack_108 = (long *)0x0;
        local_100 = (long *)0x0;
        local_110 = (long *)0x0;
        if (uVar7 >> 2 == 0) {
LAB_015ee7c4:
          local_d8 = 0;
          local_110 = plStack_108;
          uStack_d4 = uVar9;
          local_d0 = uVar9;
          std::__ndk1::
          vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>
          ::__push_back_slow_path<v8::internal::wasm::AsmJsOffsetEntry>
                    ((vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>
                      *)&local_110,(AsmJsOffsetEntry *)&local_d8);
        }
        else {
          uVar12 = (ulong)(uVar7 >> 2) * 0xc;
          local_110 = operator_new(uVar12);
          local_100 = (long *)((long)local_110 + uVar12);
          local_d8 = 0;
          plStack_108 = local_110;
          if (local_100 <= local_110) goto LAB_015ee7c4;
          plStack_108 = (long *)((long)local_110 + 0xc);
          *(uint *)(local_110 + 1) = uVar9;
          *local_110 = (ulong)uVar9 << 0x20;
          uStack_d4 = uVar9;
          local_d0 = uVar9;
        }
        uVar12 = local_98 >> 1 & 0x7f;
        if ((local_98 & 1) != 0) {
          uVar12 = local_90;
        }
        while ((local_b8 < pwVar1 && (uVar12 == 0))) {
          iVar10 = Decoder::consume_u32v((Decoder *)&local_c8,"byte offset delta");
          iVar8 = iVar10 + iVar8;
          iVar10 = Decoder::consume_i32v((Decoder *)&local_c8,"call position delta");
          uVar7 = iVar10 + uVar9;
          iVar10 = Decoder::consume_i32v((Decoder *)&local_c8,"to_number position delta");
          uVar9 = uVar7 + iVar10;
          local_d8 = iVar8;
          uStack_d4 = uVar7;
          local_d0 = uVar9;
          if (plStack_108 < local_100) {
            *(uint *)(plStack_108 + 1) = uVar9;
            *plStack_108 = CONCAT44(uVar7,iVar8);
            plStack_108 = (long *)((long)plStack_108 + 0xc);
          }
          else {
            std::__ndk1::
            vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>
            ::__push_back_slow_path<v8::internal::wasm::AsmJsOffsetEntry>
                      ((vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>
                        *)&local_110,(AsmJsOffsetEntry *)&local_d8);
          }
          uVar12 = local_98 >> 1 & 0x7f;
          if ((local_98 & 1) != 0) {
            uVar12 = local_90;
          }
        }
        if (local_b8 != pwVar1) {
          Decoder::error((Decoder *)&local_c8,"broken asm offset table");
        }
        if (local_78 < plStack_70) {
          *local_78 = 0;
          local_78[1] = 0;
          local_78[2] = 0;
          *local_78 = (long)local_110;
          local_78[1] = (long)plStack_108;
          local_78[2] = (long)local_100;
          plStack_108 = (long *)0x0;
          local_100 = (long *)0x0;
          local_110 = (long *)0x0;
LAB_015ee8d8:
          local_78 = local_78 + 3;
        }
        else {
          std::__ndk1::
          vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>
          ::
          __push_back_slow_path<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>
                    ((vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>
                      *)&local_80,(vector *)&local_110);
          if (local_110 != (long *)0x0) {
            plStack_108 = local_110;
            operator_delete(local_110);
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar6);
  }
  if (local_b8 < local_b0) {
    Decoder::error((Decoder *)&local_c8,"unexpected additional bytes");
  }
  Decoder::
  toResult<std::__ndk1::vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>,std::__ndk1::vector<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>,std::__ndk1::allocator<std::__ndk1::vector<v8::internal::wasm::AsmJsOffsetEntry,std::__ndk1::allocator<v8::internal::wasm::AsmJsOffsetEntry>>>>>
            ((vector *)&local_c8);
  plVar3 = plStack_108;
  plVar4 = local_110;
  local_110 = (long *)0x0;
  plStack_108 = (long *)0x0;
  in_x8[2] = local_100;
  *(undefined4 *)(in_x8 + 3) = local_f8;
  in_x8[1] = plVar3;
  *in_x8 = plVar4;
  local_100 = (long *)0x0;
  in_x8[6] = local_e0;
  in_x8[5] = uStack_e8;
  in_x8[4] = local_f0;
  local_c8 = &PTR__Decoder_01cbc3a8;
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  plVar4 = local_80;
  if (local_80 != (long *)0x0) {
    if (local_78 != local_80) {
      pvVar11 = (void *)local_78[-3];
      plVar5 = local_78 + -3;
      plVar3 = local_78;
      while( true ) {
        plVar2 = plVar5;
        if (pvVar11 != (void *)0x0) {
          plVar3[-2] = (long)pvVar11;
          operator_delete(pvVar11);
        }
        if (plVar4 == plVar2) break;
        pvVar11 = (void *)plVar2[-3];
        plVar5 = plVar2 + -3;
        plVar3 = plVar2;
      }
    }
    local_78 = plVar4;
    operator_delete(local_80);
  }
  return;
}

