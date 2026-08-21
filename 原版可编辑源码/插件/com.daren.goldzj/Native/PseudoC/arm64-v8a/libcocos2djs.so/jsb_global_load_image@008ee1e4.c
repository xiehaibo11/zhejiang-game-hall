
/* jsb_global_load_image(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, se::Value const&) */

undefined4 jsb_global_load_image(basic_string *param_1,Value *param_2)

{
  Value *pVVar1;
  __shared_weak_count *p_Var2;
  Downloader *this;
  __shared_weak_count *p_Var3;
  basic_string *pbVar4;
  basic_string bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  basic_string *__s;
  Value *pVVar10;
  int iVar11;
  __shared_weak_count *this_00;
  Object *this_01;
  basic_string *pbVar12;
  basic_string *pbVar13;
  basic_ostream *this_02;
  __shared_weak_count *p_Var14;
  long *plVar15;
  basic_string *pbVar16;
  long lVar17;
  ulong uVar18;
  code *pcVar19;
  long lVar20;
  undefined4 uVar21;
  basic_string *pbVar22;
  ulong uVar23;
  ulong uVar24;
  void *pvVar25;
  undefined **ppuVar26;
  undefined **__dest;
  __shared_weak_count *p_Var27;
  Value *local_2a0;
  ulong uStack_298;
  undefined **local_290;
  Value *local_288;
  __shared_weak_count *local_280;
  Value *local_270;
  ulong uStack_268;
  undefined **local_260;
  Value *local_258;
  __shared_weak_count *local_250;
  long local_248;
  __shared_weak_count *local_240;
  ulong local_238;
  ulong local_230;
  void *local_228;
  Value *local_220;
  Value *pVStack_218;
  undefined **local_210;
  undefined **ppuStack_208;
  locale alStack_200 [8];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  ulong local_1c8;
  undefined8 uStack_1c0;
  void *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined **local_1a0 [17];
  undefined8 local_118;
  undefined4 local_110;
  long alStack_100 [4];
  long *local_e0;
  Value *local_d0;
  Value *pVStack_c8;
  undefined **local_c0;
  Value **local_b0 [4];
  Value ***local_90;
  
  lVar8 = tpidr_el0;
  lVar17 = *(long *)(lVar8 + 0x28);
  uVar24 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar24 = *(ulong *)(param_1 + 8);
  }
  if (uVar24 == 0) {
    local_220 = (Value *)0x0;
    pVStack_218 = (Value *)0x0;
    local_210 = (undefined **)0x0;
    this_01 = (Object *)se::Value::toObject(param_2);
    se::Object::call(this_01,(vector *)&local_220,(Object *)0x0,(Value *)0x0);
    pVVar10 = local_220;
    pVVar1 = pVStack_218;
    if (local_220 != (Value *)0x0) {
      while (pVVar1 != pVVar10) {
        se::Value::~Value(pVVar1 + -0x10);
        pVVar1 = pVVar1 + -0x10;
      }
      pVStack_218 = pVVar10;
      operator_delete(local_220);
    }
    uVar21 = 1;
    goto LAB_008eed2c;
  }
  this_00 = operator_new(0x28);
  *(undefined8 *)(this_00 + 0x10) = 0;
  p_Var27 = this_00 + 8;
  *(long *)p_Var27 = 0;
  pVVar1 = (Value *)(this_00 + 0x18);
  *(undefined ***)this_00 = &PTR____shared_ptr_emplace_01c680d8;
  se::Value::Value(pVVar1,param_2);
  local_270 = (Value *)0x0;
  uStack_268 = 0;
  local_260 = (undefined **)0x0;
  bVar5 = *param_1;
  if (((byte)bVar5 & 1) == 0) {
    uStack_268 = *(ulong *)(param_1 + 8);
    local_270 = *(Value **)param_1;
    local_260 = *(undefined ***)(param_1 + 0x10);
    pbVar22 = *(basic_string **)(param_1 + 0x10);
    uVar24 = *(ulong *)(param_1 + 8);
    goto LAB_008ee358;
  }
  pbVar22 = *(basic_string **)(param_1 + 0x10);
  uVar24 = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < uVar24) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar24 < 0x17) {
    ppuVar26 = (undefined **)((ulong)&local_270 | 1);
    local_270 = (Value *)(ulong)(byte)((int)uVar24 << 1);
    if (uVar24 != 0) goto LAB_008ee344;
  }
  else {
    uVar23 = uVar24 + 0x10 & 0xfffffffffffffff0;
    ppuVar26 = operator_new(uVar23);
    local_270 = (Value *)(uVar23 | 1);
    uStack_268 = uVar24;
    local_260 = ppuVar26;
LAB_008ee344:
    memcpy(ppuVar26,pbVar22,uVar24);
  }
  *(undefined1 *)((long)ppuVar26 + uVar24) = 0;
