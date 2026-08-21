
/* WARNING: Removing unreachable block (ram,0x015c98bc) */
/* v8::internal::wasm::PrintRawWasmCode(v8::internal::AccountingAllocator*,
   v8::internal::wasm::FunctionBody const&, v8::internal::wasm::WasmModule const*,
   v8::internal::wasm::PrintLocals, std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >&, std::__ndk1::vector<int, std::__ndk1::allocator<int> >*) */

bool v8::internal::wasm::PrintRawWasmCode
               (AccountingAllocator *param_1,long *param_2,long param_3,int param_4,
               basic_ostream *param_5,vector<int,std::__ndk1::allocator<int>> *param_6)

{
  bool bVar1;
  ushort *puVar2;
  ushort *puVar3;
  long lVar4;
  undefined **ppuVar5;
  char cVar6;
  uint uVar7;
  basic_ostream *pbVar8;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  long *plVar9;
  ulong uVar10;
  size_t sVar11;
  int iVar12;
  byte *pbVar13;
  ushort *puVar14;
  byte *pbVar15;
  byte bVar16;
  int iVar17;
  char *__s;
  Signature *pSVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  ushort *puVar22;
  byte bVar23;
  int iVar24;
  ushort *puVar25;
  uint *puVar26;
  long local_1b8;
  uint local_1a8;
  byte *local_1a0;
  byte *local_198;
  undefined8 local_190;
  Zone *pZStack_188;
  int local_17c;
  undefined **local_178;
  long local_170;
  long local_168;
  long lStack_160;
  undefined4 local_158;
  undefined4 local_150;
  ulong local_148;
  ulong local_140;
  void *local_138;
  long local_130;
  undefined4 local_128;
  undefined4 *local_120;
  long lStack_118;
  undefined8 local_110;
  undefined4 local_108 [2];
  undefined4 local_100 [2];
  Zone aZStack_f8 [64];
  undefined **local_b8;
  ushort *local_b0;
  ushort *local_a8;
  ushort *puStack_a0;
  int local_98;
  undefined4 local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  Zone::Zone(aZStack_f8,param_1,"../../src/wasm/function-body-decoder.cc:100");
  local_108[0] = 0;
  lStack_118 = *param_2;
  lStack_160 = param_2[3];
  local_170 = param_2[2];
  local_120 = local_108;
  local_178 = &PTR__Decoder_01cc9558;
  local_150 = 0;
  local_158 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = (void *)0x0;
  local_128 = 0xfff;
  local_110 = 0;
  local_17c = -1;
  local_168 = local_170;
  local_130 = param_3;
  if (lStack_118 != 0) {
    pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_5,"// signature: ",0xe);
    this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           operator<<(pbVar8,(Signature *)*param_2);
    std::__ndk1::ios_base::getloc();
    plVar9 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_b8,(id *)&std::__ndk1::ctype<char>::id);
    cVar6 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
    std::__ndk1::locale::~locale((locale *)&local_b8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(this,cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(this);
    if (param_6 != (vector<int,std::__ndk1::allocator<int>> *)0x0) {
      if (*(int **)(param_6 + 8) == *(int **)(param_6 + 0x10)) {
        std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                  (param_6,&local_17c);
      }
      else {
        **(int **)(param_6 + 8) = local_17c;
        *(long *)(param_6 + 8) = *(long *)(param_6 + 8) + 4;
      }
    }
  }
  local_1a8 = 0;
  local_1a0 = (byte *)0x0;
  local_198 = (byte *)0x0;
  local_190 = 0;
  puVar2 = (ushort *)param_2[2];
  puVar3 = (ushort *)param_2[3];
  local_100[0] = 0xfff;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (void *)0x0;
  pZStack_188 = aZStack_f8;
  local_b8 = &PTR__Decoder_01cbc3a8;
  local_b0 = puVar2;
  local_a8 = puVar2;
  puStack_a0 = puVar3;
  uVar10 = WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>::DecodeLocals
                     ((WasmFeatures *)local_100,(Decoder *)&local_b8,(Signature *)0x0,
                      (ZoneVector *)&local_1a0);
  bVar1 = (uVar10 & 1) != 0;
  if (bVar1) {
    local_1a8 = local_98 + ((int)local_a8 - (int)local_b0);
  }
  local_b8 = &PTR__Decoder_01cbc3a8;
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  puVar25 = puVar3;
  if ((ushort *)((long)puVar2 + (ulong)local_1a8) <= puVar3) {
    puVar25 = (ushort *)((long)puVar2 + (ulong)local_1a8);
  }
  if (!bVar1) {
    puVar25 = puVar2;
  }
  if ((param_4 == 0) && ((ushort *)param_2[2] != puVar25)) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_5,"// locals:",10);
    if (local_1a0 != local_198) {
      bVar16 = *local_1a0;
      uVar20 = 0;
      pbVar13 = local_1a0;
      pbVar15 = local_198;
      uVar10 = 0;
      bVar23 = bVar16;
      while( true ) {
        if (bVar16 == bVar23) {
          uVar20 = uVar20 + 1;
          bVar23 = bVar16;
        }
        else {
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_5," ",1);
          pbVar8 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,uVar20);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar8," ",1);
          pcVar21 = "<unknown>";
          if (bVar23 < 0xb) {
            pcVar21 = (&PTR_s_<stmt>_01cc9618)[(char)bVar23];
          }
          sVar11 = strlen(pcVar21);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (pbVar8,pcVar21,sVar11);
          uVar20 = 1;
          bVar23 = local_1a0[uVar10];
          pbVar13 = local_1a0;
          pbVar15 = local_198;
        }
        if ((ulong)((long)pbVar15 - (long)pbVar13) <= uVar10 + 1) break;
        bVar16 = pbVar13[uVar10 + 1];
        uVar10 = uVar10 + 1;
      }
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_5," ",1);
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,uVar20);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8," ",1);
      if (bVar23 < 0xb) {
        pcVar21 = (&PTR_s_<stmt>_01cc9618)[(char)bVar23];
      }
      else {
        pcVar21 = "<unknown>";
      }
      sVar11 = strlen(pcVar21);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar8,pcVar21,sVar11);
    }
    std::__ndk1::ios_base::getloc();
    plVar9 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_b8,(id *)&std::__ndk1::ctype<char>::id);
    cVar6 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
    std::__ndk1::locale::~locale((locale *)&local_b8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_5,cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_5);
    if (param_6 != (vector<int,std::__ndk1::allocator<int>> *)0x0) {
      if (*(int **)(param_6 + 8) == *(int **)(param_6 + 0x10)) {
        std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                  (param_6,&local_17c);
      }
      else {
        **(int **)(param_6 + 8) = local_17c;
        *(long *)(param_6 + 8) = *(long *)(param_6 + 8) + 4;
      }
    }
    puVar14 = (ushort *)param_2[2];
    if (puVar14 < puVar25) {
      puVar22 = puVar14;
      while( true ) {
        pcVar21 = "0x";
        if (puVar22 != puVar14) {
          pcVar21 = " 0x";
        }
        uVar10 = 2;
        if (puVar22 != puVar14) {
          uVar10 = 3;
        }
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_5,pcVar21,uVar10);
        local_b8 = (undefined **)(ulong)(byte)*puVar22;
        local_b0 = (ushort *)CONCAT62(local_b0._2_6_,2);
        pbVar8 = (basic_ostream *)internal::operator<<(pbVar8,(AsHex *)&local_b8);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,",",1);
        if ((ushort *)((long)puVar25 - 1U) == puVar22) break;
        puVar14 = (ushort *)param_2[2];
        puVar22 = (ushort *)((long)puVar22 + 1);
      }
    }
    std::__ndk1::ios_base::getloc();
    plVar9 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_b8,(id *)&std::__ndk1::ctype<char>::id);
    cVar6 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
    std::__ndk1::locale::~locale((locale *)&local_b8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_5,cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_5);
    if (param_6 != (vector<int,std::__ndk1::allocator<int>> *)0x0) {
      if (*(int **)(param_6 + 8) == *(int **)(param_6 + 0x10)) {
        std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                  (param_6,&local_17c);
      }
      else {
        **(int **)(param_6 + 8) = local_17c;
        *(long *)(param_6 + 8) = *(long *)(param_6 + 8) + 4;
      }
    }
  }
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_5,"// body: ",9);
  std::__ndk1::ios_base::getloc();
  plVar9 = (long *)std::__ndk1::locale::use_facet
                             ((locale *)&local_b8,(id *)&std::__ndk1::ctype<char>::id);
  cVar6 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
  std::__ndk1::locale::~locale((locale *)&local_b8);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,cVar6);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8);
  if (param_6 != (vector<int,std::__ndk1::allocator<int>> *)0x0) {
    if (*(int **)(param_6 + 8) == *(int **)(param_6 + 0x10)) {
      std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                (param_6,&local_17c);
    }
    else {
      **(int **)(param_6 + 8) = local_17c;
      *(long *)(param_6 + 8) = *(long *)(param_6 + 8) + 4;
    }
  }
  if (puVar25 < puVar3) {
    uVar20 = 0;
    do {
      uVar7 = WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)0>::OpcodeLength
                        ((Decoder *)&local_178,(uchar *)puVar25);
      uVar19 = (uint)(byte)*puVar25;
      uVar10 = WasmOpcodes::IsPrefixOpcode(uVar19);
      iVar24 = (int)puVar25;
      iVar12 = (int)puVar2;
      if ((uVar10 & 1) == 0) {
        local_1b8 = 1;
      }
      else {
        uVar19 = ((*puVar25 & 0xff00) << 8 | (uint)*puVar25 << 0x18) >> 0x10;
        local_1b8 = 2;
      }
      if (param_6 != (vector<int,std::__ndk1::allocator<int>> *)0x0) {
        local_b8 = (undefined **)CONCAT44(local_b8._4_4_,iVar24 - iVar12);
        if (*(int **)(param_6 + 8) < *(int **)(param_6 + 0x10)) {
          **(int **)(param_6 + 8) = iVar24 - iVar12;
          *(long *)(param_6 + 8) = *(long *)(param_6 + 8) + 4;
        }
        else {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                    (param_6,(int *)&local_b8);
        }
      }
      uVar20 = uVar20 - ((uVar19 | 2) == 7);
      iVar17 = uVar20 * 2;
      if (0x1f < uVar20) {
        iVar17 = 0x40;
      }
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_5,
                 "                                                                ",(long)iVar17);
      switch(uVar19) {
      case 0xfc00:
        __s = "kExprI32SConvertSatF32";
        break;
      case 0xfc01:
        __s = "kExprI32UConvertSatF32";
        break;
      case 0xfc02:
        __s = "kExprI32SConvertSatF64";
        break;
      case 0xfc03:
        __s = "kExprI32UConvertSatF64";
        break;
      case 0xfc04:
        __s = "kExprI64SConvertSatF32";
        break;
      case 0xfc05:
        __s = "kExprI64UConvertSatF32";
        break;
      case 0xfc06:
        __s = "kExprI64SConvertSatF64";
        break;
      case 0xfc07:
        __s = "kExprI64UConvertSatF64";
        break;
      case 0xfc08:
        __s = "kExprMemoryInit";
        break;
      case 0xfc09:
        __s = "kExprDataDrop";
        break;
      case 0xfc0a:
        __s = "kExprMemoryCopy";
        break;
      case 0xfc0b:
        __s = "kExprMemoryFill";
        break;
      case 0xfc0c:
        __s = "kExprTableInit";
        break;
      case 0xfc0d:
        __s = "kExprElemDrop";
        break;
      case 0xfc0e:
        __s = "kExprTableCopy";
        break;
      case 0xfc0f:
        __s = "kExprTableGrow";
        break;
      case 0xfc10:
        __s = "kExprTableSize";
        break;
      case 0xfc11:
        __s = "kExprTableFill";
        break;
      case 0xfc12:
      case 0xfc13:
      case 0xfc14:
      case 0xfc15:
      case 0xfc16:
      case 0xfc17:
      case 0xfc18:
      case 0xfc19:
      case 0xfc1a:
      case 0xfc1b:
      case 0xfc1c:
      case 0xfc1d:
      case 0xfc1e:
      case 0xfc1f:
      case 0xfc20:
      case 0xfc21:
      case 0xfc22:
      case 0xfc23:
      case 0xfc24:
      case 0xfc25:
      case 0xfc26:
      case 0xfc27:
      case 0xfc28:
      case 0xfc29:
      case 0xfc2a:
      case 0xfc2b:
      case 0xfc2c:
      case 0xfc2d:
      case 0xfc2e:
      case 0xfc2f:
      case 0xfc30:
      case 0xfc31:
      case 0xfc32:
      case 0xfc33:
      case 0xfc34:
      case 0xfc35:
      case 0xfc36:
      case 0xfc37:
      case 0xfc38:
      case 0xfc39:
      case 0xfc3a:
      case 0xfc3b:
      case 0xfc3c:
      case 0xfc3d:
      case 0xfc3e:
      case 0xfc3f:
      case 0xfc40:
      case 0xfc41:
      case 0xfc42:
      case 0xfc43:
      case 0xfc44:
      case 0xfc45:
      case 0xfc46:
      case 0xfc47:
      case 0xfc48:
      case 0xfc49:
      case 0xfc4a:
      case 0xfc4b:
      case 0xfc4c:
      case 0xfc4d:
      case 0xfc4e:
      case 0xfc4f:
      case 0xfc50:
      case 0xfc51:
      case 0xfc52:
      case 0xfc53:
      case 0xfc54:
      case 0xfc55:
      case 0xfc56:
      case 0xfc57:
      case 0xfc58:
      case 0xfc59:
      case 0xfc5a:
      case 0xfc5b:
      case 0xfc5c:
      case 0xfc5d:
      case 0xfc5e:
      case 0xfc5f:
      case 0xfc60:
      case 0xfc61:
      case 0xfc62:
      case 0xfc63:
      case 0xfc64:
      case 0xfc65:
      case 0xfc66:
      case 0xfc67:
      case 0xfc68:
      case 0xfc69:
      case 0xfc6a:
      case 0xfc6b:
      case 0xfc6c:
      case 0xfc6d:
      case 0xfc6e:
      case 0xfc6f:
      case 0xfc70:
      case 0xfc71:
      case 0xfc72:
      case 0xfc73:
      case 0xfc74:
      case 0xfc75:
      case 0xfc76:
      case 0xfc77:
      case 0xfc78:
      case 0xfc79:
      case 0xfc7a:
      case 0xfc7b:
      case 0xfc7c:
      case 0xfc7d:
      case 0xfc7e:
      case 0xfc7f:
      case 0xfc80:
      case 0xfc81:
      case 0xfc82:
      case 0xfc83:
      case 0xfc84:
      case 0xfc85:
      case 0xfc86:
      case 0xfc87:
      case 0xfc88:
      case 0xfc89:
      case 0xfc8a:
      case 0xfc8b:
      case 0xfc8c:
      case 0xfc8d:
      case 0xfc8e:
      case 0xfc8f:
      case 0xfc90:
      case 0xfc91:
      case 0xfc92:
      case 0xfc93:
      case 0xfc94:
      case 0xfc95:
      case 0xfc96:
      case 0xfc97:
      case 0xfc98:
      case 0xfc99:
      case 0xfc9a:
      case 0xfc9b:
      case 0xfc9c:
      case 0xfc9d:
      case 0xfc9e:
      case 0xfc9f:
      case 0xfca0:
      case 0xfca1:
      case 0xfca2:
      case 0xfca3:
      case 0xfca4:
      case 0xfca5:
      case 0xfca6:
      case 0xfca7:
      case 0xfca8:
      case 0xfca9:
      case 0xfcaa:
      case 0xfcab:
      case 0xfcac:
      case 0xfcad:
      case 0xfcae:
      case 0xfcaf:
      case 0xfcb0:
      case 0xfcb1:
      case 0xfcb2:
      case 0xfcb3:
      case 0xfcb4:
      case 0xfcb5:
      case 0xfcb6:
      case 0xfcb7:
      case 0xfcb8:
      case 0xfcb9:
      case 0xfcba:
      case 0xfcbb:
      case 0xfcbc:
      case 0xfcbd:
      case 0xfcbe:
      case 0xfcbf:
      case 0xfcc0:
      case 0xfcc1:
      case 0xfcc2:
      case 0xfcc3:
      case 0xfcc4:
      case 0xfcc5:
      case 0xfcc6:
      case 0xfcc7:
      case 0xfcc8:
      case 0xfcc9:
      case 0xfcca:
      case 0xfccb:
      case 0xfccc:
      case 0xfccd:
      case 0xfcce:
      case 0xfccf:
      case 0xfcd0:
      case 0xfcd1:
      case 0xfcd2:
      case 0xfcd3:
      case 0xfcd4:
      case 0xfcd5:
      case 0xfcd6:
      case 0xfcd7:
      case 0xfcd8:
      case 0xfcd9:
      case 0xfcda:
      case 0xfcdb:
      case 0xfcdc:
      case 0xfcdd:
      case 0xfcde:
      case 0xfcdf:
      case 0xfce0:
      case 0xfce1:
      case 0xfce2:
      case 0xfce3:
      case 0xfce4:
      case 0xfce5:
      case 0xfce6:
      case 0xfce7:
      case 0xfce8:
      case 0xfce9:
      case 0xfcea:
      case 0xfceb:
      case 0xfcec:
      case 0xfced:
      case 0xfcee:
      case 0xfcef:
      case 0xfcf0:
      case 0xfcf1:
      case 0xfcf2:
      case 0xfcf3:
      case 0xfcf4:
      case 0xfcf5:
      case 0xfcf6:
      case 0xfcf7:
      case 0xfcf8:
      case 0xfcf9:
      case 0xfcfa:
      case 0xfcfb:
      case 0xfcfc:
      case 0xfcfd:
      case 0xfcfe:
      case 0xfcff:
      case 0xfd02:
      case 0xfd7a:
      case 0xfd7b:
      case 0xfd7d:
      case 0xfd7e:
      case 0xfd8b:
      case 0xfd92:
      case 0xfd93:
      case 0xfd94:
      case 0xfdad:
      case 0xfdae:
      case 0xfdb3:
      case 0xfdb4:
      case 0xfdb5:
      case 0xfdb6:
      case 0xfdb7:
      case 0xfdb8:
      case 0xfdb9:
      case 0xfdba:
      case 0xfdbb:
      case 0xfdbc:
      case 0xfdc1:
      case 0xfdd8:
      case 0xfdd9:
      case 0xfdda:
      case 0xfddb:
      case 0xfddc:
      case 0xfddd:
      case 0xfdde:
      case 0xfddf:
      case 0xfde2:
      case 0xfde3:
      case 0xfde4:
      case 0xfde5:
      case 0xfde6:
      case 64999:
      case 65000:
      case 0xfde9:
      case 0xfdea:
      case 0xfdeb:
      case 0xfdec:
      case 0xfded:
      case 0xfdee:
      case 0xfdef:
      case 0xfdf0:
      case 0xfdf1:
      case 0xfdf2:
      case 0xfdf3:
      case 0xfdf4:
      case 0xfdf5:
      case 0xfdf6:
      case 0xfdf7:
      case 0xfdf8:
      case 0xfdf9:
      case 0xfdfa:
      case 0xfdfb:
      case 0xfdfc:
      case 0xfdfd:
      case 0xfdfe:
      case 0xfdff:
      case 0xfe04:
      case 0xfe05:
      case 0xfe06:
      case 0xfe07:
      case 0xfe08:
      case 0xfe09:
      case 0xfe0a:
      case 0xfe0b:
      case 0xfe0c:
      case 0xfe0d:
      case 0xfe0e:
      case 0xfe0f:
switchD_015c7cfc_caseD_fc12:
        sVar11 = 7;
        __s = "Unknown";
        goto LAB_015c9538;
      case 0xfd00:
        __s = "kExprS128LoadMem";
        break;
      case 0xfd01:
        __s = "kExprS128StoreMem";
        break;
      case 0xfd03:
        __s = "kExprS8x16Shuffle";
        break;
      case 0xfd04:
        __s = "kExprI8x16Splat";
        break;
      case 0xfd05:
        __s = "kExprI8x16ExtractLaneS";
        break;
      case 0xfd06:
        __s = "kExprI8x16ExtractLaneU";
        break;
      case 0xfd07:
        __s = "kExprI8x16ReplaceLane";
        break;
      case 0xfd08:
        __s = "kExprI16x8Splat";
        break;
      case 0xfd09:
        __s = "kExprI16x8ExtractLaneS";
        break;
      case 0xfd0a:
        __s = "kExprI16x8ExtractLaneU";
        break;
      case 0xfd0b:
        __s = "kExprI16x8ReplaceLane";
        break;
      case 0xfd0c:
        __s = "kExprI32x4Splat";
        break;
      case 0xfd0d:
        __s = "kExprI32x4ExtractLane";
        break;
      case 0xfd0e:
        __s = "kExprI32x4ReplaceLane";
        break;
      case 0xfd0f:
        __s = "kExprI64x2Splat";
        break;
      case 0xfd10:
        __s = "kExprI64x2ExtractLane";
        break;
      case 0xfd11:
        __s = "kExprI64x2ReplaceLane";
        break;
      case 0xfd12:
        __s = "kExprF32x4Splat";
        break;
      case 0xfd13:
        __s = "kExprF32x4ExtractLane";
        break;
      case 0xfd14:
        __s = "kExprF32x4ReplaceLane";
        break;
      case 0xfd15:
        __s = "kExprF64x2Splat";
        break;
      case 0xfd16:
        __s = "kExprF64x2ExtractLane";
        break;
      case 0xfd17:
        __s = "kExprF64x2ReplaceLane";
        break;
      case 0xfd18:
        __s = "kExprI8x16Eq";
        break;
      case 0xfd19:
        __s = "kExprI8x16Ne";
        break;
      case 0xfd1a:
        __s = "kExprI8x16LtS";
        break;
      case 0xfd1b:
        __s = "kExprI8x16LtU";
        break;
      case 0xfd1c:
        __s = "kExprI8x16GtS";
        break;
      case 0xfd1d:
        __s = "kExprI8x16GtU";
        break;
      case 0xfd1e:
        __s = "kExprI8x16LeS";
        break;
      case 0xfd1f:
        __s = "kExprI8x16LeU";
        break;
      case 0xfd20:
        __s = "kExprI8x16GeS";
        break;
      case 0xfd21:
        __s = "kExprI8x16GeU";
        break;
      case 0xfd22:
        __s = "kExprI16x8Eq";
        break;
      case 0xfd23:
        __s = "kExprI16x8Ne";
        break;
      case 0xfd24:
        __s = "kExprI16x8LtS";
        break;
      case 0xfd25:
        __s = "kExprI16x8LtU";
        break;
      case 0xfd26:
        __s = "kExprI16x8GtS";
        break;
      case 0xfd27:
        __s = "kExprI16x8GtU";
        break;
      case 0xfd28:
        __s = "kExprI16x8LeS";
        break;
      case 0xfd29:
        __s = "kExprI16x8LeU";
        break;
      case 0xfd2a:
        __s = "kExprI16x8GeS";
        break;
      case 0xfd2b:
        __s = "kExprI16x8GeU";
        break;
      case 0xfd2c:
        __s = "kExprI32x4Eq";
        break;
      case 0xfd2d:
        __s = "kExprI32x4Ne";
        break;
      case 0xfd2e:
        __s = "kExprI32x4LtS";
        break;
      case 0xfd2f:
        __s = "kExprI32x4LtU";
        break;
      case 0xfd30:
        __s = "kExprI32x4GtS";
        break;
      case 0xfd31:
        __s = "kExprI32x4GtU";
        break;
      case 0xfd32:
        __s = "kExprI32x4LeS";
        break;
      case 0xfd33:
        __s = "kExprI32x4LeU";
        break;
      case 0xfd34:
        __s = "kExprI32x4GeS";
        break;
      case 0xfd35:
        __s = "kExprI32x4GeU";
        break;
      case 0xfd36:
        __s = "kExprI64x2Eq";
        break;
      case 0xfd37:
        __s = "kExprI64x2Ne";
        break;
      case 0xfd38:
        __s = "kExprI64x2LtS";
        break;
      case 0xfd39:
        __s = "kExprI64x2LtU";
        break;
      case 0xfd3a:
        __s = "kExprI64x2GtS";
        break;
      case 0xfd3b:
        __s = "kExprI64x2GtU";
        break;
      case 0xfd3c:
        __s = "kExprI64x2LeS";
        break;
      case 0xfd3d:
        __s = "kExprI64x2LeU";
        break;
      case 0xfd3e:
        __s = "kExprI64x2GeS";
        break;
      case 0xfd3f:
        __s = "kExprI64x2GeU";
        break;
      case 0xfd40:
        __s = "kExprF32x4Eq";
        break;
      case 0xfd41:
        __s = "kExprF32x4Ne";
        break;
      case 0xfd42:
        __s = "kExprF32x4Lt";
        break;
      case 0xfd43:
        __s = "kExprF32x4Gt";
        break;
      case 0xfd44:
        __s = "kExprF32x4Le";
        break;
      case 0xfd45:
        __s = "kExprF32x4Ge";
        break;
      case 0xfd46:
        __s = "kExprF64x2Eq";
        break;
      case 0xfd47:
        __s = "kExprF64x2Ne";
        break;
      case 0xfd48:
        __s = "kExprF64x2Lt";
        break;
      case 0xfd49:
        __s = "kExprF64x2Gt";
        break;
      case 0xfd4a:
        __s = "kExprF64x2Le";
        break;
      case 0xfd4b:
        __s = "kExprF64x2Ge";
        break;
      case 0xfd4c:
        __s = "kExprS128Not";
        break;
      case 0xfd4d:
        __s = "kExprS128And";
        break;
      case 0xfd4e:
        __s = "kExprS128Or";
        break;
      case 0xfd4f:
        __s = "kExprS128Xor";
        break;
      case 0xfd50:
        __s = "kExprS128Select";
        break;
      case 0xfd51:
        __s = "kExprI8x16Neg";
        break;
      case 0xfd52:
        __s = "kExprS1x16AnyTrue";
        break;
      case 0xfd53:
        __s = "kExprS1x16AllTrue";
        break;
      case 0xfd54:
        __s = "kExprI8x16Shl";
        break;
      case 0xfd55:
        __s = "kExprI8x16ShrS";
        break;
      case 0xfd56:
        __s = "kExprI8x16ShrU";
        break;
      case 0xfd57:
        __s = "kExprI8x16Add";
        break;
      case 0xfd58:
        __s = "kExprI8x16AddSaturateS";
        break;
      case 0xfd59:
        __s = "kExprI8x16AddSaturateU";
        break;
      case 0xfd5a:
        __s = "kExprI8x16Sub";
        break;
      case 0xfd5b:
        __s = "kExprI8x16SubSaturateS";
        break;
      case 0xfd5c:
        __s = "kExprI8x16SubSaturateU";
        break;
      case 0xfd5d:
        __s = "kExprI8x16Mul";
        break;
      case 0xfd5e:
        __s = "kExprI8x16MinS";
        break;
      case 0xfd5f:
        __s = "kExprI8x16MinU";
        break;
      case 0xfd60:
        __s = "kExprI8x16MaxS";
        break;
      case 0xfd61:
        __s = "kExprI8x16MaxU";
        break;
      case 0xfd62:
        __s = "kExprI16x8Neg";
        break;
      case 0xfd63:
        __s = "kExprS1x8AnyTrue";
        break;
      case 0xfd64:
        __s = "kExprS1x8AllTrue";
        break;
      case 0xfd65:
        __s = "kExprI16x8Shl";
        break;
      case 0xfd66:
        __s = "kExprI16x8ShrS";
        break;
      case 0xfd67:
        __s = "kExprI16x8ShrU";
        break;
      case 0xfd68:
        __s = "kExprI16x8Add";
        break;
      case 0xfd69:
        __s = "kExprI16x8AddSaturateS";
        break;
      case 0xfd6a:
        __s = "kExprI16x8AddSaturateU";
        break;
      case 0xfd6b:
        __s = "kExprI16x8Sub";
        break;
      case 0xfd6c:
        __s = "kExprI16x8SubSaturateS";
        break;
      case 0xfd6d:
        __s = "kExprI16x8SubSaturateU";
        break;
      case 0xfd6e:
        __s = "kExprI16x8Mul";
        break;
      case 0xfd6f:
        __s = "kExprI16x8MinS";
        break;
      case 0xfd70:
        __s = "kExprI16x8MinU";
        break;
      case 0xfd71:
        __s = "kExprI16x8MaxS";
        break;
      case 0xfd72:
        __s = "kExprI16x8MaxU";
        break;
      case 0xfd73:
        __s = "kExprI32x4Neg";
        break;
      case 0xfd74:
        __s = "kExprS1x4AnyTrue";
        break;
      case 0xfd75:
        __s = "kExprS1x4AllTrue";
        break;
      case 0xfd76:
        __s = "kExprI32x4Shl";
        break;
      case 0xfd77:
        __s = "kExprI32x4ShrS";
        break;
      case 0xfd78:
        __s = "kExprI32x4ShrU";
        break;
      case 0xfd79:
        __s = "kExprI32x4Add";
        break;
      case 0xfd7c:
        __s = "kExprI32x4Sub";
        break;
      case 0xfd7f:
        __s = "kExprI32x4Mul";
        break;
      case 0xfd80:
        __s = "kExprI32x4MinS";
        break;
      case 0xfd81:
        __s = "kExprI32x4MinU";
        break;
      case 0xfd82:
        __s = "kExprI32x4MaxS";
        break;
      case 0xfd83:
        __s = "kExprI32x4MaxU";
        break;
      case 0xfd84:
        __s = "kExprI64x2Neg";
        break;
      case 0xfd85:
        __s = "kExprS1x2AnyTrue";
        break;
      case 0xfd86:
        __s = "kExprS1x2AllTrue";
        break;
      case 0xfd87:
        __s = "kExprI64x2Shl";
        break;
      case 0xfd88:
        __s = "kExprI64x2ShrS";
        break;
      case 0xfd89:
        __s = "kExprI64x2ShrU";
        break;
      case 0xfd8a:
        __s = "kExprI64x2Add";
        break;
      case 0xfd8c:
        __s = "kExprI64x2Mul";
        break;
      case 0xfd8d:
        __s = "kExprI64x2Sub";
        break;
      case 0xfd8e:
        __s = "kExprI64x2MinS";
        break;
      case 0xfd8f:
        __s = "kExprI64x2MinU";
        break;
      case 0xfd90:
        __s = "kExprI64x2MaxS";
        break;
      case 0xfd91:
        __s = "kExprI64x2MaxU";
        break;
      case 0xfd95:
        __s = "kExprF32x4Abs";
        break;
      case 0xfd96:
        __s = "kExprF32x4Neg";
        break;
      case 0xfd97:
        __s = "kExprF32x4Sqrt";
        break;
      case 0xfd98:
        __s = "kExprF32x4Qfma";
        break;
      case 0xfd99:
        __s = "kExprF32x4Qfms";
        break;
      case 0xfd9a:
        __s = "kExprF32x4Add";
        break;
      case 0xfd9b:
        __s = "kExprF32x4Sub";
        break;
      case 0xfd9c:
        __s = "kExprF32x4Mul";
        break;
      case 0xfd9d:
        __s = "kExprF32x4Div";
        break;
      case 0xfd9e:
        __s = "kExprF32x4Min";
        break;
      case 0xfd9f:
        __s = "kExprF32x4Max";
        break;
      case 0xfda0:
        __s = "kExprF64x2Abs";
        break;
      case 0xfda1:
        __s = "kExprF64x2Neg";
        break;
      case 0xfda2:
        __s = "kExprF64x2Sqrt";
        break;
      case 0xfda3:
        __s = "kExprF64x2Qfma";
        break;
      case 0xfda4:
        __s = "kExprF64x2Qfms";
        break;
      case 0xfda5:
        __s = "kExprF64x2Add";
        break;
      case 0xfda6:
        __s = "kExprF64x2Sub";
        break;
      case 0xfda7:
        __s = "kExprF64x2Mul";
        break;
      case 0xfda8:
        __s = "kExprF64x2Div";
        break;
      case 0xfda9:
        __s = "kExprF64x2Min";
        break;
      case 0xfdaa:
        __s = "kExprF64x2Max";
        break;
      case 0xfdab:
        __s = "kExprI32x4SConvertF32x4";
        break;
      case 0xfdac:
        __s = "kExprI32x4UConvertF32x4";
        break;
      case 0xfdaf:
        __s = "kExprF32x4SConvertI32x4";
        break;
      case 0xfdb0:
        __s = "kExprF32x4UConvertI32x4";
        break;
      case 0xfdb1:
        __s = "kExprF64x2SConvertI64x2";
        break;
      case 0xfdb2:
        __s = "kExprF64x2UConvertI64x2";
        break;
      case 0xfdbd:
        __s = "kExprI16x8AddHoriz";
        break;
      case 0xfdbe:
        __s = "kExprI32x4AddHoriz";
        break;
      case 0xfdbf:
        __s = "kExprF32x4AddHoriz";
        break;
      case 0xfdc0:
        __s = "kExprS8x16Swizzle";
        break;
      case 0xfdc2:
        __s = "kExprS8x16LoadSplat";
        break;
      case 0xfdc3:
        __s = "kExprS16x8LoadSplat";
        break;
      case 0xfdc4:
        __s = "kExprS32x4LoadSplat";
        break;
      case 0xfdc5:
        __s = "kExprS64x2LoadSplat";
        break;
      case 0xfdc6:
        __s = "kExprI8x16SConvertI16x8";
        break;
      case 0xfdc7:
        __s = "kExprI8x16UConvertI16x8";
        break;
      case 0xfdc8:
        __s = "kExprI16x8SConvertI32x4";
        break;
      case 0xfdc9:
        __s = "kExprI16x8UConvertI32x4";
        break;
      case 0xfdca:
        __s = "kExprI16x8SConvertI8x16Low";
        break;
      case 0xfdcb:
        __s = "kExprI16x8SConvertI8x16High";
        break;
      case 0xfdcc:
        __s = "kExprI16x8UConvertI8x16Low";
        break;
      case 0xfdcd:
        __s = "kExprI16x8UConvertI8x16High";
        break;
      case 0xfdce:
        __s = "kExprI32x4SConvertI16x8Low";
        break;
      case 0xfdcf:
        __s = "kExprI32x4SConvertI16x8High";
        break;
      case 0xfdd0:
        __s = "kExprI32x4UConvertI16x8Low";
        break;
      case 0xfdd1:
        __s = "kExprI32x4UConvertI16x8High";
        break;
      case 0xfdd2:
        __s = "kExprI16x8Load8x8S";
        break;
      case 0xfdd3:
        __s = "kExprI16x8Load8x8U";
        break;
      case 0xfdd4:
        __s = "kExprI32x4Load16x4S";
        break;
      case 0xfdd5:
        __s = "kExprI32x4Load16x4U";
        break;
      case 0xfdd6:
        __s = "kExprI64x2Load32x2S";
        break;
      case 0xfdd7:
        __s = "kExprI64x2Load32x2U";
        break;
      case 0xfde0:
        __s = "kExprF32x4RecipApprox";
        break;
      case 0xfde1:
        __s = "kExprF32x4RecipSqrtApprox";
        break;
      case 0xfe00:
        __s = "kExprAtomicNotify";
        break;
      case 0xfe01:
        __s = "kExprI32AtomicWait";
        break;
      case 0xfe02:
        __s = "kExprI64AtomicWait";
        break;
      case 0xfe03:
        __s = "kExprAtomicFence";
        break;
      case 0xfe10:
        __s = "kExprI32AtomicLoad";
        break;
      case 0xfe11:
        __s = "kExprI64AtomicLoad";
        break;
      case 0xfe12:
        __s = "kExprI32AtomicLoad8U";
        break;
      case 0xfe13:
        __s = "kExprI32AtomicLoad16U";
        break;
      case 0xfe14:
        __s = "kExprI64AtomicLoad8U";
        break;
      case 0xfe15:
        __s = "kExprI64AtomicLoad16U";
        break;
      case 0xfe16:
        __s = "kExprI64AtomicLoad32U";
        break;
      case 0xfe17:
        __s = "kExprI32AtomicStore";
        break;
      case 0xfe18:
        __s = "kExprI64AtomicStore";
        break;
      case 0xfe19:
        __s = "kExprI32AtomicStore8U";
        break;
      case 0xfe1a:
        __s = "kExprI32AtomicStore16U";
        break;
      case 0xfe1b:
        __s = "kExprI64AtomicStore8U";
        break;
      case 0xfe1c:
        __s = "kExprI64AtomicStore16U";
        break;
      case 0xfe1d:
        __s = "kExprI64AtomicStore32U";
        break;
      case 0xfe1e:
        __s = "kExprI32AtomicAdd";
        break;
      case 0xfe1f:
        __s = "kExprI64AtomicAdd";
        break;
      case 0xfe20:
        __s = "kExprI32AtomicAdd8U";
        break;
      case 0xfe21:
        __s = "kExprI32AtomicAdd16U";
        break;
      case 0xfe22:
        __s = "kExprI64AtomicAdd8U";
        break;
      case 0xfe23:
        __s = "kExprI64AtomicAdd16U";
        break;
      case 0xfe24:
        __s = "kExprI64AtomicAdd32U";
        break;
      case 0xfe25:
        __s = "kExprI32AtomicSub";
        break;
      case 0xfe26:
        __s = "kExprI64AtomicSub";
        break;
      case 0xfe27:
        __s = "kExprI32AtomicSub8U";
        break;
      case 0xfe28:
        __s = "kExprI32AtomicSub16U";
        break;
      case 0xfe29:
        __s = "kExprI64AtomicSub8U";
        break;
      case 0xfe2a:
        __s = "kExprI64AtomicSub16U";
        break;
      case 0xfe2b:
        __s = "kExprI64AtomicSub32U";
        break;
      case 0xfe2c:
        __s = "kExprI32AtomicAnd";
        break;
      case 0xfe2d:
        __s = "kExprI64AtomicAnd";
        break;
      case 0xfe2e:
        __s = "kExprI32AtomicAnd8U";
        break;
      case 0xfe2f:
        __s = "kExprI32AtomicAnd16U";
        break;
      case 0xfe30:
        __s = "kExprI64AtomicAnd8U";
        break;
      case 0xfe31:
        __s = "kExprI64AtomicAnd16U";
        break;
      case 0xfe32:
        __s = "kExprI64AtomicAnd32U";
        break;
      case 0xfe33:
        __s = "kExprI32AtomicOr";
        break;
      case 0xfe34:
        __s = "kExprI64AtomicOr";
        break;
      case 0xfe35:
        __s = "kExprI32AtomicOr8U";
        break;
      case 0xfe36:
        __s = "kExprI32AtomicOr16U";
        break;
      case 0xfe37:
        __s = "kExprI64AtomicOr8U";
        break;
      case 0xfe38:
        __s = "kExprI64AtomicOr16U";
        break;
      case 0xfe39:
        __s = "kExprI64AtomicOr32U";
        break;
      case 0xfe3a:
        __s = "kExprI32AtomicXor";
        break;
      case 0xfe3b:
        __s = "kExprI64AtomicXor";
        break;
      case 0xfe3c:
        __s = "kExprI32AtomicXor8U";
        break;
      case 0xfe3d:
        __s = "kExprI32AtomicXor16U";
        break;
      case 0xfe3e:
        __s = "kExprI64AtomicXor8U";
        break;
      case 0xfe3f:
        __s = "kExprI64AtomicXor16U";
        break;
      case 0xfe40:
        __s = "kExprI64AtomicXor32U";
        break;
      case 0xfe41:
        __s = "kExprI32AtomicExchange";
        break;
      case 0xfe42:
        __s = "kExprI64AtomicExchange";
        break;
      case 0xfe43:
        __s = "kExprI32AtomicExchange8U";
        break;
      case 0xfe44:
        __s = "kExprI32AtomicExchange16U";
        break;
      case 0xfe45:
        __s = "kExprI64AtomicExchange8U";
        break;
      case 0xfe46:
        __s = "kExprI64AtomicExchange16U";
        break;
      case 0xfe47:
        __s = "kExprI64AtomicExchange32U";
        break;
      case 0xfe48:
        __s = "kExprI32AtomicCompareExchange";
        break;
      case 0xfe49:
        __s = "kExprI64AtomicCompareExchange";
        break;
      case 0xfe4a:
        __s = "kExprI32AtomicCompareExchange8U";
        break;
      case 0xfe4b:
        __s = "kExprI32AtomicCompareExchange16U";
        break;
      case 0xfe4c:
        __s = "kExprI64AtomicCompareExchange8U";
        break;
      case 0xfe4d:
        __s = "kExprI64AtomicCompareExchange16U";
        break;
      case 0xfe4e:
        __s = "kExprI64AtomicCompareExchange32U";
        break;
      default:
        __s = "kExprUnreachable";
        pcVar21 = "kExprBlock";
        switch(uVar19) {
        case 0:
          break;
        case 1:
          __s = "kExprNop";
          break;
        case 2:
          goto switchD_015c7d38_caseD_2;
        case 3:
          pcVar21 = "kExprLoop";
          goto switchD_015c7d38_caseD_2;
        case 4:
          pcVar21 = "kExprIf";
          goto switchD_015c7d38_caseD_2;
        case 5:
          __s = "kExprElse";
          break;
        case 6:
          pcVar21 = "kExprTry";
switchD_015c7d38_caseD_2:
          sVar11 = strlen(pcVar21);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_5,pcVar21,sVar11);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,",",1);
          pbVar8 = param_5;
          switch(*(byte *)((long)puVar25 + 1)) {
          case 0x7b:
            pcVar21 = " kWasmS128,";
            uVar10 = 0xb;
            goto LAB_015c9a50;
          case 0x7c:
            pcVar21 = " kWasmF64,";
            break;
          case 0x7d:
            pcVar21 = " kWasmF32,";
            break;
          case 0x7e:
            pcVar21 = " kWasmI64,";
            break;
          case 0x7f:
            pcVar21 = " kWasmI32,";
            break;
          default:
            if (*(byte *)((long)puVar25 + 1) == 0x40) {
              pcVar21 = " kWasmStmt,";
              uVar10 = 0xb;
            }
            else {
              pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                 (param_5," 0x",3);
              local_b8 = (undefined **)(ulong)*(byte *)((long)puVar25 + 1);
              local_b0 = (ushort *)CONCAT62(local_b0._2_6_,2);
              pbVar8 = (basic_ostream *)internal::operator<<(pbVar8,(AsHex *)&local_b8);
              pcVar21 = ",";
              uVar10 = 1;
            }
            goto LAB_015c9a50;
          }
          uVar10 = 10;
