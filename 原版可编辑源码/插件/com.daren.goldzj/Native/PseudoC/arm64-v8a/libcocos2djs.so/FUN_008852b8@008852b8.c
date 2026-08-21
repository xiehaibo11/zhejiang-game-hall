
void FUN_008852b8(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined **ppuVar5;
  basic_ostream *pbVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  byte local_2f8 [8];
  ulong local_2f0;
  undefined **local_2e8;
  byte local_2e0 [8];
  ulong local_2d8;
  undefined **local_2d0;
  ulong local_2c8;
  ulong local_2c0;
  char *local_2b8;
  undefined **local_2b0;
  undefined8 uStack_2a8;
  undefined **local_2a0;
  undefined **ppuStack_298;
  locale alStack_290 [8];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  ulong local_258;
  undefined8 uStack_250;
  void *local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined **local_230 [17];
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined **local_190;
  ulong uStack_188;
  undefined **local_180;
  undefined **ppuStack_178;
  locale alStack_170 [8];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined **local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  local_2b0 = (undefined **)0x1c670a0;
  local_230[0] = (undefined **)0x1c670c8;
  uStack_2a8 = 0;
  local_2a0 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init((ios_base *)local_230,&ppuStack_298);
  local_1a8 = 0;
  local_1a0 = 0xffffffff;
  ppuStack_298 = &PTR__basic_streambuf_01c671a8;
  local_2b0 = &PTR__basic_stringstream_01c66f88;
  local_230[0] = &PTR__basic_stringstream_01c66fd8;
  local_2a0 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::locale::locale(alStack_290);
  uStack_260 = 0;
  local_268 = 0;
  uStack_270 = 0;
  local_278 = 0;
  uStack_280 = 0;
  local_288 = 0;
  ppuStack_298 = &PTR__basic_stringbuf_01c67100;
  uStack_240 = 0;
  local_248 = (void *)0x0;
  uStack_250 = 0;
  local_258 = 0;
  local_238 = 0x18;
  uVar7 = *(uint *)(param_1 + 1);
  if (uVar7 < 8) {
    cocos2d::Value::asString();
    uVar1 = (ulong)local_190 >> 1 & 0x7f;
    ppuVar5 = (undefined **)((ulong)&local_190 | 1);
    if (((ulong)local_190 & 1) != 0) {
      uVar1 = uStack_188;
      ppuVar5 = local_180;
    }
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_2a0,(char *)ppuVar5,uVar1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\n",1);
    local_2d0 = local_180;
    if (((ulong)local_190 & 1) == 0) goto LAB_00885410;
  }
  else {
    if (uVar7 == 8) {
      param_1 = (long *)*param_1;
      local_190 = (undefined **)0x1c670a0;
      local_110[0] = (undefined **)0x1c670c8;
      uStack_188 = 0;
      local_180 = &PTR__basic_stringstream_01c66fb0;
      std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
      local_88 = 0;
      local_190 = &PTR__basic_stringstream_01c66f88;
      ppuStack_178 = &PTR__basic_streambuf_01c671a8;
      local_110[0] = &PTR__basic_stringstream_01c66fd8;
      local_80 = 0xffffffff;
      local_180 = &PTR__basic_stringstream_01c66fb0;
      std::__ndk1::locale::locale(alStack_170);
      uStack_140 = 0;
      local_148 = 0;
      uStack_150 = 0;
      local_158 = 0;
      uStack_160 = 0;
      local_168 = 0;
      ppuStack_178 = &PTR__basic_stringbuf_01c67100;
      uStack_120 = 0;
      local_128 = (void *)0x0;
      uStack_130 = 0;
      local_138 = 0;
      local_118 = 0x18;
      if (param_2 < 1) {
        uVar7 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
      }
      else {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,"\n",1);
        iVar12 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2c8,"\t",1);
          iVar12 = iVar12 + 1;
        } while (iVar12 < param_2);
        uVar7 = (uint)(byte)local_2c8._0_1_;
      }
      uVar1 = (ulong)(uVar7 >> 1);
      pcVar4 = (char *)((ulong)&local_2c8 | 1);
      if ((uVar7 & 1) != 0) {
        uVar1 = local_2c0;
        pcVar4 = local_2b8;
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,pcVar4,uVar1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"[\n",2);
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      lVar11 = *param_1;
      lVar2 = param_1[1];
      if (lVar11 != lVar2) {
        iVar12 = 0;
        do {
          local_2c8 = 0;
          local_2c0 = 0;
          local_2b8 = (char *)0x0;
          if (param_2 < 0) {
            uVar7 = 0;
          }
          else {
            iVar9 = -1;
            do {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_2c8,"\t",1);
              iVar9 = iVar9 + 1;
            } while (iVar9 < param_2);
            uVar7 = (uint)(byte)local_2c8._0_1_;
          }
          uVar1 = (ulong)(uVar7 >> 1);
          pcVar4 = (char *)((ulong)&local_2c8 | 1);
          if ((uVar7 & 1) != 0) {
            uVar1 = local_2c0;
            pcVar4 = local_2b8;
          }
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             ((basic_ostream *)&local_180,pcVar4,uVar1);
          pbVar6 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,iVar12);
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar6,": ",2);
          FUN_008852b8(local_2e0,lVar11,param_2 + 1);
          uVar1 = (ulong)(local_2e0[0] >> 1);
          ppuVar5 = (undefined **)((ulong)local_2e0 | 1);
          if ((local_2e0[0] & 1) != 0) {
            uVar1 = local_2d8;
            ppuVar5 = local_2d0;
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (pbVar6,(char *)ppuVar5,uVar1);
          if ((local_2e0[0] & 1) != 0) {
            operator_delete(local_2d0);
          }
          if ((local_2c8 & 1) != 0) {
            operator_delete(local_2b8);
          }
          lVar11 = lVar11 + 0x10;
          iVar12 = iVar12 + 1;
        } while (lVar11 != lVar2);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2b8 = (char *)0x0;
      if (param_2 < 1) {
        uVar7 = 0;
      }
      else {
        iVar12 = 0;
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2c8,"\t",1);
          iVar12 = iVar12 + 1;
        } while (iVar12 < param_2);
        uVar7 = (uint)(byte)local_2c8._0_1_;
      }
      uVar1 = (ulong)(uVar7 >> 1);
      pcVar4 = (char *)((ulong)&local_2c8 | 1);
      if ((uVar7 & 1) != 0) {
        uVar1 = local_2c0;
        pcVar4 = local_2b8;
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,pcVar4,uVar1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"]\n",2);
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      local_190 = &PTR__basic_stringstream_01c66f88;
      local_110[0] = &PTR__basic_stringstream_01c66fd8;
      local_180 = &PTR__basic_stringstream_01c66fb0;
      ppuStack_178 = &PTR__basic_stringbuf_01c67100;
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      ppuStack_178 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_170);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
      uVar1 = (ulong)(local_2f8[0] >> 1);
      ppuVar5 = (undefined **)((ulong)local_2f8 | 1);
      if ((local_2f8[0] & 1) != 0) {
        uVar1 = local_2f0;
        ppuVar5 = local_2e8;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_2a0,(char *)ppuVar5,uVar1);
      local_2d0 = local_2e8;
      local_2e0[0] = local_2f8[0];
    }
    else if (uVar7 == 9) {
      lVar11 = *param_1;
      local_190 = (undefined **)0x1c670a0;
      local_110[0] = (undefined **)0x1c670c8;
      uStack_188 = 0;
      local_180 = &PTR__basic_stringstream_01c66fb0;
      std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
      local_88 = 0;
      local_190 = &PTR__basic_stringstream_01c66f88;
      ppuStack_178 = &PTR__basic_streambuf_01c671a8;
      local_110[0] = &PTR__basic_stringstream_01c66fd8;
      local_80 = 0xffffffff;
      local_180 = &PTR__basic_stringstream_01c66fb0;
      std::__ndk1::locale::locale(alStack_170);
      uStack_140 = 0;
      local_148 = 0;
      uStack_150 = 0;
      local_158 = 0;
      uStack_160 = 0;
      local_168 = 0;
      ppuStack_178 = &PTR__basic_stringbuf_01c67100;
      uStack_120 = 0;
      local_128 = (void *)0x0;
      uStack_130 = 0;
      local_138 = 0;
      local_118 = 0x18;
      if (param_2 < 1) {
        uVar7 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
      }
      else {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,"\n",1);
        iVar12 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2c8,"\t",1);
          iVar12 = iVar12 + 1;
        } while (iVar12 < param_2);
        uVar7 = (uint)(byte)local_2c8._0_1_;
      }
      uVar1 = (ulong)(uVar7 >> 1);
      pcVar4 = (char *)((ulong)&local_2c8 | 1);
      if ((uVar7 & 1) != 0) {
        uVar1 = local_2c0;
        pcVar4 = local_2b8;
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,pcVar4,uVar1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"{\n",2);
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      plVar10 = *(long **)(lVar11 + 0x10);
      if (plVar10 != (long *)0x0) {
        do {
          local_2c8 = 0;
          local_2c0 = 0;
          local_2b8 = (char *)0x0;
          if (param_2 < 0) {
            uVar7 = 0;
          }
          else {
            iVar12 = -1;
            do {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_2c8,"\t",1);
              iVar12 = iVar12 + 1;
            } while (iVar12 < param_2);
            uVar7 = (uint)(byte)local_2c8._0_1_;
          }
          uVar1 = (ulong)(uVar7 >> 1);
          pcVar4 = (char *)((ulong)&local_2c8 | 1);
          if ((uVar7 & 1) != 0) {
            uVar1 = local_2c0;
            pcVar4 = local_2b8;
          }
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             ((basic_ostream *)&local_180,pcVar4,uVar1);
          uVar1 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
          pcVar4 = (char *)((long)plVar10 + 0x11);
          if ((*(byte *)(plVar10 + 2) & 1) != 0) {
            uVar1 = plVar10[3];
            pcVar4 = (char *)plVar10[4];
          }
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar6,pcVar4,uVar1);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,": ",2);
          if ((local_2c8 & 1) != 0) {
            operator_delete(local_2b8);
          }
          FUN_008852b8(&local_2c8,plVar10 + 5,param_2 + 1);
          uVar1 = local_2c8 >> 1 & 0x7f;
          pcVar4 = (char *)((ulong)&local_2c8 | 1);
          if ((local_2c8 & 1) != 0) {
            uVar1 = local_2c0;
            pcVar4 = local_2b8;
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_180,pcVar4,uVar1);
          if ((local_2c8 & 1) != 0) {
            operator_delete(local_2b8);
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2b8 = (char *)0x0;
      if (param_2 < 1) {
        uVar7 = 0;
      }
      else {
        iVar12 = 0;
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2c8,"\t",1);
          iVar12 = iVar12 + 1;
        } while (iVar12 < param_2);
        uVar7 = (uint)(byte)local_2c8._0_1_;
      }
      uVar1 = (ulong)(uVar7 >> 1);
      pcVar4 = (char *)((ulong)&local_2c8 | 1);
      if ((uVar7 & 1) != 0) {
        uVar1 = local_2c0;
        pcVar4 = local_2b8;
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,pcVar4,uVar1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"}\n",2);
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      local_190 = &PTR__basic_stringstream_01c66f88;
      local_110[0] = &PTR__basic_stringstream_01c66fd8;
      local_180 = &PTR__basic_stringstream_01c66fb0;
      ppuStack_178 = &PTR__basic_stringbuf_01c67100;
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      ppuStack_178 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_170);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
      uVar1 = (ulong)(local_2e0[0] >> 1);
      ppuVar5 = (undefined **)((ulong)local_2e0 | 1);
      if ((local_2e0[0] & 1) != 0) {
        uVar1 = local_2d8;
        ppuVar5 = local_2d0;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_2a0,(char *)ppuVar5,uVar1);
    }
    else {
      if (uVar7 != 10) goto LAB_00885410;
      lVar11 = *param_1;
      local_190 = (undefined **)0x1c670a0;
      local_110[0] = (undefined **)0x1c670c8;
      uStack_188 = 0;
      local_180 = &PTR__basic_stringstream_01c66fb0;
      std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
      local_88 = 0;
      ppuStack_178 = &PTR__basic_streambuf_01c671a8;
      local_190 = &PTR__basic_stringstream_01c66f88;
      local_110[0] = &PTR__basic_stringstream_01c66fd8;
      local_80 = 0xffffffff;
      local_180 = &PTR__basic_stringstream_01c66fb0;
      std::__ndk1::locale::locale(alStack_170);
      uStack_140 = 0;
      local_148 = 0;
      uStack_150 = 0;
      local_158 = 0;
      uStack_160 = 0;
      local_168 = 0;
      ppuStack_178 = &PTR__basic_stringbuf_01c67100;
      uStack_120 = 0;
      local_128 = (void *)0x0;
      uStack_130 = 0;
      local_138 = 0;
      local_118 = 0x18;
      if (param_2 < 1) {
        uVar7 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
      }
      else {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,"\n",1);
        iVar12 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2c8,"\t",1);
          iVar12 = iVar12 + 1;
        } while (iVar12 < param_2);
        uVar7 = (uint)(byte)local_2c8._0_1_;
      }
      uVar1 = (ulong)(uVar7 >> 1);
      pcVar4 = (char *)((ulong)&local_2c8 | 1);
      if ((uVar7 & 1) != 0) {
        uVar1 = local_2c0;
        pcVar4 = local_2b8;
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,pcVar4,uVar1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"{\n",2);
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      plVar10 = *(long **)(lVar11 + 0x10);
      if (plVar10 != (long *)0x0) {
        do {
          local_2c8 = 0;
          local_2c0 = 0;
          local_2b8 = (char *)0x0;
          if (param_2 < 0) {
            uVar7 = 0;
          }
          else {
            iVar12 = -1;
            do {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_2c8,"\t",1);
              iVar12 = iVar12 + 1;
            } while (iVar12 < param_2);
            uVar7 = (uint)(byte)local_2c8._0_1_;
          }
          uVar1 = (ulong)(uVar7 >> 1);
          pcVar4 = (char *)((ulong)&local_2c8 | 1);
          if ((uVar7 & 1) != 0) {
            uVar1 = local_2c0;
            pcVar4 = local_2b8;
          }
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             ((basic_ostream *)&local_180,pcVar4,uVar1);
          pbVar6 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                              (int)plVar10[2]);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,": ",2);
          if ((local_2c8 & 1) != 0) {
            operator_delete(local_2b8);
          }
          FUN_008852b8(&local_2c8,plVar10 + 3,param_2 + 1);
          uVar1 = local_2c8 >> 1 & 0x7f;
          pcVar4 = (char *)((ulong)&local_2c8 | 1);
          if ((local_2c8 & 1) != 0) {
            uVar1 = local_2c0;
            pcVar4 = local_2b8;
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_180,pcVar4,uVar1);
          if ((local_2c8 & 1) != 0) {
            operator_delete(local_2b8);
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2b8 = (char *)0x0;
      if (param_2 < 1) {
        uVar7 = 0;
      }
      else {
        iVar12 = 0;
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2c8,"\t",1);
          iVar12 = iVar12 + 1;
        } while (iVar12 < param_2);
        uVar7 = (uint)(byte)local_2c8._0_1_;
      }
      uVar1 = (ulong)(uVar7 >> 1);
      pcVar4 = (char *)((ulong)&local_2c8 | 1);
      if ((uVar7 & 1) != 0) {
        uVar1 = local_2c0;
        pcVar4 = local_2b8;
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,pcVar4,uVar1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"}\n",2);
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      local_190 = &PTR__basic_stringstream_01c66f88;
      local_110[0] = &PTR__basic_stringstream_01c66fd8;
      local_180 = &PTR__basic_stringstream_01c66fb0;
      ppuStack_178 = &PTR__basic_stringbuf_01c67100;
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      ppuStack_178 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_170);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
      uVar1 = (ulong)(local_2e0[0] >> 1);
      ppuVar5 = (undefined **)((ulong)local_2e0 | 1);
      if ((local_2e0[0] & 1) != 0) {
        uVar1 = local_2d8;
        ppuVar5 = local_2d0;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_2a0,(char *)ppuVar5,uVar1);
    }
    if ((local_2e0[0] & 1) == 0) goto LAB_00885410;
  }
  operator_delete(local_2d0);
LAB_00885410:
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_2b0 = &PTR__basic_stringstream_01c66f88;
  local_230[0] = &PTR__basic_stringstream_01c66fd8;
  local_2a0 = &PTR__basic_stringstream_01c66fb0;
  ppuStack_298 = &PTR__basic_stringbuf_01c67100;
  if ((local_258 & 1) != 0) {
    operator_delete(local_248);
  }
  ppuStack_298 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_290);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_230);
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

