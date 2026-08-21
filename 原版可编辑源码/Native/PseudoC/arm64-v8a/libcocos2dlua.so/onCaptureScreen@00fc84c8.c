
/* cocos2d::utils::onCaptureScreen(std::__ndk1::function<void (bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)> const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void cocos2d::utils::onCaptureScreen(function *param_1,basic_string *param_2)

{
  basic_string *pbVar1;
  undefined1 *puVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined7 uVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  __shared_weak_count *this;
  uchar *puVar12;
  __shared_weak_count *this_00;
  Image *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  undefined8 uVar14;
  AsyncTaskPool *pAVar15;
  undefined1 *puVar16;
  code *pcVar17;
  int iVar18;
  __shared_weak_count *p_Var19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  __shared_weak_count *p_Var25;
  undefined8 local_1a8;
  ulong uStack_1a0;
  undefined1 *local_198;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_190;
  undefined1 uStack_18f;
  undefined6 uStack_18e;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 *local_180;
  float local_178;
  float fStack_174;
  long alStack_170 [4];
  long *local_150;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_140 [32];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_120;
  long alStack_110 [4];
  long *local_f0;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined1 *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [16];
  void *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_a0;
  undefined7 uStack_88;
  undefined1 local_81;
  undefined7 uStack_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  if (DAT_0179251c == '\x01') {
    plVar9 = *(long **)(param_1 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_c0[0] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
      (**(code **)(*plVar9 + 0x30))(plVar9,local_c0,param_2);
    }
    goto LAB_00fc8b70;
  }
  DAT_0179251c = '\x01';
  lVar10 = Director::getInstance();
  (**(code **)(**(long **)(lVar10 + 0x108) + 0x48))(&local_178);
  iVar22 = (int)local_178;
  uVar23 = (uint)fStack_174;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_190,"");
  iVar4 = uVar23 * iVar22 * 4;
  iVar18 = iVar4;
  if ((int)(uVar23 * iVar22) < 0) {
    iVar18 = -1;
  }
  pvVar11 = operator_new__((long)iVar18);
  this = operator_new(0x20);
  *(undefined8 *)(this + 0x10) = 0;
  *(void **)(this + 0x18) = pvVar11;
  p_Var25 = this + 8;
  *(undefined8 *)p_Var25 = 0;
  *(undefined ***)this = &PTR____shared_weak_count_01723a20;
  glPixelStorei(0xd05,1);
  glReadPixels(0,0,iVar22,uVar23,0x1908,0x1401,pvVar11);
  puVar12 = operator_new__((long)iVar18);
  this_00 = operator_new(0x20);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(uchar **)(this_00 + 0x18) = puVar12;
  p_Var19 = this_00 + 8;
  *(undefined8 *)p_Var19 = 0;
  *(undefined ***)this_00 = &PTR____shared_weak_count_01723a70;
  if (0 < (int)uVar23) {
    iVar18 = 0;
    uVar20 = (ulong)uVar23;
    iVar21 = iVar22 * (uVar23 - 1) * 4;
    do {
      memcpy(puVar12 + iVar21,(void *)((long)pvVar11 + (long)iVar18),(long)(iVar22 * 4));
      iVar21 = iVar21 + iVar22 * -4;
      uVar20 = uVar20 - 1;
      iVar18 = iVar18 + iVar22 * 4;
    } while (uVar20 != 0);
  }
  this_01 = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this_01 == (Image *)0x0) {
    plVar9 = *(long **)(param_1 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_c0[0] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
      (**(code **)(*plVar9 + 0x30))(plVar9,local_c0,&local_190);
    }
    DAT_0179251c = '\0';
  }
  else {
    Image::Image(this_01);
    Image::initWithRawData(this_01,puVar12,(long)iVar4,iVar22,uVar23,8,false);
    plVar9 = (long *)FileUtils::getInstance();
    uVar20 = (**(code **)(*plVar9 + 0x140))(plVar9,param_2);
    if ((uVar20 & 1) == 0) {
      plVar9 = (long *)FileUtils::getInstance();
      (**(code **)(*plVar9 + 0xa0))(local_c0);
      uVar20 = *(ulong *)(param_2 + 8);
      pbVar1 = *(basic_string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        pbVar1 = param_2 + 1;
        uVar20 = (ulong)((byte)*param_2 >> 1);
      }
      pbVar13 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append(local_c0,(char *)pbVar1,uVar20);
      puVar2 = *(undefined1 **)(pbVar13 + 0x10);
      bVar3 = *pbVar13;
      uStack_80 = (undefined7)((ulong)*(undefined8 *)(pbVar13 + 8) >> 8);
      uStack_88 = (undefined7)*(undefined8 *)(pbVar13 + 1);
      local_81 = (undefined1)((ulong)*(undefined8 *)(pbVar13 + 1) >> 0x38);
      *(undefined8 *)pbVar13 = 0;
      *(undefined8 *)(pbVar13 + 8) = 0;
      *(undefined8 *)(pbVar13 + 0x10) = 0;
      if (((byte)local_190 & 1) != 0) {
        *local_180 = 0;
        uStack_188 = 0;
        uStack_187 = 0;
        if (((byte)local_190 & 1) != 0) {
          operator_delete(local_180);
        }
      }
      uVar8 = uStack_88;
      uStack_88 = 0;
      uStack_18f = (undefined1)uVar8;
      uStack_18e = (undefined6)((uint7)uVar8 >> 8);
      uStack_188 = local_81;
      uStack_187 = uStack_80;
      local_81 = 0;
      uStack_80 = 0;
      local_190 = bVar3;
      local_180 = puVar2;
      if (((byte)local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
    }
    else if (&local_190 !=
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_2) {
      uVar20 = *(ulong *)(param_2 + 8);
      pbVar1 = *(basic_string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        pbVar1 = param_2 + 1;
        uVar20 = (ulong)((byte)*param_2 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(&local_190,(char *)pbVar1,uVar20);
    }
    plVar9 = *(long **)(param_1 + 0x20);
    if (plVar9 == (long *)0x0) {
      local_f0 = (long *)0x0;
    }
    else if ((long *)param_1 == plVar9) {
      local_f0 = alStack_110;
      (**(code **)(*plVar9 + 0x18))(plVar9,alStack_110);
    }
    else {
      local_f0 = (long *)(**(code **)(*plVar9 + 0x10))();
    }
    puVar2 = local_180;
    uStack_d8 = 0;
    local_d0 = (undefined1 *)0x0;
    local_e0 = 0;
    if (((byte)local_190 & 1) == 0) {
      uStack_d8 = CONCAT71(uStack_187,uStack_188);
      local_e0 = CONCAT62(uStack_18e,CONCAT11(uStack_18f,local_190));
      local_d0 = local_180;
    }
    else {
      uVar20 = CONCAT71(uStack_187,uStack_188);
      if (0xffffffffffffffef < uVar20) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar20 < 0x17) {
        puVar16 = (undefined1 *)((long)&local_e0 + 1);
        local_e0 = (ulong)(byte)((int)uVar20 << 1);
        if (uVar20 != 0) goto LAB_00fc8884;
      }
      else {
        uVar24 = uVar20 + 0x10 & 0xfffffffffffffff0;
        puVar16 = operator_new(uVar24);
        local_e0 = uVar24 | 1;
        uStack_d8 = uVar20;
        local_d0 = puVar16;
LAB_00fc8884:
        memcpy(puVar16,puVar2,uVar20);
      }
      puVar16[uVar20] = 0;
    }
    local_a0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0
    ;
    pbVar13 = operator_new(0x60);
    *(undefined ***)pbVar13 = &PTR_FUN_01723ac0;
    if (local_f0 == (long *)0x0) {
      *(undefined8 *)(pbVar13 + 0x30) = 0;
    }
    else if (alStack_110 == local_f0) {
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (pbVar13 + 0x30) = pbVar13 + 0x10;
      (**(code **)(*local_f0 + 0x18))();
    }
    else {
      uVar14 = (**(code **)(*local_f0 + 0x10))();
      *(undefined8 *)(pbVar13 + 0x30) = uVar14;
    }
    puVar2 = local_d0;
    uVar24 = uStack_d8;
    uVar20 = local_e0;
    uStack_d8 = 0;
    local_d0 = (undefined1 *)0x0;
    local_e0 = 0;
    *(undefined1 **)(pbVar13 + 0x50) = puVar2;
    *(ulong *)(pbVar13 + 0x48) = uVar24;
    *(ulong *)(pbVar13 + 0x40) = uVar20;
    local_a0 = pbVar13;
    if (alStack_110 == local_f0) {
      pcVar17 = *(code **)(*local_f0 + 0x20);
LAB_00fc893c:
      (*pcVar17)();
    }
    else if (local_f0 != (long *)0x0) {
      pcVar17 = *(code **)(*local_f0 + 0x28);
      goto LAB_00fc893c;
    }
    pAVar15 = (AsyncTaskPool *)AsyncTaskPool::getInstance();
    if (local_a0 ==
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
      local_120 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  0x0;
    }
    else if (local_c0 == local_a0) {
      local_120 = abStack_140;
      (**(code **)(*(long *)local_a0 + 0x18))(local_a0,abStack_140);
    }
    else {
      local_120 = local_a0;
      local_a0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 0x0;
    }
    puVar2 = local_180;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = (undefined1 *)0x0;
    if (((byte)local_190 & 1) == 0) {
      uStack_1a0 = CONCAT71(uStack_187,uStack_188);
      local_1a8 = CONCAT62(uStack_18e,CONCAT11(uStack_18f,local_190));
      local_198 = local_180;
    }
    else {
      uVar20 = CONCAT71(uStack_187,uStack_188);
      if (0xffffffffffffffef < uVar20) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar20 < 0x17) {
        puVar16 = (undefined1 *)((long)&local_1a8 + 1);
        local_1a8 = (ulong)(byte)((int)uVar20 << 1);
        if (uVar20 != 0) goto LAB_00fc8a00;
      }
      else {
        uVar24 = uVar20 + 0x10 & 0xfffffffffffffff0;
        puVar16 = operator_new(uVar24);
        local_1a8 = uVar24 | 1;
        uStack_1a0 = uVar20;
        local_198 = puVar16;
LAB_00fc8a00:
        memcpy(puVar16,puVar2,uVar20);
      }
      puVar16[uVar20] = 0;
    }
    local_150 = (long *)0x0;
    local_150 = operator_new(0x28);
    puVar2 = local_198;
    uVar24 = uStack_1a0;
    uVar20 = local_1a8;
    uStack_1a0 = 0;
    local_198 = (void *)0x0;
    local_1a8 = 0;
    *local_150 = (long)&PTR_FUN_01723b40;
    local_150[1] = (long)this_01;
    local_150[4] = (long)puVar2;
    local_150[3] = uVar24;
    local_150[2] = uVar20;
    AsyncTaskPool::enqueue(pAVar15,0,abStack_140,0,alStack_170);
    if (alStack_170 == local_150) {
      pcVar17 = *(code **)(*local_150 + 0x20);
LAB_00fc8a8c:
      (*pcVar17)();
    }
    else if (local_150 != (long *)0x0) {
      pcVar17 = *(code **)(*local_150 + 0x28);
      goto LAB_00fc8a8c;
    }
    if ((local_1a8 & 1) != 0) {
      operator_delete(local_198);
    }
    if (abStack_140 == local_120) {
      pcVar17 = *(code **)(*(long *)local_120 + 0x20);
LAB_00fc8ac8:
      (*pcVar17)();
    }
    else if (local_120 !=
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0)
    {
      pcVar17 = *(code **)(*(long *)local_120 + 0x28);
      goto LAB_00fc8ac8;
    }
    if (local_c0 == local_a0) {
      (**(code **)(*(long *)local_a0 + 0x20))();
    }
    else if (local_a0 !=
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0)
    {
      (**(code **)(*(long *)local_a0 + 0x28))();
    }
  }
  do {
    lVar10 = *(long *)p_Var19;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(p_Var19,0x10);
    if (bVar6) {
      *(long *)p_Var19 = lVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*(long *)this_00 + 0x10))(this_00);
    std::__ndk1::__shared_weak_count::__release_weak(this_00);
  }
  do {
    lVar10 = *(long *)p_Var25;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(p_Var25,0x10);
    if (bVar6) {
      *(long *)p_Var25 = lVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*(long *)this + 0x10))(this);
    std::__ndk1::__shared_weak_count::__release_weak(this);
  }
  if (((byte)local_190 & 1) != 0) {
    operator_delete(local_180);
  }
LAB_00fc8b70:
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