LAB_008ee358:
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(p_Var27,0x10);
    if (bVar7) {
      *(long *)p_Var27 = *(long *)p_Var27 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  pbVar4 = pbVar22;
  if (((byte)bVar5 & 1) == 0) {
    uVar24 = (ulong)((byte)bVar5 >> 1);
    pbVar4 = param_1 + 1;
  }
  pbVar16 = pbVar4 + uVar24;
  pbVar12 = pbVar4;
  uVar18 = uVar24;
  local_258 = pVVar1;
  local_250 = this_00;
  uVar23 = uVar24;
  pbVar13 = pbVar4;
  if (6 < (long)uVar24) {
    do {
      uVar9 = uVar24;
      __s = pbVar4;
      if ((uVar18 - 6 == 0) ||
         (pbVar12 = memchr(pbVar12,0x68,uVar18 - 6), pbVar12 == (basic_string *)0x0)) break;
      iVar11 = memcmp(pbVar12,"http://",7);
      if (iVar11 == 0) {
        if ((pbVar12 != pbVar16) && (pbVar12 == pbVar4)) goto LAB_008ee460;
        break;
      }
      uVar18 = (long)pbVar16 - (long)(pbVar12 + 1);
      pbVar12 = pbVar12 + 1;
    } while (6 < (long)uVar18);
    do {
      if ((((long)uVar9 < 8) || (uVar9 - 7 == 0)) ||
         (pbVar12 = memchr(__s,0x68,uVar9 - 7), pbVar12 == (basic_string *)0x0)) break;
      if (*(long *)pbVar12 == 0x2f2f3a7370747468) {
        if ((pbVar12 != pbVar16) && (pbVar12 == pbVar4)) goto LAB_008ee460;
        break;
      }
      uVar9 = (long)pbVar16 - (long)(pbVar12 + 1);
      __s = pbVar12 + 1;
    } while( true );
  }
  do {
    if ((((long)uVar23 < 5) || (uVar23 - 4 == 0)) ||
       (pbVar13 = memchr(pbVar13,100,uVar23 - 4), pbVar13 == (basic_string *)0x0))
    goto LAB_008eea90;
    iVar11 = memcmp(pbVar13,"data:",5);
    if (iVar11 == 0) {
      if (((pbVar13 != pbVar16) && (pbVar13 == pbVar4)) &&
         (pbVar13 = pbVar4, uVar23 = uVar24, 6 < (long)uVar24)) goto LAB_008ee504;
      goto LAB_008eea90;
    }
    uVar23 = (long)pbVar16 - (long)(pbVar13 + 1);
    pbVar13 = pbVar13 + 1;
  } while( true );
LAB_008ee460:
  ppuVar26 = local_260;
  uVar24 = uStack_268;
  local_2a0 = (Value *)0x0;
  uStack_298 = 0;
  local_290 = (undefined **)0x0;
  if (((ulong)local_270 & 1) == 0) {
    local_290 = local_260;
    uStack_298 = uStack_268;
    local_2a0 = local_270;
  }
  else {
    if (0xffffffffffffffef < uStack_268) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_268 < 0x17) {
      __dest = (undefined **)((ulong)&local_2a0 | 1);
      local_2a0 = (Value *)(ulong)(byte)((int)uStack_268 << 1);
      if (uStack_268 != 0) goto LAB_008ee594;
    }
    else {
      uVar23 = uStack_268 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar23);
      local_2a0 = (Value *)(uVar23 | 1);
      uStack_298 = uVar24;
      local_290 = __dest;
LAB_008ee594:
      memcpy(__dest,ppuVar26,uVar24);
    }
    *(undefined1 *)((long)__dest + uVar24) = 0;
  }
  p_Var2 = this_00 + 8;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
    if (bVar7) {
      *(long *)p_Var2 = *(long *)p_Var2 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  local_e0 = (long *)0x0;
  local_288 = pVVar1;
  local_280 = this_00;
  plVar15 = operator_new(0x30);
  ppuVar26 = local_290;
  uVar24 = uStack_298;
  *plVar15 = (long)&PTR_FUN_01c68128;
  plVar15[1] = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  if (((ulong)local_2a0 & 1) == 0) {
    plVar15[3] = (long)local_290;
    plVar15[2] = uStack_298;
    plVar15[1] = (long)local_2a0;
  }
  else {
    if (0xffffffffffffffef < uStack_298) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_298 < 0x17) {
      pvVar25 = (void *)((long)plVar15 + 9);
      *(char *)(plVar15 + 1) = (char)((int)uStack_298 << 1);
      if (uStack_298 != 0) goto LAB_008ee658;
    }
    else {
      uVar23 = uStack_298 + 0x10 & 0xfffffffffffffff0;
      pvVar25 = operator_new(uVar23);
      plVar15[2] = uVar24;
      plVar15[3] = (long)pvVar25;
      plVar15[1] = uVar23 | 1;
LAB_008ee658:
      memcpy(pvVar25,ppuVar26,uVar24);
    }
    *(undefined1 *)((long)pvVar25 + uVar24) = 0;
  }
  local_288 = (Value *)0x0;
  local_280 = (__shared_weak_count *)0x0;
  plVar15[4] = (long)pVVar1;
  plVar15[5] = (long)this_00;
  local_1a0[0] = (undefined **)0x1c670c8;
  local_220 = (Value *)0x1c670a0;
  pVStack_218 = (Value *)0x0;
  local_210 = &PTR__basic_stringstream_01c66fb0;
  local_e0 = plVar15;
  std::__ndk1::ios_base::init((ios_base *)local_1a0,&ppuStack_208);
  local_118 = 0;
  local_110 = 0xffffffff;
  ppuStack_208 = &PTR__basic_streambuf_01c671a8;
  local_220 = (Value *)&PTR__basic_stringstream_01c66f88;
  local_1a0[0] = &PTR__basic_stringstream_01c66fd8;
  local_210 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::locale::locale(alStack_200);
  uStack_1d0 = 0;
  local_1d8 = 0;
  uStack_1e0 = 0;
  local_1e8 = 0;
  uStack_1f0 = 0;
  local_1f8 = 0;
  ppuStack_208 = &PTR__basic_stringbuf_01c67100;
  uStack_1b0 = 0;
  local_1b8 = (void *)0x0;
  uStack_1c0 = 0;
  local_1c8 = 0;
  local_1a8 = 0x18;
  this_02 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      ((basic_ostream *)&local_210,"jsb_loadimage_",0xe);
  uVar24 = DAT_01d1b3f0;
  DAT_01d1b3f0 = DAT_01d1b3f0 + 1;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_02,uVar24);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  if (DAT_01d36fb0 == (basic_string *)0x0) {
    p_Var14 = operator_new(0xf0);
    *(undefined8 *)(p_Var14 + 0x10) = 0;
    this = (Downloader *)(p_Var14 + 0x20);
    *(undefined ***)p_Var14 = &PTR____shared_ptr_emplace_01c67b38;
    *(undefined8 *)(p_Var14 + 8) = 0;
    cocos2d::network::Downloader::Downloader(this);
    p_Var2 = DAT_01d36fb8;
    DAT_01d36fb0 = (basic_string *)this;
    if (DAT_01d36fb8 != (__shared_weak_count *)0x0) {
      p_Var3 = DAT_01d36fb8 + 8;
      DAT_01d36fb8 = p_Var14;
      do {
        lVar20 = *(long *)p_Var3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
        if (bVar7) {
          *(long *)p_Var3 = lVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      p_Var14 = DAT_01d36fb8;
      if (lVar20 == 0) {
        (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
        p_Var14 = DAT_01d36fb8;
      }
    }
    DAT_01d36fb8 = p_Var14;
    local_d0 = (Value *)&PTR_FUN_01c67b88;
    local_b0[0] = &local_d0;
    FUN_008f4378(&local_d0,DAT_01d36fb0);
    if (&local_d0 == local_b0[0]) {
      pcVar19 = *(code **)(*local_b0[0] + 0x20);
LAB_008ee830:
      (*pcVar19)();
    }
    else if (local_b0[0] != (Value **)0x0) {
      pcVar19 = *(code **)(*local_b0[0] + 0x28);
      goto LAB_008ee830;
    }
    local_d0 = (Value *)&PTR_FUN_01c67c18;
    local_b0[0] = &local_d0;
    FUN_008f46ac(&local_d0,(Downloader *)(DAT_01d36fb0 + 0x90));
    if (&local_d0 == local_b0[0]) {
      pcVar19 = *(code **)(*local_b0[0] + 0x20);
    }
    else {
      if (local_b0[0] == (Value **)0x0) goto LAB_008ee884;
      pcVar19 = *(code **)(*local_b0[0] + 0x28);
    }
    (*pcVar19)();
  }
LAB_008ee884:
  cocos2d::network::Downloader::createDownloadDataTask(DAT_01d36fb0,param_1);
  std::__ndk1::
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,unsigned_char*,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>
  ::
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,unsigned_char*,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>&,false>
            ((pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,unsigned_char*,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>
              *)&local_d0,(basic_string *)(local_248 + 8),(function *)alStack_100);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,unsigned_char*,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,unsigned_char*,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,unsigned_char*,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
  ::
  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,unsigned_char*,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>
            ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,unsigned_char*,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,unsigned_char*,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,unsigned_char*,int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
              *)&DAT_01d36fc0,(basic_string *)&local_d0,(pair *)&local_d0);
  if (local_b0 == local_90) {
    (*(code *)(*local_90)[4])();
  }
  else if (local_90 != (Value ***)0x0) {
    (*(code *)(*local_90)[5])();
  }
  if (((ulong)local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (local_240 != (__shared_weak_count *)0x0) {
    p_Var2 = local_240 + 8;
    do {
      lVar20 = *(long *)p_Var2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar7) {
        *(long *)p_Var2 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*(long *)local_240 + 0x10))(local_240);
      std::__ndk1::__shared_weak_count::__release_weak(local_240);
    }
  }
  if ((local_238 & 1) != 0) {
    operator_delete(local_228);
  }
  local_220 = (Value *)&PTR__basic_stringstream_01c66f88;
  local_1a0[0] = &PTR__basic_stringstream_01c66fd8;
  local_210 = &PTR__basic_stringstream_01c66fb0;
  ppuStack_208 = &PTR__basic_stringbuf_01c67100;
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  ppuStack_208 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_200);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_1a0);
  if (alStack_100 == local_e0) {
    pcVar19 = *(code **)(*local_e0 + 0x20);
LAB_008ee9cc:
    (*pcVar19)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_e0 + 0x28);
    goto LAB_008ee9cc;
  }
  p_Var2 = local_280;
  ppuVar26 = local_290;
  pVVar1 = local_2a0;
  if (local_280 != (__shared_weak_count *)0x0) {
    p_Var14 = local_280 + 8;
    do {
      lVar20 = *(long *)p_Var14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(p_Var14,0x10);
      if (bVar7) {
        *(long *)p_Var14 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*(long *)local_280 + 0x10))(local_280);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
      ppuVar26 = local_290;
      pVVar1 = local_2a0;
    }
  }
