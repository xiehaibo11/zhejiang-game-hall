
void FUN_017d5424(uchar *param_1,undefined4 param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ushort uVar12;
  char *pcVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  
  if (param_3[1] == 2) {
    lVar8 = *(long *)(param_1 + 0x4c0);
    bVar3 = *(byte *)(*param_3 + param_3[2] + 1);
    if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
        (ulong)(lVar8 - *(long *)(param_1 + 0x4b8) >> 4)) {
      pbVar11 = *(byte **)(lVar8 + -0x10);
      bVar2 = *(byte *)(lVar8 + -8);
      uVar15 = (ulong)bVar2;
      *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar8 + -0x10);
      if (bVar2 != bVar3) {
LAB_017d5694:
        uVar14 = (uint)uVar15;
        if ((bVar3 != 7 || uVar14 != 8) && (bVar3 != 6 || 2 < uVar14 - 7)) {
          if ((bVar3 != 10) && ((uVar15 != 10 && (bVar3 != 9 || uVar14 != 8)))) {
            pbVar1 = *(byte **)(param_1 + 0x10);
            if (pbVar1 < *(byte **)(param_1 + 0x18)) {
              bVar2 = *pbVar1;
              uVar12 = (ushort)bVar2;
              uVar4 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar12);
              if ((uVar4 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_017d5728;
                uVar12 = CONCAT11(bVar2,pbVar1[1]);
              }
              pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar12);
            }
            else {
LAB_017d5728:
              pcVar5 = "<end>";
            }
            if (bVar3 < 10) {
              pcVar13 = (&PTR_s_<stmt>_01cdb038)[(char)bVar3];
            }
            else {
              pcVar13 = "<unknown>";
            }
            if (pbVar11 < *(byte **)(param_1 + 0x18)) {
              bVar3 = *pbVar11;
              uVar12 = (ushort)bVar3;
              uVar4 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar12);
              if ((uVar4 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar11 + 1) goto LAB_017d5828;
                uVar12 = CONCAT11(bVar3,pbVar11[1]);
              }
              pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar12);
              if (uVar14 < 0xb) goto LAB_017d5838;
LAB_017d5930:
              pcVar7 = "<unknown>";
            }
            else {
LAB_017d5828:
              pcVar6 = "<end>";
              if (10 < uVar14) goto LAB_017d5930;
LAB_017d5838:
              pcVar7 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                 (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
            }
            v8::internal::wasm::Decoder::errorf
                      (param_1,(char *)pbVar11,"%s[%d] expected type %s, found %s of type %s",pcVar5
                       ,1,pcVar13,pcVar6,pcVar7);
          }
        }
      }
    }
    else {
      if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
        pbVar11 = *(byte **)(param_1 + 0x10);
        if (pbVar11 < *(byte **)(param_1 + 0x18)) {
          bVar2 = *pbVar11;
          uVar12 = (ushort)bVar2;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar12);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar11 + 1) goto LAB_017d5588;
            uVar12 = CONCAT11(bVar2,pbVar11[1]);
          }
          pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar12);
        }
        else {
LAB_017d5588:
          pcVar5 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf(param_1,(char *)pbVar11,"%s found empty stack",pcVar5);
      }
      pbVar11 = *(byte **)(param_1 + 0x10);
      uVar15 = 10;
      if (bVar3 != 10) goto LAB_017d5694;
    }
    lVar8 = *(long *)(param_1 + 0x4c0);
    bVar3 = *(byte *)(param_3[2] + *param_3);
    if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
        (ulong)(lVar8 - *(long *)(param_1 + 0x4b8) >> 4)) {
      pbVar11 = *(byte **)(lVar8 + -0x10);
      bVar2 = *(byte *)(lVar8 + -8);
      uVar15 = (ulong)bVar2;
      *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar8 + -0x10);
      if (bVar2 != bVar3) {
LAB_017d5a20:
        uVar14 = (uint)uVar15;
        if ((bVar3 != 7 || uVar14 != 8) && (bVar3 != 6 || 2 < uVar14 - 7)) {
          if ((bVar3 != 10) && ((uVar15 != 10 && (bVar3 != 9 || uVar14 != 8)))) {
            pbVar1 = *(byte **)(param_1 + 0x10);
            if (pbVar1 < *(byte **)(param_1 + 0x18)) {
              bVar2 = *pbVar1;
              uVar12 = (ushort)bVar2;
              uVar4 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar12);
              if ((uVar4 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_017d5ab4;
                uVar12 = CONCAT11(bVar2,pbVar1[1]);
              }
              pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar12);
            }
            else {
LAB_017d5ab4:
              pcVar5 = "<end>";
            }
            if (bVar3 < 10) {
              pcVar13 = (&PTR_s_<stmt>_01cdb038)[(char)bVar3];
            }
            else {
              pcVar13 = "<unknown>";
            }
            if (pbVar11 < *(byte **)(param_1 + 0x18)) {
              bVar3 = *pbVar11;
              uVar12 = (ushort)bVar3;
              uVar4 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar12);
              if ((uVar4 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar11 + 1) goto LAB_017d5b28;
                uVar12 = CONCAT11(bVar3,pbVar11[1]);
              }
              pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar12);
              if (uVar14 < 0xb) goto LAB_017d5b38;
LAB_017d5b60:
              pcVar7 = "<unknown>";
            }
            else {
LAB_017d5b28:
              pcVar6 = "<end>";
              if (10 < uVar14) goto LAB_017d5b60;
LAB_017d5b38:
              pcVar7 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                 (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
            }
            v8::internal::wasm::Decoder::errorf
                      (param_1,(char *)pbVar11,"%s[%d] expected type %s, found %s of type %s",pcVar5
                       ,0,pcVar13,pcVar6,pcVar7);
          }
        }
      }
    }
    else {
      if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
        pbVar11 = *(byte **)(param_1 + 0x10);
        if (pbVar11 < *(byte **)(param_1 + 0x18)) {
          bVar2 = *pbVar11;
          uVar12 = (ushort)bVar2;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar12);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar11 + 1) goto LAB_017d59e4;
            uVar12 = CONCAT11(bVar2,pbVar11[1]);
          }
          pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar12);
        }
        else {
LAB_017d59e4:
          pcVar5 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf(param_1,(char *)pbVar11,"%s found empty stack",pcVar5);
      }
      pbVar11 = *(byte **)(param_1 + 0x10);
      uVar15 = 10;
      if (bVar3 != 10) goto LAB_017d5a20;
    }
    if (*param_3 != 0) {
      local_58[0] = *(undefined1 *)param_3[2];
      puVar9 = *(undefined8 **)(param_1 + 0x4c0);
      if (*(undefined8 **)(param_1 + 0x4c8) <= puVar9) {
        std::__ndk1::
        vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
        ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                  ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                    *)(param_1 + 0x4b8),(uchar **)(param_1 + 0x10),local_58);
        bVar3 = param_1[0x30];
        goto joined_r0x017d5bc8;
      }
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      *(undefined1 *)(puVar9 + 1) = local_58[0];
      *puVar9 = uVar10;
      *(long *)(param_1 + 0x4c0) = *(long *)(param_1 + 0x4c0) + 0x10;
    }
    bVar3 = param_1[0x30];
