
void JNI_OnLoad(long *param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  void *__ptr;
  char *__s;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  code *pcVar12;
  ulong uVar13;
  char *pcStack_1e8;
  char acStack_1dc [4];
  long *plStack_1d8;
  undefined8 auStack_1d0 [10];
  code *apcStack_180 [4];
  undefined1 auStack_15c [188];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  
  lVar1 = tpidr_el0;
  lVar10 = *(long *)(lVar1 + 0x28);
  if ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0)) goto LAB_00106030;
  while( true ) {
    plStack_1d8 = (long *)0x0;
    iVar5 = (**(code **)(*param_1 + 0x30))(param_1,&plStack_1d8,0x10004);
    uVar11 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 0) || (-1 < (int)uVar11)) break;
LAB_00106030:
    plStack_1d8 = (long *)0x0;
    (**(code **)(*param_1 + 0x30))(param_1,&plStack_1d8,0x10004);
  }
  if (iVar5 == 0) {
    if ((9 < DAT_00113190) && ((uVar11 & 1) != 0)) goto LAB_00106170;
    while( true ) {
      uStack_7e = 0xe72544dd1db9e1b1;
      uStack_80 = 0xc092;
      uStack_98 = 0x5d75574770332d9d;
      uStack_a0 = 0x79b76f6f576c0028;
      uStack_88 = 0x78f2;
      uStack_86 = 0xa85bcc811aa2;
      uStack_90 = 0xabb031358fb6a39b;
      __ptr = (void *)thunk_FUN_00109db4(&uStack_a0);
      memcpy(auStack_15c,&DAT_0010fa56,0xbc);
      __s = (char *)thunk_FUN_00109db4(auStack_15c);
      auStack_1d0[8] = 0;
      auStack_1d0[5] = 0;
      auStack_1d0[4] = 0;
      auStack_1d0[7] = 0;
      auStack_1d0[6] = 0;
      auStack_1d0[1] = 0;
      auStack_1d0[0] = 0;
      auStack_1d0[3] = 0;
      auStack_1d0[2] = 0;
      acStack_1dc[0] = '@';
      acStack_1dc[1] = '\0';
      apcStack_180[2] = FUN_00105cb4;
      apcStack_180[1] = Java_com_kwai_sgcore_SGCore_getMagic;
      apcStack_180[0] = Java_com_kwai_sgcore_SGCore_getClock;
      pcStack_1e8 = (char *)0x0;
      pcVar7 = strtok_r(__s,acStack_1dc,&pcStack_1e8);
      if ((DAT_00113190 < 0) || (-1 < (DAT_00113194 + -1) * DAT_00113194)) break;
LAB_00106170:
      uStack_7e = 0xe72544dd1db9e1b1;
      uStack_80 = 0xc092;
      uStack_98 = 0x5d75574770332d9d;
      uStack_a0 = 0x79b76f6f576c0028;
      uStack_88 = 0x78f2;
      uStack_86 = 0xa85bcc811aa2;
      uStack_90 = 0xabb031358fb6a39b;
      thunk_FUN_00109db4(&uStack_a0);
      memcpy(auStack_15c,&DAT_0010fa56,0xbc);
      pcVar7 = (char *)thunk_FUN_00109db4(auStack_15c);
      auStack_1d0[8] = 0;
      auStack_1d0[5] = 0;
      auStack_1d0[4] = 0;
      auStack_1d0[7] = 0;
      auStack_1d0[6] = 0;
      auStack_1d0[1] = 0;
      auStack_1d0[0] = 0;
      auStack_1d0[3] = 0;
      auStack_1d0[2] = 0;
      acStack_1dc[0] = '@';
      acStack_1dc[1] = '\0';
      apcStack_180[2] = FUN_00105cb4;
      apcStack_180[1] = Java_com_kwai_sgcore_SGCore_getMagic;
      apcStack_180[0] = Java_com_kwai_sgcore_SGCore_getClock;
      pcStack_1e8 = (char *)0x0;
      strtok_r(pcVar7,acStack_1dc,&pcStack_1e8);
    }
    uVar13 = 0;
    while( true ) {
      uVar11 = (DAT_00113194 + -1) * DAT_00113194;
      bVar2 = (uVar11 & 1) == 0;
      bVar3 = DAT_00113190 < 10 || bVar2;
      do {
      } while (-1 < DAT_00113190 && (int)uVar11 < 0);
      if ((2 < uVar13) || (pcVar7 == (char *)0x0)) break;
      if (DAT_00113190 >= 10 && !bVar2) goto LAB_0010627c;
      while( true ) {
        pcVar8 = strtok_r((char *)0x0,acStack_1dc,&pcStack_1e8);
        uVar11 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 0) || (-1 < (int)uVar11)) break;
LAB_0010627c:
        strtok_r((char *)0x0,acStack_1dc,&pcStack_1e8);
      }
      bVar3 = (uVar11 & 1) == 0;
      if (pcVar8 == (char *)0x0) {
        if (DAT_00113190 >= 10 && !bVar3) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        pcVar9 = (char *)0x0;
        bVar2 = true;
      }
      else {
        pcVar12 = apcStack_180[uVar13];
        if (DAT_00113190 < 10 || bVar3) goto LAB_001062c8;
        do {
          auStack_1d0[uVar13 * 3] = pcVar7;
          auStack_1d0[uVar13 * 3 + 1] = pcVar8;
          auStack_1d0[uVar13 * 3 + 2] = pcVar12;
          strtok_r((char *)0x0,acStack_1dc,&pcStack_1e8);
LAB_001062c8:
          auStack_1d0[uVar13 * 3] = pcVar7;
          auStack_1d0[uVar13 * 3 + 1] = pcVar8;
          auStack_1d0[uVar13 * 3 + 2] = pcVar12;
          pcVar9 = strtok_r((char *)0x0,acStack_1dc,&pcStack_1e8);
          uVar11 = (DAT_00113194 + -1) * DAT_00113194;
        } while ((-1 < DAT_00113190) && ((int)uVar11 < 0));
        bVar2 = false;
      }
      bVar4 = (uVar11 & 1) == 0;
      bVar3 = DAT_00113190 < 10 || bVar4;
      do {
      } while (-1 < DAT_00113190 && (int)uVar11 < 0);
      if (bVar2) break;
      uVar13 = uVar13 + 1;
      pcVar7 = pcVar9;
      if (DAT_00113190 >= 10 && !bVar4) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    if (!bVar3) goto LAB_001063e0;
    while( true ) {
      uVar6 = (**(code **)(*plStack_1d8 + 0x30))(plStack_1d8,__ptr);
      iVar5 = (**(code **)(*plStack_1d8 + 0x6b8))(plStack_1d8,uVar6,auStack_1d0,3);
      uVar11 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar11)) break;
