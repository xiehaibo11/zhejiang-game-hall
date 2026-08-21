
/* cocos2d::Console::printFileUtils(int) */

void __thiscall cocos2d::Console::printFileUtils(Console *this,int param_1)

{
  byte *pbVar1;
  void *pvVar2;
  char *__s;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  long *plVar7;
  size_t __n;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  byte *local_a0;
  byte *local_98;
  byte *local_88;
  byte *local_80;
  void *local_70 [2];
  void *local_60;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  plVar7 = (long *)FileUtils::getInstance();
  Utility::mydprintf(param_1,"\nSearch Paths:\n");
  (**(code **)(*plVar7 + 0x90))(&local_88,plVar7);
  pbVar6 = local_80;
  for (pbVar1 = local_88; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x18) {
    if ((*pbVar1 & 1) == 0) {
      pbVar8 = pbVar1 + 1;
    }
    else {
      pbVar8 = *(byte **)(pbVar1 + 0x10);
    }
    Utility::mydprintf(param_1,"%s\n",pbVar8);
  }
  Utility::mydprintf(param_1,"\nResolution Order:\n");
  (**(code **)(*plVar7 + 0x80))(&local_a0,plVar7);
  pbVar6 = local_98;
  for (pbVar1 = local_a0; pbVar1 != pbVar6; pbVar1 = pbVar1 + 0x18) {
    if ((*pbVar1 & 1) == 0) {
      pbVar8 = pbVar1 + 1;
    }
    else {
      pbVar8 = *(byte **)(pbVar1 + 0x10);
    }
    Utility::mydprintf(param_1,"%s\n",pbVar8);
  }
  Utility::mydprintf(param_1,"\nWritable Path:\n");
  (**(code **)(*plVar7 + 0xa0))(local_70,plVar7);
  pvVar2 = (void *)((ulong)local_70 | 1);
  if (((ulong)local_70[0] & 1) != 0) {
    pvVar2 = local_60;
  }
  Utility::mydprintf(param_1,"%s\n",pvVar2);
  if (((ulong)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  Utility::mydprintf(param_1,"\nFull Path Cache:\n");
  std::__ndk1::
  unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                   *)local_70,(unordered_map *)(plVar7 + 0x17));
  for (plVar7 = local_60; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    if ((*(byte *)(plVar7 + 2) & 1) == 0) {
      lVar9 = (long)plVar7 + 0x11;
    }
    else {
      lVar9 = plVar7[4];
    }
    if ((*(byte *)(plVar7 + 5) & 1) == 0) {
      lVar10 = (long)plVar7 + 0x29;
    }
    else {
      lVar10 = plVar7[7];
    }
    Utility::mydprintf(param_1,"%s -> %s\n",lVar9,lVar10);
  }
  __s = DAT_0178fc08;
  if ((Utility::_prompt & 1) == 0) {
    __s = &DAT_0178fbf9;
  }
  __n = strlen(__s);
  sendto(param_1,__s,__n,0,(sockaddr *)0x0,0);
  pvVar2 = local_70[0];
  puVar5 = local_60;
  while (puVar5 != (void *)0x0) {
    pvVar11 = (void *)*puVar5;
    local_70[0] = pvVar2;
    if ((*(byte *)(puVar5 + 5) & 1) != 0) {
      operator_delete((void *)puVar5[7]);
    }
    if ((*(byte *)(puVar5 + 2) & 1) != 0) {
      operator_delete((void *)puVar5[4]);
    }
    operator_delete(puVar5);
    pvVar2 = local_70[0];
    puVar5 = pvVar11;
  }
  local_70[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pbVar1 = local_a0;
  if (local_a0 != (byte *)0x0) {
    if (local_98 != local_a0) {
      bVar3 = local_98[-0x18];
      pbVar6 = local_98 + -0x18;
      while( true ) {
        pbVar8 = pbVar6;
        if ((bVar3 & 1) != 0) {
          operator_delete(*(void **)(local_98 + -8));
        }
        if (pbVar1 == pbVar8) break;
        bVar3 = pbVar8[-0x18];
        pbVar6 = pbVar8 + -0x18;
        local_98 = pbVar8;
      }
    }
    local_98 = pbVar1;
    operator_delete(local_a0);
  }
  pbVar1 = local_88;
  if (local_88 != (byte *)0x0) {
    if (local_80 != local_88) {
      bVar3 = local_80[-0x18];
      pbVar6 = local_80 + -0x18;
      while( true ) {
        pbVar8 = pbVar6;
        if ((bVar3 & 1) != 0) {
          operator_delete(*(void **)(local_80 + -8));
        }
        if (pbVar1 == pbVar8) break;
        bVar3 = pbVar8[-0x18];
        pbVar6 = pbVar8 + -0x18;
        local_80 = pbVar8;
      }
    }
    local_80 = pbVar1;
    operator_delete(local_88);
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

