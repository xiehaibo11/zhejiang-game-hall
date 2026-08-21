
/* WARNING: Removing unreachable block (ram,0x00eae9d8) */

void FUN_00eae718(long param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  long lVar2;
  void *pvVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0xa6) == '\0') {
    bVar4 = (byte)*param_2;
    if ((bVar4 & 1) == 0) {
      if (bVar4 >> 1 != 1) goto LAB_00eaebd8;
    }
    else if (param_2[1] != 1) goto LAB_00eaebd8;
    if (((byte)*param_3 & 1) == 0) {
      if ((byte)((byte)*param_3 >> 1) != 1) {
LAB_00eaebd8:
        uVar5 = FUN_00eaf64c();
        if (((byte)local_68 & 1) != 0) {
          operator_delete(local_58);
        }
        if (((byte)local_80 & 1) != 0) {
          operator_delete(local_70);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar5);
      }
    }
    else if (param_3[1] != 1) goto LAB_00eaebd8;
    if (*(char *)(param_1 + 0xa5) != '\0') {
      if ((bVar4 & 1) == 0) {
        pbVar8 = (byte *)((long)param_2 + 1);
      }
      else {
        pbVar8 = (byte *)param_2[2];
      }
      bVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),*pbVar8);
      if ((*param_2 & 1) == 0) {
        pbVar8 = (byte *)((long)param_2 + 1);
      }
      else {
        pbVar8 = (byte *)param_2[2];
      }
      *pbVar8 = bVar4;
      if ((*param_3 & 1) == 0) {
        pbVar8 = (byte *)((long)param_3 + 1);
      }
      else {
        pbVar8 = (byte *)param_3[2];
      }
      bVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),*pbVar8);
      if ((*param_3 & 1) == 0) {
        pbVar8 = (byte *)((long)param_3 + 1);
      }
      else {
        pbVar8 = (byte *)param_3[2];
      }
      *pbVar8 = bVar4;
    }
    local_70 = (void *)param_2[2];
    uStack_78 = param_2[1];
    local_80 = *param_2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    local_58 = (void *)param_3[2];
    uStack_60 = param_3[1];
    local_68 = *param_3;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    puVar1 = *(ulong **)(param_1 + 0x60);
    if (puVar1 < *(ulong **)(param_1 + 0x68)) {
      puVar1[2] = (ulong)local_70;
      puVar1[1] = uStack_78;
      *puVar1 = local_80;
      uStack_78 = 0;
      local_70 = (void *)0x0;
      local_80 = 0;
      puVar1[5] = (ulong)local_58;
      puVar1[4] = uStack_60;
      puVar1[3] = local_68;
      uStack_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      *(ulong **)(param_1 + 0x60) = puVar1 + 6;
      goto LAB_00eaebac;
    }
    std::__ndk1::
    vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::
    __push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ((vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                *)(param_1 + 0x58),(pair *)&local_80);
    pvVar3 = local_70;
    uVar9 = local_80;
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
      pvVar3 = local_70;
      uVar9 = local_80;
    }
  }
  else {
    pbVar8 = (byte *)((long)param_2 + 1);
    if (*(char *)(param_1 + 0xa5) == '\0') {
      uVar9 = 0;
      uVar6 = (ulong)(byte)*param_2;
      if (((byte)*param_2 & 1) == 0) goto LAB_00eae880;
      while (uVar9 < param_2[1]) {
        while( true ) {
          pbVar7 = pbVar8;
          if ((uVar6 & 1) != 0) {
            pbVar7 = (byte *)param_2[2];
          }
          pbVar7[uVar9] = pbVar7[uVar9];
          uVar9 = uVar9 + 1;
          uVar6 = (ulong)(byte)*param_2;
          if (((byte)*param_2 & 1) != 0) break;
LAB_00eae880:
          if (uVar6 >> 1 <= uVar9) goto LAB_00eae8a8;
        }
      }
LAB_00eae8a8:
      uVar9 = 0;
      uVar6 = (ulong)(byte)*param_3;
      if (((byte)*param_3 & 1) == 0) goto LAB_00eae8d8;
      while (uVar9 < param_3[1]) {
        while( true ) {
          pbVar8 = (byte *)((long)param_3 + 1);
          if ((uVar6 & 1) != 0) {
            pbVar8 = (byte *)param_3[2];
          }
          pbVar8[uVar9] = pbVar8[uVar9];
          uVar9 = uVar9 + 1;
          uVar6 = (ulong)(byte)*param_3;
          if (((byte)*param_3 & 1) != 0) break;
LAB_00eae8d8:
          if (uVar6 >> 1 <= uVar9) goto LAB_00eae900;
        }
      }
    }
    else {
      uVar9 = 0;
      uVar6 = (ulong)(byte)*param_2;
      if (((byte)*param_2 & 1) == 0) goto LAB_00eae77c;
      while (uVar9 < param_2[1]) {
        while( true ) {
          pbVar7 = pbVar8;
          if ((uVar6 & 1) != 0) {
            pbVar7 = (byte *)param_2[2];
          }
          bVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                            (*(long **)(param_1 + 0x18),pbVar7[uVar9]);
          pbVar7 = pbVar8;
          if ((*param_2 & 1) != 0) {
            pbVar7 = (byte *)param_2[2];
          }
          pbVar7[uVar9] = bVar4;
          uVar9 = uVar9 + 1;
          uVar6 = (ulong)(byte)*param_2;
          if (((byte)*param_2 & 1) != 0) break;
LAB_00eae77c:
          if (uVar6 >> 1 <= uVar9) goto LAB_00eae7c8;
        }
      }
LAB_00eae7c8:
      uVar9 = 0;
      uVar6 = (ulong)(byte)*param_3;
      if (((byte)*param_3 & 1) == 0) goto LAB_00eae7ec;
      while (uVar9 < param_3[1]) {
        while( true ) {
          pbVar8 = (byte *)((long)param_3 + 1);
          if ((uVar6 & 1) != 0) {
            pbVar8 = (byte *)param_3[2];
          }
          bVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                            (*(long **)(param_1 + 0x18),pbVar8[uVar9]);
          pbVar8 = (byte *)((long)param_3 + 1);
          if ((*param_3 & 1) != 0) {
            pbVar8 = (byte *)param_3[2];
          }
          pbVar8[uVar9] = bVar4;
          uVar9 = uVar9 + 1;
          uVar6 = (ulong)(byte)*param_3;
          if (((byte)*param_3 & 1) != 0) break;
LAB_00eae7ec:
          if (uVar6 >> 1 <= uVar9) goto LAB_00eae900;
        }
      }
    }
LAB_00eae900:
    if (((byte)*param_2 & 1) == 0) {
      pbVar8 = (byte *)((long)param_2 + 1);
      uVar9 = (ulong)(byte)((byte)*param_2 >> 1);
    }
    else {
      uVar9 = param_2[1];
      pbVar8 = (byte *)param_2[2];
    }
    std::__ndk1::regex_traits<char>::transform<std::__ndk1::__wrap_iter<char*>>
              (&local_98,param_1 + 0x10,pbVar8,pbVar8 + uVar9);
    if (((byte)*param_3 & 1) == 0) {
      pbVar8 = (byte *)((long)param_3 + 1);
      uVar9 = (ulong)(byte)((byte)*param_3 >> 1);
    }
    else {
      uVar9 = param_3[1];
      pbVar8 = (byte *)param_3[2];
    }
    std::__ndk1::regex_traits<char>::transform<std::__ndk1::__wrap_iter<char*>>
              (&local_b0,param_1 + 0x10,pbVar8,pbVar8 + uVar9);
    local_70 = local_88;
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_58 = local_a0;
    uStack_60 = uStack_a8;
    local_68 = local_b0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = (void *)0x0;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    local_b0 = 0;
    puVar1 = *(ulong **)(param_1 + 0x60);
    if (puVar1 < *(ulong **)(param_1 + 0x68)) {
      puVar1[2] = (ulong)local_70;
      puVar1[1] = uStack_78;
      *puVar1 = local_80;
      uStack_78 = 0;
      local_70 = (void *)0x0;
      local_80 = 0;
      puVar1[5] = (ulong)local_58;
      puVar1[4] = uStack_60;
      puVar1[3] = local_68;
      uStack_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      *(ulong **)(param_1 + 0x60) = puVar1 + 6;
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
      ::
      __push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                ((vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                  *)(param_1 + 0x58),(pair *)&local_80);
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    pvVar3 = local_88;
    uVar9 = local_98;
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
      pvVar3 = local_88;
      uVar9 = local_98;
    }
  }
  if ((uVar9 & 1) != 0) {
    operator_delete(pvVar3);
  }
LAB_00eaebac:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