LAB_001063e0:
      uVar6 = (**(code **)(*plStack_1d8 + 0x30))(plStack_1d8,__ptr);
      (**(code **)(*plStack_1d8 + 0x6b8))(plStack_1d8,uVar6,auStack_1d0,3);
    }
    if (__ptr != (void *)0x0) {
      if ((9 < DAT_00113190) && ((uVar11 & 1) != 0)) goto LAB_00106464;
      while( true ) {
        free(__ptr);
        uVar11 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 0) || (-1 < (int)uVar11)) break;
LAB_00106464:
        free(__ptr);
      }
    }
    if ((-1 < DAT_00113190) && ((int)uVar11 < 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (__s != (char *)0x0) {
      while( true ) {
        free(__s);
        uVar11 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 0) || (-1 < (int)uVar11)) break;
        free(__s);
      }
    }
    if ((-1 < DAT_00113190) && ((int)uVar11 < 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    bVar3 = (uVar11 & 1) != 0;
    if (iVar5 < 0) {
      if (9 < DAT_00113190 && bVar3) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar6 = 0;
    }
    else {
      uVar6 = 0x10004;
      if (9 < DAT_00113190 && bVar3) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
  }
  else {
    uVar6 = 0;
  }
  do {
  } while (-1 < DAT_00113190 && (int)uVar11 < 0);
  if (*(long *)(lVar1 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