LAB_015c9a50:
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (pbVar8,pcVar21,uVar10);
          goto LAB_015c9598;
        case 7:
          __s = "kExprCatch";
          break;
        case 8:
          __s = "kExprThrow";
          break;
        case 9:
          __s = "kExprRethrow";
          break;
        case 10:
          __s = "kExprBrOnExn";
          break;
        case 0xb:
          __s = "kExprEnd";
          break;
        case 0xc:
          __s = "kExprBr";
          break;
        case 0xd:
          __s = "kExprBrIf";
          break;
        case 0xe:
          __s = "kExprBrTable";
          break;
        case 0xf:
          __s = "kExprReturn";
          break;
        case 0x10:
          __s = "kExprCallFunction";
          break;
        case 0x11:
          __s = "kExprCallIndirect";
          break;
        case 0x12:
          __s = "kExprReturnCall";
          break;
        case 0x13:
          __s = "kExprReturnCallIndirect";
          break;
        default:
          goto switchD_015c7cfc_caseD_fc12;
        case 0x1a:
          __s = "kExprDrop";
          break;
        case 0x1b:
          __s = "kExprSelect";
          break;
        case 0x1c:
          __s = "kExprSelectWithType";
          break;
        case 0x20:
          __s = "kExprLocalGet";
          break;
        case 0x21:
          __s = "kExprLocalSet";
          break;
        case 0x22:
          __s = "kExprLocalTee";
          break;
        case 0x23:
          __s = "kExprGlobalGet";
          break;
        case 0x24:
          __s = "kExprGlobalSet";
          break;
        case 0x25:
          __s = "kExprTableGet";
          break;
        case 0x26:
          __s = "kExprTableSet";
          break;
        case 0x28:
          __s = "kExprI32LoadMem";
          break;
        case 0x29:
          __s = "kExprI64LoadMem";
          break;
        case 0x2a:
          __s = "kExprF32LoadMem";
          break;
        case 0x2b:
          __s = "kExprF64LoadMem";
          break;
        case 0x2c:
          __s = "kExprI32LoadMem8S";
          break;
        case 0x2d:
          __s = "kExprI32LoadMem8U";
          break;
        case 0x2e:
          __s = "kExprI32LoadMem16S";
          break;
        case 0x2f:
          __s = "kExprI32LoadMem16U";
          break;
        case 0x30:
          __s = "kExprI64LoadMem8S";
          break;
        case 0x31:
          __s = "kExprI64LoadMem8U";
          break;
        case 0x32:
          __s = "kExprI64LoadMem16S";
          break;
        case 0x33:
          __s = "kExprI64LoadMem16U";
          break;
        case 0x34:
          __s = "kExprI64LoadMem32S";
          break;
        case 0x35:
          __s = "kExprI64LoadMem32U";
          break;
        case 0x36:
          __s = "kExprI32StoreMem";
          break;
        case 0x37:
          __s = "kExprI64StoreMem";
          break;
        case 0x38:
          __s = "kExprF32StoreMem";
          break;
        case 0x39:
          __s = "kExprF64StoreMem";
          break;
        case 0x3a:
          __s = "kExprI32StoreMem8";
          break;
        case 0x3b:
          __s = "kExprI32StoreMem16";
          break;
        case 0x3c:
          __s = "kExprI64StoreMem8";
          break;
        case 0x3d:
          __s = "kExprI64StoreMem16";
          break;
        case 0x3e:
          __s = "kExprI64StoreMem32";
          break;
        case 0x3f:
          __s = "kExprMemorySize";
          break;
        case 0x40:
          __s = "kExprMemoryGrow";
          break;
        case 0x41:
          __s = "kExprI32Const";
          break;
        case 0x42:
          __s = "kExprI64Const";
          break;
        case 0x43:
          __s = "kExprF32Const";
          break;
        case 0x44:
          __s = "kExprF64Const";
          break;
        case 0x45:
          __s = "kExprI32Eqz";
          break;
        case 0x46:
          __s = "kExprI32Eq";
          break;
        case 0x47:
          __s = "kExprI32Ne";
          break;
        case 0x48:
          __s = "kExprI32LtS";
          break;
        case 0x49:
          __s = "kExprI32LtU";
          break;
        case 0x4a:
          __s = "kExprI32GtS";
          break;
        case 0x4b:
          __s = "kExprI32GtU";
          break;
        case 0x4c:
          __s = "kExprI32LeS";
          break;
        case 0x4d:
          __s = "kExprI32LeU";
          break;
        case 0x4e:
          __s = "kExprI32GeS";
          break;
        case 0x4f:
          __s = "kExprI32GeU";
          break;
        case 0x50:
          __s = "kExprI64Eqz";
          break;
        case 0x51:
          __s = "kExprI64Eq";
          break;
        case 0x52:
          __s = "kExprI64Ne";
          break;
        case 0x53:
          __s = "kExprI64LtS";
          break;
        case 0x54:
          __s = "kExprI64LtU";
          break;
        case 0x55:
          __s = "kExprI64GtS";
          break;
        case 0x56:
          __s = "kExprI64GtU";
          break;
        case 0x57:
          __s = "kExprI64LeS";
          break;
        case 0x58:
          __s = "kExprI64LeU";
          break;
        case 0x59:
          __s = "kExprI64GeS";
          break;
        case 0x5a:
          __s = "kExprI64GeU";
          break;
        case 0x5b:
          __s = "kExprF32Eq";
          break;
        case 0x5c:
          __s = "kExprF32Ne";
          break;
        case 0x5d:
          __s = "kExprF32Lt";
          break;
        case 0x5e:
          __s = "kExprF32Gt";
          break;
        case 0x5f:
          __s = "kExprF32Le";
          break;
        case 0x60:
          __s = "kExprF32Ge";
          break;
        case 0x61:
          __s = "kExprF64Eq";
          break;
        case 0x62:
          __s = "kExprF64Ne";
          break;
        case 99:
          __s = "kExprF64Lt";
          break;
        case 100:
          __s = "kExprF64Gt";
          break;
        case 0x65:
          __s = "kExprF64Le";
          break;
        case 0x66:
          __s = "kExprF64Ge";
          break;
        case 0x67:
          __s = "kExprI32Clz";
          break;
        case 0x68:
          __s = "kExprI32Ctz";
          break;
        case 0x69:
          __s = "kExprI32Popcnt";
          break;
        case 0x6a:
          __s = "kExprI32Add";
          break;
        case 0x6b:
          __s = "kExprI32Sub";
          break;
        case 0x6c:
          __s = "kExprI32Mul";
          break;
        case 0x6d:
          __s = "kExprI32DivS";
          break;
        case 0x6e:
          __s = "kExprI32DivU";
          break;
        case 0x6f:
          __s = "kExprI32RemS";
          break;
        case 0x70:
          __s = "kExprI32RemU";
          break;
        case 0x71:
          __s = "kExprI32And";
          break;
        case 0x72:
          __s = "kExprI32Ior";
          break;
        case 0x73:
          __s = "kExprI32Xor";
          break;
        case 0x74:
          __s = "kExprI32Shl";
          break;
        case 0x75:
          __s = "kExprI32ShrS";
          break;
        case 0x76:
          __s = "kExprI32ShrU";
          break;
        case 0x77:
          __s = "kExprI32Rol";
          break;
        case 0x78:
          __s = "kExprI32Ror";
          break;
        case 0x79:
          __s = "kExprI64Clz";
          break;
        case 0x7a:
          __s = "kExprI64Ctz";
          break;
        case 0x7b:
          __s = "kExprI64Popcnt";
          break;
        case 0x7c:
          __s = "kExprI64Add";
          break;
        case 0x7d:
          __s = "kExprI64Sub";
          break;
        case 0x7e:
          __s = "kExprI64Mul";
          break;
        case 0x7f:
          __s = "kExprI64DivS";
          break;
        case 0x80:
          __s = "kExprI64DivU";
          break;
        case 0x81:
          __s = "kExprI64RemS";
          break;
        case 0x82:
          __s = "kExprI64RemU";
          break;
        case 0x83:
          __s = "kExprI64And";
          break;
        case 0x84:
          __s = "kExprI64Ior";
          break;
        case 0x85:
          __s = "kExprI64Xor";
          break;
        case 0x86:
          __s = "kExprI64Shl";
          break;
        case 0x87:
          __s = "kExprI64ShrS";
          break;
        case 0x88:
          __s = "kExprI64ShrU";
          break;
        case 0x89:
          __s = "kExprI64Rol";
          break;
        case 0x8a:
          __s = "kExprI64Ror";
          break;
        case 0x8b:
          __s = "kExprF32Abs";
          break;
        case 0x8c:
          __s = "kExprF32Neg";
          break;
        case 0x8d:
          __s = "kExprF32Ceil";
          break;
        case 0x8e:
          __s = "kExprF32Floor";
          break;
        case 0x8f:
          __s = "kExprF32Trunc";
          break;
        case 0x90:
          __s = "kExprF32NearestInt";
          break;
        case 0x91:
          __s = "kExprF32Sqrt";
          break;
        case 0x92:
          __s = "kExprF32Add";
          break;
        case 0x93:
          __s = "kExprF32Sub";
          break;
        case 0x94:
          __s = "kExprF32Mul";
          break;
        case 0x95:
          __s = "kExprF32Div";
          break;
        case 0x96:
          __s = "kExprF32Min";
          break;
        case 0x97:
          __s = "kExprF32Max";
          break;
        case 0x98:
          __s = "kExprF32CopySign";
          break;
        case 0x99:
          __s = "kExprF64Abs";
          break;
        case 0x9a:
          __s = "kExprF64Neg";
          break;
        case 0x9b:
          __s = "kExprF64Ceil";
          break;
        case 0x9c:
          __s = "kExprF64Floor";
          break;
        case 0x9d:
          __s = "kExprF64Trunc";
          break;
        case 0x9e:
          __s = "kExprF64NearestInt";
          break;
        case 0x9f:
          __s = "kExprF64Sqrt";
          break;
        case 0xa0:
          __s = "kExprF64Add";
          break;
        case 0xa1:
          __s = "kExprF64Sub";
          break;
        case 0xa2:
          __s = "kExprF64Mul";
          break;
        case 0xa3:
          __s = "kExprF64Div";
          break;
        case 0xa4:
          __s = "kExprF64Min";
          break;
        case 0xa5:
          __s = "kExprF64Max";
          break;
        case 0xa6:
          __s = "kExprF64CopySign";
          break;
        case 0xa7:
          __s = "kExprI32ConvertI64";
          break;
        case 0xa8:
          __s = "kExprI32SConvertF32";
          break;
        case 0xa9:
          __s = "kExprI32UConvertF32";
          break;
        case 0xaa:
          __s = "kExprI32SConvertF64";
          break;
        case 0xab:
          __s = "kExprI32UConvertF64";
          break;
        case 0xac:
          __s = "kExprI64SConvertI32";
          break;
        case 0xad:
          __s = "kExprI64UConvertI32";
          break;
        case 0xae:
          __s = "kExprI64SConvertF32";
          break;
        case 0xaf:
          __s = "kExprI64UConvertF32";
          break;
        case 0xb0:
          __s = "kExprI64SConvertF64";
          break;
        case 0xb1:
          __s = "kExprI64UConvertF64";
          break;
        case 0xb2:
          __s = "kExprF32SConvertI32";
          break;
        case 0xb3:
          __s = "kExprF32UConvertI32";
          break;
        case 0xb4:
          __s = "kExprF32SConvertI64";
          break;
        case 0xb5:
          __s = "kExprF32UConvertI64";
          break;
        case 0xb6:
          __s = "kExprF32ConvertF64";
          break;
        case 0xb7:
          __s = "kExprF64SConvertI32";
          break;
        case 0xb8:
          __s = "kExprF64UConvertI32";
          break;
        case 0xb9:
          __s = "kExprF64SConvertI64";
          break;
        case 0xba:
          __s = "kExprF64UConvertI64";
          break;
        case 0xbb:
          __s = "kExprF64ConvertF32";
          break;
        case 0xbc:
          __s = "kExprI32ReinterpretF32";
          break;
        case 0xbd:
          __s = "kExprI64ReinterpretF64";
          break;
        case 0xbe:
          __s = "kExprF32ReinterpretI32";
          break;
        case 0xbf:
          __s = "kExprF64ReinterpretI64";
          break;
        case 0xc0:
          __s = "kExprI32SExtendI8";
          break;
        case 0xc1:
          __s = "kExprI32SExtendI16";
          break;
        case 0xc2:
          __s = "kExprI64SExtendI8";
          break;
        case 0xc3:
          __s = "kExprI64SExtendI16";
          break;
        case 0xc4:
          __s = "kExprI64SExtendI32";
          break;
        case 0xc5:
          __s = "kExprF64Acos";
          break;
        case 0xc6:
          __s = "kExprF64Asin";
          break;
        case 199:
          __s = "kExprF64Atan";
          break;
        case 200:
          __s = "kExprF64Cos";
          break;
        case 0xc9:
          __s = "kExprF64Sin";
          break;
        case 0xca:
          __s = "kExprF64Tan";
          break;
        case 0xcb:
          __s = "kExprF64Exp";
          break;
        case 0xcc:
          __s = "kExprF64Log";
          break;
        case 0xcd:
          __s = "kExprF64Atan2";
          break;
        case 0xce:
          __s = "kExprF64Pow";
          break;
        case 0xcf:
          __s = "kExprF64Mod";
          break;
        case 0xd0:
          __s = "kExprRefNull";
          break;
        case 0xd1:
          __s = "kExprRefIsNull";
          break;
        case 0xd2:
          __s = "kExprRefFunc";
          break;
        case 0xd3:
          __s = "kExprI32AsmjsDivS";
          break;
        case 0xd4:
          __s = "kExprI32AsmjsDivU";
          break;
        case 0xd5:
          __s = "kExprI32AsmjsRemS";
          break;
        case 0xd6:
          __s = "kExprI32AsmjsRemU";
          break;
        case 0xd7:
          __s = "kExprI32AsmjsLoadMem8S";
          break;
        case 0xd8:
          __s = "kExprI32AsmjsLoadMem8U";
          break;
        case 0xd9:
          __s = "kExprI32AsmjsLoadMem16S";
          break;
        case 0xda:
          __s = "kExprI32AsmjsLoadMem16U";
          break;
        case 0xdb:
          __s = "kExprI32AsmjsLoadMem";
          break;
        case 0xdc:
          __s = "kExprF32AsmjsLoadMem";
          break;
        case 0xdd:
          __s = "kExprF64AsmjsLoadMem";
          break;
        case 0xde:
          __s = "kExprI32AsmjsStoreMem8";
          break;
        case 0xdf:
          __s = "kExprI32AsmjsStoreMem16";
          break;
        case 0xe0:
          __s = "kExprI32AsmjsStoreMem";
          break;
        case 0xe1:
          __s = "kExprF32AsmjsStoreMem";
          break;
        case 0xe2:
          __s = "kExprF64AsmjsStoreMem";
          break;
        case 0xe3:
          __s = "kExprI32AsmjsSConvertF32";
          break;
        case 0xe4:
          __s = "kExprI32AsmjsUConvertF32";
          break;
        case 0xe5:
          __s = "kExprI32AsmjsSConvertF64";
          break;
        case 0xe6:
          __s = "kExprI32AsmjsUConvertF64";
        }
      }
      sVar11 = strlen(__s);
