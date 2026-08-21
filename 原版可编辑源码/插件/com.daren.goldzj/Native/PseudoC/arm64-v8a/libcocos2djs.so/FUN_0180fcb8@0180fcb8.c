
void FUN_0180fcb8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 **local_78;
  undefined8 **local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *param_1 = &PTR_FUN_01cdb9e0;
  param_1[1] = param_2 + -1;
  puVar7 = param_1 + 6;
  param_1[7] = 0;
  *puVar7 = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  DAT_01d537a0 = &PTR__collate_01cdc960;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[4] = param_1 + 0x22;
  param_1[0x10] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0x4302;
  param_1[0x26] = 0;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  param_1[2] = puVar7;
  param_1[3] = puVar7;
  DAT_01d537a8 = 0;
  local_90 = &std::__ndk1::collate<char>::id;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  plVar1 = param_1 + 2;
  plVar2 = param_1 + 3;
  if (std::__ndk1::collate<char>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::collate<char>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52c88;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d537a0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d537a0;
  DAT_01d537b0 = &PTR__collate_01cdc9a0;
  local_90 = &std::__ndk1::collate<wchar_t>::id;
  DAT_01d537b8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::collate<wchar_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::collate<wchar_t>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52c98;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d537b0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d537b0;
  DAT_01d537d0 = &DAT_01a64ec8;
  DAT_01d537c0 = &PTR__ctype_01cdba88;
  DAT_01d537d8 = 0;
  local_90 = &std::__ndk1::ctype<char>::id;
  DAT_01d537c8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::ctype<char>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::ctype<char>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52e20;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d537c0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d537c0;
  DAT_01d537e0 = &PTR__facet_01cdbdc0;
  local_90 = &std::__ndk1::ctype<wchar_t>::id;
  DAT_01d537e8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::ctype<wchar_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::ctype<wchar_t>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52e10;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d537e0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d537e0;
  DAT_01d537f0 = &PTR__facet_01cdbe90;
  local_90 = &std::__ndk1::codecvt<char,char,mbstate_t>::id;
  DAT_01d537f8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::codecvt<char,char,mbstate_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::codecvt<char,char,mbstate_t>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52e30;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d537f0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d537f0;
  DAT_01d53800 = &PTR__codecvt_01cdbbe0;
  DAT_01d53808 = 0;
  if (((DAT_01d52dc8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d52dc8), iVar4 != 0)) {
    DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_01d52dc8);
  }
  local_90 = &std::__ndk1::codecvt<wchar_t,char,mbstate_t>::id;
  DAT_01d53810 = DAT_01d52dc0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::codecvt<wchar_t,char,mbstate_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::codecvt<wchar_t,char,mbstate_t>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52e40;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d53800);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d53800;
  DAT_01d53820 = &PTR__facet_01cdbf38;
  local_90 = &std::__ndk1::codecvt<char16_t,char,mbstate_t>::id;
  DAT_01d53828 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::codecvt<char16_t,char,mbstate_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::codecvt<char16_t,char,mbstate_t>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52e50;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d53820);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d53820;
  DAT_01d53830 = &PTR__facet_01cdbfd0;
  local_90 = &std::__ndk1::codecvt<char32_t,char,mbstate_t>::id;
  DAT_01d53838 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::codecvt<char32_t,char,mbstate_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::codecvt<char32_t,char,mbstate_t>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52e60;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d53830);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d53830;
  DAT_01d53850 = 0x2c2e;
  DAT_01d53840 = &PTR__numpunct_01cdbc40;
  DAT_01d53860 = 0;
  DAT_01d53868 = 0;
  DAT_01d53858 = 0;
  local_90 = &std::__ndk1::numpunct<char>::id;
  DAT_01d53848 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::numpunct<char>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::numpunct<char>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52e70;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d53840);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d53840;
  DAT_01d53880 = 0x2c0000002e;
  DAT_01d53870 = &PTR__numpunct_01cdbc90;
  DAT_01d53890 = 0;
  DAT_01d53898 = 0;
  DAT_01d53888 = 0;
  local_90 = &std::__ndk1::numpunct<wchar_t>::id;
  DAT_01d53878 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::numpunct<wchar_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::numpunct<wchar_t>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52e80;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d53870);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d53870;
  DAT_01d538a0 = &PTR__facet_01cdc9e0;
  local_90 = &std::__ndk1::
              num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
              id;
  DAT_01d538a8 = 0;
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
                         ::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52ca8;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d538a0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d538a0;
  DAT_01d538b0 = &PTR__facet_01cdcad0;
  local_90 = &std::__ndk1::
              num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
              ::id;
  DAT_01d538b8 = 0;
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
                         ::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52cb8;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d538b0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d538b0;
  DAT_01d538c0 = &PTR__facet_01cdcbb0;
  local_90 = &std::__ndk1::
              num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
              id;
  DAT_01d538c8 = 0;
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
                         ::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52cc8;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d538c0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d538c0;
  DAT_01d538d0 = &PTR__facet_01cdcc88;
  local_90 = &std::__ndk1::
              num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
              ::id;
  DAT_01d538d8 = 0;
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
                         ::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52cd8;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d538d0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d538d0;
  DAT_01d538e0 = &PTR__facet_01cdd340;
  local_90 = &std::__ndk1::moneypunct<char,false>::id;
  DAT_01d538e8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::moneypunct<char,false>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::moneypunct<char,false>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52d28;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d538e0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d538e0;
  DAT_01d538f0 = &PTR__facet_01cdd3f8;
  local_90 = &std::__ndk1::moneypunct<char,true>::id;
  DAT_01d538f8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::moneypunct<char,true>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::moneypunct<char,true>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52d38;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d538f0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d538f0;
  DAT_01d53900 = &PTR__facet_01cdd4a0;
  local_90 = &std::__ndk1::moneypunct<wchar_t,false>::id;
  DAT_01d53908 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::moneypunct<wchar_t,false>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::moneypunct<wchar_t,false>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52d48;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d53900);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d53900;
  DAT_01d53910 = &PTR__facet_01cdd548;
  local_90 = &std::__ndk1::moneypunct<wchar_t,true>::id;
  DAT_01d53918 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::moneypunct<wchar_t,true>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::moneypunct<wchar_t,true>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52d58;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d53910);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d53910;
  DAT_01d53920 = &PTR__facet_01cdd810;
  local_90 = &std::__ndk1::
              money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
              ::id;
  DAT_01d53928 = 0;
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
                         ::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52d68;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d53920);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d53920;
  DAT_01d53930 = &PTR__facet_01cdd890;
  local_90 = &std::__ndk1::
              money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
              ::id;
  DAT_01d53938 = 0;
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
                         ::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52d78;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d53930);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d53930;
  DAT_01d53940 = &PTR__facet_01cdd910;
  local_90 = &std::__ndk1::
              money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
              ::id;
  DAT_01d53948 = 0;
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
                         ::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52d88;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d53940);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d53940;
  DAT_01d53950 = &PTR__facet_01cdd990;
  local_90 = &std::__ndk1::
              money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
              ::id;
  DAT_01d53958 = 0;
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
                         ::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52d98;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d53950);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d53950;
  DAT_01d53960 = &PTR____shared_weak_count_01cdcd50;
  DAT_01d53970 = &PTR___weeks_01cdcdb0;
  local_90 = &std::__ndk1::
              time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
              id;
  DAT_01d53968 = 0;
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
                         ::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52ce8;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d53960);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d53960;
  DAT_01d53980 = &PTR____shared_weak_count_01cdce60;
  DAT_01d53990 = &PTR___weeks_01cdcec0;
  local_90 = &std::__ndk1::
              time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
              ::id;
  DAT_01d53988 = 0;
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
                         ::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52cf8;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d53980);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d53980;
  DAT_01d539a0 = &PTR__facet_01cdbd80;
  DAT_01d539a8 = 0;
  if (((DAT_01d52dc8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d52dc8), iVar4 != 0)) {
    DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_01d52dc8);
  }
  DAT_01d539a0 = &PTR_FUN_01cdd1d0;
  local_90 = &std::__ndk1::
              time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
              id;
  DAT_01d539b0 = DAT_01d52dc0;
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
                         ::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52d08;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d539a0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d539a0;
  DAT_01d539c0 = &PTR__facet_01cdbd80;
  DAT_01d539c8 = 0;
  if (((DAT_01d52dc8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d52dc8), iVar4 != 0)) {
    DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_01d52dc8);
  }
  DAT_01d539c0 = &PTR_FUN_01cdd248;
  local_90 = &std::__ndk1::
              time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
              ::id;
  DAT_01d539d0 = DAT_01d52dc0;
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
                         ::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52d18;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d539c0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d539c0;
  DAT_01d539e0 = &PTR__facet_01cdda10;
  local_90 = &std::__ndk1::messages<char>::id;
  DAT_01d539e8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::messages<char>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::messages<char>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52da8;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d539e0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d539e0;
  DAT_01d539f0 = &PTR__facet_01cdda98;
  local_90 = &std::__ndk1::messages<wchar_t>::id;
  DAT_01d539f8 = 0;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::messages<wchar_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::messages<wchar_t>::id,&local_78,FUN_01828620);
  }
  uVar5 = (ulong)DAT_01d52db8;
  uVar9 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_01d539f0);
  lVar6 = *plVar1;
  uVar8 = *plVar2 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar5 < uVar8 || uVar5 - uVar8 == 0) {
      if (uVar5 < uVar8) {
        *plVar2 = lVar6 + uVar5 * 8;
      }
    }
    else {
      FUN_018284d0(plVar1,uVar5 - uVar8);
      lVar6 = *plVar1;
    }
  }
  puVar7 = (undefined8 *)(lVar6 + uVar9 * 8);
  if ((__shared_count *)*puVar7 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar7);
    puVar7 = (undefined8 *)(*plVar1 + uVar9 * 8);
  }
  *puVar7 = &DAT_01d539f0;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

