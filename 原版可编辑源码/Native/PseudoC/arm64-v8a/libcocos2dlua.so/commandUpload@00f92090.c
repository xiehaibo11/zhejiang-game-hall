
/* cocos2d::Console::commandUpload(int) */

void __thiscall cocos2d::Console::commandUpload(Console *this,int param_1)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ssize_t sVar5;
  int *piVar6;
  ulong *puVar7;
  long *plVar8;
  FILE *__s;
  ulong uVar9;
  size_t sVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar16;
  undefined4 local_2a8;
  byte local_2a4 [4];
  void *local_2a0;
  char acStack_298 [8];
  undefined4 local_290;
  undefined4 uStack_28c;
  ulong local_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar13 = 0x1ff;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  local_2a4[0] = 0;
  pbVar12 = (byte *)&local_260;
  do {
    sVar5 = recvfrom(param_1,local_2a4,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
    if (sVar5 == 1) {
      switch(local_2a4[0]) {
      case 9:
      case 10:
      case 0xd:
      case 0x22:
      case 0x25:
      case 0x2a:
      case 0x2f:
      case 0x3a:
      case 0x3c:
      case 0x3e:
      case 0x3f:
      case 0x5c:
      case 0x7c:
        uStack_278 = 0x61766e69;
        local_280._0_1_ = 'u';
        local_280._1_1_ = 'p';
        local_280._2_1_ = 'l';
        local_280._3_1_ = 'o';
        local_280._4_1_ = 'a';
        local_280._5_1_ = 'd';
        local_280._6_1_ = ':';
        local_280._7_1_ = ' ';
        uStack_26c = 0x6d616e20;
        uStack_268 = 0xa2165;
        uStack_274 = 0x2064696c;
        local_270 = 0x656c6966;
        uVar9 = __strlen_chk(&local_280,0x1c);
        uVar14 = (ulong)(Utility::_prompt >> 1);
        if ((Utility::_prompt & 1) != 0) {
          uVar14 = DAT_0178fc00;
        }
        if (uVar14 == uVar9) {
          pcVar1 = DAT_0178fc08;
          if ((Utility::_prompt & 1) == 0) {
            pcVar1 = &DAT_0178fbf9;
          }
          iVar4 = strncmp(pcVar1,(char *)&local_280,uVar9);
          if (iVar4 == 0) {
            fwrite("bad parameter error: a buffer is the prompt string.\n",0x34,1,
                   (FILE *)pthread_rwlock_tryrdlock);
            goto LAB_00f9255c;
          }
        }
        if (uVar9 != 0) {
          uVar14 = 0;
          do {
            sVar10 = uVar9 - uVar14;
            if (0x1ff < sVar10) {
              sVar10 = 0x200;
            }
            sendto(param_1,(void *)((long)&local_280 + uVar14),sVar10,0,(sockaddr *)0x0,0);
            uVar14 = sVar10 + uVar14;
          } while (uVar14 < uVar9);
        }
        goto LAB_00f9255c;
      default:
        pbVar11 = pbVar12 + 1;
        *pbVar12 = local_2a4[0];
        break;
      case 0x20:
        goto switchD_00f92180_caseD_20;
      }
    }
    else if ((sVar5 == 0) || (piVar6 = (int *)__errno(), pbVar11 = pbVar12, *piVar6 != 4)) break;
    lVar13 = lVar13 + -1;
    pbVar12 = pbVar11;
  } while (lVar13 != 0);
switchD_00f92180_caseD_20:
  *pbVar12 = 0;
  if (((DAT_0178fc28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0178fc28), iVar4 != 0)) {
    plVar8 = (long *)FileUtils::getInstance();
    (**(code **)(*plVar8 + 0xa0))(&DAT_0178fc10);
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_0178fc10,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_0178fc28);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_2a0,(char *)&local_260);
  uVar14 = DAT_0178fc18;
  pcVar1 = DAT_0178fc20;
  if ((DAT_0178fc10 & 1) == 0) {
    uVar14 = (ulong)(DAT_0178fc10 >> 1);
    pcVar1 = &DAT_0178fc11;
  }
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_2a0,0,pcVar1,uVar14);
  local_280 = *puVar7;
  local_270 = (undefined4)puVar7[2];
  uStack_26c = (undefined4)(puVar7[2] >> 0x20);
  uStack_278 = (undefined4)puVar7[1];
  uStack_274 = (undefined4)(puVar7[1] >> 0x20);
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (((ulong)local_2a0 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_28c,local_290));
  }
  plVar8 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar8 + 0x118))(&local_2a0,plVar8,&local_280);
  pcVar1 = (char *)((ulong)&local_2a0 | 1);
  if (((ulong)local_2a0 & 1) != 0) {
    pcVar1 = (char *)CONCAT44(uStack_28c,local_290);
  }
  __s = fopen(pcVar1,"wb");
  if (((ulong)local_2a0 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_28c,local_290));
  }
  if (__s != (FILE *)0x0) {
    do {
      local_2a8 = 0x3d3d3d3d;
      sVar5 = recvfrom(param_1,&local_2a0,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
      if (sVar5 == 1) {
        local_2a8 = CONCAT31(local_2a8._1_3_,local_2a0._0_1_);
        pbVar16 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  ((ulong)&local_2a8 | 1);
        if (local_2a0._0_1_ ==
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa)
        goto LAB_00f92488;
      }
      else {
        if ((sVar5 == 0) || (piVar6 = (int *)__errno(), *piVar6 != 4)) goto LAB_00f92488;
        pbVar16 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  &local_2a8;
      }
      sVar5 = recvfrom(param_1,&local_2a0,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
      if (sVar5 == 1) {
        bVar3 = local_2a0._0_1_ ==
                (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
        pbVar15 = pbVar16 + 1;
        *pbVar16 = local_2a0._0_1_;
        if (bVar3) goto LAB_00f92488;
      }
      else if ((sVar5 == 0) || (piVar6 = (int *)__errno(), pbVar15 = pbVar16, *piVar6 != 4))
      goto LAB_00f92488;
      sVar5 = recvfrom(param_1,&local_2a0,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
      if (sVar5 == 1) {
        bVar3 = local_2a0._0_1_ ==
                (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
        pbVar16 = pbVar15 + 1;
        *pbVar15 = local_2a0._0_1_;
        if (bVar3) goto LAB_00f92488;
      }
      else if ((sVar5 == 0) || (piVar6 = (int *)__errno(), pbVar16 = pbVar15, *piVar6 != 4))
      goto LAB_00f92488;
      sVar5 = recvfrom(param_1,&local_2a0,1,0,(sockaddr *)0x0,(socklen_t *)0x0);
      if (sVar5 == 1) {
        bVar3 = local_2a0._0_1_ ==
                (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
        *pbVar16 = local_2a0._0_1_;
        if (bVar3) goto LAB_00f92488;
      }
      else if ((sVar5 == 0) || (piVar6 = (int *)__errno(), *piVar6 != 4)) goto LAB_00f92488;
      iVar4 = base64Decode(&local_2a8,4,&local_2a0);
      if (0 < iVar4) {
        fwrite(local_2a0,(long)iVar4,1,__s);
      }
      free(local_2a0);
    } while( true );
  }
  local_290 = 0xa2165;
  builtin_strncpy(acStack_298,"eate fil",8);
  local_2a0 = (void *)0x72632074276e6163;
  uVar9 = __strlen_chk(&local_2a0,0x14);
  uVar14 = (ulong)(Utility::_prompt >> 1);
  if ((Utility::_prompt & 1) != 0) {
    uVar14 = DAT_0178fc00;
  }
  if (uVar14 == uVar9) {
    pcVar1 = DAT_0178fc08;
    if ((Utility::_prompt & 1) == 0) {
      pcVar1 = &DAT_0178fbf9;
    }
    iVar4 = strncmp(pcVar1,(char *)&local_2a0,uVar9);
    if (iVar4 == 0) {
      fwrite("bad parameter error: a buffer is the prompt string.\n",0x34,1,
             (FILE *)pthread_rwlock_tryrdlock);
      goto joined_r0x00f925ac;
    }
  }
  if (uVar9 != 0) {
    uVar14 = 0;
    do {
      sVar10 = uVar9 - uVar14;
      if (0x1ff < sVar10) {
        sVar10 = 0x200;
      }
      sendto(param_1,(void *)((long)&local_2a0 + uVar14),sVar10,0,(sockaddr *)0x0,0);
      uVar14 = sVar10 + uVar14;
    } while (uVar14 < uVar9);
  }
joined_r0x00f925ac:
  if ((local_280 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_26c,local_270));
  }
LAB_00f9255c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00f92488:
  fclose(__s);
  goto joined_r0x00f925ac;
}

