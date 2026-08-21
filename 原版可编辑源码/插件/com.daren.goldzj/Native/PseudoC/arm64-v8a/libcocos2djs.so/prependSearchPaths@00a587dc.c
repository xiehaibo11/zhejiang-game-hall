
/* cocos2d::extension::Manifest::prependSearchPaths() */

void cocos2d::extension::Manifest::prependSearchPaths(void)

{
  __ndk1 *p_Var1;
  byte *__s2;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  long in_x0;
  long *plVar7;
  vector *pvVar8;
  undefined1 *puVar9;
  __ndk1 *in_x2;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  __ndk1 *p_Var14;
  void *__src;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  undefined1 *puVar18;
  ulong local_b8;
  void *local_a8;
  ulong local_a0;
  __ndk1 *p_Stack_98;
  undefined1 *local_90;
  byte *local_80;
  byte *local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar7 = (long *)FileUtils::getInstance();
  pvVar8 = (vector *)(**(code **)(*plVar7 + 0x80))();
  std::__ndk1::
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::vector((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            *)&local_80,pvVar8);
  pbVar5 = local_78;
  pbVar4 = local_80;
                    /* catch() { ... } // from try @ 00a58768 with catch @ 00a58834 */
  pbVar16 = local_80;
  if (local_80 != local_78) {
    p_Var14 = *(__ndk1 **)(in_x0 + 0x20);
    __s2 = *(byte **)(in_x0 + 0x28);
                    /* catch() { ... } // from try @ 00a58780 with catch @ 00a5884c */
                    /* catch() { ... } // from try @ 00a58740 with catch @ 00a58850 */
    pbVar15 = local_80;
                    /* catch() { ... } // from try @ 00a58788 with catch @ 00a58854 */
    if ((*(byte *)(in_x0 + 0x18) & 1) == 0) {
      __s2 = (byte *)(in_x0 + 0x19);
      p_Var14 = (__ndk1 *)(ulong)(*(byte *)(in_x0 + 0x18) >> 1);
    }
    do {
      bVar2 = *pbVar15;
                    /* catch() { ... } // from try @ 00a58770 with catch @ 00a58864 */
      p_Var1 = (__ndk1 *)(ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        p_Var1 = *(__ndk1 **)(pbVar15 + 8);
      }
      if (p_Var1 == p_Var14) {
        pbVar12 = *(byte **)(pbVar15 + 0x10);
                    /* catch() { ... } // from try @ 00a5872c with catch @ 00a5887c */
                    /* catch() { ... } // from try @ 00a58700 with catch @ 00a58880 */
        if ((bVar2 & 1) == 0) {
          pbVar12 = pbVar15 + 1;
        }
        pbVar16 = pbVar15;
        if ((bVar2 & 1) == 0) {
          if (p_Var14 == (__ndk1 *)0x0) break;
          lVar11 = -(long)(ulong)(bVar2 >> 1);
          pbVar12 = __s2;
          pbVar10 = pbVar15;
          while (pbVar10 = pbVar10 + 1, *pbVar10 == *pbVar12) {
            lVar11 = lVar11 + 1;
            pbVar12 = pbVar12 + 1;
            if (lVar11 == 0) goto LAB_00a588e0;
          }
        }
        else if ((p_Var14 == (__ndk1 *)0x0) ||
                (in_x2 = p_Var14, iVar6 = memcmp(pbVar12,__s2,(size_t)p_Var14), iVar6 == 0)) break;
      }
                    /* catch() { ... } // from try @ 00a58938 with catch @ 00a588d0 */
      pbVar15 = pbVar15 + 0x18;
      pbVar16 = pbVar5;
    } while (pbVar15 != pbVar5);
  }
LAB_00a588e0:
  if (pbVar16 == pbVar5) {
    in_x2 = (__ndk1 *)(in_x0 + 0x18);
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::insert((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)&local_80,pbVar4);
  }
  lVar11 = *(long *)(in_x0 + 0x110);
  iVar6 = (int)((ulong)(*(long *)(in_x0 + 0x118) - lVar11) >> 3) * -0x55555555;
  if (iVar6 < 1) {
    if (pbVar16 == pbVar5) {
LAB_00a58aa0:
      plVar7 = (long *)FileUtils::getInstance();
                    /* try { // try from 00a58aa8 to 00b58abf has its CatchHandler @ 00a58c28 */
      (**(code **)(*plVar7 + 0x78))(plVar7,&local_80);
    }
    pbVar4 = local_80;
    if (local_80 != (byte *)0x0) {
      while (pbVar5 = local_78, pbVar5 != pbVar4) {
        local_78 = pbVar5 + -0x18;
        if ((*local_78 & 1) != 0) {
                    /* try { // try from 00a58ad4 to 00b58ae7 has its CatchHandler @ 00a58c24 */
          operator_delete(*(void **)(pbVar5 + -8));
        }
      }
      local_78 = pbVar4;
      operator_delete(local_80);
    }
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00a58b10 to 00b58b17 has its CatchHandler @ 00a58bdc */
                    /* try { // try from 00a58b18 to 00b58b27 has its CatchHandler @ 00a58c0c */
                    /* try { // try from 00a58b28 to 00b58b2f has its CatchHandler @ 00a58bf4 */
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a58928 to 00b58937 has its CatchHandler @ 00a58a3c */
  lVar13 = (long)iVar6;
  puVar18 = (undefined1 *)((ulong)&local_a0 | 1);
  lVar17 = (lVar13 + (long)iVar6 * 2) * 8;
                    /* try { // try from 00a58938 to 00b58a57 has its CatchHandler @ 00a588d0 */
  do {
    lVar13 = lVar13 + -1;
    lVar11 = lVar11 + lVar17;
    p_Stack_98 = (__ndk1 *)0x0;
    local_90 = (undefined1 *)0x0;
    local_a0 = 0;
    if ((*(byte *)(lVar11 + -0x18) & 1) == 0) {
      local_90 = *(undefined1 **)(lVar11 + -8);
      p_Stack_98 = *(__ndk1 **)(lVar11 + -0x10);
      local_a0 = *(ulong *)(lVar11 + -0x18);
    }
    else {
      p_Var14 = *(__ndk1 **)(lVar11 + -0x10);
      if ((__ndk1 *)0xffffffffffffffef < p_Var14) {
                    /* try { // try from 00a58b30 to 00b58b5f has its CatchHandler @ 00a58bfc */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      __src = *(void **)(lVar11 + -8);
      if (p_Var14 < (__ndk1 *)0x17) {
        local_a0 = (ulong)(byte)((int)p_Var14 << 1);
        puVar9 = puVar18;
        if (p_Var14 != (__ndk1 *)0x0) goto LAB_00a589c8;
      }
      else {
        puVar9 = operator_new((ulong)(p_Var14 + 0x10) & 0xfffffffffffffff0);
        local_a0 = (ulong)(p_Var14 + 0x10) & 0xfffffffffffffff0 | 1;
        p_Stack_98 = p_Var14;
        local_90 = puVar9;
LAB_00a589c8:
        in_x2 = p_Var14;
        memcpy(puVar9,__src,(size_t)p_Var14);
      }
      puVar9[(long)p_Var14] = 0;
    }
    p_Var14 = (__ndk1 *)(local_a0 >> 1 & 0x7f);
    if ((local_a0 & 1) != 0) {
      p_Var14 = p_Stack_98;
    }
    if (p_Var14 != (__ndk1 *)0x0) {
      puVar9 = puVar18;
      if ((local_a0 & 1) != 0) {
        puVar9 = local_90;
      }
      if ((puVar9 + (long)p_Var14)[-1] != '/') {
        in_x2 = (__ndk1 *)0x1;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a0,"/",1);
      }
    }
    std::__ndk1::operator+((__ndk1 *)(in_x0 + 0x18),(basic_string *)&local_a0,(basic_string *)in_x2)
    ;
    if ((local_a0 & 1) != 0) {
      *local_90 = 0;
      p_Stack_98 = (__ndk1 *)0x0;
      if ((local_a0 & 1) != 0) {
                    /* try { // try from 00a58a58 to 00b58aa7 has its CatchHandler @ 00a58a58
                       catch() { ... } // from try @ 00a58a58 with catch @ 00a58a58
                       catch() { ... } // from try @ 00a58b60 with catch @ 00a58a58 */
        operator_delete(local_90);
      }
    }
    local_90 = local_a8;
    local_a0 = local_b8;
    in_x2 = (__ndk1 *)&local_a0;
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::insert((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)&local_80,local_80);
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if (lVar13 < 1) goto LAB_00a58aa0;
    lVar11 = *(long *)(in_x0 + 0x110);
    lVar17 = lVar17 + -0x18;
  } while( true );
}

