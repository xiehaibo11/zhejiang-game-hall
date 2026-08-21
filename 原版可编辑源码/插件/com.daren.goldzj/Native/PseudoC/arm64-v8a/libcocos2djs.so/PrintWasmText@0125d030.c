
/* v8::internal::wasm::PrintWasmText(v8::internal::wasm::WasmModule const*,
   v8::internal::wasm::ModuleWireBytes const&, unsigned int, std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&,
   std::__ndk1::vector<v8::debug::WasmDisassemblyOffsetTableEntry,
   std::__ndk1::allocator<v8::debug::WasmDisassemblyOffsetTableEntry> >*) */

void v8::internal::wasm::PrintWasmText
               (WasmModule *param_1,ModuleWireBytes *param_2,uint param_3,basic_ostream *param_4,
               vector *param_5)

{
  int iVar1;
  WasmFunction *pWVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  ushort uVar8;
  long lVar9;
  size_t sVar10;
  basic_ostream *pbVar11;
  ulong uVar12;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar13;
  uint uVar14;
  byte *pbVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  char *__s;
  uint uVar20;
  ulong uVar21;
  char *pcVar22;
  int iVar23;
  char *pcVar24;
  float fVar25;
  double dVar26;
  undefined1 auVar27 [16];
  int local_17c;
  undefined **local_178;
  int local_170;
  ushort *local_168;
  ushort *puStack_160;
  int local_158;
  byte local_148;
  void *local_138;
  undefined4 local_130 [2];
  char *local_128;
  char *local_120;
  undefined8 local_118;
  Zone *pZStack_110;
  int local_104;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  char local_e4 [4];
  long local_e0;
  undefined8 uStack_d8;
  Zone aZStack_c8 [64];
  long local_88;
  
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  lVar18 = *(long *)(param_1 + 0x88);
  local_100 = &PTR__AccountingAllocator_01cbced0;
  pWVar2 = (WasmFunction *)(lVar18 + (ulong)param_3 * 0x20);
  local_f8 = 0;
  uStack_f0 = 0;
  Zone::Zone(aZStack_c8,(AccountingAllocator *)&local_100,"../../src/wasm/wasm-text.cc:43");
  local_104 = 0;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_4,"func",4);
  auVar27 = ModuleWireBytes::GetNameOrNull(param_2,pWVar2,param_1);
  if (auVar27._8_8_ != 0) {
    lVar19 = 0;
    do {
      bVar5 = auVar27._0_8_[lVar19];
      if (((9 < bVar5 - 0x30) && (0x19 < ((bVar5 & 0xffffffdf) - 0x41 & 0xff))) &&
         (lVar9 = __strchr_chk("_.+-*/\\^~=<>!?@#$%&|:\'`",bVar5,0x18), lVar9 == 0))
      goto LAB_0125d160;
      lVar19 = lVar19 + 1;
    } while (auVar27._8_8_ != lVar19);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_4," $",2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_4,auVar27._0_8_,
               (long)auVar27._8_4_);
  }