joined_r0x008eea0c:
  if (((ulong)pVVar1 & 1) != 0) {
    operator_delete(ppuVar26);
  }
LAB_008eec7c:
  uVar21 = 1;
  p_Var2 = local_250;
  goto joined_r0x008eecd0;
  while( true ) {
    uVar23 = (long)pbVar16 - (long)(pbVar13 + 1);
    pbVar13 = pbVar13 + 1;
    if ((long)uVar23 < 7) break;
LAB_008ee504:
    if ((uVar23 - 6 == 0) ||
       (pbVar13 = memchr(pbVar13,0x62,uVar23 - 6), pbVar13 == (basic_string *)0x0)) break;
    iVar11 = memcmp(pbVar13,"base64,",7);
    if (iVar11 == 0) {
      if ((pbVar13 != pbVar16) && (lVar20 = (long)pbVar13 - (long)pbVar4, lVar20 != -1)) {
        pbVar22 = pbVar22 + lVar20 + 7;
        if (((byte)bVar5 & 1) == 0) {
          pbVar22 = param_1 + lVar20 + 8;
        }
        local_238 = 0;
        iVar11 = base64Decode(pbVar22,(int)uVar24 - (int)(lVar20 + 7),&local_238);
        if ((0 < iVar11) && (local_238 != 0)) {
          local_220 = (Value *)0x0;
          pVStack_218 = (Value *)0x0;
          local_210 = (undefined **)0x0;
          local_d0 = (Value *)0x0;
          pVStack_c8 = (Value *)0x0;
          local_c0 = (undefined **)0x0;
          FUN_008ef0d4(&local_270,&local_220,local_238,iVar11,&local_d0);
          goto LAB_008eec7c;
        }
        __android_log_print(6,"jswrapper",
                            "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp, 945): Decode base64 image data failed!\n"
                            ,iVar11);
        goto LAB_008eecc8;
      }
      break;
    }
  }
