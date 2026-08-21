
/* cocos2d::CanvasRenderingContext2D::set_font(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::CanvasRenderingContext2D::set_font(CanvasRenderingContext2D *this,basic_string *param_1)

{
  __shared_weak_count *p_Var1;
  basic_string *pbVar2;
  size_t __n;
  char *pcVar3;
  undefined1 *puVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  basic_string bVar6;
  char cVar7;
  long lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  void *pvVar11;
  __shared_weak_count *p_Var12;
  bool bVar13;
  int iVar14;
  char *pcVar15;
  undefined1 *puVar16;
  basic_string *pbVar17;
  basic_string *pbVar18;
  long lVar19;
  basic_string *pbVar20;
  ulong uVar21;
  undefined1 *puVar22;
  char *pcVar23;
  ulong uVar24;
  long lVar25;
  undefined1 *puVar26;
  char *pcVar28;
  uint uVar30;
  CanvasRenderingContext2D *pCVar31;
  ulong uVar32;
  char *pcVar33;
  CanvasRenderingContext2D *pCVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  char *pcVar37;
  bool bVar38;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  char *__nptr;
  bool bVar39;
  basic_string *pbVar40;
  char *pcVar41;
  undefined8 uVar42;
  double dVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  ulong local_2b8;
  ulong local_2b0;
  undefined1 *local_2a8;
  locale alStack_2a0 [8];
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  __shared_weak_count *p_Stack_270;
  undefined8 local_268;
  locale alStack_260 [8];
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  __shared_weak_count *p_Stack_230;
  undefined8 local_228;
  char *local_220;
  char *pcStack_218;
  char *local_210;
  basic_string local_200;
  undefined1 uStack_1ff;
  undefined6 uStack_1fe;
  undefined1 uStack_1f8;
  undefined2 uStack_1f7;
  undefined1 uStack_1f5;
  undefined4 uStack_1f4;
  char *local_1f0;
  void *local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1b8;
  undefined1 local_1a0;
  char local_188;
  undefined1 local_180;
  void *local_170;
  void *local_168;
  undefined8 local_160;
  undefined8 local_158 [2];
  undefined1 local_148;
  undefined1 local_130;
  undefined1 local_118;
  undefined1 local_110;
  char *local_100;
  char *pcStack_f8;
  char *local_f0;
  undefined1 uStack_e8;
  undefined7 local_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 *puVar27;
  char *pcVar29;
  
  lVar8 = tpidr_el0;
  lVar19 = *(long *)(lVar8 + 0x28);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x40);
  bVar5 = *this_00;
  bVar6 = *param_1;
  __n = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    __n = *(size_t *)(this + 0x48);
  }
  uVar21 = (ulong)((byte)bVar6 >> 1);
  if (((byte)bVar6 & 1) != 0) {
    uVar21 = *(ulong *)(param_1 + 8);
  }
  if (__n == uVar21) {
    pCVar31 = *(CanvasRenderingContext2D **)(this + 0x50);
    pCVar34 = *(CanvasRenderingContext2D **)(param_1 + 0x10);
    if (((byte)bVar5 & 1) == 0) {
      pCVar31 = this + 0x41;
    }
    if (((byte)bVar6 & 1) == 0) {
      pCVar34 = (CanvasRenderingContext2D *)(param_1 + 1);
    }
    if (((byte)bVar5 & 1) == 0) {
      if (__n != 0) {
        pCVar31 = this + 0x41;
        lVar25 = -(ulong)((byte)bVar5 >> 1);
        do {
          if (*pCVar31 != *pCVar34) goto LAB_0085ebf8;
          pCVar31 = pCVar31 + 1;
          lVar25 = lVar25 + 1;
          pCVar34 = pCVar34 + 1;
        } while (lVar25 != 0);
      }
      goto LAB_0085f548;
    }
    if ((__n == 0) || (iVar14 = memcmp(pCVar31,pCVar34,__n), iVar14 == 0)) goto LAB_0085f548;
  }
LAB_0085ebf8:
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    pbVar20 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar6 & 1) == 0) {
      pbVar20 = param_1 + 1;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar20,uVar21);
  }
  uStack_1f4 = 0;
  local_200 = (basic_string)0x14;
  local_1f0 = (char *)0x0;
  uStack_1f7 = 0x6669;
  pcStack_218 = (char *)0x0;
  local_210 = (char *)0x0;
  uStack_1ff = 0x73;
  uStack_1fe = 0x65732d736e61;
  uStack_1f8 = 0x72;
  uStack_1f5 = 0;
  local_220 = "lbackInfoINS_5ValueEEE";
  std::__ndk1::locale::locale(alStack_260);
  local_258 = std::__ndk1::locale::use_facet(alStack_260,(id *)&std::__ndk1::ctype<char>::id);
  local_250 = std::__ndk1::locale::use_facet(alStack_260,(id *)&std::__ndk1::collate<char>::id);
  local_228 = 0;
  p_Stack_230 = (__shared_weak_count *)0x0;
  local_238 = 0;
  uStack_240 = 0;
  local_248 = 0;
  std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse<char_const*>
            ((basic_regex<char,std::__ndk1::regex_traits<char>> *)alStack_260,
             "\\s*((\\d+)([\\.]\\d+)?)px\\s+([^\\r\\n]*)","");
  local_170 = (void *)0x0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_148 = 0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  if (((byte)*this_00 & 1) == 0) {
    pCVar34 = this + 0x41;
    uVar21 = (ulong)((byte)*this_00 >> 1);
  }
  else {
    uVar21 = *(ulong *)(this + 0x48);
    pCVar34 = *(CanvasRenderingContext2D **)(this + 0x50);
  }
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_df = 0;
  uStack_e0 = 0;
  pcStack_f8 = (char *)0x0;
  local_100 = (char *)0x0;
  uStack_e8 = 0;
  local_e7 = 0;
  local_f0 = (char *)0x0;
  bVar13 = std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
           __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                     ((basic_regex<char,std::__ndk1::regex_traits<char>> *)alStack_260,pCVar34,
                      pCVar34 + uVar21,&local_100,0);
  std::__ndk1::
  match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
  ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
            ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
              *)&local_170,pCVar34,pCVar34 + uVar21,&local_100,0);
  if (local_100 != (char *)0x0) {
    pcStack_f8 = local_100;
    operator_delete(local_100);
  }
  __nptr = (char *)((ulong)&local_220 | 1);
  if (bVar13) {
    puVar35 = (undefined8 *)((long)local_170 + 0x30);
    if ((ulong)(((long)local_168 - (long)local_170 >> 3) * -0x5555555555555555) < 3) {
      puVar35 = local_158;
    }
    if (*(char *)(puVar35 + 2) == '\0') {
      local_100 = (char *)0x0;
      pcStack_f8 = (char *)0x0;
      local_f0 = (char *)0x0;
    }
    else {
      pcVar29 = (char *)*puVar35;
      pcVar3 = (char *)puVar35[1];
      local_100 = (char *)0x0;
      pcStack_f8 = (char *)0x0;
      local_f0 = (char *)0x0;
      pcVar41 = pcVar3 + -(long)pcVar29;
      if ((char *)0xffffffffffffffef < pcVar41) goto LAB_0085f580;
      if (pcVar41 < (char *)0x17) {
        local_100 = (char *)(ulong)(byte)((int)pcVar41 << 1);
        pcVar15 = (char *)((ulong)&local_100 | 1);
      }
      else {
        pcVar15 = operator_new((ulong)(pcVar41 + 0x10) & 0xfffffffffffffff0);
        local_100 = (char *)((ulong)(pcVar41 + 0x10) & 0xfffffffffffffff0 | 1);
        pcStack_f8 = pcVar41;
        local_f0 = pcVar15;
      }
      if (pcVar29 != pcVar3) {
        pcVar23 = pcVar15;
        if ((pcVar41 < (char *)0x20) || ((pcVar15 < pcVar3 && (pcVar29 < pcVar15 + (long)pcVar41))))
        {
LAB_0085ee6c:
          do {
            pcVar28 = pcVar29 + 1;
            *pcVar23 = *pcVar29;
            pcVar23 = pcVar23 + 1;
            pcVar29 = pcVar28;
          } while (pcVar3 != pcVar28);
        }
        else {
          pcVar33 = (char *)((ulong)pcVar41 & 0xffffffffffffffe0);
          pcVar23 = pcVar29 + 0x10;
          pcVar28 = pcVar15 + 0x10;
          pcVar37 = pcVar33;
          do {
            pcVar9 = pcVar23 + -8;
            uVar42 = *(undefined8 *)(pcVar23 + -0x10);
            uVar45 = *(undefined8 *)(pcVar23 + 8);
            uVar44 = *(undefined8 *)pcVar23;
            pcVar23 = pcVar23 + 0x20;
            pcVar37 = pcVar37 + -0x20;
            *(undefined8 *)(pcVar28 + -8) = *(undefined8 *)pcVar9;
            *(undefined8 *)(pcVar28 + -0x10) = uVar42;
            *(undefined8 *)(pcVar28 + 8) = uVar45;
            *(undefined8 *)pcVar28 = uVar44;
            pcVar28 = pcVar28 + 0x20;
          } while (pcVar37 != (char *)0x0);
          pcVar23 = pcVar15 + (long)pcVar33;
          pcVar29 = pcVar29 + (long)pcVar33;
          if (pcVar33 != pcVar41) goto LAB_0085ee6c;
        }
        pcVar15 = pcVar15 + (long)pcVar41;
      }
      *pcVar15 = '\0';
    }
    local_1e0 = (void *)0x0;
    local_1d8 = (void *)0x0;
    local_1d0 = 0;
    local_1b8 = 0;
    local_1a0 = 0;
    local_188 = '\0';
    local_210 = local_f0;
    pcStack_218 = pcStack_f8;
    local_220 = local_100;
    local_180 = 0;
    std::__ndk1::locale::locale(alStack_2a0);
    local_298 = std::__ndk1::locale::use_facet(alStack_2a0,(id *)&std::__ndk1::ctype<char>::id);
    local_290 = std::__ndk1::locale::use_facet(alStack_2a0,(id *)&std::__ndk1::collate<char>::id);
    local_268 = 0;
    p_Stack_270 = (__shared_weak_count *)0x0;
    local_278 = 0;
    uStack_280 = 0;
    local_288 = 0;
    std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse<char_const*>
              ((basic_regex<char,std::__ndk1::regex_traits<char>> *)alStack_2a0,
               "([\\w\\s-]+|\"[\\w\\s-]+\"$)","");
    puVar35 = (undefined8 *)((long)local_170 + 0x60);
    if ((ulong)(((long)local_168 - (long)local_170 >> 3) * -0x5555555555555555) < 5) {
      puVar35 = local_158;
    }
    if (*(char *)(puVar35 + 2) == '\0') {
      uVar30 = 0;
      local_2b8 = 0;
      local_2b0 = 0;
      local_2a8 = (undefined1 *)0x0;
    }
    else {
      puVar27 = (undefined1 *)*puVar35;
      puVar4 = (undefined1 *)puVar35[1];
      local_2b8 = 0;
      local_2b0 = 0;
      local_2a8 = (undefined1 *)0x0;
      uVar21 = (long)puVar4 - (long)puVar27;
      if (0xffffffffffffffef < uVar21) goto LAB_0085f580;
      if (uVar21 < 0x17) {
        local_2b8 = (ulong)(byte)((int)uVar21 << 1);
        puVar16 = (undefined1 *)((ulong)&local_2b8 | 1);
      }
      else {
        uVar24 = uVar21 + 0x10 & 0xfffffffffffffff0;
        puVar16 = operator_new(uVar24);
        local_2b8 = uVar24 | 1;
        local_2b0 = uVar21;
        local_2a8 = puVar16;
      }
      if (puVar27 != puVar4) {
        puVar22 = puVar16;
        if ((uVar21 < 0x20) || ((puVar16 < puVar4 && (puVar27 < puVar16 + uVar21)))) {
LAB_0085f014:
          do {
            puVar26 = puVar27 + 1;
            *puVar22 = *puVar27;
            puVar22 = puVar22 + 1;
            puVar27 = puVar26;
          } while (puVar4 != puVar26);
        }
        else {
          uVar32 = uVar21 & 0xffffffffffffffe0;
          puVar35 = (undefined8 *)(puVar27 + 0x10);
          puVar36 = (undefined8 *)(puVar16 + 0x10);
          uVar24 = uVar32;
          do {
            puVar10 = puVar35 + -1;
            uVar42 = puVar35[-2];
            uVar45 = puVar35[1];
            uVar44 = *puVar35;
            puVar35 = puVar35 + 4;
            uVar24 = uVar24 - 0x20;
            puVar36[-1] = *puVar10;
            puVar36[-2] = uVar42;
            puVar36[1] = uVar45;
            *puVar36 = uVar44;
            puVar36 = puVar36 + 4;
          } while (uVar24 != 0);
          puVar22 = puVar16 + uVar32;
          puVar27 = puVar27 + uVar32;
          if (uVar32 != uVar21) goto LAB_0085f014;
        }
        puVar16 = puVar16 + uVar21;
      }
      *puVar16 = 0;
      uVar30 = (uint)(byte)local_2b8;
    }
    puVar27 = (undefined1 *)((ulong)&local_2b8 | 1);
    uVar21 = (ulong)(uVar30 >> 1);
    if ((uVar30 & 1) != 0) {
      puVar27 = local_2a8;
      uVar21 = local_2b0;
    }
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    uStack_df = 0;
    uStack_e0 = 0;
    pcStack_f8 = (char *)0x0;
    local_100 = (char *)0x0;
    uStack_e8 = 0;
    local_e7 = 0;
    local_f0 = (char *)0x0;
    bVar13 = std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
             __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                       ((basic_regex<char,std::__ndk1::regex_traits<char>> *)alStack_2a0,puVar27,
                        puVar27 + uVar21,&local_100,0x1040);
    std::__ndk1::
    match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
    ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
              ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                *)&local_1e0,puVar27,puVar27 + uVar21,&local_100,0);
    if (local_100 != (char *)0x0) {
      pcStack_f8 = local_100;
      operator_delete(local_100);
    }
    pvVar11 = local_1d8;
    if ((bVar13) && (pvVar11 = local_1e0, local_188 == '\0')) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
      local_1d8 = pvVar11;
    }
    if ((local_2b8 & 1) != 0) {
      operator_delete(local_2a8);
    }
    if (bVar13) {
      puVar35 = (undefined8 *)((long)local_170 + 0x60);
      if ((ulong)(((long)local_168 - (long)local_170 >> 3) * -0x5555555555555555) < 5) {
        puVar35 = local_158;
      }
      if (*(char *)(puVar35 + 2) == '\0') {
        local_100 = (char *)0x0;
        pcStack_f8 = (char *)0x0;
        local_f0 = (char *)0x0;
      }
      else {
        pcVar29 = (char *)*puVar35;
        pcVar3 = (char *)puVar35[1];
        local_100 = (char *)0x0;
        pcStack_f8 = (char *)0x0;
        local_f0 = (char *)0x0;
        pcVar41 = pcVar3 + -(long)pcVar29;
        if ((char *)0xffffffffffffffef < pcVar41) {
LAB_0085f580:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (pcVar41 < (char *)0x17) {
          local_100 = (char *)(ulong)(byte)((int)pcVar41 << 1);
          pcVar15 = (char *)((ulong)&local_100 | 1);
        }
        else {
          pcVar15 = operator_new((ulong)(pcVar41 + 0x10) & 0xfffffffffffffff0);
          local_100 = (char *)((ulong)(pcVar41 + 0x10) & 0xfffffffffffffff0 | 1);
          pcStack_f8 = pcVar41;
          local_f0 = pcVar15;
        }
        if (pcVar29 != pcVar3) {
          pcVar23 = pcVar15;
          if ((pcVar41 < (char *)0x20) ||
             ((pcVar15 < pcVar3 && (pcVar29 < pcVar15 + (long)pcVar41)))) {
LAB_0085f234:
            do {
              pcVar28 = pcVar29 + 1;
              *pcVar23 = *pcVar29;
              pcVar23 = pcVar23 + 1;
              pcVar29 = pcVar28;
            } while (pcVar3 != pcVar28);
          }
          else {
            pcVar33 = (char *)((ulong)pcVar41 & 0xffffffffffffffe0);
            pcVar23 = pcVar29 + 0x10;
            pcVar28 = pcVar15 + 0x10;
            pcVar37 = pcVar33;
            do {
              pcVar9 = pcVar23 + -8;
              uVar42 = *(undefined8 *)(pcVar23 + -0x10);
              uVar45 = *(undefined8 *)(pcVar23 + 8);
              uVar44 = *(undefined8 *)pcVar23;
              pcVar23 = pcVar23 + 0x20;
              pcVar37 = pcVar37 + -0x20;
              *(undefined8 *)(pcVar28 + -8) = *(undefined8 *)pcVar9;
              *(undefined8 *)(pcVar28 + -0x10) = uVar42;
              *(undefined8 *)(pcVar28 + 8) = uVar45;
              *(undefined8 *)pcVar28 = uVar44;
              pcVar28 = pcVar28 + 0x20;
            } while (pcVar37 != (char *)0x0);
            pcVar23 = pcVar15 + (long)pcVar33;
            pcVar29 = pcVar29 + (long)pcVar33;
            if (pcVar33 != pcVar41) goto LAB_0085f234;
          }
          pcVar15 = pcVar15 + (long)pcVar41;
        }
        *pcVar15 = '\0';
      }
      if (((byte)local_200 & 1) != 0) {
        *local_1f0 = '\0';
        uStack_1f8 = 0;
        uStack_1f7 = 0;
        uStack_1f5 = 0;
        uStack_1f4 = 0;
        if (((byte)local_200 & 1) != 0) {
          operator_delete(local_1f0);
        }
      }
      local_1f0 = local_f0;
      uStack_1f8 = SUB81(pcStack_f8,0);
      uStack_1f7 = (undefined2)((ulong)pcStack_f8 >> 8);
      uStack_1f5 = (undefined1)((ulong)pcStack_f8 >> 0x18);
      uStack_1f4 = (undefined4)((ulong)pcStack_f8 >> 0x20);
      local_200 = SUB81(local_100,0);
      uStack_1ff = (undefined1)((ulong)local_100 >> 8);
      uStack_1fe = (undefined6)((ulong)local_100 >> 0x10);
    }
    p_Var12 = p_Stack_270;
    if (p_Stack_270 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Stack_270 + 8;
      do {
        lVar25 = *(long *)p_Var1;
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar13) {
          *(long *)p_Var1 = lVar25 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*(long *)p_Stack_270 + 0x10))(p_Stack_270);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var12);
      }
    }
    std::__ndk1::locale::~locale(alStack_2a0);
    if (local_1e0 != (void *)0x0) {
      local_1d8 = local_1e0;
      operator_delete(local_1e0);
    }
    if (((ulong)local_220 & 1) != 0) {
      __nptr = local_210;
    }
  }
  dVar43 = atof(__nptr);
  uVar21 = *(ulong *)(param_1 + 8);
  pbVar20 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar20 = param_1 + 1;
    uVar21 = (ulong)((byte)*param_1 >> 1);
  }
  pbVar2 = pbVar20 + uVar21;
  pbVar17 = pbVar20;
  uVar24 = uVar21;
  pbVar40 = pbVar2;
  if ((long)uVar21 < 4) {
    bVar39 = false;
    bVar13 = false;
    bVar38 = false;
  }
  else {
    do {
      pbVar18 = pbVar2;
      if (((uVar24 - 3 == 0) ||
          (pbVar17 = memchr(pbVar17,0x62,uVar24 - 3), pbVar17 == (basic_string *)0x0)) ||
         (pbVar18 = pbVar17, *(int *)pbVar17 == 0x646c6f62)) break;
      uVar24 = (long)pbVar2 - (long)(pbVar17 + 1);
      pbVar17 = pbVar17 + 1;
      pbVar18 = pbVar2;
    } while (3 < (long)uVar24);
    bVar13 = (long)pbVar18 - (long)pbVar20 != -1 && pbVar18 != pbVar2;
    pbVar17 = pbVar20;
    uVar24 = uVar21;
    if ((long)uVar21 < 6) {
      bVar39 = false;
      bVar38 = false;
    }
    else {
      do {
        pbVar40 = pbVar2;
        if (((uVar24 - 5 == 0) ||
            (pbVar17 = memchr(pbVar17,0x69,uVar24 - 5), pbVar17 == (basic_string *)0x0)) ||
           (iVar14 = memcmp(pbVar17,"italic",6), pbVar40 = pbVar17, iVar14 == 0)) break;
        uVar24 = (long)pbVar2 - (long)(pbVar17 + 1);
        pbVar17 = pbVar17 + 1;
        pbVar40 = pbVar2;
      } while (5 < (long)uVar24);
      bVar38 = (long)pbVar40 - (long)pbVar20 != -1 && pbVar40 != pbVar2;
      uVar24 = uVar21;
      pbVar17 = pbVar20;
      while (((pbVar40 = pbVar2, 9 < (long)uVar24 && (uVar24 - 9 != 0)) &&
             ((pbVar17 = memchr(pbVar17,0x73,uVar24 - 9), pbVar17 != (basic_string *)0x0 &&
              (iVar14 = memcmp(pbVar17,"small-caps",10), pbVar40 = pbVar17, iVar14 != 0))))) {
        pbVar17 = pbVar17 + 1;
        uVar24 = (long)pbVar2 - (long)pbVar17;
      }
      bVar39 = (long)pbVar40 - (long)pbVar20 != -1 && pbVar40 != pbVar2;
      pbVar17 = pbVar20;
      while ((((pbVar40 = pbVar2, 6 < (long)uVar21 && (uVar21 - 6 != 0)) &&
              (pbVar17 = memchr(pbVar17,0x6f,uVar21 - 6), pbVar17 != (basic_string *)0x0)) &&
             (iVar14 = memcmp(pbVar17,"oblique",7), pbVar40 = pbVar17, iVar14 != 0))) {
        pbVar17 = pbVar17 + 1;
        uVar21 = (long)pbVar2 - (long)pbVar17;
      }
    }
  }
  CanvasRenderingContext2DImpl::updateFont
            (*(CanvasRenderingContext2DImpl **)(this + 0x100),&local_200,(float)dVar43,bVar13,bVar38
             ,(long)pbVar40 - (long)pbVar20 != -1 && pbVar40 != pbVar2,bVar39);
  if (local_170 != (void *)0x0) {
    local_168 = local_170;
    operator_delete(local_170);
  }
  p_Var12 = p_Stack_230;
  if (p_Stack_230 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Stack_230 + 8;
    do {
      lVar25 = *(long *)p_Var1;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar13) {
        *(long *)p_Var1 = lVar25 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*(long *)p_Stack_230 + 0x10))(p_Stack_230);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var12);
    }
  }
  std::__ndk1::locale::~locale(alStack_260);
  if (((ulong)local_220 & 1) != 0) {
    operator_delete(local_210);
  }
  if (((byte)local_200 & 1) != 0) {
    operator_delete(local_1f0);
  }
LAB_0085f548:
  if (*(long *)(lVar8 + 0x28) != lVar19) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