LAB_0125d160:
  plVar16 = *(long **)pWVar2;
  if (plVar16[1] != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_4," (param",7);
    plVar16 = *(long **)pWVar2;
    lVar19 = plVar16[1];
    if (lVar19 != 0) {
      pcVar24 = (char *)(plVar16[2] + *plVar16);
      do {
        cVar6 = *pcVar24;
        local_178 = (undefined **)CONCAT71(local_178._1_7_,0x20);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_4,(char *)&local_178,1);
        pcVar22 = "<unknown>";
        if ((ulong)(long)cVar6 < 0xb) {
          pcVar22 = (&PTR_s_<stmt>_01cbce68)[cVar6];
        }
        sVar10 = strlen(pcVar22);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar11,pcVar22,sVar10);
        lVar19 = lVar19 + -1;
        pcVar24 = pcVar24 + 1;
      } while (lVar19 != 0);
    }
    local_178 = (undefined **)CONCAT71(local_178._1_7_,0x29);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_4,(char *)&local_178,1);
    plVar16 = *(long **)pWVar2;
  }
  if (*plVar16 != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_4," (result",8)
    ;
    lVar19 = **(long **)pWVar2;
    if (lVar19 != 0) {
      pcVar24 = (char *)(*(long **)pWVar2)[2];
      do {
        cVar6 = *pcVar24;
        local_178 = (undefined **)CONCAT71(local_178._1_7_,0x20);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_4,(char *)&local_178,1);
        pcVar22 = "<unknown>";
        if ((ulong)(long)cVar6 < 0xb) {
          pcVar22 = (&PTR_s_<stmt>_01cbce68)[cVar6];
        }
        sVar10 = strlen(pcVar22);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar11,pcVar22,sVar10);
        lVar19 = lVar19 + -1;
        pcVar24 = pcVar24 + 1;
      } while (lVar19 != 0);
    }
    local_178 = (undefined **)CONCAT71(local_178._1_7_,0x29);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_4,(char *)&local_178,1);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_4,"\n",1);
  local_130[0] = 0;
  local_128 = (char *)0x0;
  local_120 = (char *)0x0;
  lVar18 = lVar18 + (ulong)param_3 * 0x20;
  pZStack_110 = aZStack_c8;
  local_118 = 0;
  local_104 = local_104 + 1;
  uVar17 = *(uint *)(lVar18 + 0x10);
  BytecodeIterator::BytecodeIterator
            ((BytecodeIterator *)&local_178,(uchar *)(*(long *)param_2 + (ulong)uVar17),
             (uchar *)(*(long *)param_2 + (ulong)(*(int *)(lVar18 + 0x14) + uVar17)),
             (BodyLocalDecls *)local_130);
  if (local_128 != local_120) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_4,"(local",6);
    pcVar24 = local_120;
    if (local_128 != local_120) {
      pcVar22 = local_128;
      do {
        local_e0 = CONCAT71(local_e0._1_7_,0x20);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_4,(char *)&local_e0,1);
        __s = "<unknown>";
        if ((ulong)(long)*pcVar22 < 0xb) {
          __s = (&PTR_s_<stmt>_01cbce68)[*pcVar22];
        }
        sVar10 = strlen(__s);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar11,__s,sVar10);
        pcVar22 = pcVar22 + 1;
      } while (pcVar24 != pcVar22);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_4,")\n",2);
    local_104 = local_104 + 1;
  }
  if (local_168 < puStack_160) {
    iVar23 = 1;
    do {
      bVar5 = (byte)*local_168;
      uVar17 = (uint)bVar5;
      if ((bVar5 < 0xc) && ((1 << (ulong)(uVar17 & 0x1f) & 0x8a0U) != 0)) {
        iVar23 = iVar23 + -1;
      }
      local_17c = iVar23 * 2;
      if (0x3f < local_17c) {
        local_17c = 0x40;
      }
      if (param_5 != (vector *)0x0) {
        iVar1 = local_158 + ((int)local_168 - local_170);
        local_e0 = CONCAT44(local_e0._4_4_,iVar1);
        piVar3 = *(int **)(param_5 + 8);
        if (piVar3 < *(int **)(param_5 + 0x10)) {
          piVar3[2] = local_17c;
          *piVar3 = iVar1;
          piVar3[1] = local_104;
          *(long *)(param_5 + 8) = *(long *)(param_5 + 8) + 0xc;
        }
        else {
          std::__ndk1::
          vector<v8::debug::WasmDisassemblyOffsetTableEntry,std::__ndk1::allocator<v8::debug::WasmDisassemblyOffsetTableEntry>>
          ::__emplace_back_slow_path<unsigned_int,int&,int&>
                    ((vector<v8::debug::WasmDisassemblyOffsetTableEntry,std::__ndk1::allocator<v8::debug::WasmDisassemblyOffsetTableEntry>>
                      *)param_5,(uint *)&local_e0,&local_104,&local_17c);
        }
      }
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_4,
                 "                                                                ",(long)local_17c)
      ;
      pbVar11 = param_4;
      switch(bVar5) {
      case 0:
      case 1:
      case 9:
      case 0xf:
      case 0x1a:
      case 0x1b:
      case 0x3f:
      case 0x40:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x97:
      case 0x98:
      case 0x99:
      case 0x9a:
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xa1:
      case 0xa2:
      case 0xa3:
      case 0xa4:
      case 0xa5:
      case 0xa6:
      case 0xa7:
      case 0xa8:
      case 0xa9:
      case 0xaa:
      case 0xab:
      case 0xac:
      case 0xad:
      case 0xae:
      case 0xaf:
      case 0xb0:
      case 0xb1:
      case 0xb2:
      case 0xb3:
      case 0xb4:
      case 0xb5:
      case 0xb6:
      case 0xb7:
      case 0xb8:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbc:
      case 0xbd:
      case 0xbe:
      case 0xbf:
      case 0xc0:
      case 0xc1:
      case 0xc2:
      case 0xc3:
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
      case 0xd1:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xdd:
      case 0xde:
      case 0xdf:
      case 0xe0:
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
switchD_0125d4d4_caseD_0:
        goto LAB_0125d4dc;
      case 2:
      case 3:
      case 4:
      case 6:
        uVar17 = (uint)*(byte *)((long)local_168 + 1);
        lVar18 = 9;
        switch(uVar17) {
        case 0x40:
          goto switchD_0125d4d4_caseD_5;
        default:
          if ((char)*(byte *)((long)local_168 + 1) < '\0') {
            uVar17 = uVar17 & 0x7f | ((byte)local_168[1] & 0x7f) << 7;
            if ((char)(byte)local_168[1] < '\0') {
              uVar17 = uVar17 | (*(byte *)((long)local_168 + 3) & 0x7f) << 0xe;
              if ((char)*(byte *)((long)local_168 + 3) < '\0') {
                uVar17 = uVar17 | ((byte)local_168[2] & 0x7f) << 0x15;
                if ((char)(byte)local_168[2] < '\0') {
                  uVar17 = uVar17 | (uint)*(byte *)((long)local_168 + 5) << 0x1c;
                }
                else {
                  uVar17 = (int)(uVar17 << 4) >> 4;
                }
              }
              else {
                uVar17 = (int)(uVar17 << 0xb) >> 0xb;
              }
            }
            else {
              uVar17 = (int)(uVar17 << 0x12) >> 0x12;
            }
          }
          else {
            uVar17 = (int)(uVar17 << 0x19) >> 0x19;
          }
          pcVar24 = (char *)WasmOpcodes::OpcodeName(bVar5);
          sVar10 = strlen(pcVar24);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_4,pcVar24,sVar10);
          pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_4," (type ",7);
          pbVar11 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,uVar17)
          ;
          pcVar24 = ")";
          sVar10 = 1;
          goto LAB_0125d918;
        case 0x68:
          lVar18 = 1;
          break;
        case 0x6f:
          lVar18 = 0xe;
          break;
        case 0x70:
          lVar18 = 0xf;
          break;
        case 0x7b:
          lVar18 = 0xd;
          break;
        case 0x7c:
          lVar18 = 0xc;
          break;
        case 0x7d:
          lVar18 = 0xb;
          break;
        case 0x7e:
          lVar18 = 10;
          break;
        case 0x7f:
          break;
        }
        pcVar24 = (char *)WasmOpcodes::OpcodeName(bVar5);
        sVar10 = strlen(pcVar24);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_4,pcVar24,sVar10);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_4," ",1);
        pcVar24 = (&PTR_s_nullref_01cbcde8)[lVar18];
        sVar10 = strlen(pcVar24);
        goto LAB_0125d918;
      case 5:
      case 7:
