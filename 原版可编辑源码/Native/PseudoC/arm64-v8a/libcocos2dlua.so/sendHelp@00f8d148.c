
/* cocos2d::Console::sendHelp(int, std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Console::Command*,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Console::Command*>
   > > const&, char const*) */

void cocos2d::Console::sendHelp(int param_1,unordered_map *param_2,char *param_3)

{
  char *__s1;
  byte bVar1;
  int iVar2;
  size_t __n;
  byte *pbVar3;
  size_t sVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  
  __n = strlen(param_3);
  sVar4 = (ulong)(Utility::_prompt >> 1);
  if ((Utility::_prompt & 1) != 0) {
    sVar4 = DAT_0178fc00;
  }
  if (sVar4 == __n) {
    __s1 = DAT_0178fc08;
    if ((Utility::_prompt & 1) == 0) {
      __s1 = &DAT_0178fbf9;
    }
    iVar2 = strncmp(__s1,param_3,__n);
    if (iVar2 == 0) {
      fwrite("bad parameter error: a buffer is the prompt string.\n",0x34,1,
             (FILE *)pthread_rwlock_tryrdlock);
      plVar5 = *(long **)(param_2 + 0x10);
      goto joined_r0x00f8d2f4;
    }
  }
  if (__n != 0) {
    uVar6 = 0;
    do {
      sVar4 = __n - uVar6;
      if (0x1ff < sVar4) {
        sVar4 = 0x200;
      }
      sendto(param_1,param_3 + uVar6,sVar4,0,(sockaddr *)0x0,0);
      uVar6 = sVar4 + uVar6;
    } while (uVar6 < __n);
  }
  plVar5 = *(long **)(param_2 + 0x10);
joined_r0x00f8d2f4:
  do {
    if (plVar5 == (long *)0x0) {
      return;
    }
    pbVar7 = (byte *)plVar5[5];
    bVar1 = pbVar7[0x18];
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 != 0) {
LAB_00f8d254:
        if ((*pbVar7 & 1) == 0) {
          pbVar3 = pbVar7 + 1;
        }
        else {
          pbVar3 = *(byte **)(pbVar7 + 0x10);
        }
        Utility::mydprintf(param_1,"\t%s",pbVar3);
        if ((*pbVar7 & 1) == 0) {
          pbVar3 = pbVar7 + 1;
        }
        else {
          pbVar3 = *(byte **)(pbVar7 + 0x10);
        }
        sVar4 = strlen((char *)pbVar3);
        if (sVar4 < 0x18) {
          lVar8 = 0;
          do {
            Utility::mydprintf(param_1,"\t");
            lVar8 = lVar8 + 1;
          } while (lVar8 < (long)(3 - (sVar4 >> 3)));
        }
        if ((pbVar7[0x18] & 1) == 0) {
          pbVar7 = pbVar7 + 0x19;
        }
        else {
          pbVar7 = *(byte **)(pbVar7 + 0x28);
        }
        Utility::mydprintf(param_1,"%s\n",pbVar7);
      }
    }
    else if (*(long *)(pbVar7 + 0x20) != 0) goto LAB_00f8d254;
    plVar5 = (long *)*plVar5;
  } while( true );
}

