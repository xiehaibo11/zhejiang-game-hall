
void FUN_00fbda7c(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  basic_ostream *pbVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  byte local_2f8 [8];
  ulong local_2f0;
  char *local_2e8;
  byte local_2e0 [8];
  ulong local_2d8;
  char *local_2d0;
  ulong local_2c8;
  ulong local_2c0;
  char *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
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
  undefined8 local_230 [17];
  undefined8 local_1a8;
  undefined4 local_1a0;
  ulong local_190;
  ulong uStack_188;
  char *local_180;
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
  undefined8 local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  local_2b0 = 0x1698900;
  local_230[0] = 0x1698928;
  uStack_2a8 = 0;
  local_2a0 = 0x1698810;
  std::__ndk1::ios_base::init((ios_base *)local_230,&ppuStack_298);
  local_1a0 = 0xffffffff;
  ppuStack_298 = &PTR__basic_streambuf_01698a08;
  local_2b0 = 0x16987e8;
  local_230[0] = 0x1698838;
  local_1a8 = 0;
  local_2a0 = 0x1698810;
  std::__ndk1::locale::locale(alStack_290);
  uStack_260 = 0;
  local_268 = 0;
  uStack_270 = 0;
  local_278 = 0;
  uStack_280 = 0;
  local_288 = 0;
  ppuStack_298 = &PTR__basic_stringbuf_01698960;
  uStack_250 = 0;
  local_258 = 0;
  uStack_240 = 0;
  local_248 = (void *)0x0;
  local_238 = 0x18;
  uVar7 = *(uint *)(param_1 + 1);
  if (uVar7 < 8) {
    cocos2d::Value::asString();
    uVar1 = local_190 >> 1 & 0x7f;
    pcVar3 = (char *)((ulong)&local_190 | 1);
    if ((local_190 & 1) != 0) {
      uVar1 = uStack_188;
      pcVar3 = local_180;
    }
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_2a0,pcVar3,uVar1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\n",1);
    local_2d0 = local_180;
    if ((local_190 & 1) == 0) goto LAB_00fbdbd4;
  }
  else {
    if (uVar7 == 8) {
      param_1 = (long *)*param_1;
      local_190 = 0x1698900;
      local_110[0] = 0x1698928;
      uStack_188 = 0;
      local_180 = (char *)0x1698810;
      std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
      local_190 = 0x16987e8;
      ppuStack_178 = &PTR__basic_streambuf_01698a08;
      local_110[0] = 0x1698838;
      local_80 = 0xffffffff;
      local_88 = 0;
      local_180 = (char *)0x1698810;
      std::__ndk1::locale::locale(alStack_170);
      uStack_140 = 0;
      local_148 = 0;
      uStack_150 = 0;
      local_158 = 0;
      uStack_160 = 0;
      local_168 = 0;
      ppuStack_178 = &PTR__basic_stringbuf_01698960;
      uStack_130 = 0;
      local_138 = 0;
      uStack_120 = 0;
      local_128 = (void *)0x0;
      local_118 = 0x18;
      if (param_2 < 1) {
        uVar7 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2c8 = 0;
      }
      else {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,"\n",1);
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2c8 = 0;
        iVar10 = param_2;
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2c8,"\t",1);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        uVar7 = (uint)(byte)local_2c8._0_1_;
      }
      uVar1 = (ulong)(uVar7 >> 1);
      pcVar3 = (char *)((ulong)&local_2c8 | 1);
      if ((uVar7 & 1) != 0) {
        uVar1 = local_2c0;
        pcVar3 = local_2b8;
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,pcVar3,uVar1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"[\n",2);
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      lVar9 = *param_1;
      lVar2 = param_1[1];
      if (lVar9 != lVar2) {
        iVar10 = 0;
        do {
          local_2c0 = 0;
          local_2b8 = (char *)0x0;
          local_2c8 = 0;
          iVar4 = param_2 + 1;
          if (param_2 < 0) {
            uVar7 = 0;
          }
          else {
            do {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_2c8,"\t",1);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            uVar7 = (uint)(byte)local_2c8._0_1_;
          }
          uVar1 = (ulong)(uVar7 >> 1);
          pcVar3 = (char *)((ulong)&local_2c8 | 1);
          if ((uVar7 & 1) != 0) {
            uVar1 = local_2c0;
            pcVar3 = local_2b8;
          }
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             ((basic_ostream *)&local_180,pcVar3,uVar1);
          pbVar6 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,iVar10);
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar6,": ",2);
          FUN_00fbda7c(local_2e0,lVar9,param_2 + 1);
          uVar1 = (ulong)(local_2e0[0] >> 1);
          pcVar3 = (char *)((ulong)local_2e0 | 1);
          if ((local_2e0[0] & 1) != 0) {
            uVar1 = local_2d8;
            pcVar3 = local_2d0;
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (pbVar6,pcVar3,uVar1);
          if ((local_2e0[0] & 1) != 0) {
            operator_delete(local_2d0);
          }
          if ((local_2c8 & 1) != 0) {
            operator_delete(local_2b8);
          }
          lVar9 = lVar9 + 0x10;
          iVar10 = iVar10 + 1;
        } while (lVar9 != lVar2);
      }
      local_2c0 = 0;
      local_2b8 = (char *)0x0;
      local_2c8 = 0;
      if (param_2 < 1) {
        uVar7 = 0;
      }
      else {
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2c8,"\t",1);
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        uVar7 = (uint)(byte)local_2c8._0_1_;
      }
      uVar1 = (ulong)(uVar7 >> 1);
      pcVar3 = (char *)((ulong)&local_2c8 | 1);
      if ((uVar7 & 1) != 0) {
        uVar1 = local_2c0;
        pcVar3 = local_2b8;
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,pcVar3,uVar1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"]\n",2);
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      local_190 = 0x16987e8;
      local_180 = std::__ndk1::
                  basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  ::vtable + 0x40;
      local_110[0] = 0x1698838;
      ppuStack_178 = &PTR__basic_stringbuf_01698960;
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      ppuStack_178 = &PTR__basic_streambuf_01698a08;
      std::__ndk1::locale::~locale(alStack_170);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
      uVar1 = (ulong)(local_2f8[0] >> 1);
      pcVar3 = (char *)((ulong)local_2f8 | 1);
      if ((local_2f8[0] & 1) != 0) {
        uVar1 = local_2f0;
        pcVar3 = local_2e8;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_2a0,pcVar3,uVar1);
      local_2d0 = local_2e8;
      local_2e0[0] = local_2f8[0];
    }
    else if (uVar7 == 9) {
      lVar9 = *param_1;
      local_190 = 0x1698900;
      local_110[0] = 0x1698928;
      uStack_188 = 0;
      local_180 = (char *)0x1698810;
      std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
      local_190 = 0x16987e8;
      ppuStack_178 = &PTR__basic_streambuf_01698a08;
      local_110[0] = 0x1698838;
      local_80 = 0xffffffff;
      local_88 = 0;
      local_180 = (char *)0x1698810;
      std::__ndk1::locale::locale(alStack_170);
      uStack_140 = 0;
      local_148 = 0;
      uStack_150 = 0;
      local_158 = 0;
      uStack_160 = 0;
      local_168 = 0;
      ppuStack_178 = &PTR__basic_stringbuf_01698960;
      uStack_130 = 0;
      local_138 = 0;
      uStack_120 = 0;
      local_128 = (void *)0x0;
      local_118 = 0x18;
      if (param_2 < 1) {
        uVar7 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2c8 = 0;
      }
      else {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,"\n",1);
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2c8 = 0;
        iVar10 = param_2;
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2c8,"\t",1);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        uVar7 = (uint)(byte)local_2c8._0_1_;
      }
      uVar1 = (ulong)(uVar7 >> 1);
      pcVar3 = (char *)((ulong)&local_2c8 | 1);
      if ((uVar7 & 1) != 0) {
        uVar1 = local_2c0;
        pcVar3 = local_2b8;
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,pcVar3,uVar1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"{\n",2);
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      plVar8 = *(long **)(lVar9 + 0x10);
      if (plVar8 != (long *)0x0) {
        do {
          local_2c0 = 0;
          local_2b8 = (char *)0x0;
          local_2c8 = 0;
          iVar10 = param_2 + 1;
          if (param_2 < 0) {
            uVar7 = 0;
          }
          else {
            do {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_2c8,"\t",1);
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            uVar7 = (uint)(byte)local_2c8._0_1_;
          }
          uVar1 = (ulong)(uVar7 >> 1);
          pcVar3 = (char *)((ulong)&local_2c8 | 1);
          if ((uVar7 & 1) != 0) {
            uVar1 = local_2c0;
            pcVar3 = local_2b8;
          }
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             ((basic_ostream *)&local_180,pcVar3,uVar1);
          uVar1 = plVar8[3];
          pcVar3 = (char *)plVar8[4];
          if ((*(byte *)(plVar8 + 2) & 1) == 0) {
            pcVar3 = (char *)((long)plVar8 + 0x11);
            uVar1 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
          }
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar6,pcVar3,uVar1);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,": ",2);
          if ((local_2c8 & 1) != 0) {
            operator_delete(local_2b8);
          }
          FUN_00fbda7c(&local_2c8,plVar8 + 5,param_2 + 1);
          uVar1 = local_2c8 >> 1 & 0x7f;
          pcVar3 = (char *)((ulong)&local_2c8 | 1);
          if ((local_2c8 & 1) != 0) {
            uVar1 = local_2c0;
            pcVar3 = local_2b8;
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_180,pcVar3,uVar1);
          if ((local_2c8 & 1) != 0) {
            operator_delete(local_2b8);
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      local_2c0 = 0;
      local_2b8 = (char *)0x0;
      local_2c8 = 0;
      if (param_2 < 1) {
        uVar7 = 0;
      }
      else {
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2c8,"\t",1);
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        uVar7 = (uint)(byte)local_2c8._0_1_;
      }
      uVar1 = (ulong)(uVar7 >> 1);
      pcVar3 = (char *)((ulong)&local_2c8 | 1);
      if ((uVar7 & 1) != 0) {
        uVar1 = local_2c0;
        pcVar3 = local_2b8;
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,pcVar3,uVar1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"}\n",2);
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      local_190 = 0x16987e8;
      local_180 = std::__ndk1::
                  basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  ::vtable + 0x40;
      local_110[0] = 0x1698838;
      ppuStack_178 = &PTR__basic_stringbuf_01698960;
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      ppuStack_178 = &PTR__basic_streambuf_01698a08;
      std::__ndk1::locale::~locale(alStack_170);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
      uVar1 = (ulong)(local_2e0[0] >> 1);
      pcVar3 = (char *)((ulong)local_2e0 | 1);
      if ((local_2e0[0] & 1) != 0) {
        uVar1 = local_2d8;
        pcVar3 = local_2d0;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_2a0,pcVar3,uVar1);
    }
    else {
      if (uVar7 != 10) goto LAB_00fbdbd4;
      lVar9 = *param_1;
      local_190 = 0x1698900;
      local_110[0] = 0x1698928;
      uStack_188 = 0;
      local_180 = (char *)0x1698810;
      std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
      ppuStack_178 = &PTR__basic_streambuf_01698a08;
      local_190 = 0x16987e8;
      local_110[0] = 0x1698838;
      local_80 = 0xffffffff;
      local_88 = 0;
      local_180 = (char *)0x1698810;
      std::__ndk1::locale::locale(alStack_170);
      uStack_140 = 0;
      local_148 = 0;
      uStack_150 = 0;
      local_158 = 0;
      uStack_160 = 0;
      local_168 = 0;
      ppuStack_178 = &PTR__basic_stringbuf_01698960;
      uStack_130 = 0;
      local_138 = 0;
      uStack_120 = 0;
      local_128 = (void *)0x0;
      local_118 = 0x18;
      if (param_2 < 1) {
        uVar7 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2c8 = 0;
      }
      else {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,"\n",1);
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2c8 = 0;
        iVar10 = param_2;
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2c8,"\t",1);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        uVar7 = (uint)(byte)local_2c8._0_1_;
      }
      uVar1 = (ulong)(uVar7 >> 1);
      pcVar3 = (char *)((ulong)&local_2c8 | 1);
      if ((uVar7 & 1) != 0) {
        uVar1 = local_2c0;
        pcVar3 = local_2b8;
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,pcVar3,uVar1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"{\n",2);
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      plVar8 = *(long **)(lVar9 + 0x10);
      if (plVar8 != (long *)0x0) {
        do {
          local_2c0 = 0;
          local_2b8 = (char *)0x0;
          local_2c8 = 0;
          iVar10 = param_2 + 1;
          if (param_2 < 0) {
            uVar7 = 0;
          }
          else {
            do {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_2c8,"\t",1);
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            uVar7 = (uint)(byte)local_2c8._0_1_;
          }
          uVar1 = (ulong)(uVar7 >> 1);
          pcVar3 = (char *)((ulong)&local_2c8 | 1);
          if ((uVar7 & 1) != 0) {
            uVar1 = local_2c0;
            pcVar3 = local_2b8;
          }
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             ((basic_ostream *)&local_180,pcVar3,uVar1);
          pbVar6 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                              (int)plVar8[2]);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,": ",2);
          if ((local_2c8 & 1) != 0) {
            operator_delete(local_2b8);
          }
          FUN_00fbda7c(&local_2c8,plVar8 + 3,param_2 + 1);
          uVar1 = local_2c8 >> 1 & 0x7f;
          pcVar3 = (char *)((ulong)&local_2c8 | 1);
          if ((local_2c8 & 1) != 0) {
            uVar1 = local_2c0;
            pcVar3 = local_2b8;
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_180,pcVar3,uVar1);
          if ((local_2c8 & 1) != 0) {
            operator_delete(local_2b8);
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      local_2c0 = 0;
      local_2b8 = (char *)0x0;
      local_2c8 = 0;
      if (param_2 < 1) {
        uVar7 = 0;
      }
      else {
        do {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2c8,"\t",1);
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        uVar7 = (uint)(byte)local_2c8._0_1_;
      }
      uVar1 = (ulong)(uVar7 >> 1);
      pcVar3 = (char *)((ulong)&local_2c8 | 1);
      if ((uVar7 & 1) != 0) {
        uVar1 = local_2c0;
        pcVar3 = local_2b8;
      }
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_180,pcVar3,uVar1);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"}\n",2);
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      local_190 = 0x16987e8;
      local_180 = std::__ndk1::
                  basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  ::vtable + 0x40;
      local_110[0] = 0x1698838;
      ppuStack_178 = &PTR__basic_stringbuf_01698960;
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      ppuStack_178 = &PTR__basic_streambuf_01698a08;
      std::__ndk1::locale::~locale(alStack_170);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
      uVar1 = (ulong)(local_2e0[0] >> 1);
      pcVar3 = (char *)((ulong)local_2e0 | 1);
      if ((local_2e0[0] & 1) != 0) {
        uVar1 = local_2d8;
        pcVar3 = local_2d0;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_2a0,pcVar3,uVar1);
    }
    if ((local_2e0[0] & 1) == 0) goto LAB_00fbdbd4;
  }
  operator_delete(local_2d0);
LAB_00fbdbd4:
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_2b0 = 0x16987e8;
  local_2a0 = 0x1698810;
  local_230[0] = 0x1698838;
  ppuStack_298 = &PTR__basic_stringbuf_01698960;
  if ((local_258 & 1) != 0) {
    operator_delete(local_248);
  }
  ppuStack_298 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_290);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_230);
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