switchD_0125d4d4_caseD_5:
        pcVar24 = (char *)WasmOpcodes::OpcodeName(bVar5);
        sVar10 = strlen(pcVar24);
LAB_0125d918:
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar11,pcVar24,sVar10);
        iVar23 = iVar23 + 1;
        break;
      case 8:
      case 0xc:
      case 0xd:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0xd2:
        uVar17 = *(byte *)((long)local_168 + 1) & 0x7f;
        if ((((char)*(byte *)((long)local_168 + 1) < '\0') &&
            (uVar17 = uVar17 | ((byte)local_168[1] & 0x7f) << 7, (char)(byte)local_168[1] < '\0'))
           && ((uVar17 = uVar17 | (*(byte *)((long)local_168 + 3) & 0x7f) << 0xe,
               (char)*(byte *)((long)local_168 + 3) < '\0' &&
               (uVar17 = uVar17 | ((byte)local_168[2] & 0x7f) << 0x15,
               (char)(byte)local_168[2] < '\0')))) {
          bVar4 = *(byte *)((long)local_168 + 5);
LAB_0125d598:
          uVar17 = uVar17 | (uint)bVar4 << 0x1c;
        }
        goto LAB_0125d59c;
      case 10:
        uVar20 = *(byte *)((long)local_168 + 1) & 0x7f;
        if ((char)*(byte *)((long)local_168 + 1) < '\0') {
          uVar20 = uVar20 | ((byte)local_168[1] & 0x7f) << 7;
          if ((char)(byte)local_168[1] < '\0') {
            uVar20 = uVar20 | (*(byte *)((long)local_168 + 3) & 0x7f) << 0xe;
            if ((char)*(byte *)((long)local_168 + 3) < '\0') {
              uVar20 = uVar20 | ((byte)local_168[2] & 0x7f) << 0x15;
              if ((char)(byte)local_168[2] < '\0') {
                uVar20 = uVar20 | (uint)*(byte *)((long)local_168 + 5) << 0x1c;
                lVar18 = 5;
              }
              else {
                lVar18 = 4;
              }
            }
            else {
              lVar18 = 3;
            }
          }
          else {
            lVar18 = 2;
          }
        }
        else {
          lVar18 = 1;
        }
LAB_0125db50:
        pbVar15 = (byte *)((long)local_168 + lVar18);
        uVar17 = pbVar15[1] & 0x7f;
        if ((((char)pbVar15[1] < '\0') &&
            (uVar17 = uVar17 | (pbVar15[2] & 0x7f) << 7, (char)pbVar15[2] < '\0')) &&
           ((uVar17 = uVar17 | (pbVar15[3] & 0x7f) << 0xe, (char)pbVar15[3] < '\0' &&
            (uVar17 = uVar17 | (pbVar15[4] & 0x7f) << 0x15, (char)pbVar15[4] < '\0')))) {
          uVar17 = uVar17 | (uint)pbVar15[5] << 0x1c;
        }
        pcVar24 = (char *)WasmOpcodes::OpcodeName(bVar5);
        sVar10 = strlen(pcVar24);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_4,pcVar24,sVar10);
        local_e0._0_1_ = (ImmI64Immediate<(v8::internal::wasm::Decoder::ValidateFlag)0>)0x20;
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar11,(char *)&local_e0,1);
        pbVar11 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,uVar20);
        local_e0 = CONCAT71(local_e0._1_7_,0x20);
        pbVar13 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar11,(char *)&local_e0,1);
