
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::DecodeSimdOpcode(v8::internal::wasm::WasmOpcode) */

undefined8 __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
DecodeSimdOpcode(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                 *this,ulong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  char *pcVar20;
  ushort uVar21;
  undefined1 local_10c [4];
  undefined1 *local_108;
  undefined1 *local_100;
  long *local_f8;
  undefined1 auStack_f0 [128];
  long local_70 [2];
  
  lVar6 = tpidr_el0;
  local_70[0] = *(long *)(lVar6 + 0x28);
  switch((int)param_2) {
  case 0xfd00:
    uVar13 = DecodeLoadMem(this,0xe,1);
    goto LAB_01337498;
  case 0xfd01:
    uVar13 = DecodeStoreMem(this,9,1);
    goto LAB_01337498;
  default:
    plVar7 = (long *)WasmOpcodes::Signature(param_2 & 0xffffffff);
    if (plVar7 == (long *)0x0) {
      Decoder::error((Decoder *)this,"invalid simd opcode");
    }
    else {
      uVar16 = plVar7[1];
      local_f8 = local_70;
      uVar15 = (uint)uVar16;
      uVar14 = (ulong)(int)uVar15;
      local_108 = auStack_f0;
      if (8 < uVar15) {
        local_100 = auStack_f0;
        base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                  ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_108,uVar14);
      }
      local_100 = local_108 + uVar14 * 0x10;
      if (0 < (int)uVar15) {
        uVar16 = -(uVar16 >> 0x1f & 1) & 0xfffffff000000000 | (uVar16 & 0xffffffff) << 4;
        do {
          uVar15 = uVar15 - 1;
          lVar3 = *(long *)(this + 0xa8);
          bVar5 = *(byte *)(plVar7[2] + *plVar7 + uVar14 + -1);
          if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
              (ulong)(lVar3 - *(long *)(this + 0xa0) >> 4)) {
            pbVar17 = *(byte **)(lVar3 + -0x10);
            uVar19 = (ulong)*(byte *)(lVar3 + -8);
            *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar3 + -0x10);
          }
          else {
            if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
              pbVar17 = *(byte **)(this + 0x10);
              pcVar9 = "<end>";
              if (pbVar17 < *(byte **)(this + 0x18)) {
                bVar4 = *pbVar17;
                uVar21 = (ushort)bVar4;
                uVar19 = WasmOpcodes::IsPrefixOpcode(uVar21);
                if ((uVar19 & 1) != 0) {
                  pcVar9 = "<end>";
                  if (*(byte **)(this + 0x18) <= pbVar17 + 1) goto LAB_01337614;
                  uVar21 = CONCAT11(bVar4,pbVar17[1]);
                }
                pcVar9 = (char *)WasmOpcodes::OpcodeName(uVar21);
              }
LAB_01337614:
              Decoder::errorf((uchar *)this,(char *)pbVar17,"%s found empty stack",pcVar9);
            }
            pbVar17 = *(byte **)(this + 0x10);
            uVar19 = 10;
          }
          uVar18 = (uint)uVar19;
          uVar14 = uVar14 - 1;
          if (uVar18 != bVar5) {
            if ((bVar5 != 7 || uVar18 != 8) && (bVar5 != 6 || 2 < uVar18 - 7)) {
              if ((bVar5 != 10) && ((uVar19 != 10 && (bVar5 != 9 || uVar18 != 8)))) {
                pbVar1 = *(byte **)(this + 0x10);
                pcVar9 = "<end>";
                if (pbVar1 < *(byte **)(this + 0x18)) {
                  bVar4 = *pbVar1;
                  uVar21 = (ushort)bVar4;
                  uVar8 = WasmOpcodes::IsPrefixOpcode();
                  if ((uVar8 & 1) != 0) {
                    pcVar9 = "<end>";
                    if (*(byte **)(this + 0x18) <= pbVar1 + 1) goto LAB_013376f4;
                    uVar21 = CONCAT11(bVar4,pbVar1[1]);
                  }
                  pcVar9 = (char *)WasmOpcodes::OpcodeName(uVar21);
                }
LAB_013376f4:
                pcVar20 = "<unknown>";
                if (bVar5 < 10) {
                  pcVar20 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar5];
                }
                pcVar10 = "<end>";
                if (pbVar17 < *(byte **)(this + 0x18)) {
                  bVar5 = *pbVar17;
                  uVar21 = (ushort)bVar5;
                  uVar8 = WasmOpcodes::IsPrefixOpcode(uVar21);
                  if ((uVar8 & 1) != 0) {
                    pcVar10 = "<end>";
                    if (*(byte **)(this + 0x18) <= pbVar17 + 1) goto LAB_01337774;
                    uVar21 = CONCAT11(bVar5,pbVar17[1]);
                  }
                  pcVar10 = (char *)WasmOpcodes::OpcodeName(uVar21);
                }
LAB_01337774:
                pcVar12 = "<unknown>";
                if (uVar18 < 0xb) {
                  pcVar12 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                      (-(uVar19 >> 7) & 0xfffffffffffff800 | uVar19 << 3));
                }
                Decoder::errorf((uchar *)this,(char *)pbVar17,
                                "%s[%d] expected type %s, found %s of type %s",pcVar9,(ulong)uVar15,
                                pcVar20,pcVar10,pcVar12);
              }
            }
          }
          *(byte **)(local_108 + (uVar16 - 0x10)) = pbVar17;
          local_108[uVar16 - 8] = (char)uVar19;
          uVar16 = uVar16 - 0x10;
        } while (0 < (long)uVar14);
      }
      if (*plVar7 != 0) {
        local_10c[0] = *(undefined1 *)plVar7[2];
        puVar2 = *(undefined8 **)(this + 0xa8);
        if (puVar2 < *(undefined8 **)(this + 0xb0)) {
          uVar13 = *(undefined8 *)(this + 0x10);
          *(undefined1 *)(puVar2 + 1) = local_10c[0];
          *puVar2 = uVar13;
          *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 0x10;
        }
        else {
          std::__ndk1::
          vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
          ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                    ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                      *)(this + 0xa0),(uchar **)(this + 0x10),local_10c);
        }
      }
      if (local_108 != auStack_f0) {
        free(local_108);
      }
    }
    if (*(long *)(lVar6 + 0x28) == local_70[0]) {
      return 0;
    }
    goto LAB_01337824;
  case 0xfd03:
    uVar13 = Simd8x16ShuffleOp(this);
    goto LAB_01337498;
  case 0xfd05:
  case 0xfd06:
  case 0xfd09:
  case 0xfd0a:
  case 0xfd0d:
    uVar13 = 1;
    goto LAB_0133739c;
  case 0xfd07:
  case 0xfd0b:
  case 0xfd0e:
    uVar13 = 1;
    goto LAB_013373f4;
  case 0xfd10:
    param_2 = 0xfd10;
    uVar13 = 2;
    goto LAB_0133739c;
  case 0xfd11:
    param_2 = 0xfd11;
    uVar13 = 2;
    goto LAB_013373f4;
  case 0xfd13:
    param_2 = 0xfd13;
    uVar13 = 3;
    goto LAB_0133739c;
  case 0xfd14:
    param_2 = 0xfd14;
    uVar13 = 3;
    goto LAB_013373f4;
  case 0xfd16:
    param_2 = 0xfd16;
    uVar13 = 4;