LAB_015c9538:
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_5,__s,sVar11);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,",",1);
      if ((uint)local_1b8 < uVar7) {
        iVar17 = uVar7 - (uint)local_1b8;
        pbVar13 = (byte *)((long)puVar25 + local_1b8);
        do {
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_5," 0x",3);
          local_b8 = (undefined **)(ulong)*pbVar13;
          local_b0 = (ushort *)CONCAT62(local_b0._2_6_,2);
          pbVar8 = (basic_ostream *)internal::operator<<(pbVar8,(AsHex *)&local_b8);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,",",1);
          iVar17 = iVar17 + -1;
          pbVar13 = pbVar13 + 1;
        } while (iVar17 != 0);
      }
LAB_015c9598:
      switch(uVar19) {
      case 2:
      case 3:
      case 4:
      case 6:
        uVar7 = (uint)*(byte *)((long)puVar25 + 1);
        bVar16 = 0;
        uVar19 = 0;
        switch(uVar7) {
        case 0x40:
          break;
        default:
          if ((char)*(byte *)((long)puVar25 + 1) < '\0') {
            uVar19 = uVar7 & 0x7f | ((byte)puVar25[1] & 0x7f) << 7;
            if ((char)(byte)puVar25[1] < '\0') {
              uVar19 = uVar19 | (*(byte *)((long)puVar25 + 3) & 0x7f) << 0xe;
              if ((char)*(byte *)((long)puVar25 + 3) < '\0') {
                uVar19 = uVar19 | ((byte)puVar25[2] & 0x7f) << 0x15;
                if ((char)(byte)puVar25[2] < '\0') {
                  uVar19 = uVar19 | (uint)*(byte *)((long)puVar25 + 5) << 0x1c;
                }
                else {
                  uVar19 = (int)(uVar19 << 4) >> 4;
                }
              }
              else {
                uVar19 = (int)(uVar19 << 0xb) >> 0xb;
              }
            }
            else {
              uVar19 = (int)(uVar19 << 0x12) >> 0x12;
            }
          }
          else {
            uVar19 = (int)(uVar7 << 0x19) >> 0x19;
          }
          bVar16 = 10;
          break;
        case 0x68:
          uVar19 = 0;
          bVar16 = 9;
          break;
        case 0x6f:
          uVar19 = 0;
          bVar16 = 6;
          break;
        case 0x70:
          uVar19 = 0;
          bVar16 = 7;
          break;
        case 0x7b:
          uVar19 = 0;
          bVar16 = 5;
          break;
        case 0x7c:
          uVar19 = 0;
          bVar16 = 4;
          break;
        case 0x7d:
          uVar19 = 0;
          bVar16 = 3;
          break;
        case 0x7e:
          uVar19 = 0;
          bVar16 = 2;
          break;
        case 0x7f:
          uVar19 = 0;
          bVar16 = 1;
        }
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_5,"   // @",7);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,iVar24 - iVar12);
        if (bVar16 == 10) {
          puVar26 = *(uint **)(*(long *)(local_130 + 0x58) + (ulong)uVar19 * 8);
          uVar10 = 0;
        }
        else {
          puVar26 = (uint *)0x0;
          uVar10 = 0;
          if (bVar16 == 0) goto LAB_015c9978;
        }
        do {
          if (bVar16 == 10) {
            if (*puVar26 <= uVar10) break;
          }
          else if (uVar10 != 0) break;
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_5," ",1);
          bVar23 = bVar16;
          if (bVar16 == 10) {
            bVar23 = *(byte *)(*(long *)(puVar26 + 4) + uVar10);
          }
          pcVar21 = "<unknown>";
          if (bVar23 < 0xb) {
            pcVar21 = (&PTR_s_<stmt>_01cc9618)[(char)bVar23];
          }
          sVar11 = strlen(pcVar21);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (pbVar8,pcVar21,sVar11);
          uVar10 = uVar10 + 1;
        } while (bVar16 != 0);
        goto LAB_015c9978;
      case 5:
      case 7:
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_5,"   // @",7);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,iVar24 - iVar12);
LAB_015c9978:
        uVar20 = uVar20 + 1;
        break;
      case 0xb:
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_5,"   // @",7);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,iVar24 - iVar12);
        uVar20 = uVar20 - 1;
        break;
      case 0xc:
      case 0xd:
        uVar19 = *(byte *)((long)puVar25 + 1) & 0x7f;
        if (((((char)*(byte *)((long)puVar25 + 1) < '\0') &&
             (uVar19 = uVar19 | ((byte)puVar25[1] & 0x7f) << 7, (char)(byte)puVar25[1] < '\0')) &&
            (uVar19 = uVar19 | (*(byte *)((long)puVar25 + 3) & 0x7f) << 0xe,
            (char)*(byte *)((long)puVar25 + 3) < '\0')) &&
           (uVar19 = uVar19 | ((byte)puVar25[2] & 0x7f) << 0x15, (char)(byte)puVar25[2] < '\0')) {
          uVar19 = uVar19 | (uint)*(byte *)((long)puVar25 + 5) << 0x1c;
        }
        pcVar21 = "   // depth=";
        goto LAB_015c97c4;
      case 0xe:
        uVar19 = *(byte *)((long)puVar25 + 1) & 0x7f;
        if ((((char)*(byte *)((long)puVar25 + 1) < '\0') &&
            (uVar19 = uVar19 | ((byte)puVar25[1] & 0x7f) << 7, (char)(byte)puVar25[1] < '\0')) &&
           ((uVar19 = uVar19 | (*(byte *)((long)puVar25 + 3) & 0x7f) << 0xe,
            (char)*(byte *)((long)puVar25 + 3) < '\0' &&
            (uVar19 = uVar19 | ((byte)puVar25[2] & 0x7f) << 0x15, (char)(byte)puVar25[2] < '\0'))))
        {
          uVar19 = uVar19 | (uint)*(byte *)((long)puVar25 + 5) << 0x1c;
        }
        pcVar21 = " // entries=";
