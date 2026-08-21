
/* WARNING: Removing unreachable block (ram,0x00868518) */

void FUN_00868248(long param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  long lVar2;
  void *pvVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
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
      if (bVar4 >> 1 != 1) goto LAB_0086871c;
    }
    else if (param_2[1] != 1) goto LAB_0086871c;
    if (((byte)*param_3 & 1) == 0) {
      if ((byte)((byte)*param_3 >> 1) != 1) {
LAB_0086871c:
                    /* WARNING: Subroutine does not return */
        FUN_00868820();
      }
    }
    else if (param_3[1] != 1) goto LAB_0086871c;
    if (*(char *)(param_1 + 0xa5) != '\0') {
      if ((bVar4 & 1) == 0) {
        pbVar6 = (byte *)((long)param_2 + 1);
      }
      else {
        pbVar6 = (byte *)param_2[2];
      }
      bVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),*pbVar6);
      if ((*param_2 & 1) == 0) {
        pbVar6 = (byte *)((long)param_2 + 1);
      }
      else {
        pbVar6 = (byte *)param_2[2];
      }
      *pbVar6 = bVar4;
      if ((*param_3 & 1) == 0) {
        pbVar6 = (byte *)((long)param_3 + 1);
      }
      else {
        pbVar6 = (byte *)param_3[2];
      }
      bVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),*pbVar6);
      if ((*param_3 & 1) == 0) {
        pbVar6 = (byte *)((long)param_3 + 1);
      }
      else {
        pbVar6 = (byte *)param_3[2];
      }
      *pbVar6 = bVar4;
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
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 0x30;
      goto LAB_008686f0;
    }
    std::__ndk1::
    vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::
    __push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ((vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                *)(param_1 + 0x58),(pair *)&local_80);
    pvVar3 = local_70;
    uVar7 = local_80;
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
      pvVar3 = local_70;
      uVar7 = local_80;
    }
  }
  else {
    if (*(char *)(param_1 + 0xa5) == '\0') {
      uVar7 = 0;
      uVar5 = (ulong)(byte)*param_2;
      if (((byte)*param_2 & 1) == 0) goto LAB_008683ac;
      while (uVar7 < param_2[1]) {
        while( true ) {
          pbVar6 = (byte *)((long)param_2 + 1);
          if ((uVar5 & 1) != 0) {
            pbVar6 = (byte *)param_2[2];
          }
          pbVar6 = pbVar6 + uVar7;
          uVar7 = uVar7 + 1;
          *pbVar6 = *pbVar6;
          uVar5 = (ulong)(byte)*param_2;
          if (((byte)*param_2 & 1) != 0) break;
LAB_008683ac:
          if (uVar5 >> 1 <= uVar7) goto LAB_008683e0;
        }
      }
LAB_008683e0:
      uVar7 = 0;
      uVar5 = (ulong)(byte)*param_3;
      if (((byte)*param_3 & 1) == 0) goto LAB_00868408;
      while (uVar7 < param_3[1]) {
        while( true ) {
          pbVar6 = (byte *)((long)param_3 + 1);
          if ((uVar5 & 1) != 0) {
            pbVar6 = (byte *)param_3[2];
          }
          pbVar6 = pbVar6 + uVar7;
          uVar7 = uVar7 + 1;
          *pbVar6 = *pbVar6;
          uVar5 = (ulong)(byte)*param_3;
          if (((byte)*param_3 & 1) != 0) break;
LAB_00868408:
          if (uVar5 >> 1 <= uVar7) goto LAB_0086843c;
        }
      }
    }
    else {
      uVar7 = 0;
      uVar5 = (ulong)(byte)*param_2;
      if (((byte)*param_2 & 1) == 0) goto LAB_008682ac;
      while (uVar7 < param_2[1]) {
        while( true ) {
          pbVar6 = (byte *)((long)param_2 + 1);
          if ((uVar5 & 1) != 0) {
            pbVar6 = (byte *)param_2[2];
          }
          bVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                            (*(long **)(param_1 + 0x18),pbVar6[uVar7]);
          pbVar6 = (byte *)((long)param_2 + 1);
          if ((*param_2 & 1) != 0) {
            pbVar6 = (byte *)param_2[2];
          }
          pbVar6[uVar7] = bVar4;
          uVar7 = uVar7 + 1;
          uVar5 = (ulong)(byte)*param_2;
          if (((byte)*param_2 & 1) != 0) break;
LAB_008682ac:
          if (uVar5 >> 1 <= uVar7) goto LAB_008682f8;
        }
      }
LAB_008682f8:
      uVar7 = 0;
      uVar5 = (ulong)(byte)*param_3;
      if (((byte)*param_3 & 1) == 0) goto LAB_0086831c;
      while (uVar7 < param_3[1]) {
        while( true ) {
          pbVar6 = (byte *)((long)param_3 + 1);
          if ((uVar5 & 1) != 0) {
            pbVar6 = (byte *)param_3[2];
          }
          bVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                            (*(long **)(param_1 + 0x18),pbVar6[uVar7]);
          pbVar6 = (byte *)((long)param_3 + 1);
          if ((*param_3 & 1) != 0) {
            pbVar6 = (byte *)param_3[2];
          }
          pbVar6[uVar7] = bVar4;
          uVar7 = uVar7 + 1;
          uVar5 = (ulong)(byte)*param_3;
          if (((byte)*param_3 & 1) != 0) break;
LAB_0086831c:
          if (uVar5 >> 1 <= uVar7) goto LAB_0086843c;
        }
      }
    }
LAB_0086843c:
    if (((byte)*param_2 & 1) == 0) {
      pbVar6 = (byte *)((long)param_2 + 1);
      uVar7 = (ulong)(byte)((byte)*param_2 >> 1);
    }
    else {
      uVar7 = param_2[1];
      pbVar6 = (byte *)param_2[2];
    }
    std::__ndk1::regex_traits<char>::transform<std::__ndk1::__wrap_iter<char*>>
              (&local_98,param_1 + 0x10,pbVar6,pbVar6 + uVar7);
    if (((byte)*param_3 & 1) == 0) {
      pbVar6 = (byte *)((long)param_3 + 1);
      uVar7 = (ulong)(byte)((byte)*param_3 >> 1);
    }
    else {
      uVar7 = param_3[1];
      pbVar6 = (byte *)param_3[2];
    }
    std::__ndk1::regex_traits<char>::transform<std::__ndk1::__wrap_iter<char*>>
              (&local_b0,param_1 + 0x10,pbVar6,pbVar6 + uVar7);
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
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 0x30;
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
    uVar7 = local_98;
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
      pvVar3 = local_88;
      uVar7 = local_98;
    }
  }
  if ((uVar7 & 1) != 0) {
    operator_delete(pvVar3);
  }
LAB_008686f0:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

