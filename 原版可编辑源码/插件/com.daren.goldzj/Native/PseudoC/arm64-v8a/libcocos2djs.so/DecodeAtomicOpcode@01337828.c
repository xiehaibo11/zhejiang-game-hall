
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::DecodeAtomicOpcode(v8::internal::wasm::WasmOpcode) */

void __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
DecodeAtomicOpcode(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                   *this,undefined4 param_2)

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
  uchar *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  char cVar17;
  ulong uVar18;
  uint uVar19;
  ushort uVar20;
  char *pcVar21;
  byte *pbVar22;
  MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> aMStack_118 [8];
  undefined4 local_110;
  undefined1 local_10c [4];
  undefined1 *local_108;
  undefined1 *local_100;
  long *local_f8;
  undefined1 auStack_f0 [128];
  long local_70 [2];
  
  lVar6 = tpidr_el0;
  local_70[0] = *(long *)(lVar6 + 0x28);
  plVar7 = (long *)WasmOpcodes::Signature(param_2);
  if (plVar7 == (long *)0x0) {
switchD_01337898_caseD_fe04:
    Decoder::error((Decoder *)this,"invalid atomic opcode");
    goto LAB_01337cf0;
  }
  uVar19 = 0;
  cVar17 = '\0';
  switch(param_2) {
  case 0xfe00:
  case 0xfe01:
  case 0xfe10:
  case 0xfe16:
  case 0xfe1e:
  case 0xfe24:
  case 0xfe25:
  case 0xfe2b:
  case 0xfe2c:
  case 0xfe32:
  case 0xfe33:
  case 0xfe39:
  case 0xfe3a:
  case 0xfe40:
  case 0xfe41:
  case 0xfe47:
  case 0xfe48:
  case 0xfe4e:
    if (*plVar7 == 0) {
      uVar19 = 0;
      cVar17 = '\0';
    }
    else {
      uVar19 = 0;
      cVar17 = *(char *)plVar7[2];
    }
    break;
  case 0xfe02:
  case 0xfe11:
  case 0xfe1f:
  case 0xfe26:
  case 0xfe2d:
  case 0xfe34:
  case 0xfe3b:
  case 0xfe42:
  case 0xfe49:
    if (*plVar7 == 0) goto switchD_01337898_caseD_fe18;
    uVar19 = 1;
    cVar17 = *(char *)plVar7[2];
    break;
  case 0xfe03:
    puVar11 = (uchar *)(*(long *)(this + 0x10) + 2);
    if ((*(uchar **)(this + 0x18) < puVar11) || ((int)*(uchar **)(this + 0x18) == (int)puVar11)) {
      Decoder::error((Decoder *)this,puVar11,"zero");
      local_110 = 1;
      goto LAB_01337cf4;
    }
    if (*puVar11 == '\0') {
      local_110 = 1;
      goto LAB_01337cf4;
    }
    pcVar9 = "invalid atomic operand";
    goto LAB_01337ce8;
  default:
    goto switchD_01337898_caseD_fe04;
  case 0xfe12:
  case 0xfe14:
  case 0xfe20:
  case 0xfe22:
  case 0xfe27:
  case 0xfe29:
  case 0xfe2e:
  case 0xfe30:
  case 0xfe35:
  case 0xfe37:
  case 0xfe3c:
  case 0xfe3e:
  case 0xfe43:
  case 0xfe45:
  case 0xfe4a:
  case 0xfe4c:
    if (*plVar7 == 0) goto switchD_01337898_caseD_fe19;
    uVar19 = 6;
    cVar17 = *(char *)plVar7[2];
    break;
  case 0xfe13:
  case 0xfe15:
  case 0xfe21:
  case 0xfe23:
  case 0xfe28:
  case 0xfe2a:
  case 0xfe2f:
  case 0xfe31:
  case 0xfe36:
  case 0xfe38:
  case 0xfe3d:
  case 0xfe3f:
  case 0xfe44:
  case 0xfe46:
  case 0xfe4b:
  case 0xfe4d:
    if (*plVar7 == 0) goto switchD_01337898_caseD_fe1a;
    cVar17 = *(char *)plVar7[2];
    goto LAB_0133791c;
  case 0xfe17:
  case 0xfe1d:
    break;
  case 0xfe18:
switchD_01337898_caseD_fe18:
    cVar17 = '\0';
    uVar19 = 1;
    break;
  case 0xfe19:
  case 0xfe1b:
switchD_01337898_caseD_fe19:
    cVar17 = '\0';
    uVar19 = 6;
    break;
  case 0xfe1a:
  case 0xfe1c:
switchD_01337898_caseD_fe1a:
    cVar17 = '\0';
LAB_0133791c:
    uVar19 = 7;
  }
  if (FLAG_wasm_atomics_on_non_shared_memory == '\0') {
LAB_0133796c:
    if (*(char *)(*(long *)(this + 0x48) + 0x10) == '\0') {
      pcVar9 = "Atomic opcodes used without shared memory";
      puVar11 = (uchar *)(*(long *)(this + 0x10) + -1);
LAB_01337ce8:
      Decoder::error((Decoder *)this,puVar11,pcVar9);
LAB_01337cf0:
      local_110 = 0;
      goto LAB_01337cf4;
    }
  }
  else if (*(char *)(*(long *)(this + 0x48) + 0x12) == '\0') {
    Decoder::error((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + -1),
                   "memory instruction with no memory");
    goto LAB_0133796c;
  }
  if ((0xc3U >> (ulong)uVar19 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::MemoryAccessImmediate
            (aMStack_118,(Decoder *)this,(uchar *)(*(long *)(this + 0x10) + 1),
             *(uint *)(&UNK_01a063b8 + (ulong)uVar19 * 4));
  uVar15 = plVar7[1];
  local_f8 = local_70;
  uVar19 = (uint)uVar15;
  uVar18 = (ulong)(int)uVar19;
  local_108 = auStack_f0;
  if (8 < uVar19) {
    local_100 = auStack_f0;
    base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
              ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_108,uVar18);
  }
  local_100 = local_108 + uVar18 * 0x10;
  if (0 < (int)uVar19) {
    uVar15 = -(uVar15 >> 0x1f & 1) & 0xfffffff000000000 | (uVar15 & 0xffffffff) << 4;
    do {
      uVar19 = uVar19 - 1;
      lVar3 = *(long *)(this + 0xa8);
      bVar5 = *(byte *)(plVar7[2] + *plVar7 + uVar18 + -1);
      if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
          (ulong)(lVar3 - *(long *)(this + 0xa0) >> 4)) {
        pbVar22 = *(byte **)(lVar3 + -0x10);
        uVar16 = (ulong)*(byte *)(lVar3 + -8);
        *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar3 + -0x10);
      }
      else {
        if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
          pbVar22 = *(byte **)(this + 0x10);
          pcVar9 = "<end>";
          if (pbVar22 < *(byte **)(this + 0x18)) {
            bVar4 = *pbVar22;
            uVar20 = (ushort)bVar4;
            uVar16 = WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar16 & 1) != 0) {
              pcVar9 = "<end>";
              if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_01337af0;
              uVar20 = CONCAT11(bVar4,pbVar22[1]);
            }
            pcVar9 = (char *)WasmOpcodes::OpcodeName(uVar20);
          }