LAB_015c97c4:
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_5,pcVar21,0xc);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,uVar19);
        break;
      case 0x10:
        uVar19 = *(byte *)((long)puVar25 + 1) & 0x7f;
        if ((((char)*(byte *)((long)puVar25 + 1) < '\0') &&
            (uVar19 = uVar19 | ((byte)puVar25[1] & 0x7f) << 7, (char)(byte)puVar25[1] < '\0')) &&
           ((uVar19 = uVar19 | (*(byte *)((long)puVar25 + 3) & 0x7f) << 0xe,
            (char)*(byte *)((long)puVar25 + 3) < '\0' &&
            (uVar19 = uVar19 | ((byte)puVar25[2] & 0x7f) << 0x15, (char)(byte)puVar25[2] < '\0'))))
        {
          uVar19 = uVar19 | (uint)*(byte *)((long)puVar25 + 5) << 0x1c;
        }
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_5," // function #",0xe);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,uVar19);
        pSVar18 = *(Signature **)(*(long *)(local_130 + 0x88) + (ulong)uVar19 * 0x20);
        goto LAB_015c9734;
      case 0x11:
        uVar19 = *(byte *)((long)puVar25 + 1) & 0x7f;
        if (((((char)*(byte *)((long)puVar25 + 1) < '\0') &&
             (uVar19 = uVar19 | ((byte)puVar25[1] & 0x7f) << 7, (char)(byte)puVar25[1] < '\0')) &&
            (uVar19 = uVar19 | (*(byte *)((long)puVar25 + 3) & 0x7f) << 0xe,
            (char)*(byte *)((long)puVar25 + 3) < '\0')) &&
           (uVar19 = uVar19 | ((byte)puVar25[2] & 0x7f) << 0x15, (char)(byte)puVar25[2] < '\0')) {
          uVar19 = uVar19 | (uint)*(byte *)((long)puVar25 + 5) << 0x1c;
        }
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_5,"   // sig #",0xb);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,uVar19);
        pSVar18 = *(Signature **)(*(long *)(local_130 + 0x58) + (ulong)uVar19 * 8);
