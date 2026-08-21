
/* cocos2d::FileUtils::createDirectory(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined4 __thiscall cocos2d::FileUtils::createDirectory(FileUtils *this,basic_string *param_1)

{
  ulong uVar1;
  ulong __n;
  basic_string *pbVar2;
  basic_string bVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  DIR *__dirp;
  int *piVar9;
  basic_string *pbVar10;
  undefined4 uVar11;
  byte *pbVar12;
  char *pcVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  ulong *local_98;
  ulong *local_90;
  ulong *local_88;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar8 = (**(code **)(*(long *)this + 0x110))();
  if ((uVar8 & 1) != 0) {
    uVar11 = 1;
    goto LAB_008768b8;
  }
  bVar3 = *param_1;
  uVar8 = *(ulong *)(param_1 + 8);
  pbVar10 = *(basic_string **)(param_1 + 0x10);
  pbVar2 = pbVar10;
  uVar15 = uVar8;
  if (((byte)bVar3 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar15 = (ulong)((byte)bVar3 >> 1);
  }
  if (uVar15 != 0) {
    uVar16 = 0;
    do {
      if ((pbVar2[uVar16] == (basic_string)0x5c) || (pbVar2[uVar16] == (basic_string)0x2f)) {
        if (uVar15 != uVar16) goto LAB_008764d0;
        break;
      }
      uVar16 = uVar16 + 1;
    } while (uVar15 != uVar16);
  }
  uVar16 = 0xffffffffffffffff;
LAB_008764d0:
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (char *)0x0;
  local_98 = (ulong *)0x0;
  local_90 = (ulong *)0x0;
  local_88 = (ulong *)0x0;
  if (uVar16 != 0xffffffffffffffff) {
    uVar15 = 0;
    do {
      uVar1 = (ulong)((byte)bVar3 >> 1);
      if (((byte)bVar3 & 1) != 0) {
        uVar1 = uVar8;
      }
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (char *)0x0;
      if (uVar1 < uVar15) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar8 = (uVar16 - uVar15) + 1;
      pbVar2 = param_1 + 1;
      if (((byte)bVar3 & 1) != 0) {
        pbVar2 = pbVar10;
      }
      __n = uVar1 - uVar15;
      if (uVar8 <= uVar1 - uVar15) {
        __n = uVar8;
      }
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        local_b0 = (ulong)(byte)((int)__n << 1);
        pcVar13 = (char *)((ulong)&local_b0 | 1);
        if (__n != 0) goto LAB_00876570;
      }
      else {
        uVar8 = __n + 0x10 & 0xfffffffffffffff0;
        pcVar13 = operator_new(uVar8);
        local_b0 = uVar8 | 1;
        uStack_a8 = __n;
        local_a0 = pcVar13;
LAB_00876570:
        memcpy(pcVar13,pbVar2 + uVar15,__n);
      }
      pcVar13[__n] = '\0';
      if ((local_80 & 1) != 0) {
        *local_70 = '\0';
        uStack_78 = 0;
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      puVar6 = local_90;
      pcVar13 = local_a0;
      uVar15 = uStack_a8;
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      local_70 = local_a0;
      uVar8 = local_b0 >> 1 & 0x7f;
      if ((local_b0 & 1) != 0) {
        uVar8 = uStack_a8;
      }
      if (uVar8 != 0) {
        if (local_90 == local_88) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)&local_98,(basic_string *)&local_80);
        }
        else {
          local_90[1] = 0;
          local_90[2] = 0;
          *local_90 = 0;
          if ((local_b0 & 1) == 0) {
            local_90[2] = (ulong)local_a0;
            local_90[1] = uStack_a8;
            *local_90 = local_b0;
          }
          else {
            if (0xffffffffffffffef < uStack_a8) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_a8 < 0x17) {
              pbVar12 = (byte *)((long)local_90 + 1);
              *(byte *)local_90 = (byte)((int)uStack_a8 << 1);
              if (uStack_a8 != 0) goto LAB_00876664;
            }
            else {
              uVar8 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
              pbVar12 = operator_new(uVar8);
              puVar6[1] = uVar15;
              puVar6[2] = (ulong)pbVar12;
              *puVar6 = uVar8 | 1;
LAB_00876664:
              memcpy(pbVar12,pcVar13,uVar15);
            }
            pbVar12[uVar15] = 0;
          }
          local_90 = local_90 + 3;
        }
      }
      bVar3 = *param_1;
      uVar8 = *(ulong *)(param_1 + 8);
      pbVar10 = *(basic_string **)(param_1 + 0x10);
      uVar15 = uVar16 + 1;
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)bVar3 >> 1);
      if (((byte)bVar3 & 1) != 0) {
        pbVar2 = pbVar10;
        uVar1 = uVar8;
      }
      uVar16 = uVar15;
      if (uVar1 <= uVar15) goto LAB_0087679c;
      while ((pbVar2[uVar16] != (basic_string)0x5c && (pbVar2[uVar16] != (basic_string)0x2f))) {
        uVar16 = uVar16 + 1;
        if (uVar1 == uVar16) goto LAB_008766e0;
      }
    } while ((uVar1 != uVar16) && (uVar16 != 0xffffffffffffffff));
LAB_008766e0:
    uVar8 = uVar1 - uVar15;
    if (uVar15 <= uVar1 && uVar8 != 0) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (char *)0x0;
      if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar8 < 0x17) {
        pcVar13 = (char *)((ulong)&local_b0 | 1);
        local_b0 = (ulong)(byte)((int)uVar8 << 1);
        if (uVar8 != 0) goto LAB_00876738;
      }
      else {
        uVar16 = uVar8 + 0x10 & 0xfffffffffffffff0;
        pcVar13 = operator_new(uVar16);
        local_b0 = uVar16 | 1;
        uStack_a8 = uVar8;
        local_a0 = pcVar13;
LAB_00876738:
        memcpy(pcVar13,pbVar2 + uVar15,uVar8);
      }
      pcVar13[uVar8] = '\0';
      if (local_90 < local_88) {
        local_90[2] = (ulong)local_a0;
        local_90[1] = uStack_a8;
        *local_90 = local_b0;
        uStack_a8 = 0;
        local_a0 = (char *)0x0;
        local_b0 = 0;
        local_90 = local_90 + 3;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)&local_98,(basic_string *)&local_b0);
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
      }
    }
  }
LAB_0087679c:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_80
         ,"",0);
  puVar6 = local_90;
  if (local_98 != local_90) {
    puVar14 = local_98;
    do {
      uVar8 = puVar14[1];
      pbVar12 = (byte *)puVar14[2];
      if (((byte)*puVar14 & 1) == 0) {
        pbVar12 = (byte *)((long)puVar14 + 1);
        uVar8 = (ulong)(byte)((byte)*puVar14 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,(char *)pbVar12,uVar8);
      pcVar13 = (char *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pcVar13 = local_70;
      }
      __dirp = opendir(pcVar13);
      if (__dirp == (DIR *)0x0) {
        pcVar13 = (char *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          pcVar13 = local_70;
        }
        iVar7 = mkdir(pcVar13,0x1ff);
        if ((iVar7 != 0) && (piVar9 = (int *)__errno(), *piVar9 != 0x11)) {
          uVar11 = 0;
          puVar6 = local_98;
          goto joined_r0x00876864;
        }
      }
      else {
        closedir(__dirp);
      }
      puVar14 = puVar14 + 3;
    } while (puVar14 != puVar6);
  }
  uVar11 = 1;
  puVar6 = local_98;
joined_r0x00876864:
  local_98 = puVar6;
  puVar14 = local_90;
  if (puVar6 != (ulong *)0x0) {
    while (puVar5 = puVar14, puVar5 != puVar6) {
      puVar14 = puVar5 + -3;
      if ((*puVar14 & 1) != 0) {
        operator_delete((void *)puVar5[-1]);
      }
    }
    local_90 = puVar6;
    operator_delete(local_98);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
LAB_008768b8:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

