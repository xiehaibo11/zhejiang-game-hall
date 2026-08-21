
/* cocos2d::FileUtils::createDirectory(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

undefined4 __thiscall cocos2d::FileUtils::createDirectory(FileUtils *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  byte bVar3;
  basic_string bVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  int iVar9;
  ulong uVar10;
  DIR *__dirp;
  int *piVar11;
  basic_string *pbVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  char *pcVar16;
  ulong *puVar17;
  ulong uVar18;
  byte *pbVar19;
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
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar10 = (**(code **)(*(long *)this + 0x148))();
  if ((uVar10 & 1) != 0) {
    uVar15 = 1;
    goto LAB_00f707d0;
  }
  bVar4 = *param_1;
  uVar10 = *(ulong *)(param_1 + 8);
  pbVar12 = *(basic_string **)(param_1 + 0x10);
  pbVar2 = pbVar12;
  uVar18 = uVar10;
  if (((byte)bVar4 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar18 = (ulong)((byte)bVar4 >> 1);
  }
  if (uVar18 != 0) {
    uVar13 = 0;
    do {
      if ((pbVar2[uVar13] == (basic_string)0x5c) || (pbVar2[uVar13] == (basic_string)0x2f)) {
        if (uVar18 != uVar13) goto LAB_00f703d8;
        break;
      }
      uVar13 = uVar13 + 1;
    } while (uVar18 != uVar13);
  }
  uVar13 = 0xffffffffffffffff;
LAB_00f703d8:
  uStack_78 = 0;
  local_70 = (char *)0x0;
  local_88 = (ulong *)0x0;
  local_80 = 0;
  local_98 = (ulong *)0x0;
  local_90 = (ulong *)0x0;
  if (uVar13 != 0xffffffffffffffff) {
    uVar18 = 0;
    do {
      uVar14 = uVar13;
      uVar13 = (ulong)((byte)bVar4 >> 1);
      if (((byte)bVar4 & 1) != 0) {
        uVar13 = uVar10;
      }
      uStack_a8 = 0;
      local_a0 = (char *)0x0;
      local_b0 = 0;
      if (uVar13 < uVar18) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar10 = (uVar14 - uVar18) + 1;
      pbVar2 = param_1 + 1;
      if (((byte)bVar4 & 1) != 0) {
        pbVar2 = pbVar12;
      }
      uVar1 = uVar13 - uVar18;
      if (uVar10 <= uVar13 - uVar18) {
        uVar1 = uVar10;
      }
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar1 < 0x17) {
        local_b0 = (ulong)(byte)((int)uVar1 << 1);
        pcVar16 = (char *)((ulong)&local_b0 | 1);
        if (uVar1 != 0) goto LAB_00f70478;
      }
      else {
        uVar10 = uVar1 + 0x10 & 0xfffffffffffffff0;
        pcVar16 = operator_new(uVar10);
        local_b0 = uVar10 | 1;
        uStack_a8 = uVar1;
        local_a0 = pcVar16;
LAB_00f70478:
        memcpy(pcVar16,pbVar2 + uVar18,uVar1);
      }
      pcVar16[uVar1] = '\0';
      if ((local_80 & 1) != 0) {
        *local_70 = '\0';
        uStack_78 = 0;
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      puVar7 = local_90;
      pcVar16 = local_a0;
      uVar18 = uStack_a8;
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      local_70 = local_a0;
      uVar10 = local_b0 >> 1 & 0x7f;
      if ((local_b0 & 1) != 0) {
        uVar10 = uStack_a8;
      }
      if (uVar10 != 0) {
        if (local_90 == local_88) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)&local_98,(basic_string *)&local_80);
        }
        else {
          *local_90 = 0;
          local_90[1] = 0;
          local_90[2] = 0;
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
              pbVar19 = (byte *)((long)local_90 + 1);
              *(byte *)local_90 = (byte)((int)uStack_a8 << 1);
              if (uStack_a8 != 0) goto LAB_00f70570;
            }
            else {
              uVar10 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
              pbVar19 = operator_new(uVar10);
              puVar7[1] = uVar18;
              puVar7[2] = (ulong)pbVar19;
              *puVar7 = uVar10 | 1;
LAB_00f70570:
              memcpy(pbVar19,pcVar16,uVar18);
            }
            pbVar19[uVar18] = 0;
          }
          local_90 = puVar7 + 3;
        }
      }
      bVar4 = *param_1;
      uVar10 = *(ulong *)(param_1 + 8);
      pbVar12 = *(basic_string **)(param_1 + 0x10);
      uVar18 = uVar14 + 1;
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)bVar4 >> 1);
      if (((byte)bVar4 & 1) != 0) {
        pbVar2 = pbVar12;
        uVar1 = uVar10;
      }
      uVar13 = uVar18;
      if (uVar1 <= uVar18) goto LAB_00f706a8;
      while ((pbVar2[uVar13] != (basic_string)0x5c && (pbVar2[uVar13] != (basic_string)0x2f))) {
        uVar13 = uVar13 + 1;
        if (uVar1 == uVar13) goto LAB_00f705e8;
      }
    } while ((uVar1 != uVar13) && (uVar13 != 0xffffffffffffffff));
LAB_00f705e8:
    uVar10 = uVar1 - uVar18;
    if (uVar18 <= uVar1 && uVar10 != 0) {
      uStack_a8 = 0;
      local_a0 = (char *)0x0;
      local_b0 = 0;
      if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar10 < 0x17) {
        pcVar16 = (char *)((ulong)&local_b0 | 1);
        local_b0 = (ulong)(byte)((int)uVar10 << 1);
        if (uVar10 != 0) goto LAB_00f70648;
      }
      else {
        uVar13 = uVar10 + 0x10 & 0xfffffffffffffff0;
        pcVar16 = operator_new(uVar13);
        local_b0 = uVar13 | 1;
        uStack_a8 = uVar10;
        local_a0 = pcVar16;
LAB_00f70648:
        memcpy(pcVar16,pbVar2 + uVar18,uVar10);
      }
      pcVar16[uVar10] = '\0';
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
LAB_00f706a8:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_80
         ,"",0);
  puVar7 = local_90;
  if (local_98 != local_90) {
    puVar17 = local_98;
    do {
      uVar10 = puVar17[1];
      pbVar19 = (byte *)puVar17[2];
      if (((byte)*puVar17 & 1) == 0) {
        pbVar19 = (byte *)((long)puVar17 + 1);
        uVar10 = (ulong)(byte)((byte)*puVar17 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,(char *)pbVar19,uVar10);
      pcVar16 = (char *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pcVar16 = local_70;
      }
      __dirp = opendir(pcVar16);
      if (__dirp == (DIR *)0x0) {
        pcVar16 = (char *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          pcVar16 = local_70;
        }
        iVar9 = mkdir(pcVar16,0x1ff);
        if ((iVar9 != 0) && (piVar11 = (int *)__errno(), *piVar11 != 0x11)) {
          uVar15 = 0;
          puVar7 = local_98;
          goto joined_r0x00f70754;
        }
      }
      else {
        closedir(__dirp);
      }
      puVar17 = puVar17 + 3;
    } while (puVar17 != puVar7);
  }
  uVar15 = 1;
  puVar7 = local_98;
joined_r0x00f70754:
  local_98 = puVar7;
  if (puVar7 != (ulong *)0x0) {
    if (local_90 != puVar7) {
      bVar3 = (byte)local_90[-3];
      puVar8 = local_90 + -3;
      puVar17 = local_90;
      while( true ) {
        puVar6 = puVar8;
        if ((bVar3 & 1) != 0) {
          operator_delete((void *)puVar17[-1]);
        }
        if (puVar7 == puVar6) break;
        bVar3 = (byte)puVar6[-3];
        puVar8 = puVar6 + -3;
        puVar17 = puVar6;
      }
    }
    local_90 = puVar7;
    operator_delete(local_98);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
LAB_00f707d0:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

