
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::DataReaderHelper::addDataFromFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocostudio::DataReaderHelper::addDataFromFile(DataReaderHelper *this,basic_string *param_1)

{
  size_t sVar1;
  void *pvVar2;
  int *piVar3;
  char *pcVar4;
  size_t __n;
  basic_string *pbVar5;
  basic_string bVar6;
  long lVar7;
  basic_string *pbVar8;
  long lVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  void *pvVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  size_t sVar14;
  basic_string *pbVar15;
  void *pvVar16;
  basic_string *__s1;
  char *pcVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  ulong local_150;
  void *pvStack_148;
  char *local_140;
  char *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  ulong local_110;
  undefined8 uStack_108;
  void *local_100;
  ulong local_f8;
  undefined8 local_f0;
  void *pvStack_e8;
  basic_string local_d8 [16];
  char *local_c8;
  byte local_c0 [16];
  void *local_b0;
  byte local_a8 [8];
  ulong local_a0;
  int *local_98;
  ulong local_90;
  void *pvStack_88;
  char *local_80;
  long local_70;
  
  this_00 = DAT_01785730;
  lVar9 = _configFileList;
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  if ((long)DAT_01785730 - _configFileList != 0) {
    __n = *(size_t *)(param_1 + 8);
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    uVar19 = ((long)DAT_01785730 - _configFileList >> 3) * -0x5555555555555555;
    uVar20 = 0;
    if (((byte)*param_1 & 1) == 0) {
      pbVar5 = param_1 + 1;
      __n = (ulong)((byte)*param_1 >> 1);
    }
    do {
      pbVar15 = (basic_string *)(lVar9 + uVar20 * 0x18);
      bVar6 = *pbVar15;
      sVar14 = (size_t)((byte)bVar6 >> 1);
      sVar1 = sVar14;
      if (((byte)bVar6 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar15 + 8);
      }
      if (sVar1 == __n) {
        __s1 = *(basic_string **)(lVar9 + uVar20 * 0x18 + 0x10);
        if (((byte)bVar6 & 1) == 0) {
          __s1 = pbVar15 + 1;
        }
        pbVar8 = pbVar5;
        sVar1 = __n;
        if (((byte)bVar6 & 1) == 0) {
          while( true ) {
            if (sVar1 == 0) goto LAB_00c4bff4;
            pbVar15 = pbVar15 + 1;
            if (*pbVar15 != *pbVar8) break;
            sVar14 = sVar14 - 1;
            pbVar8 = pbVar8 + 1;
            sVar1 = sVar14;
          }
        }
        else if ((__n == 0) || (iVar12 = memcmp(__s1,pbVar5,__n), iVar12 == 0)) goto LAB_00c4bff4;
      }
      uVar20 = (ulong)((int)uVar20 + 1);
    } while (uVar20 <= uVar19 && uVar19 - uVar20 != 0);
  }
  if (DAT_01785738 == this_00) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)&_configFileList,param_1);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(this_00,param_1);
    DAT_01785730 = this_00 + 0x18;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,param_1);
  uVar20 = local_90;
  pcVar4 = (char *)((ulong)&local_90 | 1);
  pvVar2 = (void *)(local_90 >> 1 & 0x7f);
  if ((local_90 & 1) != 0) {
    pcVar4 = local_80;
    pvVar2 = pvStack_88;
  }
  pvVar10 = pvVar2;
  if (pvVar2 == (void *)0x0) {
LAB_00c4bd80:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_90,"",0);
  }
  else {
    do {
      pvVar16 = pvVar10;
      if (pvVar16 == (void *)0x0) goto LAB_00c4bd80;
      pvVar10 = (void *)((long)pvVar16 - 1U);
    } while ((pcVar4 + (long)pvVar16)[-1] != '/');
    if ((void *)((long)pvVar16 - 1U) == (void *)0xffffffffffffffff) goto LAB_00c4bd80;
    if (pvVar16 <= pvVar2) {
      pvVar2 = pvVar16;
    }
    pvStack_148 = (void *)0x0;
    local_140 = (char *)0x0;
    local_150 = 0;
    if ((void *)0xffffffffffffffef < pvVar2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pvVar2 < (void *)0x17) {
      pcVar18 = (char *)((ulong)&local_150 | 1);
      local_150 = (ulong)(byte)((int)pvVar2 << 1);
      if (pvVar2 != (void *)0x0) goto LAB_00c4c0b0;
      *pcVar18 = '\0';
    }
    else {
      uVar19 = (long)pvVar2 + 0x10U & 0xfffffffffffffff0;
      pcVar18 = operator_new(uVar19);
      local_150 = uVar19 | 1;
      pvStack_148 = pvVar2;
      local_140 = pcVar18;
LAB_00c4c0b0:
      memcpy(pcVar18,pcVar4,(size_t)pvVar2);
      pcVar18[(long)pvVar2] = '\0';
    }
    if ((uVar20 & 1) != 0) {
      *local_80 = '\0';
      pvStack_88 = (void *)0x0;
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
    }
    pvStack_88 = pvStack_148;
    local_90 = local_150;
    local_80 = local_140;
  }
  plVar13 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar13 + 0x138))(local_a8,plVar13,param_1);
  plVar13 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar13 + 0x50))(local_c0,plVar13,param_1);
  uVar20 = (ulong)(local_a8[0] >> 1);
  if ((local_a8[0] & 1) != 0) {
    uVar20 = local_a0;
  }
  if (uVar20 == 4) {
    piVar3 = (int *)((ulong)local_a8 | 1);
    if ((local_a8[0] & 1) != 0) {
      piVar3 = local_98;
    }
    bVar11 = *piVar3 == 0x6273632e;
  }
  else {
    bVar11 = false;
  }
  std::__ndk1::mutex::lock((mutex *)(_dataReaderHelper + 0x100));
  FUN_00c4c230(local_d8,local_c0,bVar11);
  std::__ndk1::mutex::unlock((mutex *)(_dataReaderHelper + 0x100));
  uStack_120 = 0;
  local_128 = 0;
  uStack_130 = 0;
  local_138 = (char *)0x0;
  local_140 = (char *)0x0;
  pvStack_148 = (void *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = (void *)0x0;
  pvStack_e8 = (void *)0x0;
  local_f0 = 0;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_110
      != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1)
  {
    uVar20 = *(ulong *)(param_1 + 8);
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar5 = param_1 + 1;
      uVar20 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_110,(char *)pbVar5,uVar20);
  }
  local_150 = 0;
  pvVar2 = (void *)(local_90 >> 1 & 0x7f);
  pcVar4 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pvVar2 = pvStack_88;
    pcVar4 = local_80;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_f8
         ,pcVar4,(ulong)pvVar2);
  uVar20 = (ulong)(local_a8[0] >> 1);
  if ((local_a8[0] & 1) != 0) {
    uVar20 = local_a0;
  }
  if (uVar20 == 0xb) {
    piVar3 = (int *)((ulong)local_a8 | 1);
    if ((local_a8[0] & 1) != 0) {
      piVar3 = local_98;
    }
    iVar12 = memcmp(piVar3,".exportjson",0xb);
joined_r0x00c4c07c:
    if (iVar12 == 0) {
      addDataFromJsonCache(local_d8,(_DataInfo *)&local_150);
      goto LAB_00c4bf5c;
    }
  }
  else {
    if (uVar20 == 5) {
      piVar3 = (int *)((ulong)local_a8 | 1);
      if ((local_a8[0] & 1) != 0) {
        piVar3 = local_98;
      }
      iVar12 = memcmp(piVar3,".json",5);
      goto joined_r0x00c4c07c;
    }
    if (uVar20 == 4) {
      piVar3 = (int *)((ulong)local_a8 | 1);
      if ((local_a8[0] & 1) != 0) {
        piVar3 = local_98;
      }
      if (*piVar3 == 0x6c6d782e) {
        addDataFromCache(local_d8,(_DataInfo *)&local_150);
        goto LAB_00c4bf5c;
      }
    }
  }
  if (bVar11 != false) {
    pcVar4 = (char *)((ulong)local_d8 | 1);
    if (((byte)local_d8[0] & 1) != 0) {
      pcVar4 = local_c8;
    }
    addDataFromBinaryCache(pcVar4,(_DataInfo *)&local_150);
  }
LAB_00c4bf5c:
  if ((local_f8 & 1) != 0) {
    operator_delete(pvStack_e8);
  }
  if ((local_110 & 1) != 0) {
    operator_delete(local_100);
  }
  std::__ndk1::
  __deque_base<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::clear((__deque_base<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *)&pvStack_148);
  pcVar4 = local_138;
  pcVar18 = local_140;
  if (local_140 != local_138) {
    do {
      pcVar17 = pcVar18 + 8;
      operator_delete(*(void **)pcVar18);
      pcVar18 = pcVar17;
    } while (pcVar4 != pcVar17);
    if ((long)local_138 - (long)local_140 != 0) {
      local_138 = local_138 +
                  (((long)local_138 - (long)local_140) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (pvStack_148 != (void *)0x0) {
    operator_delete(pvStack_148);
  }
  if (((byte)local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_00c4bff4:
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

