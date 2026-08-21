
/* WARNING: Type propagation algorithm not settling */

uint FUN_008eba24(ulong *param_1,Value *param_2,ulong *param_3)

{
  __shared_weak_count *p_Var1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  Isolate *pIVar12;
  ScriptEngine *pSVar13;
  long lVar14;
  long *plVar15;
  basic_string *pbVar16;
  size_t sVar17;
  ulong *puVar18;
  byte *pbVar19;
  Object *pOVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  byte *pbVar26;
  long lVar27;
  void *pvVar28;
  char *pcVar29;
  ulong uVar30;
  char *pcVar31;
  void *__dest;
  ulong local_410;
  ulong uStack_408;
  char *local_400;
  __shared_weak_count *local_3e0;
  byte local_3c8 [16];
  void *local_3b8;
  byte local_3b0;
  char cStack_3af;
  undefined6 uStack_3ae;
  char cStack_3a8;
  undefined7 uStack_3a7;
  char *local_3a0;
  ulong local_390;
  ulong uStack_388;
  void *local_380;
  ulong local_370;
  ulong uStack_368;
  char *local_360;
  HandleScope aHStack_358 [32];
  ulong *local_338;
  undefined8 uStack_330;
  void *local_328;
  ulong local_320;
  ulong uStack_318;
  void *local_310;
  undefined7 uStack_300;
  char local_2f9;
  undefined7 uStack_2f8;
  ulong local_2f0;
  ulong uStack_2e8;
  char *local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  char *local_e0;
  char acStack_d8 [64];
  undefined5 uStack_98;
  undefined3 local_93;
  undefined5 uStack_90;
  char acStack_8b [43];
  
  lVar8 = tpidr_el0;
  lVar22 = *(long *)(lVar8 + 0x28);
  pIVar12 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_358,pIVar12);
  pSVar13 = (ScriptEngine *)se::ScriptEngine::getInstance();
  lVar14 = se::ScriptEngine::getFileOperationDelegate(pSVar13);
  local_370 = 0;
  uStack_368 = 0;
  local_360 = (undefined1 *)0x0;
  uStack_388 = 0;
  local_380 = (void *)0x0;
  local_390 = 0;
  if ((*param_1 & 1) == 0) {
    local_380 = (void *)param_1[2];
    uStack_388 = param_1[1];
    local_390 = *param_1;
  }
  else {
    uVar21 = param_1[1];
    if (0xffffffffffffffef < uVar21) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar28 = (void *)param_1[2];
    if (uVar21 < 0x17) {
      __dest = (void *)((ulong)&local_390 | 1);
      local_390 = (ulong)(byte)((int)uVar21 << 1);
      if (uVar21 != 0) goto LAB_008ebaf4;
    }
    else {
      uVar30 = uVar21 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar30);
      local_390 = uVar30 | 1;
      uStack_388 = uVar21;
      local_380 = __dest;
LAB_008ebaf4:
      memcpy(__dest,pvVar28,uVar21);
    }
    *(undefined1 *)((long)__dest + uVar21) = 0;
  }
  uVar21 = local_390 >> 1 & 0x7f;
  pvVar28 = (void *)((ulong)&local_390 | 1);
  if ((local_390 & 1) != 0) {
    uVar21 = uStack_388;
    pvVar28 = local_380;
  }
  lVar24 = uVar21 - 3;
  lVar2 = (long)pvVar28 + uVar21;
  lVar25 = lVar2;
  lVar23 = lVar2;
  if (2 < (long)uVar21) {
    while (uVar21 != 2) {
      uVar21 = uVar21 - 1;
      if (*(char *)((long)pvVar28 + uVar21) == 's') {
        lVar27 = 0;
        do {
          if (lVar27 == -2) {
            lVar25 = lVar23 + -3;
            goto LAB_008ebba0;
          }
          lVar3 = lVar23 + lVar27;
          lVar9 = lVar27 + 0x22;
          lVar27 = lVar27 + -1;
        } while (*(char *)(lVar3 + -2) == "try to validate everything as asm.js"[lVar9]);
      }
      lVar23 = lVar23 + -1;
    }
  }
