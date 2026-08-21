
void FUN_011f6f8c(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  long lVar1;
  __shared_count *p_Var2;
  __shared_count *p_Var3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 ***local_78;
  undefined8 **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0172e3a0;
  param_1[1] = 0xffffffffffffffff;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar9 = param_1 + 2;
  *plVar9 = (long)(param_1 + 6);
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
  plVar11 = param_1 + 3;
  *plVar11 = (long)(param_1 + 0x22);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x24),"*");
  if (param_1 != param_2) {
    FUN_01207e60(plVar9,param_2[2],param_2[3]);
  }
  puVar4 = (undefined8 *)*plVar11;
  puVar6 = (undefined8 *)*plVar9;
  if (puVar4 != puVar6) {
    p_Var2 = (__shared_count *)*puVar6;
    uVar7 = 1;
    while( true ) {
      if (p_Var2 != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(p_Var2);
        puVar4 = (undefined8 *)*plVar11;
        puVar6 = (undefined8 *)*plVar9;
      }
      if ((ulong)((long)puVar4 - (long)puVar6 >> 3) <= uVar7) break;
      p_Var2 = (__shared_count *)puVar6[uVar7];
      uVar7 = (ulong)((int)uVar7 + 1);
    }
  }
  if ((param_4 >> 3 & 1) != 0) {
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::collate<char>::id;
    if (std::__ndk1::collate<char>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once((ulong *)&std::__ndk1::collate<char>::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_01794198;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f7158:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f7158;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::collate<wchar_t>::id;
    if (std::__ndk1::collate<wchar_t>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once((ulong *)&std::__ndk1::collate<wchar_t>::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_017941a8;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f7224:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f7224;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
  }
  if ((param_4 & 1) != 0) {
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::ctype<char>::id;
    if (std::__ndk1::ctype<char>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once((ulong *)&std::__ndk1::ctype<char>::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_01794330;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f72f4:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f72f4;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::ctype<wchar_t>::id;
    if (std::__ndk1::ctype<wchar_t>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once((ulong *)&std::__ndk1::ctype<wchar_t>::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_01794320;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f73c0:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f73c0;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::codecvt<char,char,mbstate_t>::id;
    if (std::__ndk1::codecvt<char,char,mbstate_t>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::codecvt<char,char,mbstate_t>::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_01794340;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f748c:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f748c;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::codecvt<char16_t,char,mbstate_t>::id;
    if (std::__ndk1::codecvt<char16_t,char,mbstate_t>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::codecvt<char16_t,char,mbstate_t>::id,&local_78,FUN_01208130)
      ;
    }
    uVar7 = (ulong)DAT_01794360;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f7558:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f7558;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::codecvt<char32_t,char,mbstate_t>::id;
    if (std::__ndk1::codecvt<char32_t,char,mbstate_t>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::codecvt<char32_t,char,mbstate_t>::id,&local_78,FUN_01208130)
      ;
    }
    uVar7 = (ulong)DAT_01794370;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f7624:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f7624;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::codecvt<wchar_t,char,mbstate_t>::id;
    if (std::__ndk1::codecvt<wchar_t,char,mbstate_t>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::codecvt<wchar_t,char,mbstate_t>::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_01794350;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f76f0:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f76f0;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
  }
  if ((param_4 >> 4 & 1) != 0) {
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::moneypunct<char,false>::id;
    if (std::__ndk1::moneypunct<char,false>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::moneypunct<char,false>::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_01794238;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f77c0:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f77c0;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::moneypunct<char,true>::id;
    if (std::__ndk1::moneypunct<char,true>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::moneypunct<char,true>::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_01794248;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f788c:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f788c;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::moneypunct<wchar_t,false>::id;
    if (std::__ndk1::moneypunct<wchar_t,false>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::moneypunct<wchar_t,false>::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_01794258;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f7958:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f7958;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::moneypunct<wchar_t,true>::id;
    if (std::__ndk1::moneypunct<wchar_t,true>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::moneypunct<wchar_t,true>::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_01794268;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f7a24:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f7a24;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::
                money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                ::id;
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
    uVar7 = (ulong)DAT_01794278;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f7af0:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f7af0;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::
                money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                ::id;
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
    uVar7 = (ulong)DAT_01794288;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f7bbc:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f7bbc;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::
                money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                ::id;
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
    uVar7 = (ulong)DAT_01794298;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f7c88:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f7c88;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::
                money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                ::id;
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
    uVar7 = (ulong)DAT_017942a8;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f7d54:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f7d54;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
  }
  if ((param_4 >> 1 & 1) != 0) {
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::numpunct<char>::id;
    if (std::__ndk1::numpunct<char>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once((ulong *)&std::__ndk1::numpunct<char>::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_01794380;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f7e24:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f7e24;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::numpunct<wchar_t>::id;
    if (std::__ndk1::numpunct<wchar_t>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once((ulong *)&std::__ndk1::numpunct<wchar_t>::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_01794390;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f7ef0:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f7ef0;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::
                num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                ::id;
    if (std::__ndk1::
        num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::id !=
        -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::
                           num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                           ::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_017941b8;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f7fbc:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f7fbc;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::
                num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                ::id;
    if (std::__ndk1::
        num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
        ::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::
                           num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                           ::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_017941c8;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f8088:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f8088;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::
                num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                ::id;
    if (std::__ndk1::
        num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::id !=
        -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::
                           num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                           ::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_017941d8;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f8154:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f8154;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::
                num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                ::id;
    if (std::__ndk1::
        num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
        ::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::
                           num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                           ::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_017941e8;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f8220:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f8220;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
  }
  if ((param_4 >> 2 & 1) != 0) {
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::
                time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                ::id;
    if (std::__ndk1::
        time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::id !=
        -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::
                           time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                           ::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_017941f8;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f82f0:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f82f0;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::
                time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                ::id;
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
    uVar7 = (ulong)DAT_01794208;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f83bc:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f83bc;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::
                time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                ::id;
    if (std::__ndk1::
        time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::id !=
        -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)&std::__ndk1::
                           time_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                           ::id,&local_78,FUN_01208130);
    }
    uVar7 = (ulong)DAT_01794218;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f8488:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f8488;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
    uStack_80 = 0;
    local_88 = std::__ndk1::locale::id::__init;
    local_90 = &std::__ndk1::
                time_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                ::id;
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
    uVar7 = (ulong)DAT_01794228;
    uVar10 = uVar7 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
       (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar5 = *plVar9;
    uVar8 = *plVar11 - lVar5 >> 3;
    if (uVar10 < uVar8) {
LAB_011f8554:
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    else {
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
        if (uVar7 < uVar8) {
          *plVar11 = lVar5 + uVar7 * 8;
        }
        goto LAB_011f8554;
      }
      FUN_01207fec(plVar9,uVar7 - uVar8);
      lVar5 = *plVar9;
      p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
    }
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar5 = *plVar9;
    }
    *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
  }
  if ((param_4 >> 5 & 1) == 0) goto LAB_011f8704;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  local_90 = &std::__ndk1::messages<char>::id;
  if (std::__ndk1::messages<char>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::messages<char>::id,&local_78,FUN_01208130);
  }
  uVar7 = (ulong)DAT_017942b8;
  uVar10 = uVar7 - 1;
  if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
     (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
     p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var2);
  lVar5 = *plVar9;
  uVar8 = *plVar11 - lVar5 >> 3;
  if (uVar10 < uVar8) {
LAB_011f8624:
    p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
  }
  else {
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
      if (uVar7 < uVar8) {
        *plVar11 = lVar5 + uVar7 * 8;
      }
      goto LAB_011f8624;
    }
    FUN_01207fec(plVar9,uVar7 - uVar8);
    lVar5 = *plVar9;
    p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar9;
  }
  *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
  uStack_80 = 0;
  local_88 = std::__ndk1::locale::id::__init;
  local_90 = &std::__ndk1::messages<wchar_t>::id;
  if (std::__ndk1::messages<wchar_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::messages<wchar_t>::id,&local_78,FUN_01208130);
  }
  uVar7 = (ulong)DAT_017942c8;
  uVar10 = uVar7 - 1;
  if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar10) ||
     (p_Var2 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar10 * 8),
     p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var2);
  lVar5 = *plVar9;
  uVar8 = *plVar11 - lVar5 >> 3;
  if (uVar10 < uVar8) {
LAB_011f86f0:
    p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
  }
  else {
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
      if (uVar7 < uVar8) {
        *plVar11 = lVar5 + uVar7 * 8;
      }
      goto LAB_011f86f0;
    }
    FUN_01207fec(plVar9,uVar7 - uVar8);
    lVar5 = *plVar9;
    p_Var3 = *(__shared_count **)(lVar5 + uVar10 * 8);
  }
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *plVar9;
  }
  *(__shared_count **)(lVar5 + uVar10 * 8) = p_Var2;
LAB_011f8704:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

