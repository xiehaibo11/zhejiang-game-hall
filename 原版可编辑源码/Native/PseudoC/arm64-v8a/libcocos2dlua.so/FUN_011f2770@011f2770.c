
void FUN_011f2770(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  __shared_count *p_Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 ***local_78;
  undefined8 **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0172e3a0;
  param_1[1] = param_2 + -1;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar7 = param_1 + 2;
  *plVar7 = (long)(param_1 + 6);
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[4] = param_1 + 0x22;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  plVar9 = param_1 + 3;
  *plVar9 = (long)(param_1 + 0x22);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x24),"C");
  DAT_01794cb0 = &PTR__collate_0172f320;
  *plVar9 = *plVar7;
  DAT_01794cb8 = 0;
  local_90 = &std::__ndk1::collate<char>::id;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::collate<char>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::collate<char>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794198;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794cb0);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f28dc:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f28dc;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794cb0;
  DAT_01794cc0 = &PTR__collate_0172f360;
  local_90 = &std::__ndk1::collate<wchar_t>::id;
  DAT_01794cc8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::collate<wchar_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::collate<wchar_t>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_017941a8;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794cc0);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f29b0:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f29b0;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794cc0;
  DAT_01794ce0 = &DAT_014a2658;
  DAT_01794cd0 = &PTR__ctype_0172e448;
  DAT_01794ce8 = 0;
  local_90 = &std::__ndk1::ctype<char>::id;
  DAT_01794cd8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::ctype<char>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::ctype<char>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794330;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794cd0);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f2a94:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f2a94;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794cd0;
  DAT_01794cf0 = &PTR__facet_0172e780;
  local_90 = &std::__ndk1::ctype<wchar_t>::id;
  DAT_01794cf8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::ctype<wchar_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::ctype<wchar_t>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794320;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794cf0);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f2b68:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f2b68;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794cf0;
  DAT_01794d00 = &PTR__facet_0172e850;
  local_90 = &std::__ndk1::codecvt<char,char,mbstate_t>::id;
  DAT_01794d08 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::codecvt<char,char,mbstate_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::codecvt<char,char,mbstate_t>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794340;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794d00);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f2c3c:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f2c3c;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794d00;
  DAT_01794d10 = &PTR__codecvt_0172e5a0;
  DAT_01794d18 = 0;
  if (((DAT_017942d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_017942d8), iVar2 != 0)) {
    DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_017942d8);
  }
  local_90 = &std::__ndk1::codecvt<wchar_t,char,mbstate_t>::id;
  DAT_01794d20 = DAT_017942d0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::codecvt<wchar_t,char,mbstate_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::codecvt<wchar_t,char,mbstate_t>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794350;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794d10);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f2d34:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f2d34;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794d10;
  DAT_01794d30 = &PTR__facet_0172e8f8;
  local_90 = &std::__ndk1::codecvt<char16_t,char,mbstate_t>::id;
  DAT_01794d38 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::codecvt<char16_t,char,mbstate_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::codecvt<char16_t,char,mbstate_t>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794360;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794d30);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f2e08:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f2e08;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794d30;
  DAT_01794d40 = &PTR__facet_0172e990;
  local_90 = &std::__ndk1::codecvt<char32_t,char,mbstate_t>::id;
  DAT_01794d48 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::codecvt<char32_t,char,mbstate_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::codecvt<char32_t,char,mbstate_t>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794370;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794d40);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f2edc:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f2edc;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794d40;
  DAT_01794d60 = 0x2c2e;
  DAT_01794d50 = &PTR__numpunct_0172e600;
  DAT_01794d70 = 0;
  DAT_01794d78 = 0;
  DAT_01794d68 = 0;
  local_90 = &std::__ndk1::numpunct<char>::id;
  DAT_01794d58 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::numpunct<char>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::numpunct<char>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794380;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794d50);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f2fc0:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f2fc0;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794d50;
  DAT_01794d90 = 0x2c0000002e;
  DAT_01794d80 = &PTR__numpunct_0172e650;
  DAT_01794da0 = 0;
  DAT_01794da8 = 0;
  DAT_01794d98 = 0;
  local_90 = &std::__ndk1::numpunct<wchar_t>::id;
  DAT_01794d88 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::numpunct<wchar_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::numpunct<wchar_t>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794390;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794d80);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f30a8:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f30a8;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794d80;
  DAT_01794db0 = &PTR__facet_0172f3a0;
  local_90 = &std::__ndk1::
              num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
              id;
  DAT_01794db8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::
      num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::id != -1)
  {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::
                         num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                         ::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_017941b8;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794db0);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f317c:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f317c;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794db0;
  DAT_01794dc0 = &PTR__facet_0172f490;
  local_90 = &std::__ndk1::
              num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
              ::id;
  DAT_01794dc8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::
      num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
      id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::
                         num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                         ::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_017941c8;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794dc0);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f3250:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f3250;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794dc0;
  DAT_01794dd0 = &PTR__facet_0172f570;
  local_90 = &std::__ndk1::
              num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
              id;
  DAT_01794dd8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::
      num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::id != -1)
  {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::
                         num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                         ::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_017941d8;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794dd0);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f3324:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f3324;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794dd0;
  DAT_01794de0 = &PTR__facet_0172f648;
  local_90 = &std::__ndk1::
              num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
              ::id;
  DAT_01794de8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::
      num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
      id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::
                         num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                         ::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_017941e8;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794de0);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f33f8:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f33f8;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794de0;
  DAT_01794df0 = &PTR__facet_0172fd00;
  local_90 = &std::__ndk1::moneypunct<char,false>::id;
  DAT_01794df8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::moneypunct<char,false>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::moneypunct<char,false>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794238;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794df0);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f34cc:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f34cc;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794df0;
  DAT_01794e00 = &PTR__facet_0172fdb8;
  local_90 = &std::__ndk1::moneypunct<char,true>::id;
  DAT_01794e08 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::moneypunct<char,true>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::moneypunct<char,true>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794248;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794e00);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f35a0:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f35a0;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794e00;
  DAT_01794e10 = &PTR__facet_0172fe60;
  local_90 = &std::__ndk1::moneypunct<wchar_t,false>::id;
  DAT_01794e18 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::moneypunct<wchar_t,false>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::moneypunct<wchar_t,false>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794258;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794e10);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f3674:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f3674;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794e10;
  DAT_01794e20 = &PTR__facet_0172ff08;
  local_90 = &std::__ndk1::moneypunct<wchar_t,true>::id;
  DAT_01794e28 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::moneypunct<wchar_t,true>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::moneypunct<wchar_t,true>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794268;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794e20);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f3748:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f3748;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794e20;
  DAT_01794e30 = &PTR__facet_017301d0;
  local_90 = &std::__ndk1::
              money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
              ::id;
  DAT_01794e38 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::
      money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::id !=
      -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::
                         money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                         ::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794278;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794e30);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f381c:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f381c;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794e30;
  DAT_01794e40 = &PTR__facet_01730250;
  local_90 = &std::__ndk1::
              money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
              ::id;
  DAT_01794e48 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::
      money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
      ::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::
                         money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                         ::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794288;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794e40);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f38f0:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f38f0;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794e40;
  DAT_01794e50 = &PTR__facet_017302d0;
  local_90 = &std::__ndk1::
              money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
              ::id;
  DAT_01794e58 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::
      money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::id !=
      -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::
                         money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                         ::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794298;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794e50);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f39c4:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f39c4;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794e50;
  DAT_01794e60 = &PTR__facet_01730350;
  local_90 = &std::__ndk1::
              money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
              ::id;
  DAT_01794e68 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::
      money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
      ::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::
                         money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                         ::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_017942a8;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794e60);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f3a98:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f3a98;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794e60;
  DAT_01794e70 = &PTR____shared_weak_count_0172f710;
  DAT_01794e80 = &PTR___weeks_0172f770;
  local_90 = &std::__ndk1::
              time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
              id;
  DAT_01794e78 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::
      time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::id != -1
     ) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::
                         time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                         ::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_017941f8;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794e70);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f3b74:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f3b74;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794e70;
  DAT_01794e90 = &PTR____shared_weak_count_0172f820;
  DAT_01794ea0 = &PTR___weeks_0172f880;
  local_90 = &std::__ndk1::
              time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
              ::id;
  DAT_01794e98 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::
      time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
      ::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::
                         time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                         ::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794208;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794e90);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f3c50:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f3c50;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794e90;
  DAT_01794eb0 = &PTR__facet_0172e740;
  DAT_01794eb8 = 0;
  if (((DAT_017942d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_017942d8), iVar2 != 0)) {
    DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_017942d8);
  }
  DAT_01794eb0 = &PTR_FUN_0172fb90;
  local_90 = &std::__ndk1::
              time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
              id;
  DAT_01794ec0 = DAT_017942d0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::
      time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::id != -1
     ) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::
                         time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                         ::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794218;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794eb0);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f3d4c:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f3d4c;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794eb0;
  DAT_01794ed0 = &PTR__facet_0172e740;
  DAT_01794ed8 = 0;
  if (((DAT_017942d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_017942d8), iVar2 != 0)) {
    DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_017942d8);
  }
  DAT_01794ed0 = &PTR_FUN_0172fc08;
  local_90 = &std::__ndk1::
              time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
              ::id;
  DAT_01794ee0 = DAT_017942d0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::
      time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
      ::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::
                         time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                         ::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_01794228;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794ed0);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f3e40:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f3e40;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794ed0;
  DAT_01794ef0 = &PTR__facet_017303d0;
  local_90 = &std::__ndk1::messages<char>::id;
  DAT_01794ef8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::messages<char>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::messages<char>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_017942b8;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794ef0);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar8 < uVar6) {
LAB_011f3f14:
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  else {
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        *plVar9 = lVar5 + uVar4 * 8;
      }
      goto LAB_011f3f14;
    }
    FUN_01207fec(plVar7,uVar4 - uVar6);
    lVar5 = *plVar7;
    p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794ef0;
  DAT_01794f00 = &PTR__facet_01730458;
  local_90 = &std::__ndk1::messages<wchar_t>::id;
  DAT_01794f08 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::messages<wchar_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::messages<wchar_t>::id,&local_78,FUN_01208130);
  }
  uVar4 = (ulong)DAT_017942c8;
  uVar8 = uVar4 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01794f00);
  lVar5 = *plVar7;
  uVar6 = *plVar9 - lVar5 >> 3;
  if (uVar6 <= uVar8) {
    if (uVar4 >= uVar6 && uVar4 - uVar6 != 0) {
      FUN_01207fec(plVar7,uVar4 - uVar6);
      lVar5 = *plVar7;
      p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
      goto joined_r0x011f3fec;
    }
    if (uVar4 < uVar6) {
      *plVar9 = lVar5 + uVar4 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar5 + uVar8 * 8);
joined_r0x011f3fec:
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar7;
  }
  *(undefined ****)(lVar5 + uVar8 * 8) = &DAT_01794f00;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