LAB_0133739c:
    uVar13 = SimdExtractLane(this,param_2,uVar13);
    goto LAB_01337498;
  case 0xfd17:
    param_2 = 0xfd17;
    uVar13 = 4;
LAB_013373f4:
    uVar13 = SimdReplaceLane(this,param_2,uVar13);
    goto LAB_01337498;
  case 0xfdc2:
    uVar13 = 1;
    goto LAB_01337480;
  case 0xfdc3:
    uVar13 = 3;
    goto LAB_01337480;
  case 0xfdc4:
    uVar13 = 0;
    goto LAB_01337480;
  case 0xfdc5:
    uVar13 = 5;
LAB_01337480:
    uVar11 = 0;
    goto LAB_01337494;
  case 0xfdd2:
    uVar13 = 1;
    break;
  case 0xfdd3:
    uVar13 = 2;
    break;
  case 0xfdd4:
    uVar13 = 3;
    break;
  case 0xfdd5:
    uVar13 = 4;
    break;
  case 0xfdd6:
    uVar13 = 10;
    break;
  case 0xfdd7:
    uVar13 = 0xb;
  }
  uVar11 = 1;
LAB_01337494:
  uVar13 = DecodeLoadTransformMem(this,uVar13,uVar11);
LAB_01337498:
  if (*(long *)(lVar6 + 0x28) == local_70[0]) {
    return uVar13;
  }
LAB_01337824:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

