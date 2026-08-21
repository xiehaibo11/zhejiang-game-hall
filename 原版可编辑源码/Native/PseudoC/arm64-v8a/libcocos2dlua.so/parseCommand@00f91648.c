
/* cocos2d::Console::parseCommand(int) */

void __thiscall cocos2d::Console::parseCommand(Console *this,int param_1)

{
  char *pcVar1;
  basic_string bVar2;
  long lVar3;
  bool bVar4;
  basic_string *pbVar5;
  basic_string *pbVar6;
  int iVar7;
  ssize_t sVar8;
  int *piVar9;
  size_t sVar10;
  ulong uVar11;
  Console *this_00;
  undefined8 uVar12;
  long lVar13;
  basic_string *pbVar14;
  basic_string *pbVar15;
  ulong uVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_2d0 [16];
  void *local_2c0;
  basic_string *local_2b8;
  basic_string *pbStack_2b0;
  void *local_2a8;
  basic_string *local_2a0;
  basic_string *pbStack_298;
  undefined1 *local_290;
  undefined7 uStack_288;
  undefined1 local_281;
  undefined7 uStack_280;
  char acStack_279 [17];
  basic_string local_268 [512];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  sVar8 = recvfrom(param_1,&local_2a0,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
  lVar13 = 0;
  if (sVar8 == 0) goto LAB_00f91870;
  if (sVar8 != 1) {
    piVar9 = (int *)__errno();
    if (*piVar9 == 4) {
      pbVar15 = local_268;
      goto LAB_00f916e0;
    }
LAB_00f91bf8:
    uVar12 = 0;
    goto LAB_00f91e20;
  }
  local_268[0] = local_2a0._0_1_;
  if (local_2a0._0_1_ == (basic_string)0xa) {
    lVar13 = 0;
LAB_00f91870:
    bVar4 = false;
  }
  else {
    pbVar15 = (basic_string *)((ulong)local_268 | 1);
LAB_00f916e0:
    sVar8 = recvfrom(param_1,&local_2a0,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
    lVar13 = 0;
    if (sVar8 == 0) goto LAB_00f91870;
    if (sVar8 == 1) {
      *pbVar15 = local_2a0._0_1_;
      pbVar15 = pbVar15 + 1;
      if (local_2a0._0_1_ == (basic_string)0xa) {
        lVar13 = 1;
        goto LAB_00f91870;
      }
    }
    else {
      piVar9 = (int *)__errno();
      if (*piVar9 != 4) goto LAB_00f91bf8;
    }
    sVar8 = recvfrom(param_1,&local_2a0,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
    lVar13 = 0;
    if (sVar8 == 0) goto LAB_00f91870;
    if (sVar8 == 1) {
      *pbVar15 = local_2a0._0_1_;
      pbVar15 = pbVar15 + 1;
      if (local_2a0._0_1_ == (basic_string)0xa) {
        lVar13 = 2;
        goto LAB_00f91870;
      }
    }
    else {
      piVar9 = (int *)__errno();
      if (*piVar9 != 4) goto LAB_00f91bf8;
    }
    sVar8 = recvfrom(param_1,&local_2a0,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
    lVar13 = 0;
    if (sVar8 == 0) goto LAB_00f91870;
    if (sVar8 == 1) {
      *pbVar15 = local_2a0._0_1_;
      pbVar15 = pbVar15 + 1;
      if (local_2a0._0_1_ == (basic_string)0xa) {
        lVar13 = 3;
        goto LAB_00f91870;
      }
    }
    else {
      piVar9 = (int *)__errno();
      if (*piVar9 != 4) goto LAB_00f91bf8;
    }
    sVar8 = recvfrom(param_1,&local_2a0,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
    lVar13 = 0;
    if (sVar8 == 0) goto LAB_00f91870;
    if (sVar8 == 1) {
      *pbVar15 = local_2a0._0_1_;
      pbVar15 = pbVar15 + 1;
      if (local_2a0._0_1_ == (basic_string)0xa) {
        lVar13 = 4;
        goto LAB_00f91870;
      }
    }
    else {
      piVar9 = (int *)__errno();
      if (*piVar9 != 4) goto LAB_00f91bf8;
    }
    sVar8 = recvfrom(param_1,&local_2a0,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
    lVar13 = 0;
    if (sVar8 == 0) goto LAB_00f91870;
    if (sVar8 == 1) {
      *pbVar15 = local_2a0._0_1_;
      if (local_2a0._0_1_ == (basic_string)0xa) {
        lVar13 = 5;
        goto LAB_00f91870;
      }
    }
    else {
      piVar9 = (int *)__errno();
      if (*piVar9 != 4) goto LAB_00f91bf8;
    }
    bVar4 = true;
    lVar13 = 6;
  }
  iVar7 = memcmp(local_268,"upload",6);
  if (iVar7 == 0) {
    local_2b8 = (basic_string *)((ulong)local_2b8 & 0xffffffffffffff00);
    this_00 = (Console *)recvfrom(param_1,&local_2b8,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
    if (local_2b8._0_1_ ==
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x20) {
      commandUpload(this_00,param_1);
    }
    else {
      pbStack_298 = (basic_string *)0x2064696c61766e69;
      local_2a0 = (basic_string *)0x203a64616f6c7075;
      uStack_288 = 0x6c656827206570;
      local_290 = (undefined1 *)0x7954202173677261;
      builtin_strncpy(acStack_279,"ptions\n",8);
      local_281 = 0x70;
      uStack_280 = 0x6f20726f662027;
      uVar11 = __strlen_chk(&local_2a0,0x2f);
      uVar16 = (ulong)(Utility::_prompt >> 1);
      if ((Utility::_prompt & 1) != 0) {
        uVar16 = DAT_0178fc00;
      }
      if (uVar16 == uVar11) {
        pcVar1 = DAT_0178fc08;
        if ((Utility::_prompt & 1) == 0) {
          pcVar1 = &DAT_0178fbf9;
        }
        iVar7 = strncmp(pcVar1,(char *)&local_2a0,uVar11);
        if (iVar7 == 0) {
          fwrite("bad parameter error: a buffer is the prompt string.\n",0x34,1,
                 (FILE *)pthread_rwlock_tryrdlock);
          goto LAB_00f91ba0;
        }
      }
      if (uVar11 != 0) {
        uVar16 = 0;
        do {
          sVar10 = uVar11 - uVar16;
          if (0x1ff < sVar10) {
            sVar10 = 0x200;
          }
          sendto(param_1,(void *)((long)&local_2a0 + uVar16),sVar10,0,(sockaddr *)0x0,0);
          uVar16 = sVar10 + uVar16;
        } while (uVar16 < uVar11);
      }
    }
LAB_00f91ba0:
    pcVar1 = DAT_0178fc08;
    if ((Utility::_prompt & 1) == 0) {
      pcVar1 = &DAT_0178fbf9;
    }
    sVar10 = strlen(pcVar1);
    sendto(param_1,pcVar1,sVar10,0,(sockaddr *)0x0,0);
  }
  else {
    if (bVar4) {
      lVar13 = 0x1f9;
      pbVar15 = local_268 + 6;
      do {
        sVar8 = recvfrom(param_1,&local_2a0,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
        if (sVar8 == 1) {
          pbVar14 = pbVar15 + 1;
          *pbVar15 = local_2a0._0_1_;
          if (local_2a0._0_1_ == (basic_string)0xa) break;
        }
        else {
          if (sVar8 == 0) goto LAB_00f91a10;
          piVar9 = (int *)__errno();
          pbVar14 = pbVar15;
          if (*piVar9 != 4) {
            pbStack_298 = (basic_string *)0xa21726f727265;
            local_2a0 = (basic_string *)0x206e776f6e6b6e55;
            pcVar1 = DAT_0178fc08;
            if ((Utility::_prompt & 1) == 0) {
              pcVar1 = &DAT_0178fbf9;
            }
            sVar10 = strlen(pcVar1);
            sendto(param_1,pcVar1,sVar10,0,(sockaddr *)0x0,0);
            uVar11 = __strlen_chk(&local_2a0,0x10);
            uVar16 = (ulong)(Utility::_prompt >> 1);
            if ((Utility::_prompt & 1) != 0) {
              uVar16 = DAT_0178fc00;
            }
            if (uVar16 == uVar11) {
              pcVar1 = DAT_0178fc08;
              if ((Utility::_prompt & 1) == 0) {
                pcVar1 = &DAT_0178fbf9;
              }
              iVar7 = strncmp(pcVar1,(char *)&local_2a0,uVar11);
              if (iVar7 == 0) {
                fwrite("bad parameter error: a buffer is the prompt string.\n",0x34,1,
                       (FILE *)pthread_rwlock_tryrdlock);
                goto LAB_00f91bf8;
              }
            }
            if (uVar11 != 0) {
              uVar16 = 0;
              do {
                sVar10 = uVar11 - uVar16;
                if (0x1ff < sVar10) {
                  sVar10 = 0x200;
                }
                sendto(param_1,(void *)((long)&local_2a0 + uVar16),sVar10,0,(sockaddr *)0x0,0);
                uVar16 = sVar10 + uVar16;
              } while (uVar16 < uVar11);
            }
            goto LAB_00f91bf8;
          }
        }
        lVar13 = lVar13 + -1;
        pbVar15 = pbVar14;
      } while (lVar13 != 0);
      *pbVar14 = (basic_string)0x0;
    }
    else {
      local_268[lVar13] = (basic_string)0x0;
    }
LAB_00f91a10:
    pbStack_298 = (basic_string *)0x0;
    local_290 = (undefined1 *)0x0;
    local_2a0 = (basic_string *)0x0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_2b8,(char *)local_268);
    if (((ulong)local_2a0 & 1) != 0) {
      *local_290 = 0;
      pbStack_298 = (basic_string *)0x0;
      if (((ulong)local_2a0 & 1) != 0) {
        operator_delete(local_290);
      }
    }
    pbStack_298 = pbStack_2b0;
    local_2a0 = local_2b8;
    local_290 = local_2a8;
    pbStack_2b0 = (basic_string *)0x0;
    local_2a8 = (void *)0x0;
    local_2b8 = (basic_string *)0x0;
    Utility::split((basic_string *)&local_2a0,(char)this[0x21],(vector *)&local_2b8);
    pbVar14 = pbStack_2b0;
    for (pbVar15 = local_2b8; pbVar15 != pbVar14; pbVar15 = pbVar15 + 0x18) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_2d0,pbVar15);
      Utility::rtrim((basic_string *)local_2d0);
      Utility::ltrim((basic_string *)local_2d0);
      performCommand(this,param_1,(basic_string *)local_2d0);
      if (((byte)local_2d0[0] & 1) != 0) {
        operator_delete(local_2c0);
      }
    }
    pcVar1 = DAT_0178fc08;
    if ((Utility::_prompt & 1) == 0) {
      pcVar1 = &DAT_0178fbf9;
    }
    sVar10 = strlen(pcVar1);
    sendto(param_1,pcVar1,sVar10,0,(sockaddr *)0x0,0);
    pbVar15 = local_2b8;
    if (local_2b8 != (basic_string *)0x0) {
      if (pbStack_2b0 != local_2b8) {
        bVar2 = pbStack_2b0[-0x18];
        pbVar6 = pbStack_2b0 + -0x18;
        pbVar14 = pbStack_2b0;
        while( true ) {
          pbVar5 = pbVar6;
          if (((byte)bVar2 & 1) != 0) {
            operator_delete(*(void **)(pbVar14 + -8));
          }
          if (pbVar15 == pbVar5) break;
          bVar2 = pbVar5[-0x18];
          pbVar6 = pbVar5 + -0x18;
          pbVar14 = pbVar5;
        }
      }
      pbStack_2b0 = pbVar15;
      operator_delete(local_2b8);
    }
    if (((ulong)local_2a0 & 1) != 0) {
      operator_delete(local_290);
    }
  }
  uVar12 = 1;
LAB_00f91e20:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}

