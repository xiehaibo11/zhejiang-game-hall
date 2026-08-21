
/* XMLHttpRequest::onResponse(cocos2d::network::HttpClient*, cocos2d::network::HttpResponse*) */

void __thiscall
XMLHttpRequest::onResponse(XMLHttpRequest *this,HttpClient *param_1,HttpResponse *param_2)

{
  __shared_weak_count *p_Var1;
  void *pvVar2;
  bool bVar3;
  long lVar4;
  Scheduler *this_00;
  __shared_weak_count *this_01;
  char cVar5;
  size_t sVar6;
  undefined **ppuVar7;
  long *plVar8;
  basic_istream *pbVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  ulong uVar15;
  char *__s;
  undefined **ppuVar16;
  void *pvVar17;
  ulong uVar18;
  HttpResponse *__s_00;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulong local_210;
  undefined8 uStack_208;
  void *local_200;
  undefined **local_1f8;
  ulong local_1f0;
  undefined **local_1e8;
  ulong local_1e0;
  size_t local_1d8;
  void *local_1d0;
  locale alStack_1c8 [8];
  undefined **local_1c0;
  size_t sStack_1b8;
  undefined **local_1b0;
  locale alStack_1a8 [8];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong local_170;
  undefined8 uStack_168;
  void *local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined **local_148 [17];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  undefined **ppuVar14;
  
  this_01 = DAT_01d35b10;
  this_00 = cocos2d::Application::_scheduler;
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
    p_Var1 = DAT_01d35b10 + 8;
    do {
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  cocos2d::Scheduler::unscheduleAllForTarget(this_00,this);
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      lVar11 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
    }
  }
  this[0x26b] = (XMLHttpRequest)0x0;
  if (this[0x26a] != (XMLHttpRequest)0x0) {
    this[0x268] = (XMLHttpRequest)0x1;
    if (*(long **)(this + 0x90) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x90) + 0x30))();
    }
    goto LAB_008f9d70;
  }
  if ((this[0x266] != (XMLHttpRequest)0x0) || (this[0x263] == (XMLHttpRequest)0x0))
  goto LAB_008f9d70;
  lVar11 = *(long *)(param_2 + 0x10);
  if ((*(byte *)(lVar11 + 0x40) & 1) == 0) {
    __s = (char *)(lVar11 + 0x41);
  }
  else {
    __s = *(char **)(lVar11 + 0x50);
  }
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = (void *)0x0;
  sVar6 = strlen(__s);
  if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar6 < 0x17) {
    pvVar17 = (void *)((ulong)&local_1e0 | 1);
    local_1e0 = CONCAT71(local_1e0._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_008f9e20;
  }
  else {
    uVar19 = sVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar17 = operator_new(uVar19);
    local_1e0 = uVar19 | 1;
    local_1d8 = sVar6;
    local_1d0 = pvVar17;
LAB_008f9e20:
    memcpy(pvVar17,__s,sVar6);
  }
  *(undefined1 *)((long)pvVar17 + sVar6) = 0;
  sVar6 = (ulong)((byte)local_1e0 >> 1);
  if ((local_1e0 & 1) != 0) {
    sVar6 = local_1d8;
  }
  if (sVar6 == 0) {
    pvVar17 = (void *)((ulong)&local_1e0 | 1);
  }
  else {
    pvVar17 = (void *)((ulong)&local_1e0 | 1);
    pvVar2 = pvVar17;
    if ((local_1e0 & 1) != 0) {
      pvVar2 = local_1d0;
    }
    __android_log_print(3,"jswrapper","XMLHttpRequest::onResponse, %s completed\n",pvVar2);
  }
  lVar11 = *(long *)(param_2 + 0x50);
  if (((byte)local_1e0 & 1) != 0) {
    pvVar17 = local_1d0;
  }
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  sprintf((char *)&local_b0,"HTTP Status Code: %ld, tag = %s",lVar11,pvVar17);
  if (((byte)this[0x1e0] & 1) == 0) {
    *(undefined2 *)(this + 0x1e0) = 0;
  }
  else {
    **(undefined1 **)(this + 0x1f0) = 0;
    *(undefined8 *)(this + 0x1e8) = 0;
  }
  cocos2d::Data::clear((Data *)(this + 0x240));
  if (param_2[0x18] == (HttpResponse)0x0) {
    if (((byte)param_2[0x58] & 1) == 0) {
      __s_00 = param_2 + 0x59;
    }
    else {
      __s_00 = *(HttpResponse **)(param_2 + 0x68);
    }
    local_1c0 = (undefined **)0x0;
    sStack_1b8 = 0;
    local_1b0 = (undefined **)0x0;
    sVar6 = strlen((char *)__s_00);
    if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar6 < 0x17) {
      ppuVar16 = (undefined **)((ulong)&local_1c0 | 1);
      local_1c0 = (undefined **)CONCAT71(local_1c0._1_7_,(char)((int)sVar6 << 1));
      ppuVar10 = ppuVar16;
      if (sVar6 != 0) goto LAB_008fa2b0;
    }
    else {
      uVar19 = sVar6 + 0x10 & 0xfffffffffffffff0;
      ppuVar10 = operator_new(uVar19);
      local_1c0 = (undefined **)(uVar19 | 1);
      ppuVar16 = (undefined **)((ulong)&local_1c0 | 1);
      sStack_1b8 = sVar6;
      local_1b0 = ppuVar10;
LAB_008fa2b0:
      memcpy(ppuVar10,__s_00,sVar6);
    }
    *(undefined1 *)((long)ppuVar10 + sVar6) = 0;
    if (((ulong)local_1c0 & 1) != 0) {
      ppuVar16 = local_1b0;
    }
    __android_log_print(3,"jswrapper","Response failed, error buffer: %s\n",ppuVar16);
    if (1 < lVar11 + 1U) {
      if (((ulong)local_1c0 & 1) != 0) {
        operator_delete(local_1b0);
      }
      goto LAB_008f9ef8;
    }
    this[0x265] = (XMLHttpRequest)0x1;
    *(undefined2 *)(this + 0x260) = 0;
    if (((byte)this[0x210] & 1) == 0) {
      *(undefined2 *)(this + 0x210) = 0;
      plVar8 = *(long **)(this + 0x120);
    }
    else {
      **(undefined1 **)(this + 0x220) = 0;
      *(undefined8 *)(this + 0x218) = 0;
      plVar8 = *(long **)(this + 0x120);
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x30))();
    }
    this[0x268] = (XMLHttpRequest)0x1;
    ppuVar16 = local_1b0;
    ppuVar10 = local_1c0;
    if (*(long **)(this + 0x90) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x90) + 0x30))();
      ppuVar16 = local_1b0;
      ppuVar10 = local_1c0;
    }
  }
  else {
LAB_008f9ef8:
    ppuVar16 = *(undefined ***)(param_2 + 0x38);
    ppuVar10 = *(undefined ***)(param_2 + 0x40);
    local_1f8 = (undefined **)0x0;
    local_1f0 = 0;
    local_1e8 = (undefined **)0x0;
    uVar19 = (long)ppuVar10 - (long)ppuVar16;
    if (0xffffffffffffffef < uVar19) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar19 < 0x17) {
      local_1f8 = (undefined **)(ulong)(byte)((int)uVar19 << 1);
      ppuVar7 = (undefined **)((ulong)&local_1f8 | 1);
    }
    else {
      uVar18 = uVar19 + 0x10 & 0xfffffffffffffff0;
      ppuVar7 = operator_new(uVar18);
      local_1f8 = (undefined **)(uVar18 | 1);
      local_1f0 = uVar19;
      local_1e8 = ppuVar7;
    }
    if (ppuVar16 != ppuVar10) {
      ppuVar12 = ppuVar7;
      ppuVar14 = ppuVar16;
      if ((uVar19 < 0x20) ||
         ((ppuVar7 < ppuVar10 && (ppuVar16 < (undefined **)((long)ppuVar7 + uVar19))))) {
LAB_008f9fc4:
        do {
          ppuVar13 = (undefined **)((long)ppuVar14 + 1);
          *(undefined1 *)ppuVar12 = *(undefined1 *)ppuVar14;
          ppuVar12 = (undefined **)((long)ppuVar12 + 1);
          ppuVar14 = ppuVar13;
        } while (ppuVar10 != ppuVar13);
      }
      else {
        uVar15 = uVar19 & 0xffffffffffffffe0;
        ppuVar12 = ppuVar16 + 2;
        ppuVar14 = ppuVar7 + 2;
        uVar18 = uVar15;
        do {
          ppuVar13 = ppuVar12 + -1;
          puVar20 = ppuVar12[-2];
          puVar22 = ppuVar12[1];
          puVar21 = *ppuVar12;
          ppuVar12 = ppuVar12 + 4;
          uVar18 = uVar18 - 0x20;
          ppuVar14[-1] = *ppuVar13;
          ppuVar14[-2] = puVar20;
          ppuVar14[1] = puVar22;
          *ppuVar14 = puVar21;
          ppuVar14 = ppuVar14 + 4;
        } while (uVar18 != 0);
        ppuVar12 = (undefined **)((long)ppuVar7 + uVar15);
        ppuVar14 = (undefined **)((long)ppuVar16 + uVar15);
        if (uVar15 != uVar19) goto LAB_008f9fc4;
      }
      ppuVar7 = (undefined **)((long)ppuVar7 + ((long)ppuVar10 - (long)ppuVar16));
    }
    *(undefined1 *)ppuVar7 = 0;
    local_148[0] = (undefined **)0x1c683f8;
    local_1c0 = (undefined **)0x1c683d0;
    sStack_1b8 = 0;
    std::__ndk1::ios_base::init
              ((ios_base *)local_148,
               (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b0);
    local_c0 = 0;
    local_b8 = 0xffffffff;
    local_1c0 = &PTR__basic_istringstream_01c68380;
    local_148[0] = &PTR__basic_istringstream_01c683a8;
    local_1b0 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::locale(alStack_1a8);
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    local_160 = (void *)0x0;
    local_150 = 8;
    local_1b0 = &PTR__basic_stringbuf_01c67100;
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        &local_1b0,(basic_string *)&local_1f8);
    local_210 = 0;
    uStack_208 = 0;
    local_200 = (void *)0x0;
    while( true ) {
      std::__ndk1::ios_base::getloc();
      plVar8 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_1c8,(id *)&std::__ndk1::ctype<char>::id);
      cVar5 = (**(code **)(*plVar8 + 0x38))(plVar8,10);
      std::__ndk1::locale::~locale(alStack_1c8);
      pbVar9 = std::__ndk1::
               getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         ((basic_istream *)&local_1c0,(basic_string *)&local_210,cVar5);
      if (((byte)pbVar9[*(long *)(*(long *)pbVar9 + -0x18) + 0x20] & 5) != 0) break;
      getHeader(this,(basic_string *)&local_210);
    }
    if (((byte)this[0x262] | 4) == 4) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x1e0),*(char **)(param_2 + 0x20),
             *(long *)(param_2 + 0x28) - (long)*(char **)(param_2 + 0x20));
    }
    else {
      cocos2d::Data::copy((Data *)(this + 0x240),*(uchar **)(param_2 + 0x20),
                          *(long *)(param_2 + 0x28) - (long)*(uchar **)(param_2 + 0x20));
    }
    *(short *)(this + 0x260) = (short)lVar11;
    if (this[0x263] != (XMLHttpRequest)0x4) {
      this[0x263] = (XMLHttpRequest)0x4;
      if (*(long **)(this + 0xc0) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0xc0) + 0x30))();
      }
    }
    if (*(long **)(this + 0x60) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x60) + 0x30))();
    }
    this[0x268] = (XMLHttpRequest)0x1;
    if (*(long **)(this + 0x90) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x90) + 0x30))();
    }
    if ((local_210 & 1) != 0) {
      operator_delete(local_200);
    }
    local_1c0 = &PTR__basic_istringstream_01c68380;
    local_148[0] = &PTR__basic_istringstream_01c683a8;
    local_1b0 = &PTR__basic_stringbuf_01c67100;
    if ((local_170 & 1) != 0) {
      operator_delete(local_160);
    }
    local_1b0 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_1a8);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_148);
    ppuVar16 = local_1e8;
    ppuVar10 = local_1f8;
  }
  if (((ulong)ppuVar10 & 1) != 0) {
    operator_delete(ppuVar16);
  }
  if ((local_1e0 & 1) != 0) {
    operator_delete(local_1d0);
  }
LAB_008f9d70:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