LAB_01337af0:
          Decoder::errorf((uchar *)this,(char *)pbVar22,"%s found empty stack",pcVar9);
        }
        pbVar22 = *(byte **)(this + 0x10);
        uVar16 = 10;
      }
      uVar14 = (uint)uVar16;
      uVar18 = uVar18 - 1;
      if (uVar14 != bVar5) {
        if ((bVar5 != 7 || uVar14 != 8) && (bVar5 != 6 || 2 < uVar14 - 7)) {
          if ((bVar5 != 10) && ((uVar16 != 10 && (bVar5 != 9 || uVar14 != 8)))) {
            pbVar1 = *(byte **)(this + 0x10);
            pcVar9 = "<end>";
            if (pbVar1 < *(byte **)(this + 0x18)) {
              bVar4 = *pbVar1;
              uVar20 = (ushort)bVar4;
              uVar8 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar8 & 1) != 0) {
                pcVar9 = "<end>";
                if (*(byte **)(this + 0x18) <= pbVar1 + 1) goto LAB_01337bc8;
                uVar20 = CONCAT11(bVar4,pbVar1[1]);
              }
              pcVar9 = (char *)WasmOpcodes::OpcodeName(uVar20);
            }
LAB_01337bc8:
            pcVar21 = "<unknown>";
            if (bVar5 < 10) {
              pcVar21 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar5];
            }
            pcVar10 = "<end>";
            if (pbVar22 < *(byte **)(this + 0x18)) {
              bVar5 = *pbVar22;
              uVar20 = (ushort)bVar5;
              uVar8 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar8 & 1) != 0) {
                pcVar10 = "<end>";
                if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_01337c40;
                uVar20 = CONCAT11(bVar5,pbVar22[1]);
              }
              pcVar10 = (char *)WasmOpcodes::OpcodeName(uVar20);
            }
LAB_01337c40:
            pcVar12 = "<unknown>";
            if (uVar14 < 0xb) {
              pcVar12 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                  (-(uVar16 >> 7) & 0xfffffffffffff800 | uVar16 << 3));
            }
            Decoder::errorf((uchar *)this,(char *)pbVar22,
                            "%s[%d] expected type %s, found %s of type %s",pcVar9,(ulong)uVar19,
                            pcVar21,pcVar10,pcVar12);
          }
        }
      }
      *(byte **)(local_108 + (uVar15 - 0x10)) = pbVar22;
      local_108[uVar15 - 8] = (char)uVar16;
      uVar15 = uVar15 - 0x10;
    } while (0 < (long)uVar18);
  }
  if (cVar17 != '\0') {
    local_10c[0] = 0;
    if (*plVar7 != 0) {
      local_10c[0] = *(undefined1 *)plVar7[2];
    }
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
LAB_01337cf4:
  if (*(long *)(lVar6 + 0x28) == local_70[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_110);
}

