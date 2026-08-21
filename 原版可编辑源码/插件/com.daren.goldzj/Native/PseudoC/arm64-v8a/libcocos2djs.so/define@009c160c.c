
/* cocos2d::renderer::ProgramLib::define(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::vector<cocos2d::Value,
   std::__ndk1::allocator<cocos2d::Value> >&) */

void __thiscall
cocos2d::renderer::ProgramLib::define
          (ProgramLib *this,basic_string *param_1,basic_string *param_2,basic_string *param_3,
          vector *param_4)

{
  int iVar1;
  Value *pVVar2;
  ulong uVar3;
  long lVar4;
  basic_string *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 *puVar12;
  void *pvVar13;
  Value *this_00;
  char *pcVar14;
  uint uVar15;
  ulong *local_c0;
  ulong uStack_b8;
  char *local_b0;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  ulong local_80 [2];
  ulong *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar7 = *(ulong *)(param_1 + 8);
  pbVar5 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 009c1654 to 00ac16ab has its CatchHandler @ 009c1654
                       catch() { ... } // from try @ 009c1654 with catch @ 009c1654
                       catch() { ... } // from try @ 009c1834 with catch @ 009c1654 */
  if (((byte)*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
    uVar7 = (ulong)((byte)*param_1 >> 1);
  }
  local_80[0] = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                          ((__murmur2_or_cityhash<unsigned_long,64ul> *)&local_a0,pbVar5,uVar7);
  uVar7 = *(ulong *)(this + 0x10);
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar8 & uVar7) == 0) {
      uVar9 = uVar8 & local_80[0];
    }
    else {
      uVar9 = local_80[0];
      if (uVar7 <= local_80[0]) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = local_80[0] / uVar7;
        }
        uVar9 = local_80[0] - uVar9 * uVar7;
      }
    }
                    /* try { // try from 009c16ac to 00ac16c3 has its CatchHandler @ 009c18b4 */
    plVar10 = *(long **)(*(ulong *)(this + 8) + uVar9 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_009c1704;
            uVar11 = plVar10[1];
            if (uVar11 != local_80[0]) break;
                    /* try { // try from 009c16cc to 00ac16d7 has its CatchHandler @ 009c18b0 */
            if (plVar10[2] == local_80[0]) {
              pbVar5 = param_1 + 1;
              if (((byte)*param_1 & 1) != 0) {
                pbVar5 = *(basic_string **)(param_1 + 0x10);
              }
              __android_log_print(5,"renderer",
                                  " (194): Failed to define shader %s: already exists.\n",pbVar5);
              goto LAB_009c19d0;
            }
          }
                    /* try { // try from 009c16d8 to 00ac16e3 has its CatchHandler @ 009c18ac */
          if ((uVar8 & uVar7) == 0) break;
          if (uVar7 <= uVar11) {
                    /* try { // try from 009c16e4 to 00ac1833 has its CatchHandler @ 009c18c4 */
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = uVar11 / uVar7;
            }
            uVar11 = uVar11 - uVar3 * uVar7;
          }
          if (uVar11 != uVar9) goto LAB_009c1704;
        }
      } while ((uVar11 & uVar8) == uVar9);
    }
  }
