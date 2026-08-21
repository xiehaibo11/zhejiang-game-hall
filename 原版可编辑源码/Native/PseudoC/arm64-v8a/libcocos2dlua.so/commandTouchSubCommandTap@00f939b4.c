
/* cocos2d::Console::commandTouchSubCommandTap(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::Console::commandTouchSubCommandTap(Console *this,int param_1,basic_string *param_2)

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
  double dVar12;
  float local_cc;
  byte *local_c8;
  byte *local_c0;
  undefined8 uStack_b8;
  float local_b0 [2];
  undefined3 uStack_a8;
  undefined5 uStack_a5;
  undefined3 uStack_a0;
  char acStack_9d [13];
  undefined **local_90;
  Console *pCStack_88;
  float *local_80;
  float *pfStack_78;
  undefined ***local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_c0 = (byte *)0x0;
  uStack_b8 = 0;
  local_c8 = (byte *)0x0;
  Utility::split(param_2,' ',(vector *)&local_c8);
  if ((((long)local_c0 - (long)local_c8 == 0x48) &&
      (uVar7 = Utility::isFloat((basic_string *)(local_c8 + 0x18)), (uVar7 & 1) != 0)) &&
     (uVar7 = Utility::isFloat((basic_string *)(local_c8 + 0x30)), (uVar7 & 1) != 0)) {
    if ((local_c8[0x18] & 1) == 0) {
      pbVar8 = local_c8 + 0x19;
    }
    else {
      pbVar8 = *(byte **)(local_c8 + 0x28);
    }
    dVar12 = (double)utils::atof((char *)pbVar8);
    local_b0[0] = (float)dVar12;
    if ((local_c8[0x30] & 1) == 0) {
      pbVar8 = local_c8 + 0x31;
    }
    else {
      pbVar8 = *(byte **)(local_c8 + 0x40);
    }
    dVar12 = (double)utils::atof((char *)pbVar8);
    local_cc = (float)dVar12;
    tVar9 = time((time_t *)0x0);
    srand((uint)tVar9);
    iVar6 = rand();
    *(long *)(this + 0x148) = (long)iVar6;
    lVar10 = Director::getInstance();
    local_80 = local_b0;
    pfStack_78 = &local_cc;
    local_90 = &PTR_FUN_01722a60;
    pCStack_88 = this;
    local_70 = &local_90;
    Scheduler::performFunctionInCocosThread(*(Scheduler **)(lVar10 + 0xa0),&local_90);
    if (&local_90 == local_70) {
      pcVar11 = (code *)(*local_70)[4];
    }
    else {
      pbVar8 = local_c8;
      if (local_70 == (undefined ***)0x0) goto joined_r0x00f93af4;
      pcVar11 = (code *)(*local_70)[5];
    }
    (*pcVar11)();
    pbVar8 = local_c8;
  }
  else {
    uStack_a8 = 0x61766e;
    local_b0 = (float  [2])0x69203a6863756f74;
    builtin_strncpy(acStack_9d,"ments.\n",8);
    uStack_a5 = 0x612064696c;
    uStack_a0 = 0x756772;
    __n = __strlen_chk(local_b0,0x1b);
    uVar7 = (ulong)(Utility::_prompt >> 1);
    if ((Utility::_prompt & 1) != 0) {
      uVar7 = DAT_0178fc00;
    }
    if (uVar7 == __n) {
      __s1 = DAT_0178fc08;
      if ((Utility::_prompt & 1) == 0) {
        __s1 = &DAT_0178fbf9;
      }
      iVar6 = strncmp(__s1,(char *)local_b0,__n);
      if (iVar6 == 0) {
        fwrite("bad parameter error: a buffer is the prompt string.\n",0x34,1,
               (FILE *)pthread_rwlock_tryrdlock);
        pbVar8 = local_c8;
        goto joined_r0x00f93af4;
      }
    }
    pbVar8 = local_c8;
    if (__n != 0) {
      uVar7 = 0;
      do {
        __n_00 = __n - uVar7;
        if (0x1ff < __n_00) {
          __n_00 = 0x200;
        }
        sendto(param_1,(void *)((long)local_b0 + uVar7),__n_00,0,(sockaddr *)0x0,0);
        uVar7 = __n_00 + uVar7;
        pbVar8 = local_c8;
      } while (uVar7 < __n);
    }
  }
joined_r0x00f93af4:
  local_c8 = pbVar8;
  if (pbVar8 != (byte *)0x0) {
    if (local_c0 != pbVar8) {
      bVar1 = local_c0[-0x18];
      pbVar5 = local_c0 + -0x18;
      pbVar4 = local_c0;
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
    local_c0 = pbVar8;
    operator_delete(local_c8);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

