
/* WARNING: Type propagation algorithm not settling */
/* fairygui::UBBParser::parse(char const*, bool) */

void fairygui::UBBParser::parse(char *param_1,bool param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  long *plVar8;
  size_t sVar9;
  ulong in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  ulong local_d0;
  ulong uStack_c8;
  char *local_c0;
  ulong local_b8;
  ulong local_b0;
  char *local_a8;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  undefined8 local_80;
  ulong uStack_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(ulong *)(param_1 + 0x68) = (ulong)param_2;
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = '\0';
  param_1[0x73] = '\0';
  param_1[0x74] = '\0';
  param_1[0x75] = '\0';
  param_1[0x76] = '\0';
  param_1[0x77] = '\0';
  if ((param_1[0x10] & 1U) == 0) {
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    bVar2 = param_1[0x28];
  }
  else {
    **(undefined1 **)(param_1 + 0x20) = 0;
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    bVar2 = param_1[0x28];
  }
  if ((bVar2 & 1) == 0) {
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
  }
  else {
    **(undefined1 **)(param_1 + 0x38) = 0;
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
  }
  uStack_78 = 0;
  local_70 = (char *)0x0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = (char *)0x0;
  local_a8 = (char *)0x0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  pcVar15 = *(char **)(param_1 + 0x68);
  if (*pcVar15 != '\0') {
    pcVar10 = (char *)((ulong)&local_80 | 1);
    pcVar11 = (char *)((ulong)&local_d0 | 1);
    do {
      pcVar6 = strchr(pcVar15,0x5b);
      if (pcVar6 == (char *)0x0) {
        sVar9 = strlen(pcVar15);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(in_x8,pcVar15,sVar9);
        break;
      }
      uVar16 = (long)pcVar6 - (long)pcVar15;
      if (((long)uVar16 < 1) || (pcVar6[-1] != '\\')) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(in_x8,pcVar15,uVar16);
        pcVar15 = (char *)(*(long *)(param_1 + 0x68) + uVar16);
        *(char **)(param_1 + 0x68) = pcVar15;
        pcVar6 = strchr(pcVar15,0x5d);
        if (pcVar6 == (char *)0x0) {
          sVar9 = strlen(pcVar15);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (in_x8,pcVar15,sVar9);
          break;
        }
        if (pcVar6 + (-1 - (long)pcVar15) == (char *)0x0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_d0,pcVar15);
          pcVar15 = pcVar11;
          uVar16 = local_d0 >> 1 & 0x7f;
          if ((local_d0 & 1) != 0) {
            pcVar15 = local_c0;
            uVar16 = uStack_c8;
          }
          if (1 < uVar16) {
            uVar16 = 2;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (in_x8,pcVar15,uVar16);
          if ((local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
          lVar12 = 2;
          goto LAB_00ab7fe0;
        }
        cVar1 = pcVar15[1];
        if (cVar1 == '/') {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_80,pcVar15 + 2,(ulong)(pcVar6 + (-2 - (long)pcVar15)));
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_80,pcVar15 + 1,(ulong)(pcVar6 + (-1 - (long)pcVar15)));
        }
        *(char **)(param_1 + 0x70) = pcVar6 + (1 - (long)pcVar15);
        if ((local_a0 & 1) == 0) {
          local_a0 = local_a0 & 0xffffffffffff0000;
          if ((local_b8 & 1) != 0) goto LAB_00ab8118;
LAB_00ab813c:
          local_b8 = local_b8 & 0xffffffffffff0000;
        }
        else {
          *local_90 = '\0';
          uStack_98 = 0;
          if ((local_b8 & 1) == 0) goto LAB_00ab813c;
LAB_00ab8118:
          *local_a8 = '\0';
          local_b0 = 0;
        }
        uVar16 = local_80 & 0xff;
        pcVar15 = pcVar10;
        sVar9 = local_80 >> 1 & 0x7f;
        if ((local_80 & 1) != 0) {
          pcVar15 = local_70;
          sVar9 = uStack_78;
        }
        if (((sVar9 != 0) && (pvVar7 = memchr(pcVar15,0x3d,sVar9), pvVar7 != (void *)0x0)) &&
           (uVar13 = (long)pvVar7 - (long)pcVar15, uVar13 != 0xffffffffffffffff)) {
          uStack_c8 = 0;
          local_c0 = (char *)0x0;
          local_d0 = 0;
          if (sVar9 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          uVar16 = sVar9 - (uVar13 + 1);
          if (0xffffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar16 < 0x17) {
            local_d0 = (ulong)(byte)((int)uVar16 << 1);
            pcVar6 = pcVar11;
            if (uVar16 != 0) goto LAB_00ab81f0;
          }
          else {
            uVar17 = uVar16 + 0x10 & 0xfffffffffffffff0;
            pcVar6 = operator_new(uVar17);
            local_d0 = uVar17 | 1;
            uStack_c8 = uVar16;
            local_c0 = pcVar6;
LAB_00ab81f0:
            memcpy(pcVar6,pcVar15 + uVar13 + 1,uVar16);
          }
          pcVar6[uVar16] = '\0';
          if ((local_a0 & 1) != 0) {
            *local_90 = '\0';
            uStack_98 = 0;
            if ((local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
          }
          uVar17 = local_80;
          local_90 = local_c0;
          uStack_98 = uStack_c8;
          local_a0 = local_d0;
          bVar4 = (local_80 & 1) != 0;
          uVar16 = local_80 >> 1 & 0x7f;
          if (bVar4) {
            uVar16 = uStack_78;
          }
          local_d0 = 0;
          uStack_c8 = 0;
          local_c0 = (char *)0x0;
          pcVar15 = pcVar10;
          if (bVar4) {
            pcVar15 = local_70;
          }
          if (uVar13 <= uVar16) {
            uVar16 = uVar13;
          }
          if (0xffffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar16 < 0x17) {
            local_d0 = (ulong)(byte)((int)uVar16 << 1);
            pcVar6 = pcVar11;
            if (uVar16 != 0) goto LAB_00ab82cc;
            *pcVar11 = '\0';
          }
          else {
            uVar13 = uVar16 + 0x10 & 0xfffffffffffffff0;
            pcVar6 = operator_new(uVar13);
            local_d0 = uVar13 | 1;
            uStack_c8 = uVar16;
            local_c0 = pcVar6;
LAB_00ab82cc:
            memcpy(pcVar6,pcVar15,uVar16);
            pcVar6[uVar16] = '\0';
          }
          if ((uVar17 & 1) != 0) {
            *local_70 = '\0';
            uStack_78 = 0;
            if ((local_80 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          uStack_78 = uStack_c8;
          local_80 = local_d0;
          uVar16 = local_d0 & 0xff;
          local_70 = local_c0;
        }
        if ((uVar16 & 1) == 0) {
          pcVar15 = (char *)((long)&local_80 + (uVar16 >> 1) + 1);
          pcVar6 = pcVar10;
          if (pcVar10 != pcVar15) {
LAB_00ab834c:
            do {
              iVar5 = tolower((int)*pcVar6);
              pcVar14 = pcVar6 + 1;
              *pcVar6 = (char)iVar5;
              pcVar6 = pcVar14;
            } while (pcVar15 != pcVar14);
          }
        }
        else {
          pcVar15 = local_70 + uStack_78;
          pcVar6 = local_70;
          if (local_70 != pcVar15) goto LAB_00ab834c;
        }
        lVar12 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>...t&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>___t&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&)>>>>
                             *)(param_1 + 0x40),(basic_string *)&local_80);
        if (lVar12 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (in_x8,*(char **)(param_1 + 0x68),*(ulong *)(param_1 + 0x70));
        }
        else {
          local_d0 = CONCAT71(local_d0._1_7_,cVar1 == '/');
          plVar8 = *(long **)(lVar12 + 0x50);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          (**(code **)(*plVar8 + 0x30))(plVar8,&local_80,&local_d0,&local_a0,&local_b8);
          if ((in_x2 & 1) == 0) {
            pcVar15 = (char *)((ulong)&local_b8 | 1);
            uVar16 = local_b8 >> 1 & 0x7f;
            if ((local_b8 & 1) != 0) {
              pcVar15 = local_a8;
              uVar16 = local_b0;
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (in_x8,pcVar15,uVar16);
          }
        }
        lVar12 = *(long *)(param_1 + 0x70);
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(in_x8,pcVar15,uVar16 - 1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(in_x8,"[",1);
        lVar12 = uVar16 + 1;
      }
LAB_00ab7fe0:
      pcVar15 = (char *)(*(long *)(param_1 + 0x68) + lVar12);
      *(char **)(param_1 + 0x68) = pcVar15;
    } while (*pcVar15 != '\0');
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