LAB_015c9734:
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_5,": ",2);
        operator<<(pbVar8,pSVar18);
      }
      std::__ndk1::ios_base::getloc();
      plVar9 = (long *)std::__ndk1::locale::use_facet
                                 ((locale *)&local_b8,(id *)&std::__ndk1::ctype<char>::id);
      cVar6 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
      std::__ndk1::locale::~locale((locale *)&local_b8);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_5,cVar6);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_5);
      local_b8 = &PTR__Decoder_01cbc3a8;
      local_90 = 0;
      local_98 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      local_b0 = puVar25;
      local_a8 = puVar25;
      puStack_a0 = puVar3;
      uVar10 = WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)0>::OpcodeLength
                         ((Decoder *)&local_b8,(uchar *)puVar25);
      local_b8 = &PTR__Decoder_01cbc3a8;
      ppuVar5 = &PTR__Decoder_01cbc3a8;
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
        ppuVar5 = local_b8;
      }
      local_b8 = ppuVar5;
      puVar25 = (ushort *)((long)puVar25 + (uVar10 & 0xffffffff));
    } while (puVar25 < puVar3);
  }
  uVar10 = local_148 >> 1 & 0x7f;
  if ((local_148 & 1) != 0) {
    uVar10 = local_140;
  }
  if (local_1a0 != (byte *)0x0) {
    local_198 = local_1a0;
  }
  local_178 = &PTR__Decoder_01cbc3a8;
  if ((local_148 & 1) != 0) {
    operator_delete(local_138);
  }
  Zone::~Zone(aZStack_f8);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return uVar10 == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