LAB_0125dbd8:
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(pbVar13,uVar17);
        break;
      case 0xb:
        plVar16 = (long *)0x1a59f12;
        sVar10 = 3;
        goto LAB_0125d4f4;
      case 0xe:
        bVar5 = *(byte *)((long)local_168 + 1);
        uVar17 = bVar5 & 0x7f;
        if ((char)bVar5 < '\0') {
          uVar17 = uVar17 | ((byte)local_168[1] & 0x7f) << 7;
          if ((char)(byte)local_168[1] < '\0') {
            uVar17 = uVar17 | (*(byte *)((long)local_168 + 3) & 0x7f) << 0xe;
            if ((char)*(byte *)((long)local_168 + 3) < '\0') {
              uVar17 = uVar17 | ((byte)local_168[2] & 0x7f) << 0x15;
              if ((char)(byte)local_168[2] < '\0') {
                uVar17 = uVar17 | (uint)*(byte *)((long)local_168 + 5) << 0x1c;
                lVar18 = 5;
              }
              else {
                lVar18 = 4;
              }
            }
            else {
              lVar18 = 3;
            }
          }
          else {
            lVar18 = 2;
          }
        }
        else {
          lVar18 = 1;
        }
        pbVar15 = (byte *)((long)local_168 + 1) + lVar18;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_4,"br_table",8);
        uVar20 = 0;
        do {
          local_e0 = CONCAT71(local_e0._1_7_,0x20);
          lVar18 = 1;
          pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_4,(char *)&local_e0,1);
          uVar20 = uVar20 + 1;
          uVar14 = *pbVar15 & 0x7f;
          if ((char)*pbVar15 < '\0') {
            uVar14 = uVar14 | (pbVar15[1] & 0x7f) << 7;
            if ((char)pbVar15[1] < '\0') {
              uVar14 = uVar14 | (pbVar15[2] & 0x7f) << 0xe;
              if ((char)pbVar15[2] < '\0') {
                uVar14 = uVar14 | (pbVar15[3] & 0x7f) << 0x15;
                if ((char)pbVar15[3] < '\0') {
                  lVar18 = 5;
                  uVar14 = uVar14 | (uint)pbVar15[4] << 0x1c;
                }
                else {
                  lVar18 = 4;
                }
              }
              else {
                lVar18 = 3;
              }
            }
            else {
              lVar18 = 2;
            }
          }
          pbVar15 = pbVar15 + lVar18;
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,uVar14);
        } while (uVar20 <= uVar17);
        break;
      default:
switchD_0125d4d4_caseD_14:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case 0x1c:
        pbVar15 = (byte *)((long)local_168 + 1);
        if ((char)*pbVar15 < '\0') {
          if ((char)(byte)local_168[1] < '\0') {
            if ((char)*(byte *)((long)local_168 + 3) < '\0') {
              lVar18 = 4;
              if ((char)(byte)local_168[2] < '\0') {
                lVar18 = 5;
              }
            }
            else {
              lVar18 = 3;
            }
          }
          else {
            lVar18 = 2;
          }
        }
        else {
          lVar18 = 1;
        }
        uVar21 = 0x100000000000000;
        uVar12 = 0xa00000000000000;
        switch(pbVar15[lVar18]) {
        case 0x40:
          uVar12 = 0;
        default:
          uVar21 = uVar12;
          Decoder::error((Decoder *)&local_178,pbVar15,"invalid select type");
          break;
        case 0x68:
          uVar21 = 0x900000000000000;
          break;
        case 0x6f:
          uVar21 = 0x600000000000000;
          break;
        case 0x70:
          uVar21 = 0x700000000000000;
          break;
        case 0x7b:
          uVar21 = 0x500000000000000;
          break;
        case 0x7c:
          uVar21 = 0x400000000000000;
          break;
        case 0x7d:
          uVar21 = 0x300000000000000;
          break;
        case 0x7e:
          uVar21 = 0x200000000000000;
          break;
        case 0x7f:
          break;
        }
        pcVar24 = (char *)WasmOpcodes::OpcodeName(bVar5);
        sVar10 = strlen(pcVar24);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_4,pcVar24,sVar10);
        local_e0 = CONCAT71(local_e0._1_7_,0x20);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar11,(char *)&local_e0,1);
        pcVar24 = *(char **)((long)&PTR_s_<stmt>_01cbce68 + (uVar21 >> 0x35));
        sVar10 = strlen(pcVar24);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar11,pcVar24,sVar10);
        break;
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
        bVar4 = *(byte *)((long)local_168 + 1);
