
/* v8::internal::wasm::DecodeCustomSections(unsigned char const*, unsigned char const*) */

void __thiscall v8::internal::wasm::DecodeCustomSections(wasm *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  vector<v8::internal::wasm::CustomSectionOffset,std::__ndk1::allocator<v8::internal::wasm::CustomSectionOffset>>
  *in_x8;
  int iVar8;
  wasm wVar9;
  int iVar10;
  int iVar11;
  int local_c0;
  uint uStack_bc;
  int iStack_b8;
  uint uStack_b4;
  int local_b0;
  uint uStack_ac;
  undefined **local_a8;
  wasm *local_a0;
  wasm *local_98;
  wasm *local_90;
  int local_88;
  undefined4 local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  local_a8 = &PTR__Decoder_01cbc3a8;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_a0 = this;
  local_90 = (wasm *)param_1;
  if ((uint)((int)param_1 - (int)this) < 4) {
    local_98 = this;
    Decoder::errorf((uchar *)&local_a8,(char *)this,"expected %u bytes, fell off end",4);
    local_98 = local_90;
  }
  else {
    local_98 = this + 4;
  }
  if ((uint)((int)local_90 - (int)local_98) < 4) {
    Decoder::errorf((uchar *)&local_a8,(char *)local_98,"expected %u bytes, fell off end",4);
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    local_98 = local_90;
  }
  else {
    local_98 = local_98 + 4;
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    if (local_98 < local_90) {
      do {
        while( true ) {
          if ((int)local_90 == (int)local_98) {
            Decoder::errorf((uchar *)&local_a8,(char *)local_98,"expected %u bytes, fell off end",1)
            ;
            wVar9 = (wasm)0x0;
            local_98 = local_90;
          }
          else {
            wVar9 = *local_98;
            local_98 = local_98 + 1;
          }
          uVar6 = Decoder::consume_u32v((Decoder *)&local_a8,"section length");
          if (wVar9 == (wasm)0x0) break;
          if ((uint)((int)local_90 - (int)local_98) < uVar6) {
            Decoder::errorf((uchar *)&local_a8,(char *)local_98,"expected %u bytes, fell off end",
                            (ulong)uVar6);
            local_98 = local_90;
            goto LAB_015eefe8;
          }
          local_98 = local_98 + uVar6;
          if (local_90 <= local_98) goto LAB_015eefe8;
        }
        iVar1 = local_88 + ((int)local_98 - (int)local_a0);
        uVar7 = Decoder::consume_u32v((Decoder *)&local_a8,"name length");
        iVar5 = local_88;
        iVar10 = (int)local_98;
        iVar11 = (int)local_a0;
        if ((uint)((int)local_90 - iVar10) < uVar7) {
          Decoder::errorf((uchar *)&local_a8,(char *)local_98,"expected %u bytes, fell off end",
                          (ulong)uVar7);
          iVar8 = (int)local_a0;
          local_98 = local_90;
        }
        else {
          local_98 = local_98 + uVar7;
          iVar8 = iVar11;
        }
        iVar8 = local_88 + ((int)local_98 - iVar8);
        uVar4 = uVar6 - (iVar8 - iVar1);
        if (uVar6 < (uint)(iVar8 - iVar1)) {
          Decoder::error((Decoder *)&local_a8,"invalid section length");
          break;
        }
        if ((uint)((int)local_90 - (int)local_98) < uVar4) {
          Decoder::errorf((uchar *)&local_a8,(char *)local_98,"expected %u bytes, fell off end",
                          (ulong)uVar4);
          local_98 = local_90;
        }
        else {
          local_98 = local_98 + uVar4;
        }
        uVar2 = local_78 >> 1 & 0x7f;
        if ((local_78 & 1) != 0) {
          uVar2 = local_70;
        }
        if (uVar2 != 0) break;
        puVar3 = *(undefined8 **)(in_x8 + 8);
        iStack_b8 = iVar5 + (iVar10 - iVar11);
        local_c0 = iVar1;
        uStack_bc = uVar6;
        uStack_b4 = uVar7;
        local_b0 = iVar8;
        uStack_ac = uVar4;
        if (puVar3 < *(undefined8 **)(in_x8 + 0x10)) {
          puVar3[2] = CONCAT44(uVar4,iVar8);
          puVar3[1] = CONCAT44(uVar7,iStack_b8);
          *puVar3 = CONCAT44(uVar6,iVar1);
          *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 0x18;
        }
        else {
          std::__ndk1::
          vector<v8::internal::wasm::CustomSectionOffset,std::__ndk1::allocator<v8::internal::wasm::CustomSectionOffset>>
          ::__push_back_slow_path<v8::internal::wasm::CustomSectionOffset>
                    (in_x8,(CustomSectionOffset *)&local_c0);
        }
      } while (local_98 < local_90);
    }
  }
LAB_015eefe8:
  local_a8 = &PTR__Decoder_01cbc3a8;
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  return;
}