LAB_008eea90:
  plVar15 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar15 + 0x40))(&local_220,plVar15,param_1);
  pbVar22 = param_1 + 1;
  pbVar4 = pbVar22;
  uVar24 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    uVar24 = *(ulong *)(param_1 + 8);
  }
  if (6 < (long)uVar24) {
    pbVar13 = pbVar4 + uVar24;
    pbVar16 = pbVar4;
    do {
      if ((uVar24 - 6 == 0) ||
         (pbVar16 = memchr(pbVar16,0x66,uVar24 - 6), pbVar16 == (basic_string *)0x0)) break;
      iVar11 = memcmp(pbVar16,"file://",7);
      if (iVar11 == 0) {
        if ((pbVar16 != pbVar13) && (pbVar16 == pbVar4)) {
          plVar15 = (long *)cocos2d::FileUtils::getInstance();
          local_238 = 0;
          local_230 = 0;
          local_228 = (void *)0x0;
          bVar5 = *param_1;
          uVar24 = (ulong)((byte)bVar5 >> 1);
          if (((byte)bVar5 & 1) != 0) {
            uVar24 = *(ulong *)(param_1 + 8);
          }
          if (uVar24 < 7) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          uVar23 = uVar24 - 7;
          pbVar4 = pbVar22;
          if (((byte)bVar5 & 1) != 0) {
            pbVar4 = *(basic_string **)(param_1 + 0x10);
          }
          if (0xffffffffffffffef < uVar23) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar23 < 0x17) {
            pvVar25 = (void *)((ulong)&local_238 | 1);
            local_238 = (ulong)(byte)((int)uVar23 << 1);
            if (uVar23 != 0) goto LAB_008eebac;
          }
          else {
            uVar24 = uVar24 + 9 & 0xfffffffffffffff0;
            pvVar25 = operator_new(uVar24);
            local_238 = uVar24 | 1;
            local_230 = uVar23;
            local_228 = pvVar25;
LAB_008eebac:
            memcpy(pvVar25,pbVar4 + 7,uVar23);
          }
          *(undefined1 *)((long)pvVar25 + uVar23) = 0;
          (**(code **)(*plVar15 + 0x40))(&local_d0,plVar15,&local_238);
          if (((byte)local_220._0_1_ & 1) != 0) {
            *(undefined1 *)local_210 = 0;
            pVStack_218 = (Value *)0x0;
            if (((byte)local_220._0_1_ & 1) != 0) {
              operator_delete(local_210);
            }
          }
          pVStack_218 = pVStack_c8;
          local_220 = local_d0;
          local_d0 = (Value *)0x0;
          pVStack_c8 = (Value *)0x0;
          local_210 = local_c0;
          local_c0 = (undefined **)0x0;
          if ((local_238 & 1) != 0) {
            operator_delete(local_228);
          }
        }
        break;
      }
      pbVar16 = pbVar16 + 1;
      uVar24 = (long)pbVar13 - (long)pbVar16;
    } while (6 < (long)uVar24);
  }
  pVVar1 = (Value *)((ulong)local_220 >> 1 & 0x7f);
  if (((ulong)local_220 & 1) != 0) {
    pVVar1 = pVStack_218;
  }
  if (pVVar1 != (Value *)0x0) {
    local_d0 = (Value *)0x0;
    pVStack_c8 = (Value *)0x0;
    local_c0 = (undefined **)0x0;
    FUN_008ef0d4(&local_270,&local_220,0,0,&local_d0);
    ppuVar26 = local_210;
    pVVar1 = local_220;
    goto joined_r0x008eea0c;
  }
  if (((byte)*param_1 & 1) != 0) {
    pbVar22 = *(basic_string **)(param_1 + 0x10);
  }
  __android_log_print(6,"jswrapper",
                      "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_global.cpp, 958): File (%s) doesn\'t exist!\n"
                      ,pbVar22);
  if (((ulong)local_220 & 1) != 0) {
    operator_delete(local_210);
  }
LAB_008eecc8:
  uVar21 = 0;
  p_Var2 = local_250;
joined_r0x008eecd0:
  local_250 = p_Var2;
  if (p_Var2 != (__shared_weak_count *)0x0) {
    p_Var14 = p_Var2 + 8;
    do {
      lVar20 = *(long *)p_Var14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(p_Var14,0x10);
      if (bVar7) {
        *(long *)p_Var14 = lVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
    }
  }
  if (((ulong)local_270 & 1) != 0) {
    operator_delete(local_260);
  }
  do {
    lVar20 = *(long *)p_Var27;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(p_Var27,0x10);
    if (bVar7) {
      *(long *)p_Var27 = lVar20 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (lVar20 == 0) {
    (**(code **)(*(long *)this_00 + 0x10))(this_00);
    std::__ndk1::__shared_weak_count::__release_weak(this_00);
  }
LAB_008eed2c:
  if (*(long *)(lVar8 + 0x28) == lVar17) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

