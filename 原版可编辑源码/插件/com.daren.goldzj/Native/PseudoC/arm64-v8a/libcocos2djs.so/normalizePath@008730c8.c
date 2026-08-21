
/* cocos2d::FileUtils::normalizePath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void cocos2d::FileUtils::normalizePath(basic_string *param_1)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  byte *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar12;
  byte *in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar18;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar19;
  ulong uVar20;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar21;
  locale alStack_c0 [48];
  __shared_weak_count *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  FUN_00877378(alStack_c0,&DAT_01853d7b,0);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uVar13 = *(ulong *)(in_x1 + 8);
  pbVar3 = *(byte **)(in_x1 + 0x10);
  if ((*in_x1 & 1) == 0) {
    pbVar3 = in_x1 + 1;
    uVar13 = (ulong)(*in_x1 >> 1);
  }
  std::__ndk1::
  regex_replace<std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::regex_traits<char>,char>
            (&local_80,pbVar3,pbVar3 + uVar13,alStack_c0,"/",0);
  if (((byte)*in_x8 & 1) == 0) {
    *(undefined2 *)in_x8 = 0;
  }
  else {
    **(undefined1 **)(in_x8 + 0x10) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    if (((byte)*in_x8 & 1) != 0) {
      operator_delete(*(void **)(in_x8 + 0x10));
      *(undefined8 *)in_x8 = 0;
    }
  }
  uVar10 = local_70;
  uVar9 = uStack_78;
  p_Var2 = local_90;
  uStack_78 = 0;
  local_70 = 0;
  *(undefined8 *)(in_x8 + 8) = uVar9;
  *(undefined8 *)in_x8 = local_80;
  *(undefined8 *)(in_x8 + 0x10) = uVar10;
  local_80 = 0;
  if (local_90 != (__shared_weak_count *)0x0) {
    p_Var1 = local_90 + 8;
    do {
      lVar14 = *(long *)p_Var1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar11) {
        *(long *)p_Var1 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*(long *)local_90 + 0x10))(local_90);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
    }
  }
  std::__ndk1::locale::~locale(alStack_c0);
  FUN_00877378(alStack_c0,&DAT_01853d80,0);
  uVar13 = *(ulong *)(in_x8 + 8);
  pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (in_x8 + 0x10);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (((byte)*in_x8 & 1) == 0) {
    pbVar4 = in_x8 + 1;
    uVar13 = (ulong)((byte)*in_x8 >> 1);
  }
  std::__ndk1::
  regex_replace<std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::regex_traits<char>,char>
            (&local_80,pbVar4,pbVar4 + uVar13,alStack_c0,&DAT_0189703a,0);
  if (((byte)*in_x8 & 1) == 0) {
    *(undefined2 *)in_x8 = 0;
  }
  else {
    **(undefined1 **)(in_x8 + 0x10) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    if (((byte)*in_x8 & 1) != 0) {
      operator_delete(*(void **)(in_x8 + 0x10));
      *(undefined8 *)in_x8 = 0;
    }
  }
  uVar10 = local_70;
  uVar9 = uStack_78;
  pbVar4 = in_x8 + 1;
  uStack_78 = 0;
  local_70 = 0;
  *(undefined8 *)(in_x8 + 0x10) = uVar10;
  *(undefined8 *)(in_x8 + 8) = uVar9;
  *(undefined8 *)in_x8 = local_80;
  local_80 = 0;
  if (local_90 != (__shared_weak_count *)0x0) {
    p_Var2 = local_90 + 8;
    do {
      lVar14 = *(long *)p_Var2;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar11) {
        *(long *)p_Var2 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*(long *)local_90 + 0x10))(local_90);
      std::__ndk1::__shared_weak_count::__release_weak(local_90);
    }
  }
  std::__ndk1::locale::~locale(alStack_c0);
  bVar5 = *in_x8;
  uVar20 = *(ulong *)(in_x8 + 8);
  pbVar21 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (in_x8 + 0x10);
  bVar11 = ((byte)bVar5 & 1) == 0;
  pbVar12 = pbVar4;
  uVar13 = (ulong)((byte)bVar5 >> 1);
  if (!bVar11) {
    pbVar12 = pbVar21;
    uVar13 = uVar20;
  }
  if (1 < (long)uVar13) {
    pbVar18 = pbVar12 + uVar13;
    pbVar19 = pbVar12;
    do {
      while( true ) {
        if ((uVar13 - 1 == 0) ||
           (pbVar12 = memchr(pbVar12,0x2e,uVar13 - 1),
           pbVar12 ==
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0))
        goto LAB_00873474;
        if (*(short *)pbVar12 != 0x2e2e) break;
        lVar14 = (long)pbVar12 - (long)pbVar19;
        if (pbVar12 == pbVar18) {
          lVar14 = -1;
        }
        if (lVar14 + 1U < 4) goto LAB_00873474;
        pbVar12 = pbVar4;
        uVar13 = (ulong)((byte)bVar5 >> 1);
        if (!bVar11) {
          pbVar12 = pbVar21;
          uVar13 = uVar20;
        }
        uVar20 = uVar13;
        if (lVar14 - 2U <= uVar13) {
          uVar20 = lVar14 - 2U;
        }
        uVar16 = uVar13;
        if (1 < uVar13 - uVar20) {
          uVar16 = uVar20 + 1;
        }
        if ((long)uVar16 < 1) goto LAB_00873474;
        uVar16 = 1 - lVar14;
        if (uVar16 < ~uVar13) {
          uVar16 = ~uVar13;
        }
        lVar17 = (-2 - uVar13) - uVar16;
        if (lVar17 != -1) {
          lVar17 = -2;
        }
        lVar15 = 0;
        do {
          if (uVar16 + lVar17 + 2 == lVar15) goto LAB_00873474;
          lVar8 = lVar15 + (uVar20 - lVar17);
          lVar15 = lVar15 + -1;
        } while (pbVar12[lVar8 + -2] !=
                 (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                 0x2f);
        uVar16 = 1 - lVar14;
        if (uVar16 < ~uVar13) {
          uVar16 = ~uVar13;
        }
        lVar17 = (-2 - uVar13) - uVar16;
        if (lVar17 != -1) {
          lVar17 = -2;
        }
        if ((lVar15 == 0) ||
           (uVar13 = ((uVar20 - lVar17) + lVar15) - 1, uVar13 == 0xffffffffffffffff))
        goto LAB_00873474;
        pbVar12 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  replace(in_x8,uVar13,(lVar14 + 2) - uVar13,"",0);
        if (pbVar12 != in_x8) {
          uVar13 = *(ulong *)(pbVar12 + 8);
          pbVar21 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar12 + 0x10);
          if (((byte)*pbVar12 & 1) == 0) {
            pbVar21 = pbVar12 + 1;
            uVar13 = (ulong)((byte)*pbVar12 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (in_x8,(char *)pbVar21,uVar13);
        }
        bVar5 = *in_x8;
        uVar20 = *(ulong *)(in_x8 + 8);
        pbVar21 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(in_x8 + 0x10);
        bVar11 = ((byte)bVar5 & 1) == 0;
        uVar13 = (ulong)((byte)bVar5 >> 1);
        pbVar12 = pbVar4;
        if (!bVar11) {
          uVar13 = uVar20;
          pbVar12 = pbVar21;
        }
        pbVar18 = pbVar12 + uVar13;
        pbVar19 = pbVar12;
        if ((long)uVar13 < 2) goto LAB_00873474;
      }
      pbVar12 = pbVar12 + 1;
      uVar13 = (long)pbVar18 - (long)pbVar12;
    } while (1 < (long)uVar13);
  }
LAB_00873474:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