LAB_009c1704:
  iVar1 = DAT_01d381e0 + 1;
  this_00 = *(Value **)param_4;
  pVVar2 = *(Value **)(param_4 + 8);
  DAT_01d381e0 = iVar1;
  if (this_00 != pVVar2) {
    uVar15 = 1;
    puVar12 = (undefined4 *)((ulong)&local_a0 | 1);
    do {
      pbVar5 = (basic_string *)cocos2d::Value::asValueMap(this_00);
      local_90 = (char *)0x0;
      local_a0 = 0xe;
      *(undefined1 *)((long)puVar12 + 6) = 0x74;
      *(undefined2 *)(puVar12 + 1) = 0x6573;
      *puVar12 = 0x66666f5f;
      uStack_98 = 0;
      local_c0 = &local_a0;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        (pbVar5,(piecewise_construct_t *)&local_a0,(tuple *)&DAT_0188bb70,
                         (tuple *)&local_c0);
      cocos2d::Value::operator=((Value *)(lVar6 + 0x28),uVar15);
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      this_00 = this_00 + 0x10;
      uVar15 = uVar15 + 1;
    } while (pVVar2 != this_00);
  }
  uStack_98 = 0;
  local_90 = (char *)0x0;
  local_a0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    local_90 = *(char **)(param_2 + 0x10);
    uStack_98 = *(ulong *)(param_2 + 8);
    local_a0 = *(ulong *)param_2;
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
    if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar13 = *(void **)(param_2 + 0x10);
    if (uVar7 < 0x17) {
      pcVar14 = (char *)((ulong)&local_a0 | 1);
      local_a0 = (ulong)(byte)((int)uVar7 << 1);
      if (uVar7 != 0) goto LAB_009c183c;
    }
    else {
      uVar8 = uVar7 + 0x10 & 0xfffffffffffffff0;
      pcVar14 = operator_new(uVar8);
      local_a0 = uVar8 | 1;
                    /* try { // try from 009c1834 to 00ac191b has its CatchHandler @ 009c1654 */
      uStack_98 = uVar7;
      local_90 = pcVar14;
LAB_009c183c:
      memcpy(pcVar14,pvVar13,uVar7);
    }
    pcVar14[uVar7] = '\0';
  }
  uStack_b8 = 0;
  local_b0 = (char *)0x0;
  local_c0 = (ulong *)0x0;
  if (((byte)*param_3 & 1) == 0) {
    local_b0 = *(char **)(param_3 + 0x10);
    uStack_b8 = *(ulong *)(param_3 + 8);
    local_c0 = *(ulong **)param_3;
    goto LAB_009c18dc;
  }
  uVar7 = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar13 = *(void **)(param_3 + 0x10);
  if (uVar7 < 0x17) {
    pcVar14 = (char *)((ulong)&local_c0 | 1);
    local_c0 = (ulong *)(ulong)(byte)((int)uVar7 << 1);
    if (uVar7 != 0) goto LAB_009c18c8;
  }
  else {
                    /* catch() { ... } // from try @ 009c16d8 with catch @ 009c18ac */
    uVar8 = uVar7 + 0x10 & 0xfffffffffffffff0;
                    /* catch() { ... } // from try @ 009c16cc with catch @ 009c18b0 */
                    /* catch() { ... } // from try @ 009c16ac with catch @ 009c18b4 */
    pcVar14 = operator_new(uVar8);
    local_c0 = (ulong *)(uVar8 | 1);
                    /* catch() { ... } // from try @ 009c16e4 with catch @ 009c18c4 */
    uStack_b8 = uVar7;
    local_b0 = pcVar14;
LAB_009c18c8:
    memcpy(pcVar14,pvVar13,uVar7);
  }
  pcVar14[uVar7] = '\0';
LAB_009c18dc:
  local_70 = local_80;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>>>
          ::
          __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                    ((ulong *)(this + 8),(piecewise_construct_t *)local_80,(tuple *)&DAT_0188bb70,
                     (tuple *)&local_70);
  *(int *)(lVar6 + 0x18) = iVar1;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar6 + 0x20) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
                    /* try { // try from 009c191c to 00ac196f has its CatchHandler @ 009c191c
                       catch() { ... } // from try @ 009c191c with catch @ 009c191c
                       catch() { ... } // from try @ 009c1aac with catch @ 009c191c */
    pbVar5 = param_1 + 1;
    uVar7 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      pbVar5 = *(basic_string **)(param_1 + 0x10);
      uVar7 = *(ulong *)(param_1 + 8);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar6 + 0x20),(char *)pbVar5,uVar7);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar6 + 0x38) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_a0) {
    uVar7 = local_a0 >> 1 & 0x7f;
    pcVar14 = (char *)((ulong)&local_a0 | 1);
    if ((local_a0 & 1) != 0) {
      uVar7 = uStack_98;
      pcVar14 = local_90;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar6 + 0x38),pcVar14,uVar7);
  }
                    /* try { // try from 009c1970 to 00ac1987 has its CatchHandler @ 009c1b28 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar6 + 0x50) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_c0) {
    uVar7 = (ulong)local_c0 >> 1 & 0x7f;
    pcVar14 = (char *)((ulong)&local_c0 | 1);
                    /* try { // try from 009c1990 to 00ac199b has its CatchHandler @ 009c1b24 */
    if (((ulong)local_c0 & 1) != 0) {
      uVar7 = uStack_b8;
      pcVar14 = local_b0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar6 + 0x50),pcVar14,uVar7);
  }
                    /* try { // try from 009c199c to 00ac19a7 has its CatchHandler @ 009c1b20 */
  if ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)(lVar6 + 0x68) !=
      (vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_4) {
                    /* try { // try from 009c19a8 to 00ac1aab has its CatchHandler @ 009c1b38 */
    std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
    assign<cocos2d::Value*>
              ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)(lVar6 + 0x68),
               *(Value **)param_4,*(Value **)(param_4 + 8));
  }
  if (((ulong)local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
LAB_009c19d0:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

