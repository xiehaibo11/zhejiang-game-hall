
void FUN_009c1044(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2)

{
  __shared_weak_count *p_Var1;
  long *plVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  byte *pbVar7;
  char *pcVar8;
  long lVar9;
  bool bVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  code *pcVar14;
  ulong uVar15;
  void *pvVar16;
  long lVar17;
  byte *pbVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong local_1e0 [2];
  char *local_1d0;
  basic_regex<char,std::__ndk1::regex_traits<char>> abStack_1c0 [48];
  __shared_weak_count *local_190;
  long *local_180;
  long *local_178;
  undefined8 local_170;
  long local_168 [2];
  undefined1 local_158;
  undefined1 local_140;
  undefined1 local_128;
  undefined1 local_120;
  long local_118;
  void *local_110;
  void *pvStack_108;
  char *local_100;
  undefined1 uStack_f8;
  undefined7 local_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined **local_a0 [4];
  undefined ***local_80;
  long local_70;
  
  lVar6 = tpidr_el0;
                    /* catch() { ... } // from try @ 009c0ecc with catch @ 009c106c */
  local_70 = *(long *)(lVar6 + 0x28);
                    /* catch() { ... } // from try @ 009c0ec0 with catch @ 009c1070 */
                    /* catch() { ... } // from try @ 009c0ea0 with catch @ 009c1074 */
  local_1d0 = operator_new(0x50);
                    /* catch() { ... } // from try @ 009c0ed8 with catch @ 009c1084 */
  local_1e0[1] = 0x4d;
  local_1e0[0] = 0x51;
  builtin_strncpy(local_1d0,"#pragma for (\\w+) in range\\(\\s*(",0x20);
  local_a0[0] = &PTR_FUN_01c6b220;
  local_80 = local_a0;
  local_1d0[0x4d] = '\0';
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  builtin_strncpy(local_1d0 + 0x20,"\\d+)\\s*,\\s*(\\d+)\\s*\\)([\\s\\S]+?)#pragma endFor",0x2d);
  *(undefined8 *)param_1 = 0;
  if ((*param_2 & 1) == 0) {
                    /* try { // try from 009c10dc to 00ac1133 has its CatchHandler @ 009c10dc
                       catch() { ... } // from try @ 009c10dc with catch @ 009c10dc
                       catch() { ... } // from try @ 009c12bc with catch @ 009c10dc */
    uVar21 = *(undefined8 *)(param_2 + 8);
    uVar20 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar21;
    *(undefined8 *)param_1 = uVar20;
  }
  else {
    uVar15 = *(ulong *)(param_2 + 8);
    if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar16 = *(void **)(param_2 + 0x10);
    if (uVar15 < 0x17) {
      pbVar11 = param_1 + 1;
      *param_1 = SUB41((int)uVar15 << 1,0);
      if (uVar15 != 0) goto LAB_009c1138;
    }
    else {
      uVar12 = uVar15 + 0x10 & 0xfffffffffffffff0;
      pbVar11 = operator_new(uVar12);
      *(ulong *)(param_1 + 8) = uVar15;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (param_1 + 0x10) = pbVar11;
                    /* try { // try from 009c1134 to 00ac114b has its CatchHandler @ 009c133c */
      *(ulong *)param_1 = uVar12 | 1;
LAB_009c1138:
      memcpy(pbVar11,pvVar16,uVar15);
    }
    pbVar11[uVar15] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  }
                    /* try { // try from 009c1154 to 00ac115f has its CatchHandler @ 009c1338 */
  std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
  basic_regex<std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(abStack_1c0,local_1e0,0);
                    /* try { // try from 009c1160 to 00ac116b has its CatchHandler @ 009c1334 */
  bVar4 = *param_2;
  pbVar13 = *(byte **)(param_2 + 0x10);
                    /* try { // try from 009c116c to 00ac12bb has its CatchHandler @ 009c134c */
  lVar19 = 0;
  pbVar18 = pbVar13;
  if ((bVar4 & 1) == 0) {
    pbVar18 = param_2 + 1;
  }
  local_180 = (long *)0x0;
  local_178 = (long *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_140 = 0;
  local_128 = 0;
  local_120 = 0;
  while( true ) {
    local_d0 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    uVar15 = (ulong)(bVar4 >> 1);
    pbVar7 = param_2 + 1;
    if ((bVar4 & 1) != 0) {
      uVar15 = *(ulong *)(param_2 + 8);
      pbVar7 = pbVar13;
    }
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_ef = 0;
    uStack_f0 = 0;
    pvStack_108 = (void *)0x0;
    local_110 = (void *)0x0;
    uStack_f8 = 0;
    local_f7 = 0;
    local_100 = (char *)0x0;
    bVar10 = std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
             __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                       (abStack_1c0,pbVar18,pbVar7 + uVar15,&local_110,0);
    std::__ndk1::
    match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
    ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
              ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                *)&local_180,pbVar18,pbVar7 + uVar15,&local_110,0);
    if (local_110 != (void *)0x0) {
      pvStack_108 = local_110;
      operator_delete(local_110);
    }
    lVar9 = local_118;
    if (!bVar10) break;
    plVar2 = local_168;
    if (local_178 != local_180) {
      plVar2 = local_180;
    }
    if (local_80 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    lVar17 = *plVar2;
    (*(code *)(*local_80)[6])(&local_110,local_80,&local_180);
    uVar15 = (lVar17 - lVar9) + lVar19;
    plVar2 = local_168;
    if (local_178 != local_180) {
      plVar2 = local_180;
    }
    if ((char)plVar2[2] == '\0') {
      uVar12 = 0;
    }
    else {
      uVar12 = plVar2[1] - *plVar2;
    }
    pvVar16 = (void *)((ulong)local_110 >> 1 & 0x7f);
    pcVar8 = (char *)((ulong)&local_110 | 1);
    if (((ulong)local_110 & 1) != 0) {
      pvVar16 = pvStack_108;
      pcVar8 = local_100;
    }
                    /* try { // try from 009c12bc to 00ac13a3 has its CatchHandler @ 009c10dc */
    pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              replace(param_1,uVar15,uVar12,pcVar8,(ulong)pvVar16);
    if (pbVar11 != param_1) {
      uVar12 = *(ulong *)(pbVar11 + 8);
      pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar11 + 0x10);
      if (((byte)*pbVar11 & 1) == 0) {
        pbVar3 = pbVar11 + 1;
        uVar12 = (ulong)((byte)*pbVar11 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_1,(char *)pbVar3,uVar12);
    }
    pvVar16 = (void *)((ulong)local_110 >> 1 & 0x7f);
    if (((ulong)local_110 & 1) != 0) {
      pvVar16 = pvStack_108;
    }
    plVar2 = local_168;
    if (local_178 != local_180) {
      plVar2 = local_180;
    }
    pbVar18 = (byte *)plVar2[1];
    lVar19 = (long)pvVar16 + uVar15;
    if (((ulong)local_110 & 1) != 0) {
      operator_delete(local_100);
    }
    bVar4 = *param_2;
    pbVar13 = *(byte **)(param_2 + 0x10);
  }
  if (local_180 != (long *)0x0) {
    local_178 = local_180;
    operator_delete(local_180);
  }
                    /* catch() { ... } // from try @ 009c1160 with catch @ 009c1334 */
                    /* catch() { ... } // from try @ 009c1154 with catch @ 009c1338 */
  if (local_190 != (__shared_weak_count *)0x0) {
                    /* catch() { ... } // from try @ 009c1134 with catch @ 009c133c */
    p_Var1 = local_190 + 8;
    do {
      lVar19 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar10) {
        *(long *)p_Var1 = lVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
                    /* catch() { ... } // from try @ 009c116c with catch @ 009c134c */
    } while (cVar5 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*(long *)local_190 + 0x10))(local_190);
      std::__ndk1::__shared_weak_count::__release_weak(local_190);
    }
  }
  std::__ndk1::locale::~locale((locale *)abStack_1c0);
  if (local_a0 == local_80) {
    pcVar14 = (code *)(*local_80)[4];
  }
  else {
    if (local_80 == (undefined ***)0x0) goto LAB_009c13a0;
    pcVar14 = (code *)(*local_80)[5];
  }
  (*pcVar14)();
LAB_009c13a0:
                    /* try { // try from 009c13a4 to 00ac13fb has its CatchHandler @ 009c13a4
                       catch() { ... } // from try @ 009c13a4 with catch @ 009c13a4
                       catch() { ... } // from try @ 009c156c with catch @ 009c13a4 */
  if ((local_1e0[0] & 1) != 0) {
    operator_delete(local_1d0);
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

