
/* cocos2d::extension::Manifest::prependSearchPaths() */

void cocos2d::extension::Manifest::prependSearchPaths(void)

{
  __ndk1 *p_Var1;
  ulong uVar2;
  undefined1 *puVar3;
  __ndk1 *__n;
  byte *__s2;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  long in_x0;
  long *plVar11;
  __ndk1 *in_x2;
  __ndk1 *p_Var12;
  long lVar13;
  byte *__s1;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong local_a8;
  ulong uStack_a0;
  undefined1 *local_98;
  ulong local_90;
  ulong uStack_88;
  undefined1 *local_80;
  byte *local_70;
  byte *local_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  plVar11 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar11 + 0x90))(&local_70);
  pbVar9 = local_68;
  pbVar8 = local_70;
  pbVar17 = local_70;
  if (local_70 != local_68) {
    __n = *(__ndk1 **)(in_x0 + 0x38);
    __s2 = *(byte **)(in_x0 + 0x40);
    pbVar16 = local_70;
    if ((*(byte *)(in_x0 + 0x30) & 1) == 0) {
      __s2 = (byte *)(in_x0 + 0x31);
      __n = (__ndk1 *)(ulong)(*(byte *)(in_x0 + 0x30) >> 1);
    }
    do {
      bVar4 = *pbVar16;
      p_Var12 = (__ndk1 *)(ulong)(bVar4 >> 1);
      p_Var1 = p_Var12;
      if ((bVar4 & 1) != 0) {
        p_Var1 = *(__ndk1 **)(pbVar16 + 8);
      }
      if (p_Var1 == __n) {
        __s1 = *(byte **)(pbVar16 + 0x10);
        if ((bVar4 & 1) == 0) {
          __s1 = pbVar16 + 1;
        }
        pbVar6 = pbVar16;
        pbVar7 = __s2;
        p_Var1 = __n;
        pbVar17 = pbVar16;
        if ((bVar4 & 1) == 0) {
          while( true ) {
            if (p_Var1 == (__ndk1 *)0x0) goto LAB_00dfcd5c;
            if (pbVar6[1] != *pbVar7) break;
            p_Var12 = p_Var12 + -1;
            pbVar6 = pbVar6 + 1;
            pbVar7 = pbVar7 + 1;
            p_Var1 = p_Var12;
          }
        }
        else if ((__n == (__ndk1 *)0x0) ||
                (in_x2 = __n, iVar10 = memcmp(__s1,__s2,(size_t)__n), iVar10 == 0)) break;
      }
      pbVar16 = pbVar16 + 0x18;
      pbVar17 = pbVar9;
    } while (pbVar16 != pbVar9);
  }
LAB_00dfcd5c:
  if (pbVar17 == pbVar9) {
    in_x2 = (__ndk1 *)(in_x0 + 0x30);
                    /* try { // try from 00dfcd70 to 00efcd9f has its CatchHandler @ 00dfcd70
                       catch(type#1 @ 00000000) { ... } // from try @ 00dfcd70 with catch @ 00dfcd70
                       catch(type#1 @ 00000000) { ... } // from try @ 00dfcdfc with catch @ 00dfcd70
                        */
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::insert((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)&local_70,pbVar8);
  }
  lVar13 = *(long *)(in_x0 + 0x128);
  iVar10 = (int)((ulong)(*(long *)(in_x0 + 0x130) - lVar13) >> 3) * -0x55555555;
  if (iVar10 < 1) {
    if (pbVar17 != pbVar9) goto LAB_00dfceb0;
  }
  else {
                    /* try { // try from 00dfcda0 to 00efcdaf has its CatchHandler @ 00dfce48 */
    lVar14 = (long)iVar10;
    lVar15 = (long)iVar10 * 0x18;
    while( true ) {
      lVar14 = lVar14 + -1;
      lVar15 = lVar15 + -0x18;
                    /* try { // try from 00dfcdc8 to 00efcdcf has its CatchHandler @ 00dfcde4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_90,(basic_string *)(lVar13 + lVar15));
      uVar2 = local_90 >> 1 & 0x7f;
      if ((local_90 & 1) != 0) {
        uVar2 = uStack_88;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dfcdc8 with catch @ 00dfcde4
                        */
      if (uVar2 != 0) {
        puVar3 = (undefined1 *)((ulong)&local_90 | 1);
        if ((local_90 & 1) != 0) {
          puVar3 = local_80;
        }
                    /* try { // try from 00dfcdf8 to 00efcdfb has its CatchHandler @ 00dfce34 */
                    /* try { // try from 00dfcdfc to 00efce5b has its CatchHandler @ 00dfcd70 */
        if (puVar3[uVar2 - 1] != '/') {
          in_x2 = (__ndk1 *)0x1;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_90,"/",1);
        }
      }
      std::__ndk1::operator+
                ((__ndk1 *)(in_x0 + 0x30),(basic_string *)&local_90,(basic_string *)in_x2);
      if ((local_90 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dfcdf8 with catch @ 00dfce34
                        */
        *local_80 = 0;
        uStack_88 = 0;
        if ((local_90 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dfcda0 with catch @ 00dfce48
                        */
          operator_delete(local_80);
        }
      }
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
      in_x2 = (__ndk1 *)&local_90;
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::insert((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)&local_70,local_70);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (lVar14 < 1) break;
      lVar13 = *(long *)(in_x0 + 0x128);
    }
  }
  plVar11 = (long *)FileUtils::getInstance();
                    /* try { // try from 00dfcea0 to 00efcea3 has its CatchHandler @ 00dfceec */
  (**(code **)(*plVar11 + 0x88))(plVar11,&local_70);
LAB_00dfceb0:
  pbVar8 = local_70;
  if (local_70 != (byte *)0x0) {
    if (local_68 != local_70) {
      bVar4 = local_68[-0x18];
      pbVar9 = local_68 + -0x18;
      while( true ) {
        pbVar17 = pbVar9;
        if ((bVar4 & 1) != 0) {
          operator_delete(*(void **)(local_68 + -8));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dfcea0 with catch @ 00dfceec
                        */
        }
        if (pbVar8 == pbVar17) break;
        bVar4 = pbVar17[-0x18];
        pbVar9 = pbVar17 + -0x18;
        local_68 = pbVar17;
      }
    }
    local_68 = pbVar8;
    operator_delete(local_70);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

