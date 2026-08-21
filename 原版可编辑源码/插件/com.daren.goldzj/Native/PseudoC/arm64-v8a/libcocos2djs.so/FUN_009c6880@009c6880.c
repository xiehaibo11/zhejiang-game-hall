
void FUN_009c6880(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  __shared_weak_count *p_Var2;
  long *plVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  ulong *puVar15;
  char *pcVar16;
  size_t __n;
  void *pvVar17;
  undefined1 *puVar18;
  char *pcVar19;
  undefined1 *puVar20;
  char *pcVar22;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong uVar29;
  void *pvVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulong local_210;
  ulong local_208;
  char *local_200;
  ulong local_1f8;
  size_t local_1f0;
  void *local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  undefined1 *local_1d0;
  __shared_weak_count *local_1b0;
  ulong local_1a0;
  ulong uStack_198;
  void *local_190;
  ulong local_188;
  ulong local_180;
  undefined1 *local_178;
  ulong local_170;
  ulong uStack_168;
  char *local_160;
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
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  undefined1 *puVar21;
  char *pcVar23;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  plVar1 = param_3 + 3;
  lVar24 = *param_3;
  uVar29 = (param_3[1] - lVar24 >> 3) * -0x5555555555555555;
  plVar3 = (long *)(lVar24 + 0x60);
  if (uVar29 < 5) {
    plVar3 = plVar1;
  }
  if ((char)plVar3[2] == '\0') {
    local_188 = 0;
    local_180 = 0;
    local_178 = (undefined1 *)0x0;
  }
  else {
    puVar21 = (undefined1 *)*plVar3;
    puVar4 = (undefined1 *)plVar3[1];
    local_188 = 0;
    local_180 = 0;
    local_178 = (undefined1 *)0x0;
    uVar28 = (long)puVar4 - (long)puVar21;
                    /* catch() { ... } // from try @ 009c6700 with catch @ 009c68f4 */
                    /* catch() { ... } // from try @ 009c66f4 with catch @ 009c68f8 */
    if (0xffffffffffffffef < uVar28) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
                    /* catch() { ... } // from try @ 009c66d4 with catch @ 009c68fc */
    if (uVar28 < 0x17) {
                    /* catch() { ... } // from try @ 009c670c with catch @ 009c690c */
      local_188 = (ulong)(byte)((int)uVar28 << 1);
      puVar14 = (undefined1 *)((ulong)&local_188 | 1);
    }
    else {
      uVar25 = uVar28 + 0x10 & 0xfffffffffffffff0;
      puVar14 = operator_new(uVar25);
      local_188 = uVar25 | 1;
      local_180 = uVar28;
      local_178 = puVar14;
    }
    if (puVar21 != puVar4) {
      puVar18 = puVar14;
                    /* try { // try from 009c6964 to 00ac69b7 has its CatchHandler @ 009c6964
                       catch() { ... } // from try @ 009c6964 with catch @ 009c6964
                       catch() { ... } // from try @ 009c6b68 with catch @ 009c6964 */
      if ((uVar28 < 0x20) || ((puVar14 < puVar4 && (puVar21 < puVar14 + uVar28)))) {
LAB_009c69b4:
        do {
          puVar20 = puVar21 + 1;
                    /* try { // try from 009c69b8 to 00ac69cf has its CatchHandler @ 009c6bd4 */
          *puVar18 = *puVar21;
          puVar18 = puVar18 + 1;
          puVar21 = puVar20;
        } while (puVar4 != puVar20);
      }
      else {
        uVar25 = uVar28 & 0xffffffffffffffe0;
        puVar26 = (undefined8 *)(puVar21 + 0x10);
        puVar27 = (undefined8 *)(puVar14 + 0x10);
        uVar29 = uVar25;
        do {
          puVar9 = puVar26 + -1;
          uVar31 = puVar26[-2];
          uVar33 = puVar26[1];
          uVar32 = *puVar26;
          puVar26 = puVar26 + 4;
          uVar29 = uVar29 - 0x20;
          puVar27[-1] = *puVar9;
          puVar27[-2] = uVar31;
          puVar27[1] = uVar33;
          *puVar27 = uVar32;
          puVar27 = puVar27 + 4;
        } while (uVar29 != 0);
        puVar18 = puVar14 + uVar25;
        puVar21 = puVar21 + uVar25;
        if (uVar25 != uVar28) goto LAB_009c69b4;
      }
      lVar24 = *param_3;
      puVar14 = puVar14 + uVar28;
                    /* try { // try from 009c69d8 to 00ac69e3 has its CatchHandler @ 009c6bb8 */
      uVar29 = (param_3[1] - lVar24 >> 3) * -0x5555555555555555;
    }
    *puVar14 = 0;
  }
                    /* try { // try from 009c69e4 to 00ac69ef has its CatchHandler @ 009c6bb4 */
  plVar3 = (long *)(lVar24 + 0x18);
  if (uVar29 < 2) {
    plVar3 = plVar1;
  }
                    /* try { // try from 009c69f0 to 00ac6a1b has its CatchHandler @ 009c6be4 */
  if ((char)plVar3[2] == '\0') {
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = (undefined1 *)0x0;
  }
  else {
    puVar21 = (undefined1 *)*plVar3;
    puVar4 = (undefined1 *)plVar3[1];
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = (undefined1 *)0x0;
    uVar29 = (long)puVar4 - (long)puVar21;
    if (0xffffffffffffffef < uVar29) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009c7030 to 00ac70af has its CatchHandler @ 009c71a8 */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar29 < 0x17) {
      local_1e0 = (ulong)(byte)((int)uVar29 << 1);
      puVar14 = (undefined1 *)((ulong)&local_1e0 | 1);
    }
    else {
      uVar28 = uVar29 + 0x10 & 0xfffffffffffffff0;
      puVar14 = operator_new(uVar28);
      local_1e0 = uVar28 | 1;
      local_1d8 = uVar29;
      local_1d0 = puVar14;
    }
    if (puVar21 != puVar4) {
      puVar18 = puVar14;
                    /* try { // try from 009c6a6c to 00ac6aeb has its CatchHandler @ 009c6be4 */
      if ((uVar29 < 0x20) || ((puVar14 < puVar4 && (puVar21 < puVar14 + uVar29)))) {
LAB_009c6ac8:
        do {
          puVar20 = puVar21 + 1;
          *puVar18 = *puVar21;
          puVar18 = puVar18 + 1;
          puVar21 = puVar20;
        } while (puVar4 != puVar20);
      }
      else {
        uVar25 = uVar29 & 0xffffffffffffffe0;
        puVar26 = (undefined8 *)(puVar21 + 0x10);
        puVar27 = (undefined8 *)(puVar14 + 0x10);
        uVar28 = uVar25;
        do {
          puVar9 = puVar26 + -1;
          uVar31 = puVar26[-2];
          uVar33 = puVar26[1];
          uVar32 = *puVar26;
          puVar26 = puVar26 + 4;
          uVar28 = uVar28 - 0x20;
          puVar27[-1] = *puVar9;
          puVar27[-2] = uVar31;
          puVar27[1] = uVar33;
          *puVar27 = uVar32;
          puVar27 = puVar27 + 4;
        } while (uVar28 != 0);
        puVar18 = puVar14 + uVar25;
        puVar21 = puVar21 + uVar25;
        if (uVar25 != uVar29) goto LAB_009c6ac8;
      }
      puVar14 = puVar14 + uVar29;
    }
    *puVar14 = 0;
  }
  puVar15 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_1e0,0,"\\{",2);
  local_160 = (char *)puVar15[2];
  uStack_168 = puVar15[1];
  local_170 = *puVar15;
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = 0;
  puVar15 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_170,"\\}",2);
                    /* try { // try from 009c6b24 to 00ac6b67 has its CatchHandler @ 009c6bbc */
  local_190 = (void *)puVar15[2];
  uStack_198 = puVar15[1];
  local_1a0 = *puVar15;
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = 0;
  if ((local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if ((local_1e0 & 1) != 0) {
    operator_delete(local_1d0);
  }
                    /* try { // try from 009c6b68 to 00ac6c3b has its CatchHandler @ 009c6964 */
  std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
  basic_regex<std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
            ((basic_regex<char,std::__ndk1::regex_traits<char>> *)&local_1e0,&local_1a0,0);
  plVar3 = (long *)(*param_3 + 0x30);
  if ((ulong)((param_3[1] - *param_3 >> 3) * -0x5555555555555555) < 3) {
    plVar3 = plVar1;
  }
  if ((char)plVar3[2] == '\0') {
                    /* catch() { ... } // from try @ 009c69b8 with catch @ 009c6bd4 */
    local_170 = 0;
    uStack_168 = 0;
    local_160 = (char *)0x0;
LAB_009c6c88:
    uVar12 = atoi((char *)((ulong)&local_170 | 1));
                    /* try { // try from 009c6c98 to 00ac6caf has its CatchHandler @ 009c6ec0 */
  }
  else {
    pcVar23 = (char *)*plVar3;
    pcVar5 = (char *)plVar3[1];
    local_170 = 0;
    uStack_168 = 0;
    local_160 = (char *)0x0;
    uVar29 = (long)pcVar5 - (long)pcVar23;
    if (0xffffffffffffffef < uVar29) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
                    /* catch() { ... } // from try @ 009c69e4 with catch @ 009c6bb4 */
    if (uVar29 < 0x17) {
                    /* catch() { ... } // from try @ 009c69d8 with catch @ 009c6bb8 */
                    /* catch() { ... } // from try @ 009c6a30 with catch @ 009c6bbc
                       catch() { ... } // from try @ 009c6b24 with catch @ 009c6bbc */
      local_170 = (ulong)(byte)((int)uVar29 << 1);
      pcVar16 = (char *)((ulong)&local_170 | 1);
      pcVar11 = local_160;
    }
    else {
                    /* catch() { ... } // from try @ 009c69f0 with catch @ 009c6be4
                       catch() { ... } // from try @ 009c6a6c with catch @ 009c6be4 */
      uVar28 = uVar29 + 0x10 & 0xfffffffffffffff0;
      pcVar16 = operator_new(uVar28);
      local_170 = uVar28 | 1;
      uStack_168 = uVar29;
      pcVar11 = pcVar16;
    }
    if (pcVar23 != pcVar5) {
      pcVar19 = pcVar16;
      if ((uVar29 < 0x20) || ((pcVar16 < pcVar5 && (pcVar23 < pcVar16 + uVar29)))) {
LAB_009c6c68:
        do {
          pcVar22 = pcVar23 + 1;
          *pcVar19 = *pcVar23;
          pcVar19 = pcVar19 + 1;
          pcVar23 = pcVar22;
        } while (pcVar5 != pcVar22);
      }
      else {
        uVar25 = uVar29 & 0xffffffffffffffe0;
        pcVar19 = pcVar23 + 0x10;
                    /* try { // try from 009c6c3c to 00ac6c97 has its CatchHandler @ 009c6c3c
                       catch() { ... } // from try @ 009c6c3c with catch @ 009c6c3c
                       catch() { ... } // from try @ 009c6e3c with catch @ 009c6c3c */
        pcVar22 = pcVar16 + 0x10;
        uVar28 = uVar25;
        do {
          pcVar10 = pcVar19 + -8;
          uVar31 = *(undefined8 *)(pcVar19 + -0x10);
          uVar33 = *(undefined8 *)(pcVar19 + 8);
          uVar32 = *(undefined8 *)pcVar19;
          pcVar19 = pcVar19 + 0x20;
          uVar28 = uVar28 - 0x20;
          *(undefined8 *)(pcVar22 + -8) = *(undefined8 *)pcVar10;
          *(undefined8 *)(pcVar22 + -0x10) = uVar31;
          *(undefined8 *)(pcVar22 + 8) = uVar33;
          *(undefined8 *)pcVar22 = uVar32;
          pcVar22 = pcVar22 + 0x20;
        } while (uVar28 != 0);
        pcVar19 = pcVar16 + uVar25;
        pcVar23 = pcVar23 + uVar25;
        if (uVar25 != uVar29) goto LAB_009c6c68;
      }
      pcVar16 = pcVar16 + uVar29;
    }
    *pcVar16 = '\0';
    local_160 = pcVar11;
    if ((local_170 & 1) == 0) goto LAB_009c6c88;
    uVar12 = atoi(pcVar11);
    operator_delete(pcVar11);
  }
                    /* try { // try from 009c6cb8 to 00ac6cc3 has its CatchHandler @ 009c6ebc */
                    /* try { // try from 009c6cc4 to 00ac6ccf has its CatchHandler @ 009c6eb8 */
                    /* try { // try from 009c6cd0 to 00ac6e3b has its CatchHandler @ 009c6ed0 */
  plVar3 = (long *)(*param_3 + 0x48);
  if ((ulong)((param_3[1] - *param_3 >> 3) * -0x5555555555555555) < 4) {
    plVar3 = plVar1;
  }
  if ((char)plVar3[2] == '\0') {
    local_170 = 0;
    uStack_168 = 0;
    local_160 = (char *)0x0;
  }
  else {
    pcVar23 = (char *)*plVar3;
    pcVar5 = (char *)plVar3[1];
    local_170 = 0;
    uStack_168 = 0;
    local_160 = (char *)0x0;
    uVar29 = (long)pcVar5 - (long)pcVar23;
    if (0xffffffffffffffef < uVar29) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar29 < 0x17) {
      local_170 = (ulong)(byte)((int)uVar29 << 1);
      pcVar16 = (char *)((ulong)&local_170 | 1);
      pcVar11 = local_160;
    }
    else {
      uVar28 = uVar29 + 0x10 & 0xfffffffffffffff0;
      pcVar16 = operator_new(uVar28);
      local_170 = uVar28 | 1;
      uStack_168 = uVar29;
      pcVar11 = pcVar16;
    }
    if (pcVar23 != pcVar5) {
      pcVar19 = pcVar16;
      if ((uVar29 < 0x20) || ((pcVar16 < pcVar5 && (pcVar23 < pcVar16 + uVar29)))) {
LAB_009c6db0:
        do {
          pcVar22 = pcVar23 + 1;
          *pcVar19 = *pcVar23;
          pcVar19 = pcVar19 + 1;
          pcVar23 = pcVar22;
        } while (pcVar5 != pcVar22);
      }
      else {
        uVar25 = uVar29 & 0xffffffffffffffe0;
        pcVar19 = pcVar23 + 0x10;
        pcVar22 = pcVar16 + 0x10;
        uVar28 = uVar25;
        do {
          pcVar10 = pcVar19 + -8;
          uVar31 = *(undefined8 *)(pcVar19 + -0x10);
          uVar33 = *(undefined8 *)(pcVar19 + 8);
          uVar32 = *(undefined8 *)pcVar19;
          pcVar19 = pcVar19 + 0x20;
          uVar28 = uVar28 - 0x20;
          *(undefined8 *)(pcVar22 + -8) = *(undefined8 *)pcVar10;
          *(undefined8 *)(pcVar22 + -0x10) = uVar31;
          *(undefined8 *)(pcVar22 + 8) = uVar33;
          *(undefined8 *)pcVar22 = uVar32;
          pcVar22 = pcVar22 + 0x20;
        } while (uVar28 != 0);
        pcVar19 = pcVar16 + uVar25;
        pcVar23 = pcVar23 + uVar25;
        if (uVar25 != uVar29) goto LAB_009c6db0;
      }
      pcVar16 = pcVar16 + uVar29;
    }
    *pcVar16 = '\0';
    local_160 = pcVar11;
    if ((local_170 & 1) != 0) {
      uVar13 = atoi(pcVar11);
      operator_delete(pcVar11);
      goto LAB_009c6dfc;
    }
  }
  uVar13 = atoi((char *)((ulong)&local_170 | 1));
LAB_009c6dfc:
  if ((int)(uVar13 | uVar12) < 0) {
    __android_log_print(6,"renderer",
                        " (139): Unroll For Loops Error: begin and end of range must be an int num.\n"
                       );
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
                    /* try { // try from 009c6e3c to 00ac6f27 has its CatchHandler @ 009c6c3c */
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
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
  local_160 = (char *)0x0;
  if ((int)uVar12 < (int)uVar13) {
    pvVar30 = (void *)((ulong)&local_1f8 | 1);
    do {
      snprintf((char *)&local_170,0x100,"%d",(ulong)uVar12);
      local_1f8 = 0;
      local_1f0 = 0;
      local_1e8 = (void *)0x0;
      __n = strlen((char *)&local_170);
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        local_1f8 = CONCAT71(local_1f8._1_7_,(char)((int)__n << 1));
                    /* catch() { ... } // from try @ 009c6cc4 with catch @ 009c6eb8 */
        pvVar17 = pvVar30;
        if (__n != 0) goto LAB_009c6ee0;
      }
      else {
                    /* catch() { ... } // from try @ 009c6c98 with catch @ 009c6ec0 */
        uVar29 = __n + 0x10 & 0xfffffffffffffff0;
        pvVar17 = operator_new(uVar29);
                    /* catch() { ... } // from try @ 009c6cd0 with catch @ 009c6ed0 */
        local_1f8 = uVar29 | 1;
        local_1f0 = __n;
        local_1e8 = pvVar17;
LAB_009c6ee0:
        memcpy(pvVar17,&local_170,__n);
      }
      *(undefined1 *)((long)pvVar17 + __n) = 0;
      puVar21 = (undefined1 *)((ulong)&local_188 | 1);
      uVar29 = local_188 >> 1 & 0x7f;
      if ((local_188 & 1) != 0) {
        puVar21 = local_178;
        uVar29 = local_180;
      }
      local_210 = 0;
      local_208 = 0;
      local_200 = (char *)0x0;
      pvVar17 = pvVar30;
      if ((local_1f8 & 1) != 0) {
        pvVar17 = local_1e8;
      }
                    /* try { // try from 009c6f28 to 00ac6f7b has its CatchHandler @ 009c6f28
                       catch() { ... } // from try @ 009c6f28 with catch @ 009c6f28
                       catch() { ... } // from try @ 009c712c with catch @ 009c6f28 */
      std::__ndk1::
      regex_replace<std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::regex_traits<char>,char>
                (&local_210,puVar21,puVar21 + uVar29,&local_1e0,pvVar17,0);
      uVar29 = local_210 >> 1 & 0x7f;
      pcVar23 = (char *)((ulong)&local_210 | 1);
      if ((local_210 & 1) != 0) {
        uVar29 = local_208;
        pcVar23 = local_200;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(param_1,pcVar23,uVar29);
      if ((local_210 & 1) != 0) {
        operator_delete(local_200);
      }
      if ((local_1f8 & 1) != 0) {
        operator_delete(local_1e8);
      }
      uVar12 = uVar12 + 1;
                    /* try { // try from 009c6f7c to 00ac6f93 has its CatchHandler @ 009c7198 */
    } while ((int)uVar12 < (int)uVar13);
  }
  if (local_1b0 != (__shared_weak_count *)0x0) {
    p_Var2 = local_1b0 + 8;
    do {
      lVar24 = *(long *)p_Var2;
                    /* try { // try from 009c6f9c to 00ac6fa7 has its CatchHandler @ 009c717c */
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar7) {
        *(long *)p_Var2 = lVar24 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar24 == 0) {
                    /* try { // try from 009c6fa8 to 00ac6fb3 has its CatchHandler @ 009c7178 */
                    /* try { // try from 009c6fb4 to 00ac6fdf has its CatchHandler @ 009c71a8 */
      (**(code **)(*(long *)local_1b0 + 0x10))(local_1b0);
      std::__ndk1::__shared_weak_count::__release_weak(local_1b0);
    }
  }
  std::__ndk1::locale::~locale((locale *)&local_1e0);
  if ((local_1a0 & 1) != 0) {
    operator_delete(local_190);
  }
  if ((local_188 & 1) != 0) {
    operator_delete(local_178);
  }
                    /* try { // try from 009c6ff4 to 00ac7013 has its CatchHandler @ 009c7180 */
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