joined_r0x017d5bc8:
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 != 0) {
        return;
      }
    }
    else if (*(long *)(param_1 + 0x38) != 0) {
      return;
    }
    if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\0') {
      FUN_017daabc(param_1 + 0x78,param_1,param_2);
      return;
    }
    return;
  }
  if (param_3[1] != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  lVar8 = *(long *)(param_1 + 0x4c0);
  bVar3 = *(byte *)(param_3[2] + *param_3);
  if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
      (ulong)(lVar8 - *(long *)(param_1 + 0x4b8) >> 4)) {
    pbVar11 = *(byte **)(lVar8 + -0x10);
    bVar2 = *(byte *)(lVar8 + -8);
    uVar15 = (ulong)bVar2;
    *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar8 + -0x10);
    if (bVar2 != bVar3) {
LAB_017d55c4:
      uVar14 = (uint)uVar15;
      if ((bVar3 != 7 || uVar14 != 8) && (bVar3 != 6 || 2 < uVar14 - 7)) {
        if ((bVar3 != 10) && ((uVar15 != 10 && (bVar3 != 9 || uVar14 != 8)))) {
          pbVar1 = *(byte **)(param_1 + 0x10);
          if (pbVar1 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar1;
            uVar12 = (ushort)bVar2;
            uVar4 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar12);
            if ((uVar4 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_017d5658;
              uVar12 = CONCAT11(bVar2,pbVar1[1]);
            }
            pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar12);
          }
          else {
LAB_017d5658:
            pcVar5 = "<end>";
          }
          if (bVar3 < 10) {
            pcVar13 = (&PTR_s_<stmt>_01cdb038)[(char)bVar3];
          }
          else {
            pcVar13 = "<unknown>";
          }
          if (pbVar11 < *(byte **)(param_1 + 0x18)) {
            bVar3 = *pbVar11;
            uVar12 = (ushort)bVar3;
            uVar4 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar12);
            if ((uVar4 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar11 + 1) goto LAB_017d579c;
              uVar12 = CONCAT11(bVar3,pbVar11[1]);
            }
            pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar12);
            if (uVar14 < 0xb) goto LAB_017d57ac;
LAB_017d5860:
            pcVar7 = "<unknown>";
          }
          else {
LAB_017d579c:
            pcVar6 = "<end>";
            if (10 < uVar14) goto LAB_017d5860;
LAB_017d57ac:
            pcVar7 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                               (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
          }
          v8::internal::wasm::Decoder::errorf
                    (param_1,(char *)pbVar11,"%s[%d] expected type %s, found %s of type %s",pcVar5,0
                     ,pcVar13,pcVar6,pcVar7);
        }
      }
    }
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
      pbVar11 = *(byte **)(param_1 + 0x10);
      if (pbVar11 < *(byte **)(param_1 + 0x18)) {
        bVar2 = *pbVar11;
        uVar12 = (ushort)bVar2;
        uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar12);
        if ((uVar15 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar11 + 1) goto LAB_017d557c;
          uVar12 = CONCAT11(bVar2,pbVar11[1]);
        }
        pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar12);
      }
      else {
LAB_017d557c:
        pcVar5 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf(param_1,(char *)pbVar11,"%s found empty stack",pcVar5);
    }
    pbVar11 = *(byte **)(param_1 + 0x10);
    uVar15 = 10;
    if (bVar3 != 10) goto LAB_017d55c4;
  }
  if (*param_3 != 0) {
    local_54[0] = *(undefined1 *)param_3[2];
    puVar9 = *(undefined8 **)(param_1 + 0x4c0);
    if (*(undefined8 **)(param_1 + 0x4c8) <= puVar9) {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                  *)(param_1 + 0x4b8),(uchar **)(param_1 + 0x10),local_54);
      bVar3 = param_1[0x30];
      goto joined_r0x017d58c8;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(puVar9 + 1) = local_54[0];
    *puVar9 = uVar10;
    *(long *)(param_1 + 0x4c0) = *(long *)(param_1 + 0x4c0) + 0x10;
  }
  bVar3 = param_1[0x30];
joined_r0x017d58c8:
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 != 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    return;
  }
  if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\0') {
    FUN_017d6c4c(param_1 + 0x78,param_1,param_2);
  }
  return;
}