joined_r0x0125dea0:
        if ((char)bVar4 < '\0') {
          if ((char)(byte)local_168[1] < '\0') {
            if ((char)*(byte *)((long)local_168 + 3) < '\0') {
              if ((char)(byte)local_168[2] < '\0') {
                lVar18 = 5;
              }
              else {
                lVar18 = 4;
              }
            }
            else {
              lVar18 = 3;
            }
          }
          else {
            lVar18 = 2;
          }
        }
        else {
          lVar18 = 1;
        }
        pbVar15 = (byte *)((long)local_168 + lVar18 + 1);
        uVar17 = *pbVar15 & 0x7f;
        if (((((char)*pbVar15 < '\0') &&
             (uVar17 = uVar17 | (pbVar15[1] & 0x7f) << 7, (char)pbVar15[1] < '\0')) &&
            (uVar17 = uVar17 | (pbVar15[2] & 0x7f) << 0xe, (char)pbVar15[2] < '\0')) &&
           (uVar17 = uVar17 | (pbVar15[3] & 0x7f) << 0x15, (char)pbVar15[3] < '\0')) {
          uVar17 = uVar17 | (uint)pbVar15[4] << 0x1c;
        }
        pcVar24 = (char *)WasmOpcodes::OpcodeName(bVar5);
        sVar10 = strlen(pcVar24);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_4,pcVar24,sVar10);
        pbVar13 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar11," offset=",8);
