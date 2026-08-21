
/* v8::internal::JSObject::PrintElements(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::JSObject::PrintElements(JSObject *this,basic_ostream *param_1)

{
  short *psVar1;
  ushort *puVar2;
  uint *puVar3;
  int *piVar4;
  ulong *puVar5;
  long *plVar6;
  float *pfVar7;
  double *pdVar8;
  char *pcVar9;
  byte bVar10;
  long lVar11;
  basic_ostream *pbVar12;
  char *pcVar13;
  size_t sVar14;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  ulong uVar15;
  char cVar16;
  short sVar17;
  ushort uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  undefined **ppuVar23;
  ulong uVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  char cVar28;
  short sVar29;
  ushort uVar30;
  ulong uVar31;
  long lVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  double dVar36;
  undefined **local_1b0;
  ulong local_1a8;
  char *local_1a0;
  undefined **local_198;
  undefined8 local_190;
  undefined **local_188;
  undefined **local_180;
  locale alStack_178 [8];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  byte local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined **local_118 [17];
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  
  lVar11 = tpidr_el0;
  local_80 = *(long *)(lVar11 + 0x28);
  pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1," - elements: ",0xd);
  local_198 = (undefined **)
              (*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7));
  pbVar12 = (basic_ostream *)internal::operator<<(pbVar12,(Brief *)&local_198);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar12," {",2);
  uVar15 = *(ulong *)this;
  uVar24 = uVar15 & 0xffffffff00000000;
  switch(*(byte *)((uVar24 | *(uint *)(uVar15 - 1)) + 10) >> 3) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xf:
    FUN_00f3cc20(param_1,uVar24 | *(uint *)(uVar15 + 7));
    goto switchD_00f3b0ec_default;
  case 4:
  case 5:
    uVar24 = uVar24 | *(uint *)(uVar15 + 7);
    FUN_00f3cf10(param_1,uVar24,*(int *)(uVar24 + 3) >> 1);
    goto switchD_00f3b0ec_default;
  case 0xc:
  case 0x10:
    ppuVar23 = (undefined **)(uVar24 | *(uint *)(uVar15 + 7));
    local_198 = ppuVar23;
    if ((*(uint *)((long)ppuVar23 + 0x13) & 3) != 2) {
      this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (param_1,"\n   - max_number_key: ",0x16);
      uVar25 = *(uint *)((long)ppuVar23 + 0x13);
      goto LAB_00f3c934;
    }
LAB_00f3b168:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n   - requires_slow_elements",0x1c);
    goto LAB_00f3c948;
  case 0xd:
  case 0xe:
    uVar27 = uVar24 | *(uint *)(uVar15 + 7);
    bVar10 = *(byte *)((uVar24 | *(uint *)(uVar15 - 1)) + 10);
    ppuVar23 = (undefined **)(uVar24 | *(uint *)(uVar27 + 0xb));
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"\n    0: context: ",0x11);
    local_198 = (undefined **)(uVar24 | *(uint *)(uVar27 + 7));
    pbVar12 = (basic_ostream *)internal::operator<<(pbVar12,(Brief *)&local_198);
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar12,"\n    1: arguments_store: ",0x19);
    local_1b0 = ppuVar23;
    pbVar12 = (basic_ostream *)internal::operator<<(pbVar12,(Brief *)&local_1b0);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar12,"\n    parameter to context slot map:",0x23);
    if ((*(uint *)(uVar27 + 3) & 0xfffffffe) != 4) {
      uVar25 = 0;
      iVar26 = 8;
      do {
        uVar19 = *(uint *)((long)(uVar27 + 7) + (long)iVar26);
        pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (param_1,"\n    ",5);
        pbVar12 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                             uVar25 + 2);
        pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar12,": param(",8);
        pbVar12 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar25);
        pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar12,"): ",3);
        local_198 = (undefined **)(uVar24 | uVar19);
        internal::operator<<(pbVar12,(Brief *)&local_198);
        if (((uVar19 & 1) == 0) || (uVar19 != *(uint *)(uVar24 + 0xa8))) {
          uVar15 = 0xf;
          pcVar13 = " in the context";
          pbVar12 = param_1;
        }
        else {
          pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (param_1," in the arguments_store[",0x18);
          pbVar12 = (basic_ostream *)
                    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar25)
          ;
          uVar15 = 1;
          pcVar13 = "]";
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar12,pcVar13,uVar15);
        uVar25 = uVar25 + 1;
        iVar26 = iVar26 + 4;
      } while (uVar25 < (*(int *)(uVar27 + 3) >> 1) - 2U);
    }
    if (*(uint *)((long)ppuVar23 + 3) < 2) goto switchD_00f3b0ec_default;
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"\n }",3);
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar12,"\n - arguments_store: ",0x15);
    local_198 = ppuVar23;
    pbVar12 = (basic_ostream *)internal::operator<<(pbVar12,(Brief *)&local_198);
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar12," ",1);
    pcVar13 = (char *)ElementsKindToString
                                (*(byte *)((uVar24 | *(uint *)((long)ppuVar23 + -1)) + 10) >> 3);
    sVar14 = strlen(pcVar13);
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar12,pcVar13,sVar14);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar12," {",2);
    if ((bVar10 & 0xf8) == 0x68) {
      FUN_00f3cc20(param_1,ppuVar23);
      goto switchD_00f3b0ec_default;
    }
    local_198 = ppuVar23;
    if ((*(uint *)((long)ppuVar23 + 0x13) & 3) == 2) goto LAB_00f3b168;
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"\n   - max_number_key: ",0x16);
    uVar25 = *(uint *)((long)ppuVar23 + 0x13);
LAB_00f3c934:
    uVar19 = (uint)((int)uVar25 >> 1) >> 1;
    if ((uVar25 & 1) != 0) {
      uVar19 = 0;
    }
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(this_00,uVar19);
LAB_00f3c948:
    Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::Print
              ((Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *)
               &local_198,param_1);
    goto switchD_00f3b0ec_default;
  case 0x11:
  case 0x19:
    FUN_00f3d2a8(param_1,*(long *)(uVar15 + 0x27) + (ulong)*(uint *)(uVar15 + 0x2f),
                 *(undefined8 *)(uVar15 + 0x1f),*(uint *)(uVar15 + 0x2f) == *(uint *)(uVar15 + 7));
    goto switchD_00f3b0ec_default;
  case 0x12:
    uVar24 = *(ulong *)(uVar15 + 0x1f);
    if (uVar24 == 0) goto switchD_00f3b0ec_default;
    if ((*(uint *)(uVar15 + 0x2f) == *(uint *)(uVar15 + 7)) ||
       (FLAG_mock_arraybuffer_allocator == '\0')) {
      pcVar13 = (char *)(*(long *)(uVar15 + 0x27) + (ulong)*(uint *)(uVar15 + 0x2f));
      cVar28 = *pcVar13;
      cVar16 = '\0';
      uVar27 = 0;
      uVar15 = 1;
      if (uVar24 < 2) goto LAB_00f3c484;
      do {
        cVar16 = pcVar13[uVar15];
LAB_00f3c484:
        do {
          if ((uVar24 == uVar15) || (cVar28 != cVar16)) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n",1);
            local_190 = 0;
            local_198 = (undefined **)0x1c670a0;
            local_118[0] = (undefined **)0x1c670c8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::ios_base::init((ios_base *)local_118,&local_180);
            local_88 = 0xffffffff;
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_90 = 0;
            local_180 = &PTR__basic_streambuf_01c671a8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::locale::locale(alStack_178);
            uStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_168 = 0;
            local_170 = 0;
            local_180 = &PTR__basic_stringbuf_01c67100;
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            local_130 = (void *)0x0;
            local_120 = 0x18;
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_188,uVar27);
            if (uVar15 - 1 != uVar27) {
              local_1b0 = (undefined **)CONCAT71(local_1b0._1_7_,0x2d);
              pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  ((basic_ostream *)&local_188,(char *)&local_1b0,1);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar15 - 1);
            }
            *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0xc;
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
            pcVar9 = (char *)((ulong)&local_1b0 | 1);
            uVar27 = (ulong)local_1b0 >> 1 & 0x7f;
            if (((ulong)local_1b0 & 1) != 0) {
              pcVar9 = local_1a0;
              uVar27 = local_1a8;
            }
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (param_1,pcVar9,uVar27);
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar12,": ",2);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,(int)cVar28);
            if (((ulong)local_1b0 & 1) != 0) {
              operator_delete(local_1a0);
            }
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_180 = &PTR__basic_stringbuf_01c67100;
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_180 = &PTR__basic_streambuf_01c671a8;
            std::__ndk1::locale::~locale(alStack_178);
            std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
            uVar27 = uVar15;
            cVar28 = cVar16;
          }
          uVar15 = uVar15 + 1;
          if (uVar24 < uVar15) goto switchD_00f3b0ec_default;
        } while (uVar24 <= uVar15);
      } while( true );
    }
    break;
  case 0x13:
    uVar24 = *(ulong *)(uVar15 + 0x1f);
    if (uVar24 == 0) goto switchD_00f3b0ec_default;
    if ((*(uint *)(uVar15 + 0x2f) == *(uint *)(uVar15 + 7)) ||
       (FLAG_mock_arraybuffer_allocator == '\0')) {
      puVar2 = (ushort *)(*(long *)(uVar15 + 0x27) + (ulong)*(uint *)(uVar15 + 0x2f));
      uVar30 = *puVar2;
      uVar18 = 0;
      uVar27 = 0;
      uVar15 = 1;
      if (uVar24 < 2) goto LAB_00f3b738;
      do {
        uVar18 = puVar2[uVar15];
LAB_00f3b738:
        do {
          if ((uVar24 == uVar15) || (uVar30 != uVar18)) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n",1);
            local_190 = 0;
            local_198 = (undefined **)0x1c670a0;
            local_118[0] = (undefined **)0x1c670c8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::ios_base::init((ios_base *)local_118,&local_180);
            local_88 = 0xffffffff;
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_90 = 0;
            local_180 = &PTR__basic_streambuf_01c671a8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::locale::locale(alStack_178);
            uStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_168 = 0;
            local_170 = 0;
            local_180 = &PTR__basic_stringbuf_01c67100;
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            local_130 = (void *)0x0;
            local_120 = 0x18;
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_188,uVar27);
            if (uVar15 - 1 != uVar27) {
              local_1b0 = (undefined **)CONCAT71(local_1b0._1_7_,0x2d);
              pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  ((basic_ostream *)&local_188,(char *)&local_1b0,1);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar15 - 1);
            }
            *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0xc;
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
            pcVar13 = (char *)((ulong)&local_1b0 | 1);
            uVar27 = (ulong)local_1b0 >> 1 & 0x7f;
            if (((ulong)local_1b0 & 1) != 0) {
              pcVar13 = local_1a0;
              uVar27 = local_1a8;
            }
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (param_1,pcVar13,uVar27);
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar12,": ",2);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,(uint)uVar30);
            if (((ulong)local_1b0 & 1) != 0) {
              operator_delete(local_1a0);
            }
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_180 = &PTR__basic_stringbuf_01c67100;
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_180 = &PTR__basic_streambuf_01c671a8;
            std::__ndk1::locale::~locale(alStack_178);
            std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
            uVar27 = uVar15;
            uVar30 = uVar18;
          }
          uVar15 = uVar15 + 1;
          if (uVar24 < uVar15) goto switchD_00f3b0ec_default;
        } while (uVar24 <= uVar15);
      } while( true );
    }
    break;
  case 0x14:
    uVar24 = *(ulong *)(uVar15 + 0x1f);
    if (uVar24 == 0) goto switchD_00f3b0ec_default;
    if ((*(uint *)(uVar15 + 0x2f) == *(uint *)(uVar15 + 7)) ||
       (FLAG_mock_arraybuffer_allocator == '\0')) {
      psVar1 = (short *)(*(long *)(uVar15 + 0x27) + (ulong)*(uint *)(uVar15 + 0x2f));
      sVar29 = *psVar1;
      sVar17 = 0;
      uVar27 = 0;
      uVar15 = 1;
      if (uVar24 < 2) goto LAB_00f3b48c;
      do {
        sVar17 = psVar1[uVar15];
LAB_00f3b48c:
        do {
          if ((uVar24 == uVar15) || (sVar29 != sVar17)) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n",1);
            local_190 = 0;
            local_198 = (undefined **)0x1c670a0;
            local_118[0] = (undefined **)0x1c670c8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::ios_base::init((ios_base *)local_118,&local_180);
            local_88 = 0xffffffff;
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_90 = 0;
            local_180 = &PTR__basic_streambuf_01c671a8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::locale::locale(alStack_178);
            uStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_168 = 0;
            local_170 = 0;
            local_180 = &PTR__basic_stringbuf_01c67100;
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            local_130 = (void *)0x0;
            local_120 = 0x18;
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_188,uVar27);
            if (uVar15 - 1 != uVar27) {
              local_1b0 = (undefined **)CONCAT71(local_1b0._1_7_,0x2d);
              pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  ((basic_ostream *)&local_188,(char *)&local_1b0,1);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar15 - 1);
            }
            *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0xc;
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
            pcVar13 = (char *)((ulong)&local_1b0 | 1);
            uVar27 = (ulong)local_1b0 >> 1 & 0x7f;
            if (((ulong)local_1b0 & 1) != 0) {
              pcVar13 = local_1a0;
              uVar27 = local_1a8;
            }
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (param_1,pcVar13,uVar27);
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar12,": ",2);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,(int)sVar29);
            if (((ulong)local_1b0 & 1) != 0) {
              operator_delete(local_1a0);
            }
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_180 = &PTR__basic_stringbuf_01c67100;
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_180 = &PTR__basic_streambuf_01c671a8;
            std::__ndk1::locale::~locale(alStack_178);
            std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
            uVar27 = uVar15;
            sVar29 = sVar17;
          }
          uVar15 = uVar15 + 1;
          if (uVar24 < uVar15) goto switchD_00f3b0ec_default;
        } while (uVar24 <= uVar15);
      } while( true );
    }
    break;
  case 0x15:
    uVar24 = *(ulong *)(uVar15 + 0x1f);
    if (uVar24 == 0) goto switchD_00f3b0ec_default;
    if ((*(uint *)(uVar15 + 0x2f) == *(uint *)(uVar15 + 7)) ||
       (FLAG_mock_arraybuffer_allocator == '\0')) {
      puVar3 = (uint *)(*(long *)(uVar15 + 0x27) + (ulong)*(uint *)(uVar15 + 0x2f));
      uVar25 = *puVar3;
      uVar19 = 0;
      uVar27 = 0;
      uVar15 = 1;
      if (uVar24 < 2) goto LAB_00f3b9e4;
      do {
        uVar19 = puVar3[uVar15];
LAB_00f3b9e4:
        do {
          if ((uVar24 == uVar15) || (uVar25 != uVar19)) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n",1);
            local_190 = 0;
            local_198 = (undefined **)0x1c670a0;
            local_118[0] = (undefined **)0x1c670c8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::ios_base::init((ios_base *)local_118,&local_180);
            local_88 = 0xffffffff;
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_90 = 0;
            local_180 = &PTR__basic_streambuf_01c671a8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::locale::locale(alStack_178);
            uStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_168 = 0;
            local_170 = 0;
            local_180 = &PTR__basic_stringbuf_01c67100;
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            local_130 = (void *)0x0;
            local_120 = 0x18;
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_188,uVar27);
            if (uVar15 - 1 != uVar27) {
              local_1b0 = (undefined **)CONCAT71(local_1b0._1_7_,0x2d);
              pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  ((basic_ostream *)&local_188,(char *)&local_1b0,1);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar15 - 1);
            }
            *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0xc;
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
            pcVar13 = (char *)((ulong)&local_1b0 | 1);
            uVar27 = (ulong)local_1b0 >> 1 & 0x7f;
            if (((ulong)local_1b0 & 1) != 0) {
              pcVar13 = local_1a0;
              uVar27 = local_1a8;
            }
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (param_1,pcVar13,uVar27);
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar12,": ",2);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar25);
            if (((ulong)local_1b0 & 1) != 0) {
              operator_delete(local_1a0);
            }
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_180 = &PTR__basic_stringbuf_01c67100;
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_180 = &PTR__basic_streambuf_01c671a8;
            std::__ndk1::locale::~locale(alStack_178);
            std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
            uVar27 = uVar15;
            uVar25 = uVar19;
          }
          uVar15 = uVar15 + 1;
          if (uVar24 < uVar15) goto switchD_00f3b0ec_default;
        } while (uVar24 <= uVar15);
      } while( true );
    }
    break;
  case 0x16:
    uVar24 = *(ulong *)(uVar15 + 0x1f);
    if (uVar24 == 0) goto switchD_00f3b0ec_default;
    if ((*(uint *)(uVar15 + 0x2f) == *(uint *)(uVar15 + 7)) ||
       (FLAG_mock_arraybuffer_allocator == '\0')) {
      piVar4 = (int *)(*(long *)(uVar15 + 0x27) + (ulong)*(uint *)(uVar15 + 0x2f));
      iVar26 = *piVar4;
      iVar20 = 0;
      uVar27 = 0;
      uVar15 = 1;
      if (uVar24 < 2) goto LAB_00f3bc8c;
      do {
        iVar20 = piVar4[uVar15];
LAB_00f3bc8c:
        do {
          if ((uVar24 == uVar15) || (iVar26 != iVar20)) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n",1);
            local_190 = 0;
            local_198 = (undefined **)0x1c670a0;
            local_118[0] = (undefined **)0x1c670c8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::ios_base::init((ios_base *)local_118,&local_180);
            local_88 = 0xffffffff;
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_90 = 0;
            local_180 = &PTR__basic_streambuf_01c671a8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::locale::locale(alStack_178);
            uStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_168 = 0;
            local_170 = 0;
            local_180 = &PTR__basic_stringbuf_01c67100;
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            local_130 = (void *)0x0;
            local_120 = 0x18;
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_188,uVar27);
            if (uVar15 - 1 != uVar27) {
              local_1b0 = (undefined **)CONCAT71(local_1b0._1_7_,0x2d);
              pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  ((basic_ostream *)&local_188,(char *)&local_1b0,1);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar15 - 1);
            }
            *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0xc;
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
            pcVar13 = (char *)((ulong)&local_1b0 | 1);
            uVar27 = (ulong)local_1b0 >> 1 & 0x7f;
            if (((ulong)local_1b0 & 1) != 0) {
              pcVar13 = local_1a0;
              uVar27 = local_1a8;
            }
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (param_1,pcVar13,uVar27);
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar12,": ",2);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,iVar26);
            if (((ulong)local_1b0 & 1) != 0) {
              operator_delete(local_1a0);
            }
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_180 = &PTR__basic_stringbuf_01c67100;
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_180 = &PTR__basic_streambuf_01c671a8;
            std::__ndk1::locale::~locale(alStack_178);
            std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
            uVar27 = uVar15;
            iVar26 = iVar20;
          }
          uVar15 = uVar15 + 1;
          if (uVar24 < uVar15) goto switchD_00f3b0ec_default;
        } while (uVar24 <= uVar15);
      } while( true );
    }
    break;
  case 0x17:
    uVar24 = *(ulong *)(uVar15 + 0x1f);
    if (uVar24 == 0) goto switchD_00f3b0ec_default;
    if ((*(uint *)(uVar15 + 0x2f) == *(uint *)(uVar15 + 7)) ||
       (FLAG_mock_arraybuffer_allocator == '\0')) {
      pfVar7 = (float *)(*(long *)(uVar15 + 0x27) + (ulong)*(uint *)(uVar15 + 0x2f));
      fVar33 = *pfVar7;
      uVar27 = 0;
      fVar35 = 0.0;
      uVar15 = 1;
      if (uVar24 < 2) goto LAB_00f3c730;
      do {
        fVar35 = pfVar7[uVar15];
LAB_00f3c730:
        do {
          if ((uVar24 == uVar15) || (fVar33 != fVar35)) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n",1);
            local_198 = (undefined **)0x1c670a0;
            local_118[0] = (undefined **)0x1c670c8;
            local_190 = 0;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::ios_base::init((ios_base *)local_118,&local_180);
            local_88 = 0xffffffff;
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_90 = 0;
            local_180 = &PTR__basic_streambuf_01c671a8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::locale::locale(alStack_178);
            uStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_168 = 0;
            local_170 = 0;
            local_180 = &PTR__basic_stringbuf_01c67100;
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            local_130 = (void *)0x0;
            local_120 = 0x18;
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_188,uVar27);
            if (uVar15 - 1 != uVar27) {
              local_1b0 = (undefined **)CONCAT71(local_1b0._1_7_,0x2d);
              pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  ((basic_ostream *)&local_188,(char *)&local_1b0,1);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar15 - 1);
            }
            *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0xc;
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
            pcVar13 = (char *)((ulong)&local_1b0 | 1);
            uVar27 = (ulong)local_1b0 >> 1 & 0x7f;
            if (((ulong)local_1b0 & 1) != 0) {
              pcVar13 = local_1a0;
              uVar27 = local_1a8;
            }
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (param_1,pcVar13,uVar27);
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar12,": ",2);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,fVar33);
            if (((ulong)local_1b0 & 1) != 0) {
              operator_delete(local_1a0);
            }
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_180 = &PTR__basic_stringbuf_01c67100;
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_180 = &PTR__basic_streambuf_01c671a8;
            std::__ndk1::locale::~locale(alStack_178);
            std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
            uVar27 = uVar15;
            fVar33 = fVar35;
          }
          uVar15 = uVar15 + 1;
          if (uVar24 < uVar15) goto switchD_00f3b0ec_default;
        } while (uVar24 <= uVar15);
      } while( true );
    }
    break;
  case 0x18:
    uVar24 = *(ulong *)(uVar15 + 0x1f);
    if (uVar24 == 0) goto switchD_00f3b0ec_default;
    if ((*(uint *)(uVar15 + 0x2f) == *(uint *)(uVar15 + 7)) ||
       (FLAG_mock_arraybuffer_allocator == '\0')) {
      pdVar8 = (double *)(*(long *)(uVar15 + 0x27) + (ulong)*(uint *)(uVar15 + 0x2f));
      dVar34 = *pdVar8;
      uVar27 = 0;
      dVar36 = 0.0;
      uVar15 = 1;
      if (uVar24 < 2) goto LAB_00f3ca94;
      do {
        dVar36 = pdVar8[uVar15];
LAB_00f3ca94:
        do {
          if ((uVar24 == uVar15) || (dVar34 != dVar36)) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n",1);
            local_198 = (undefined **)0x1c670a0;
            local_118[0] = (undefined **)0x1c670c8;
            local_190 = 0;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::ios_base::init((ios_base *)local_118,&local_180);
            local_88 = 0xffffffff;
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_90 = 0;
            local_180 = &PTR__basic_streambuf_01c671a8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::locale::locale(alStack_178);
            uStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_168 = 0;
            local_170 = 0;
            local_180 = &PTR__basic_stringbuf_01c67100;
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            local_130 = (void *)0x0;
            local_120 = 0x18;
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_188,uVar27);
            if (uVar15 - 1 != uVar27) {
              local_1b0 = (undefined **)CONCAT71(local_1b0._1_7_,0x2d);
              pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  ((basic_ostream *)&local_188,(char *)&local_1b0,1);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar15 - 1);
            }
            *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0xc;
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
            pcVar13 = (char *)((ulong)&local_1b0 | 1);
            uVar27 = (ulong)local_1b0 >> 1 & 0x7f;
            if (((ulong)local_1b0 & 1) != 0) {
              pcVar13 = local_1a0;
              uVar27 = local_1a8;
            }
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (param_1,pcVar13,uVar27);
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar12,": ",2);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,dVar34);
            if (((ulong)local_1b0 & 1) != 0) {
              operator_delete(local_1a0);
            }
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_180 = &PTR__basic_stringbuf_01c67100;
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_180 = &PTR__basic_streambuf_01c671a8;
            std::__ndk1::locale::~locale(alStack_178);
            std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
            uVar27 = uVar15;
            dVar34 = dVar36;
          }
          uVar15 = uVar15 + 1;
          if (uVar24 < uVar15) goto switchD_00f3b0ec_default;
        } while (uVar24 <= uVar15);
      } while( true );
    }
    break;
  case 0x1a:
    uVar24 = *(ulong *)(uVar15 + 0x1f);
    if (uVar24 == 0) goto switchD_00f3b0ec_default;
    if ((*(uint *)(uVar15 + 0x2f) == *(uint *)(uVar15 + 7)) ||
       (FLAG_mock_arraybuffer_allocator == '\0')) {
      puVar5 = (ulong *)(*(long *)(uVar15 + 0x27) + (ulong)*(uint *)(uVar15 + 0x2f));
      uVar31 = *puVar5;
      uVar21 = 0;
      uVar27 = 0;
      uVar15 = 1;
      if (uVar24 < 2) goto LAB_00f3bf34;
      do {
        uVar21 = puVar5[uVar15];
LAB_00f3bf34:
        do {
          if ((uVar24 == uVar15) || (uVar31 != uVar21)) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n",1);
            local_190 = 0;
            local_198 = (undefined **)0x1c670a0;
            local_118[0] = (undefined **)0x1c670c8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::ios_base::init((ios_base *)local_118,&local_180);
            local_88 = 0xffffffff;
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_90 = 0;
            local_180 = &PTR__basic_streambuf_01c671a8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::locale::locale(alStack_178);
            uStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_168 = 0;
            local_170 = 0;
            local_180 = &PTR__basic_stringbuf_01c67100;
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            local_130 = (void *)0x0;
            local_120 = 0x18;
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_188,uVar27);
            if (uVar15 - 1 != uVar27) {
              local_1b0 = (undefined **)CONCAT71(local_1b0._1_7_,0x2d);
              pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  ((basic_ostream *)&local_188,(char *)&local_1b0,1);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar15 - 1);
            }
            *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0xc;
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
            pcVar13 = (char *)((ulong)&local_1b0 | 1);
            uVar27 = (ulong)local_1b0 >> 1 & 0x7f;
            if (((ulong)local_1b0 & 1) != 0) {
              pcVar13 = local_1a0;
              uVar27 = local_1a8;
            }
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (param_1,pcVar13,uVar27);
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar12,": ",2);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar31);
            if (((ulong)local_1b0 & 1) != 0) {
              operator_delete(local_1a0);
            }
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_180 = &PTR__basic_stringbuf_01c67100;
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_180 = &PTR__basic_streambuf_01c671a8;
            std::__ndk1::locale::~locale(alStack_178);
            std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
            uVar27 = uVar15;
            uVar31 = uVar21;
          }
          uVar15 = uVar15 + 1;
          if (uVar24 < uVar15) goto switchD_00f3b0ec_default;
        } while (uVar24 <= uVar15);
      } while( true );
    }
    break;
  case 0x1b:
    uVar24 = *(ulong *)(uVar15 + 0x1f);
    if (uVar24 == 0) goto switchD_00f3b0ec_default;
    if ((*(uint *)(uVar15 + 0x2f) == *(uint *)(uVar15 + 7)) ||
       (FLAG_mock_arraybuffer_allocator == '\0')) {
      plVar6 = (long *)(*(long *)(uVar15 + 0x27) + (ulong)*(uint *)(uVar15 + 0x2f));
      lVar32 = *plVar6;
      lVar22 = 0;
      uVar27 = 0;
      uVar15 = 1;
      if (uVar24 < 2) goto LAB_00f3c1dc;
      do {
        lVar22 = plVar6[uVar15];
LAB_00f3c1dc:
        do {
          if ((uVar24 == uVar15) || (lVar32 != lVar22)) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n",1);
            local_190 = 0;
            local_198 = (undefined **)0x1c670a0;
            local_118[0] = (undefined **)0x1c670c8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::ios_base::init((ios_base *)local_118,&local_180);
            local_88 = 0xffffffff;
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_90 = 0;
            local_180 = &PTR__basic_streambuf_01c671a8;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::locale::locale(alStack_178);
            uStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_168 = 0;
            local_170 = 0;
            local_180 = &PTR__basic_stringbuf_01c67100;
            uStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            local_130 = (void *)0x0;
            local_120 = 0x18;
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_188,uVar27);
            if (uVar15 - 1 != uVar27) {
              local_1b0 = (undefined **)CONCAT71(local_1b0._1_7_,0x2d);
              pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                  ((basic_ostream *)&local_188,(char *)&local_1b0,1);
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar15 - 1);
            }
            *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0xc;
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
            pcVar13 = (char *)((ulong)&local_1b0 | 1);
            uVar27 = (ulong)local_1b0 >> 1 & 0x7f;
            if (((ulong)local_1b0 & 1) != 0) {
              pcVar13 = local_1a0;
              uVar27 = local_1a8;
            }
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (param_1,pcVar13,uVar27);
            pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar12,": ",2);
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,lVar32);
            if (((ulong)local_1b0 & 1) != 0) {
              operator_delete(local_1a0);
            }
            local_198 = &PTR__basic_stringstream_01c66f88;
            local_188 = &PTR__basic_stringstream_01c66fb0;
            local_118[0] = &PTR__basic_stringstream_01c66fd8;
            local_180 = &PTR__basic_stringbuf_01c67100;
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_180 = &PTR__basic_streambuf_01c671a8;
            std::__ndk1::locale::~locale(alStack_178);
            std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
            uVar27 = uVar15;
            lVar32 = lVar22;
          }
          uVar15 = uVar15 + 1;
          if (uVar24 < uVar15) goto switchD_00f3b0ec_default;
        } while (uVar24 <= uVar15);
      } while( true );
    }
    break;
  default:
    goto switchD_00f3b0ec_default;
  }
  pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"\n    0-",7);
  pbVar12 = (basic_ostream *)
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,uVar24);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar12,": <mocked array buffer bytes>",0x1d);
switchD_00f3b0ec_default:
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n }\n",4);
  if (*(long *)(lVar11 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