LAB_008ebba0:
  lVar23 = lVar25 - (long)pvVar28;
  if (lVar25 == lVar2) {
    lVar23 = -1;
  }
  if (lVar23 != lVar24) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_390,".js",3);
  }
  plVar15 = *(long **)(lVar14 + 0x50);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_008589d0();
  }
  (**(code **)(*plVar15 + 0x30))(&local_3b0,plVar15,&local_390);
  uVar21 = (ulong)(local_3b0 >> 1);
  if ((local_3b0 & 1) != 0) {
    uVar21 = CONCAT71(uStack_3a7,cStack_3a8);
  }
  if (uVar21 == 0) {
    bVar5 = (byte)*param_3;
    uVar30 = param_3[1];
    uVar21 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar21 = uVar30;
    }
    if (uVar21 == 0) goto LAB_008ebbfc;
    local_2f0 = 0;
    uStack_2e8 = 0;
    local_2e0 = (char *)0x0;
    if ((bVar5 & 1) == 0) {
      local_2e0 = (char *)param_3[2];
      uStack_2e8 = param_3[1];
      local_2f0 = *param_3;
    }
    else {
      if (0xffffffffffffffef < uVar30) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      pvVar28 = (void *)param_3[2];
      if (uVar30 < 0x17) {
        pcVar31 = (char *)((ulong)&local_2f0 | 1);
        local_2f0 = (ulong)(byte)((int)uVar30 << 1);
        if (uVar30 != 0) goto LAB_008ec000;
      }
      else {
        uVar21 = uVar30 + 0x10 & 0xfffffffffffffff0;
        pcVar31 = operator_new(uVar21);
        local_2f0 = uVar21 | 1;
        uStack_2e8 = uVar30;
        local_2e0 = pcVar31;
LAB_008ec000:
        memcpy(pcVar31,pvVar28,uVar30);
      }
      pcVar31[uVar30] = '\0';
    }
    pcVar31 = (char *)((ulong)&local_2f0 | 1);
    uVar21 = local_2f0 >> 1 & 0x7f;
    if ((local_2f0 & 1) != 0) {
      pcVar31 = local_2e0;
      uVar21 = uStack_2e8;
    }
    if (pcVar31[uVar21 - 1] != '/') {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_2f0,"/",1);
    }
    uVar21 = param_1[1];
    pbVar19 = (byte *)param_1[2];
    if (((byte)*param_1 & 1) == 0) {
      pbVar19 = (byte *)((long)param_1 + 1);
      uVar21 = (ulong)(byte)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_2f0,(char *)pbVar19,uVar21);
    plVar15 = (long *)cocos2d::FileUtils::getInstance();
    uVar21 = (**(code **)(*plVar15 + 0x110))(plVar15,&local_2f0);
    if ((uVar21 & 1) == 0) {
      uVar21 = (ulong)(byte)((byte)*param_1 >> 1);
      pbVar19 = (byte *)((long)param_1 + 1);
      if (((byte)*param_1 & 1) != 0) {
        uVar21 = param_1[1];
        pbVar19 = (byte *)param_1[2];
      }
      lVar2 = uVar21 - 3;
      pbVar4 = pbVar19 + uVar21;
      pbVar26 = pbVar4;
      pbVar10 = pbVar4;
      if (2 < (long)uVar21) {
        while (uVar21 != 2) {
          uVar21 = uVar21 - 1;
          if (pbVar19[uVar21] == 0x73) {
            lVar24 = 0;
            do {
              if (lVar24 == -2) {
                pbVar26 = pbVar10 + -3;
                goto LAB_008ec360;
              }
              lVar23 = lVar24 + -2;
              lVar25 = lVar24 + 0x22;
              lVar24 = lVar24 + -1;
            } while (pbVar10[lVar23] == "try to validate everything as asm.js"[lVar25]);
          }
          pbVar10 = pbVar10 + -1;
        }
      }
LAB_008ec360:
      lVar24 = (long)pbVar26 - (long)pbVar19;
      if (pbVar26 == pbVar4) {
        lVar24 = -1;
      }
      if (lVar24 != lVar2) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_2f0,".js",3);
      }
    }
    else {
      pcVar31 = (char *)((ulong)&local_2f0 | 1);
      uVar21 = local_2f0 >> 1 & 0x7f;
      if ((local_2f0 & 1) != 0) {
        pcVar31 = local_2e0;
        uVar21 = uStack_2e8;
      }
      if (pcVar31[uVar21 - 1] != '/') {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_2f0,"/",1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_2f0,"index.js",8);
    }
    plVar15 = *(long **)(lVar14 + 0xb0);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(*plVar15 + 0x30))(&local_f0,plVar15,&local_2f0);
    if ((local_370 & 1) != 0) {
      *local_360 = 0;
      uStack_368 = 0;
      if ((local_370 & 1) != 0) {
        operator_delete(local_360);
      }
    }
    local_360 = local_e0;
    uStack_368 = uStack_e8;
    local_370 = local_f0;
    plVar15 = *(long **)(lVar14 + 0x50);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(*plVar15 + 0x30))(&local_f0,plVar15,&local_370);
    if ((local_3b0 & 1) != 0) {
      *local_3a0 = '\0';
      cStack_3a8 = 0;
      uStack_3a7 = 0;
      if ((local_3b0 & 1) != 0) {
        operator_delete(local_3a0);
      }
    }
    local_3a0 = local_e0;
    cStack_3a8 = (char)uStack_e8;
    uStack_3a7 = (undefined7)(uStack_e8 >> 8);
    local_3b0 = (byte)local_f0;
    cStack_3af = (char)(local_f0 >> 8);
    uStack_3ae = (undefined6)(local_f0 >> 0x10);
    if ((local_2f0 & 1) != 0) {
      operator_delete(local_2e0);
    }
  }
  else {
LAB_008ebbfc:
    plVar15 = *(long **)(lVar14 + 0xb0);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(*plVar15 + 0x30))(&local_2f0,plVar15,&local_390);
    if ((local_370 & 1) != 0) {
      *local_360 = 0;
      uStack_368 = 0;
      if ((local_370 & 1) != 0) {
        operator_delete(local_360);
      }
    }
    local_360 = local_2e0;
    uStack_368 = uStack_2e8;
    local_370 = local_2f0;
  }
  uVar21 = (ulong)(local_3b0 >> 1);
  if ((local_3b0 & 1) != 0) {
    uVar21 = CONCAT71(uStack_3a7,cStack_3a8);
  }
  if (uVar21 == 0) {
    pbVar19 = (byte *)param_1[2];
    if ((*param_1 & 1) == 0) {
      pbVar19 = (byte *)((long)param_1 + 1);
    }
    __android_log_print(6,"jswrapper","doModuleRequire %s, buffer is empty!\n",pbVar19);
    uVar11 = 0;
    goto joined_r0x008ebd28;
  }
  lVar14 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>>>
                       *)&DAT_01d370b8,(basic_string *)&local_370);
  if (lVar14 != 0) {
    se::Value::operator=(param_2,(Value *)(lVar14 + 0x28));
    uVar11 = 1;
    goto joined_r0x008ebd28;
  }
  pbVar16 = (basic_string *)cocos2d::FileUtils::getInstance();
  cocos2d::FileUtils::getFileDir(pbVar16);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_288 = 0;
  local_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  local_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uStack_2d8 = 0;
  local_2e0 = (char *)0x0;
  builtin_strncpy(acStack_d8,"ir){ window.module = win",0x18);
  local_e0 = (char *)0x4474706972635374;
  pvVar28 = (void *)((ulong)local_3c8 | 1);
  if ((local_3c8[0] & 1) != 0) {
    pvVar28 = local_3b8;
  }
  uStack_e8._0_1_ = 'n';
  uStack_e8._1_1_ = '(';
  uStack_e8._2_1_ = 'c';
  uStack_e8._3_1_ = 'u';
  uStack_e8._4_1_ = 'r';
  uStack_e8._5_1_ = 'r';
  uStack_e8._6_1_ = 'e';
  uStack_e8._7_1_ = 'n';
  local_f0._0_1_ = '(';
  local_f0._1_1_ = 'f';
  local_f0._2_1_ = 'u';
  local_f0._3_1_ = 'n';
  local_f0._4_1_ = 'c';
  local_f0._5_1_ = 't';
  local_f0._6_1_ = 'i';
  local_f0._7_1_ = 'o';
  builtin_strncpy(acStack_8b," = {}; ",8);
  uStack_90 = 0x7374726f70;
  builtin_strncpy(acStack_d8 + 0x28,"; var exports = window.m",0x18);
  uStack_98 = 0x656c75646f;
  local_93 = 0x78652e;
  builtin_strncpy(acStack_d8 + 0x18,"dow.module || {}",0x10);
  snprintf((char *)&local_2f0,0x200,
           "\nwindow.module.exports = window.module.exports || exports;\n})(\'%s\'); ",pvVar28);
  FUN_00877378(&local_410,"([^A-Za-z0-9]|^)requireModule\\((.*?)\\)",0);
  uVar21 = (ulong)(local_3b0 >> 1);
  pcVar31 = (char *)((ulong)&local_3b0 | 1);
  if ((local_3b0 & 1) != 0) {
    uVar21 = CONCAT71(uStack_3a7,cStack_3a8);
    pcVar31 = local_3a0;
  }
  local_338 = (ulong *)0x0;
  uStack_330 = 0;
  local_328 = (void *)0x0;
  std::__ndk1::
  regex_replace<std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::regex_traits<char>,char>
            (&local_338,pcVar31,pcVar31 + uVar21,&local_410,"$1requireModule($2, currentScriptDir)",
             0);
  sVar17 = strlen((char *)&local_f0);
  puVar18 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_338,0,(char *)&local_f0,sVar17);
  local_310 = (void *)puVar18[2];
  uStack_318 = puVar18[1];
  local_320 = *puVar18;
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = 0;
  sVar17 = strlen((char *)&local_2f0);
  pbVar19 = (byte *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_320,(char *)&local_2f0,sVar17);
  pcVar31 = *(char **)(pbVar19 + 0x10);
  bVar5 = *pbVar19;
  uStack_2f8 = (undefined7)((ulong)*(undefined8 *)(pbVar19 + 8) >> 8);
  uStack_300 = (undefined7)*(undefined8 *)(pbVar19 + 1);
  local_2f9 = (char)((ulong)*(undefined8 *)(pbVar19 + 1) >> 0x38);
  pbVar19[0] = 0;
  pbVar19[1] = 0;
  pbVar19[2] = 0;
  pbVar19[3] = 0;
  pbVar19[4] = 0;
  pbVar19[5] = 0;
  pbVar19[6] = 0;
  pbVar19[7] = 0;
  pbVar19[8] = 0;
  pbVar19[9] = 0;
  pbVar19[10] = 0;
  pbVar19[0xb] = 0;
  pbVar19[0xc] = 0;
  pbVar19[0xd] = 0;
  pbVar19[0xe] = 0;
  pbVar19[0xf] = 0;
  pbVar19[0x10] = 0;
  pbVar19[0x11] = 0;
  pbVar19[0x12] = 0;
  pbVar19[0x13] = 0;
  pbVar19[0x14] = 0;
  pbVar19[0x15] = 0;
  pbVar19[0x16] = 0;
  pbVar19[0x17] = 0;
  if ((local_3b0 & 1) != 0) {
    *local_3a0 = '\0';
    cStack_3a8 = 0;
    uStack_3a7 = 0;
    if ((local_3b0 & 1) != 0) {
      operator_delete(local_3a0);
    }
  }
  uStack_3a7 = uStack_2f8;
  cStack_3a8 = local_2f9;
  uStack_2f8 = 0;
  cStack_3af = (char)uStack_300;
  uStack_3ae = (undefined6)((uint7)uStack_300 >> 8);
  uStack_300 = 0;
  local_2f9 = 0;
  local_3b0 = bVar5;
  local_3a0 = pcVar31;
  if ((local_320 & 1) != 0) {
    operator_delete(local_310);
  }
  if (((ulong)local_338 & 1) != 0) {
    operator_delete(local_328);
  }
  if (local_3e0 != (__shared_weak_count *)0x0) {
    p_Var1 = local_3e0 + 8;
    do {
      lVar14 = *(long *)p_Var1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar7) {
        *(long *)p_Var1 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*(long *)local_3e0 + 0x10))(local_3e0);
      std::__ndk1::__shared_weak_count::__release_weak(local_3e0);
    }
  }
  std::__ndk1::locale::~locale((locale *)&local_410);
  pcVar31 = local_360;
  uVar21 = uStack_368;
  local_410 = 0;
  uStack_408 = 0;
  local_400 = (char *)0x0;
  if ((local_370 & 1) == 0) {
    local_400 = local_360;
    uStack_408 = uStack_368;
    local_410 = local_370;
  }
  else {
    if (0xffffffffffffffef < uStack_368) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_368 < 0x17) {
      pcVar29 = (char *)((ulong)&local_410 | 1);
      local_410 = (ulong)(byte)((int)uStack_368 << 1);
      if (uStack_368 != 0) goto LAB_008ec190;
    }
    else {
      uVar30 = uStack_368 + 0x10 & 0xfffffffffffffff0;
      pcVar29 = operator_new(uVar30);
      local_410 = uVar30 | 1;
      uStack_408 = uVar21;
      local_400 = pcVar29;
LAB_008ec190:
      memcpy(pcVar29,pcVar31,uVar21);
    }
    pcVar29[uVar21] = '\0';
  }
  pSVar13 = (ScriptEngine *)se::ScriptEngine::getInstance();
  uVar21 = (ulong)(local_3b0 >> 1);
  pcVar31 = (char *)((ulong)&local_3b0 | 1);
  if ((local_3b0 & 1) != 0) {
    uVar21 = CONCAT71(uStack_3a7,cStack_3a8);
    pcVar31 = local_3a0;
  }
  pcVar29 = (char *)((ulong)&local_410 | 1);
  if ((local_410 & 1) != 0) {
    pcVar29 = local_400;
  }
  uVar11 = se::ScriptEngine::evalString(pSVar13,pcVar31,uVar21,(Value *)0x0,pcVar29);
  se::Value::Value((Value *)&local_320);
  if ((uVar11 & 1) == 0) {
LAB_008ec288:
    local_338 = &local_370;
    lVar14 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>>>
             ::
             __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                       ((basic_string *)&DAT_01d370b8,(piecewise_construct_t *)&local_370,
                        (tuple *)&DAT_018656b3,(tuple *)&local_338);
    se::Value::operator=((Value *)(lVar14 + 0x28),(Value *)&se::Value::Undefined);
  }
  else {
    pOVar20 = (Object *)se::ScriptEngine::getGlobalObject(pSVar13);
    uVar21 = se::Object::getProperty(pOVar20,"module",(Value *)&local_320);
    if (((uVar21 & 1) == 0) || ((char)uStack_318 != '\x05')) goto LAB_008ec288;
    se::Value::Value((Value *)&local_338);
    pOVar20 = (Object *)se::Value::toObject((Value *)&local_320);
    uVar21 = se::Object::getProperty(pOVar20,"exports",(Value *)&local_338);
    if ((uVar21 & 1) == 0) {
      uStack_300 = SUB87(&local_370,0);
      local_2f9 = (char)((ulong)&local_370 >> 0x38);
      lVar14 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         ((basic_string *)&DAT_01d370b8,(piecewise_construct_t *)&local_370,
                          (tuple *)&DAT_018656b3,(tuple *)&uStack_300);
      se::Value::operator=((Value *)(lVar14 + 0x28),(Value *)&se::Value::Undefined);
    }
    else {
      if (param_2 != (Value *)0x0) {
        se::Value::operator=(param_2,(Value *)&local_338);
      }
      uStack_300 = SUB87(&local_370,0);
      local_2f9 = (char)((ulong)&local_370 >> 0x38);
      lVar14 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Value>>>
               ::
               __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                         ((basic_string *)&DAT_01d370b8,(piecewise_construct_t *)&local_370,
                          (tuple *)&DAT_018656b3,(tuple *)&uStack_300);
      se::Value::operator=((Value *)(lVar14 + 0x28),(Value *)&local_338);
    }
    pOVar20 = (Object *)se::Value::toObject((Value *)&local_320);
    se::Object::setProperty(pOVar20,"exports",(Value *)&se::Value::Undefined);
    se::Value::~Value((Value *)&local_338);
  }
  se::Value::~Value((Value *)&local_320);
  if ((local_410 & 1) != 0) {
    operator_delete(local_400);
  }
  if ((local_3c8[0] & 1) != 0) {
    operator_delete(local_3b8);
  }
joined_r0x008ebd28:
  if ((local_3b0 & 1) != 0) {
    operator_delete(local_3a0);
  }
  if ((local_390 & 1) != 0) {
    operator_delete(local_380);
  }
  if ((local_370 & 1) != 0) {
    operator_delete(local_360);
  }
  v8::HandleScope::~HandleScope(aHStack_358);
  if (*(long *)(lVar8 + 0x28) != lVar22) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11 & 1;
}