LAB_0125df5c:
        pbVar11 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            (pbVar13,uVar17);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar11," align=",7);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,
                   1L << ((ulong)(bVar4 & 0x7f) & 0x3f));
        break;
      case 0x41:
        bVar5 = *(byte *)((long)local_168 + 1);
        if ((char)bVar5 < '\0') {
          uVar17 = bVar5 & 0x7f | ((byte)local_168[1] & 0x7f) << 7;
          if ((char)(byte)local_168[1] < '\0') {
            uVar17 = uVar17 | (*(byte *)((long)local_168 + 3) & 0x7f) << 0xe;
            if ((char)*(byte *)((long)local_168 + 3) < '\0') {
              uVar17 = uVar17 | ((byte)local_168[2] & 0x7f) << 0x15;
              if ((char)(byte)local_168[2] < '\0') {
                uVar17 = uVar17 | (uint)*(byte *)((long)local_168 + 5) << 0x1c;
              }
              else {
                uVar17 = (int)(uVar17 << 4) >> 4;
              }
            }
            else {
              uVar17 = (int)(uVar17 << 0xb) >> 0xb;
            }
          }
          else {
            uVar17 = (int)(uVar17 << 0x12) >> 0x12;
          }
        }
        else {
          uVar17 = (int)((uint)bVar5 << 0x19) >> 0x19;
        }
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_4,"i32.const ",10);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,uVar17);
        break;
      case 0x42:
        ImmI64Immediate<(v8::internal::wasm::Decoder::ValidateFlag)0>::ImmI64Immediate
                  ((ImmI64Immediate<(v8::internal::wasm::Decoder::ValidateFlag)0> *)&local_e0,
                   (Decoder *)&local_178,(uchar *)local_168);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_4,"i64.const ",10);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,local_e0);
        break;
      case 0x43:
        fVar25 = *(float *)((long)local_168 + 1);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_4,"f32.const ",10);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,fVar25);
        break;
      case 0x44:
        dVar26 = *(double *)((long)local_168 + 1);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_4,"f64.const ",10);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,dVar26);
        break;
      case 0xfc:
        switch(((*local_168 & 0xff00) << 8 | (uint)*local_168 << 0x18) >> 0x10) {
        case 0xfc00:
        case 0xfc01:
        case 0xfc02:
        case 0xfc03:
        case 0xfc04:
        case 0xfc05:
        case 0xfc06:
        case 0xfc07:
        case 0xfc0a:
        case 0xfc0b:
          goto switchD_0125d4d4_caseD_0;
        case 0xfc08:
        case 0xfc09:
        case 0xfc0d:
          bVar4 = (byte)local_168[1];
          if ((char)bVar4 < '\0') {
            uVar17 = bVar4 & 0x7f | (*(byte *)((long)local_168 + 3) & 0x7f) << 7;
            if ((char)*(byte *)((long)local_168 + 3) < '\0') {
              uVar17 = uVar17 | ((byte)local_168[2] & 0x7f) << 0xe;
              if ((char)(byte)local_168[2] < '\0') {
                uVar17 = uVar17 | (*(byte *)((long)local_168 + 5) & 0x7f) << 0x15;
                if ((char)*(byte *)((long)local_168 + 5) < '\0') goto LAB_0125de68;
                uVar17 = (int)(uVar17 << 4) >> 4;
              }
              else {
                uVar17 = (int)(uVar17 << 0xb) >> 0xb;
              }
            }
            else {
              uVar17 = (int)(uVar17 << 0x12) >> 0x12;
            }
          }
          else {
            uVar17 = (int)((uint)bVar4 << 0x19) >> 0x19;
          }
          break;
        case 0xfc0c:
          bVar4 = (byte)local_168[1];
          if ((char)bVar4 < '\0') {
            uVar20 = bVar4 & 0x7f | (*(byte *)((long)local_168 + 3) & 0x7f) << 7;
            if ((char)*(byte *)((long)local_168 + 3) < '\0') {
              uVar20 = uVar20 | ((byte)local_168[2] & 0x7f) << 0xe;
              if ((char)(byte)local_168[2] < '\0') {
                uVar20 = uVar20 | (*(byte *)((long)local_168 + 5) & 0x7f) << 0x15;
                if ((char)*(byte *)((long)local_168 + 5) < '\0') {
                  uVar20 = uVar20 | (uint)(byte)local_168[3] << 0x1c;
                  lVar18 = 5;
                }
                else {
                  uVar20 = (int)(uVar20 << 4) >> 4;
                  lVar18 = 4;
                }
              }
              else {
                uVar20 = (int)(uVar20 << 0xb) >> 0xb;
                lVar18 = 3;
              }
            }
            else {
              uVar20 = (int)(uVar20 << 0x12) >> 0x12;
              lVar18 = 2;
            }
          }
          else {
            uVar20 = (int)((uint)bVar4 << 0x19) >> 0x19;
            lVar18 = 1;
          }
          lVar18 = lVar18 + 1;
          goto LAB_0125db50;
        case 0xfc0e:
          uVar17 = (byte)local_168[1] & 0x7f;
          if ((char)(byte)local_168[1] < '\0') {
            uVar17 = uVar17 | (*(byte *)((long)local_168 + 3) & 0x7f) << 7;
            if ((char)*(byte *)((long)local_168 + 3) < '\0') {
              uVar17 = uVar17 | ((byte)local_168[2] & 0x7f) << 0xe;
              if ((char)(byte)local_168[2] < '\0') {
                uVar17 = uVar17 | (*(byte *)((long)local_168 + 5) & 0x7f) << 0x15;
                if ((char)*(byte *)((long)local_168 + 5) < '\0') {
                  uVar17 = uVar17 | (uint)(byte)local_168[3] << 0x1c;
                  lVar18 = 5;
                }
                else {
                  lVar18 = 4;
                }
              }
              else {
                lVar18 = 3;
              }
            }
            else {
              lVar18 = 2;
            }
          }
          else {
            lVar18 = 1;
          }
          bVar4 = *(byte *)((long)local_168 + lVar18 + 2);
          uVar20 = bVar4 & 0x7f;
          if ((((char)bVar4 < '\0') &&
              (bVar4 = *(byte *)((long)local_168 + lVar18 + 3),
              uVar20 = uVar20 | (bVar4 & 0x7f) << 7, (char)bVar4 < '\0')) &&
             ((bVar4 = *(byte *)((long)local_168 + lVar18 + 4),
              uVar20 = uVar20 | (bVar4 & 0x7f) << 0xe, (char)bVar4 < '\0' &&
              (bVar4 = *(byte *)((long)local_168 + lVar18 + 5),
              uVar20 = uVar20 | (bVar4 & 0x7f) << 0x15, (char)bVar4 < '\0')))) {
            uVar20 = uVar20 | (uint)*(byte *)((long)local_168 + lVar18 + 6) << 0x1c;
          }
          pcVar24 = (char *)WasmOpcodes::OpcodeName(bVar5);
          sVar10 = strlen(pcVar24);
          pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_4,pcVar24,sVar10);
          local_e0._0_1_ = (ImmI64Immediate<(v8::internal::wasm::Decoder::ValidateFlag)0>)0x20;
          pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar11,(char *)&local_e0,1);
          pbVar11 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,uVar20)
          ;
          local_e0 = CONCAT71(local_e0._1_7_,0x20);
          pbVar13 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar11,(char *)&local_e0,1);
          goto LAB_0125dbd8;
        case 0xfc0f:
        case 0xfc10:
        case 0xfc11:
          uVar17 = (byte)local_168[1] & 0x7f;
          if ((((char)(byte)local_168[1] < '\0') &&
              (uVar17 = uVar17 | (*(byte *)((long)local_168 + 3) & 0x7f) << 7,
              (char)*(byte *)((long)local_168 + 3) < '\0')) &&
             ((uVar17 = uVar17 | ((byte)local_168[2] & 0x7f) << 0xe, (char)(byte)local_168[2] < '\0'
              && (uVar17 = uVar17 | (*(byte *)((long)local_168 + 5) & 0x7f) << 0x15,
                 (char)*(byte *)((long)local_168 + 5) < '\0')))) {
LAB_0125de68:
            bVar4 = (byte)local_168[3];
            goto LAB_0125d598;
          }
          break;
        default:
          goto switchD_0125d4d4_caseD_14;
        }
