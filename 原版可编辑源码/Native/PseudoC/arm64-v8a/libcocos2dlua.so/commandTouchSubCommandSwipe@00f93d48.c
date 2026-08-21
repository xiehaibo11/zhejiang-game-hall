
/* cocos2d::Console::commandTouchSubCommandSwipe(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::Console::commandTouchSubCommandSwipe(Console *this,int param_1,basic_string *param_2)

{
  char *__s1;
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  ulong __n;
  byte *pbVar8;
  time_t tVar9;
  long lVar10;
  size_t __n_00;
  code *pcVar11;
  Scheduler *pSVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  byte *local_198;
  byte *local_190;
  undefined8 uStack_188;
  char local_180 [8];
  undefined3 uStack_178;
  undefined5 uStack_175;
  undefined3 uStack_170;
  char acStack_16d [13];
  undefined **local_160;
  undefined8 uStack_158;
  Console *local_150;
  undefined ***local_140;
  undefined **local_130;
  undefined8 uStack_128;
  Console *local_120;
  undefined ***local_110;
  undefined **local_100;
  undefined8 uStack_f8;
  Console *local_f0;
  undefined ***local_e0;
  undefined **local_d0;
  undefined8 uStack_c8;
  Console *local_c0;
  undefined ***local_b0;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  local_190 = (byte *)0x0;
  uStack_188 = 0;
  local_198 = (byte *)0x0;
  Utility::split(param_2,' ',(vector *)&local_198);
  if (((((long)local_190 - (long)local_198 != 0x78) ||
       (uVar7 = Utility::isFloat((basic_string *)(local_198 + 0x18)), (uVar7 & 1) == 0)) ||
      (uVar7 = Utility::isFloat((basic_string *)(local_198 + 0x30)), (uVar7 & 1) == 0)) ||
     ((uVar7 = Utility::isFloat((basic_string *)(local_198 + 0x48)), (uVar7 & 1) == 0 ||
      (uVar7 = Utility::isFloat((basic_string *)(local_198 + 0x60)), (uVar7 & 1) == 0)))) {
    uStack_178 = 0x61766e;
    builtin_strncpy(local_180,"touch: i",8);
    builtin_strncpy(acStack_16d,"ments.\n",8);
    uStack_175 = 0x612064696c;
    uStack_170 = 0x756772;
    __n = __strlen_chk(local_180,0x1b);
    uVar7 = (ulong)(Utility::_prompt >> 1);
    if ((Utility::_prompt & 1) != 0) {
      uVar7 = DAT_0178fc00;
    }
    if (uVar7 == __n) {
      __s1 = DAT_0178fc08;
      if ((Utility::_prompt & 1) == 0) {
        __s1 = &DAT_0178fbf9;
      }
      iVar6 = strncmp(__s1,local_180,__n);
      if (iVar6 == 0) {
        fwrite("bad parameter error: a buffer is the prompt string.\n",0x34,1,
               (FILE *)pthread_rwlock_tryrdlock);
        pbVar8 = local_198;
        goto joined_r0x00f93edc;
      }
    }
    pbVar8 = local_198;
    if (__n != 0) {
      uVar7 = 0;
      do {
        __n_00 = __n - uVar7;
        if (0x1ff < __n_00) {
          __n_00 = 0x200;
        }
        sendto(param_1,local_180 + uVar7,__n_00,0,(sockaddr *)0x0,0);
        uVar7 = __n_00 + uVar7;
        pbVar8 = local_198;
      } while (uVar7 < __n);
    }
    goto joined_r0x00f93edc;
  }
  if ((local_198[0x18] & 1) == 0) {
    pbVar8 = local_198 + 0x19;
  }
  else {
    pbVar8 = *(byte **)(local_198 + 0x28);
  }
  dVar15 = (double)utils::atof((char *)pbVar8);
  if ((local_198[0x30] & 1) == 0) {
    pbVar8 = local_198 + 0x31;
  }
  else {
    pbVar8 = *(byte **)(local_198 + 0x40);
  }
  dVar16 = (double)utils::atof((char *)pbVar8);
  if ((local_198[0x48] & 1) == 0) {
    pbVar8 = local_198 + 0x49;
  }
  else {
    pbVar8 = *(byte **)(local_198 + 0x58);
  }
  dVar17 = (double)utils::atof((char *)pbVar8);
  if ((local_198[0x60] & 1) == 0) {
    pbVar8 = local_198 + 0x61;
  }
  else {
    pbVar8 = *(byte **)(local_198 + 0x70);
  }
  dVar18 = (double)utils::atof((char *)pbVar8);
  tVar9 = time((time_t *)0x0);
  srand((uint)tVar9);
  iVar6 = rand();
  *(long *)(this + 0x148) = (long)iVar6;
  lVar10 = Director::getInstance();
  pSVar12 = *(Scheduler **)(lVar10 + 0xa0);
  fVar13 = (float)dVar15;
  fVar19 = (float)dVar16;
  uStack_c8 = CONCAT44(fVar19,fVar13);
  local_d0 = &PTR_FUN_01722ae0;
  local_c0 = this;
  local_b0 = &local_d0;
  Scheduler::performFunctionInCocosThread(pSVar12,&local_d0);
  fVar21 = (float)dVar17;
  fVar23 = (float)dVar18;
  if (&local_d0 == local_b0) {
    pcVar11 = (code *)(*local_b0)[4];
LAB_00f9406c:
    (*pcVar11)();
  }
  else if (local_b0 != (undefined ***)0x0) {
    pcVar11 = (code *)(*local_b0)[5];
    goto LAB_00f9406c;
  }
  fVar25 = ABS(fVar19 - fVar23);
  fVar24 = ABS(fVar13 - fVar21);
  if (fVar24 <= fVar25) {
    if (1.0 < fVar25) {
      fVar20 = fVar13;
      fVar22 = fVar19;
      do {
        if (fVar13 < fVar21) {
          fVar20 = fVar20 + fVar24 / fVar25;
        }
        if (fVar21 < fVar13) {
          fVar20 = fVar20 - fVar24 / fVar25;
        }
        fVar14 = fVar22 + 1.0;
        if (fVar23 <= fVar19) {
          fVar14 = fVar22;
        }
        fVar22 = fVar14 + -1.0;
        if (fVar19 <= fVar23) {
          fVar22 = fVar14;
        }
        uStack_128 = CONCAT44(fVar22,fVar20);
        local_130 = &PTR_FUN_01722be0;
        local_120 = this;
        local_110 = &local_130;
        Scheduler::performFunctionInCocosThread(pSVar12,&local_130);
        if (&local_130 == local_110) {
          pcVar11 = (code *)(*local_110)[4];
LAB_00f9416c:
          (*pcVar11)();
        }
        else if (local_110 != (undefined ***)0x0) {
          pcVar11 = (code *)(*local_110)[5];
          goto LAB_00f9416c;
        }
        fVar25 = fVar25 + -1.0;
      } while (1.0 < fVar25);
    }
  }
  else if (1.0 < fVar24) {
    fVar20 = fVar13;
    fVar22 = fVar19;
    do {
      fVar14 = fVar20 + 1.0;
      if (fVar21 <= fVar13) {
        fVar14 = fVar20;
      }
      fVar20 = fVar14 + -1.0;
      if (fVar13 <= fVar21) {
        fVar20 = fVar14;
      }
      if (fVar19 < fVar23) {
        fVar22 = fVar22 + fVar25 / fVar24;
      }
      if (fVar23 < fVar19) {
        fVar22 = fVar22 - fVar25 / fVar24;
      }
      uStack_f8 = CONCAT44(fVar22,fVar20);
      local_100 = &PTR_FUN_01722b60;
      local_f0 = this;
      local_e0 = &local_100;
      Scheduler::performFunctionInCocosThread(pSVar12,&local_100);
      if (&local_100 == local_e0) {
        pcVar11 = (code *)(*local_e0)[4];
LAB_00f940b4:
        (*pcVar11)();
      }
      else if (local_e0 != (undefined ***)0x0) {
        pcVar11 = (code *)(*local_e0)[5];
        goto LAB_00f940b4;
      }
      fVar24 = fVar24 + -1.0;
    } while (1.0 < fVar24);
  }
  uStack_158 = CONCAT44(fVar23,fVar21);
  local_160 = &PTR_FUN_01722c60;
  local_150 = this;
  local_140 = &local_160;
  Scheduler::performFunctionInCocosThread(pSVar12,&local_160);
  if (&local_160 == local_140) {
    pcVar11 = (code *)(*local_140)[4];
  }
  else {
    pbVar8 = local_198;
    if (local_140 == (undefined ***)0x0) goto joined_r0x00f93edc;
    pcVar11 = (code *)(*local_140)[5];
  }
  (*pcVar11)();
  pbVar8 = local_198;
joined_r0x00f93edc:
  local_198 = pbVar8;
  if (pbVar8 != (byte *)0x0) {
    if (local_190 != pbVar8) {
      bVar1 = local_190[-0x18];
      pbVar5 = local_190 + -0x18;
      pbVar4 = local_190;
      while( true ) {
        pbVar3 = pbVar5;
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        if (pbVar8 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar5 = pbVar3 + -0x18;
        pbVar4 = pbVar3;
      }
    }
    local_190 = pbVar8;
    operator_delete(local_198);
  }
  if (*(long *)(lVar2 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