LAB_0125d59c:
        pcVar24 = (char *)WasmOpcodes::OpcodeName(bVar5);
        sVar10 = strlen(pcVar24);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_4,pcVar24,sVar10);
        local_e0 = CONCAT71(local_e0._1_7_,0x20);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar11,(char *)&local_e0,1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,uVar17);
        break;
      case 0xfd:
        bVar4 = *(byte *)((long)local_168 + 1);
        switch(CONCAT11((byte)*local_168,bVar4)) {
        case 0xfd00:
        case 0xfd01:
          goto joined_r0x0125dea0;
        default:
          goto switchD_0125d4d4_caseD_14;
        case 0xfd03:
          uStack_d8 = *(undefined8 *)(local_168 + 5);
          local_e0 = *(long *)(local_168 + 1);
          pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar17);
          sVar10 = strlen(pcVar24);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_4,pcVar24,sVar10);
          lVar18 = 0;
          do {
            cVar6 = *(char *)((long)&local_e0 + lVar18);
            local_e4[0] = ' ';
            pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (param_4,local_e4,1);
            local_e4[0] = cVar6;
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar11,local_e4,1);
            lVar18 = lVar18 + 1;
          } while (lVar18 != 0x10);
          break;
        case 0xfd04:
        case 0xfd08:
        case 0xfd0c:
        case 0xfd0f:
        case 0xfd12:
        case 0xfd15:
        case 0xfd18:
        case 0xfd19:
        case 0xfd1a:
        case 0xfd1b:
        case 0xfd1c:
        case 0xfd1d:
        case 0xfd1e:
        case 0xfd1f:
        case 0xfd20:
        case 0xfd21:
        case 0xfd22:
        case 0xfd23:
        case 0xfd24:
        case 0xfd25:
        case 0xfd26:
        case 0xfd27:
        case 0xfd28:
        case 0xfd29:
        case 0xfd2a:
        case 0xfd2b:
        case 0xfd2c:
        case 0xfd2d:
        case 0xfd2e:
        case 0xfd2f:
        case 0xfd30:
        case 0xfd31:
        case 0xfd32:
        case 0xfd33:
        case 0xfd34:
        case 0xfd35:
        case 0xfd36:
        case 0xfd37:
        case 0xfd38:
        case 0xfd39:
        case 0xfd3a:
        case 0xfd3b:
        case 0xfd3c:
        case 0xfd3d:
        case 0xfd3e:
        case 0xfd3f:
        case 0xfd40:
        case 0xfd41:
        case 0xfd42:
        case 0xfd43:
        case 0xfd44:
        case 0xfd45:
        case 0xfd46:
        case 0xfd47:
        case 0xfd48:
        case 0xfd49:
        case 0xfd4a:
        case 0xfd4b:
        case 0xfd4c:
        case 0xfd4d:
        case 0xfd4e:
        case 0xfd4f:
        case 0xfd50:
        case 0xfd51:
        case 0xfd52:
        case 0xfd53:
        case 0xfd54:
        case 0xfd55:
        case 0xfd56:
        case 0xfd57:
        case 0xfd58:
        case 0xfd59:
        case 0xfd5a:
        case 0xfd5b:
        case 0xfd5c:
        case 0xfd5d:
        case 0xfd5e:
        case 0xfd5f:
        case 0xfd60:
        case 0xfd61:
        case 0xfd62:
        case 0xfd63:
        case 0xfd64:
        case 0xfd65:
        case 0xfd66:
        case 0xfd67:
        case 0xfd68:
        case 0xfd69:
        case 0xfd6a:
        case 0xfd6b:
        case 0xfd6c:
        case 0xfd6d:
        case 0xfd6e:
        case 0xfd6f:
        case 0xfd70:
        case 0xfd71:
        case 0xfd72:
        case 0xfd73:
        case 0xfd74:
        case 0xfd75:
        case 0xfd76:
        case 0xfd77:
        case 0xfd78:
        case 0xfd79:
        case 0xfd7c:
        case 0xfd7f:
        case 0xfd80:
        case 0xfd81:
        case 0xfd82:
        case 0xfd83:
        case 0xfd84:
        case 0xfd85:
        case 0xfd86:
        case 0xfd87:
        case 0xfd88:
        case 0xfd89:
        case 0xfd8a:
        case 0xfd8c:
        case 0xfd8d:
        case 0xfd8e:
        case 0xfd8f:
        case 0xfd90:
        case 0xfd91:
        case 0xfd95:
        case 0xfd96:
        case 0xfd97:
        case 0xfd98:
        case 0xfd99:
        case 0xfd9a:
        case 0xfd9b:
        case 0xfd9c:
        case 0xfd9d:
        case 0xfd9e:
        case 0xfd9f:
        case 0xfda0:
        case 0xfda1:
        case 0xfda2:
        case 0xfda3:
        case 0xfda4:
        case 0xfda5:
        case 0xfda6:
        case 0xfda7:
        case 0xfda8:
        case 0xfda9:
        case 0xfdaa:
        case 0xfdab:
        case 0xfdac:
        case 0xfdaf:
        case 0xfdb0:
        case 0xfdb1:
        case 0xfdb2:
        case 0xfdbd:
        case 0xfdbe:
        case 0xfdbf:
        case 0xfdc0:
        case 0xfdc2:
        case 0xfdc3:
        case 0xfdc4:
        case 0xfdc5:
        case 0xfdc6:
        case 0xfdc7:
        case 0xfdc8:
        case 0xfdc9:
        case 0xfdca:
        case 0xfdcb:
        case 0xfdcc:
        case 0xfdcd:
        case 0xfdce:
        case 0xfdcf:
        case 0xfdd0:
        case 0xfdd1:
        case 0xfdd2:
        case 0xfdd3:
        case 0xfdd4:
        case 0xfdd5:
        case 0xfdd6:
        case 0xfdd7:
        case 0xfde0:
        case 0xfde1:
          goto switchD_0125d4d4_caseD_0;
        case 0xfd05:
        case 0xfd06:
        case 0xfd07:
        case 0xfd09:
        case 0xfd0a:
        case 0xfd0b:
        case 0xfd0d:
        case 0xfd0e:
        case 0xfd10:
        case 0xfd11:
        case 0xfd13:
        case 0xfd14:
        case 0xfd16:
        case 0xfd17:
          uVar8 = local_168[1];
          pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar17);
          sVar10 = strlen(pcVar24);
          pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_4,pcVar24,sVar10);
          local_e0._0_1_ = (ImmI64Immediate<(v8::internal::wasm::Decoder::ValidateFlag)0>)0x20;
          pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar11,(char *)&local_e0,1);
          plVar16 = &local_e0;
          sVar10 = 1;
          local_e0 = CONCAT71(local_e0._1_7_,(byte)uVar8);
          goto LAB_0125d4f4;
        }
        break;
      case 0xfe:
        uVar17 = ((*local_168 & 0xff00) << 8 | (uint)*local_168 << 0x18) >> 0x10;
        if ((uVar17 - 0xfe10 < 0x3f) || (uVar17 - 0xfe00 < 3)) {
          bVar4 = (byte)local_168[1];
          if ((char)bVar4 < '\0') {
            if ((char)*(byte *)((long)local_168 + 3) < '\0') {
              if ((char)(byte)local_168[2] < '\0') {
                if ((char)*(byte *)((long)local_168 + 5) < '\0') {
                  lVar18 = 5;
                }
                else {
                  lVar18 = 4;
                }
              }
              else {
                lVar18 = 3;
              }
            }
            else {
              lVar18 = 2;
            }
          }
          else {
            lVar18 = 1;
          }
          pbVar15 = (byte *)((long)(local_168 + 1) + lVar18);
          uVar17 = *pbVar15 & 0x7f;
          if (((((char)*pbVar15 < '\0') &&
               (uVar17 = uVar17 | (pbVar15[1] & 0x7f) << 7, (char)pbVar15[1] < '\0')) &&
              (uVar17 = uVar17 | (pbVar15[2] & 0x7f) << 0xe, (char)pbVar15[2] < '\0')) &&
             (uVar17 = uVar17 | (pbVar15[3] & 0x7f) << 0x15, (char)pbVar15[3] < '\0')) {
            uVar17 = uVar17 | (uint)pbVar15[4] << 0x1c;
          }
          pcVar24 = (char *)WasmOpcodes::OpcodeName();
          sVar10 = strlen(pcVar24);
          pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_4,pcVar24,sVar10);
          pbVar13 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar11," offset=",8);
          goto LAB_0125df5c;
        }
        if (uVar17 != 0xfe03) goto switchD_0125d4d4_caseD_14;
LAB_0125d4dc:
        plVar16 = (long *)WasmOpcodes::OpcodeName(uVar17);
        sVar10 = strlen((char *)plVar16);
LAB_0125d4f4:
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar11,(char *)plVar16,sVar10);
      }
      local_e0 = CONCAT71(local_e0._1_7_,10);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_4,(char *)&local_e0,1);
      local_104 = local_104 + 1;
      if (local_168 < puStack_160) {
        uVar12 = OpcodeLength((uchar *)local_168,(uchar *)puStack_160);
        local_168 = (ushort *)((long)local_168 + (uVar12 & 0xffffffff));
        if (puStack_160 <= local_168) {
          local_168 = puStack_160;
        }
      }
    } while (local_168 < puStack_160);
  }
  local_178 = &PTR__Decoder_01cbc3a8;
  if ((local_148 & 1) != 0) {
    operator_delete(local_138);
  }
  if (local_128 != (char *)0x0) {
    local_120 = local_128;
  }
  Zone::~Zone(aZStack_c8);
  AccountingAllocator::~AccountingAllocator((AccountingAllocator *)&local_100);
  if (*(long *)(lVar7 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

