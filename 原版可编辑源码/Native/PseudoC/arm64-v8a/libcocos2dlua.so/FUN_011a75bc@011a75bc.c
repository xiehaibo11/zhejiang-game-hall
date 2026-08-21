
int FUN_011a75bc(_union_1457 *param_1,_union_1457 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ssize_t sVar4;
  int *piVar5;
  _union_1457 *p_Var6;
  undefined4 uVar7;
  _union_1457 *p_Var8;
  _union_1457 *p_Var9;
  __sighandler_t p_Var10;
  _union_1457 *p_Var11;
  __sighandler_t p_Var12;
  code *pcVar13;
  _union_1457 *p_Var14;
  _union_1457 *p_Var15;
  undefined1 auStack_e8 [8];
  _union_1457 local_e0;
  code *pcStack_d8;
  sigset_t sStack_d0;
  undefined1 auStack_44 [4];
  
  if (param_3 == 0) {
    return -0x16;
  }
  if (*(int *)(param_1 + 0xd) == param_3) {
    param_1[0xc] = param_2;
    return 0;
  }
  if (*(int *)(param_1 + 0xd) != 0) {
    FUN_011a6e70(param_1);
  }
  iVar2 = sigfillset((sigset_t *)&local_e0);
  if ((iVar2 == 0) && (iVar2 = FUN_011ae428(2,&local_e0,auStack_e8), iVar2 == 0)) {
    do {
      sVar4 = read(DAT_01781870,auStack_44,1);
      if (-1 < (int)sVar4) {
        sStack_d0.__val[9]._0_4_ = 0;
        pcStack_d8 = (code *)0x0;
        sStack_d0.__val[0xb]._0_4_ = param_3;
        if (DAT_01793650 == (_union_1457 *)0x0) goto LAB_011a7710;
        p_Var6 = DAT_01793650;
        p_Var8 = (_union_1457 *)0x0;
        goto LAB_011a7680;
      }
      piVar5 = (int *)__errno();
    } while (*piVar5 == 4);
  }
  goto LAB_011a7b48;
LAB_011a7680:
  do {
    p_Var11 = p_Var6;
    iVar2 = *(int *)(p_Var11 + 0xd);
    if (param_3 < iVar2) {
LAB_011a768c:
      p_Var6 = (_union_1457 *)p_Var11[0xe].sa_handler;
    }
    else {
      if (param_3 <= iVar2) {
        if ((((*(byte *)((long)p_Var11 + 0x5b) >> 1 & 1) != 0) || (&local_e0 < p_Var11)) ||
           (p_Var11[1].sa_handler != (__sighandler_t)0x0)) goto LAB_011a768c;
        if (&local_e0 <= p_Var11) goto LAB_011a76e4;
      }
      p_Var6 = (_union_1457 *)p_Var11[0xf].sa_handler;
      p_Var11 = p_Var8;
    }
    p_Var8 = p_Var11;
  } while (p_Var6 != (_union_1457 *)0x0);
  if (p_Var11 == (_union_1457 *)0x0) {
LAB_011a7710:
    pcStack_d8 = (code *)0x0;
    local_e0.sa_handler = (__sighandler_t)0x0;
    sStack_d0.__val[1] = 0;
    sStack_d0.__val[0] = 0;
    iVar2 = sigfillset(&sStack_d0);
    if (iVar2 != 0) goto LAB_011a7b48;
    pcStack_d8 = FUN_011a7d60;
    uVar7 = 0x10000000;
    if (param_4 != 0) {
      uVar7 = 0x90000000;
    }
    local_e0._0_4_ = uVar7;
    iVar2 = sigaction(param_3,(sigaction *)&local_e0,(sigaction *)0x0);
    if (iVar2 != 0) {
      piVar5 = (int *)__errno();
      iVar2 = *piVar5;
      if (iVar2 != 0) {
        local_e0._0_1_ = 0x2a;
        do {
          sVar4 = write(DAT_01781874,&local_e0,1);
          if (-1 < (int)sVar4) {
            iVar3 = FUN_011ae428(2,auStack_e8,0);
            if (iVar3 == 0) {
              return -iVar2;
            }
            break;
          }
        } while (*piVar5 == 4);
        goto LAB_011a7b48;
      }
    }
    *(int *)(param_1 + 0xd) = param_3;
    if (param_4 != 0) {
LAB_011a77ac:
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x2000000;
    }
    p_Var6 = DAT_01793650;
    if (DAT_01793650 != (_union_1457 *)0x0) goto LAB_011a77c0;
LAB_011a7854:
    p_Var8 = (_union_1457 *)0x0;
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(p_Var11 + 0xd);
LAB_011a76e4:
    if (iVar2 != param_3) goto LAB_011a7710;
    if (param_4 != 0) {
      *(int *)(param_1 + 0xd) = param_3;
      goto LAB_011a77ac;
    }
    if ((*(byte *)((long)p_Var11 + 0x5b) >> 1 & 1) != 0) goto LAB_011a7710;
    *(int *)(param_1 + 0xd) = param_3;
    p_Var6 = DAT_01793650;
    if (DAT_01793650 == (_union_1457 *)0x0) goto LAB_011a7854;
LAB_011a77c0:
    do {
      while (p_Var8 = p_Var6, param_3 < *(int *)(p_Var8 + 0xd)) {
LAB_011a77d0:
        iVar2 = -1;
        p_Var6 = (_union_1457 *)p_Var8[0xe].sa_handler;
        if ((_union_1457 *)p_Var8[0xe].sa_handler == (_union_1457 *)0x0) goto LAB_011a785c;
      }
      if (param_3 <= *(int *)(p_Var8 + 0xd)) {
        if ((*(uint *)(param_1 + 0xb) & 0x2000000) < (*(uint *)(p_Var8 + 0xb) & 0x2000000))
        goto LAB_011a77d0;
        if ((*(uint *)(param_1 + 0xb) & 0x2000000) <= (*(uint *)(p_Var8 + 0xb) & 0x2000000)) {
          if (param_1[1].sa_handler < p_Var8[1].sa_handler) goto LAB_011a77d0;
          if (param_1[1].sa_handler <= p_Var8[1].sa_handler) {
            if (param_1 < p_Var8) goto LAB_011a77d0;
            if (param_1 <= p_Var8) goto LAB_011a7aac;
          }
        }
      }
      iVar2 = 1;
      p_Var6 = (_union_1457 *)p_Var8[0xf].sa_handler;
    } while ((_union_1457 *)p_Var8[0xf].sa_handler != (_union_1457 *)0x0);
  }
LAB_011a785c:
  p_Var6 = p_Var8 + 0xe;
  if (-1 < iVar2) {
    p_Var6 = p_Var8 + 0xf;
  }
  param_1[0xf].sa_handler = (__sighandler_t)0x0;
  param_1[0x10].sa_handler = (__sighandler_t)p_Var8;
  p_Var11 = (_union_1457 *)&DAT_01793650;
  if (p_Var8 != (_union_1457 *)0x0) {
    p_Var11 = p_Var6;
  }
  param_1[0xe].sa_handler = (__sighandler_t)0x0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  p_Var11->sa_handler = (__sighandler_t)param_1;
  p_Var6 = (_union_1457 *)param_1[0x10].sa_handler;
  if (p_Var6 != (_union_1457 *)0x0) {
    p_Var8 = param_1;
    do {
      while( true ) {
        p_Var11 = p_Var6 + 0x11;
        if (*(int *)p_Var11 != 1) goto LAB_011a7aa4;
        p_Var9 = (_union_1457 *)p_Var6[0x10].sa_handler;
        p_Var14 = (_union_1457 *)p_Var9[0xe].sa_handler;
        if (p_Var6 == p_Var14) break;
        if ((p_Var14 == (_union_1457 *)0x0) || (*(int *)(p_Var14 + 0x11) != 1)) {
          if ((_union_1457 *)p_Var6[0xe].sa_handler == p_Var8) {
            p_Var10 = p_Var8[0xf].sa_handler;
            p_Var6[0xe].sa_handler = p_Var10;
            p_Var11 = p_Var9;
            if (p_Var10 != (__sighandler_t)0x0) {
              *(_union_1457 **)(p_Var10 + 0x80) = p_Var6;
              p_Var11 = (_union_1457 *)p_Var6[0x10].sa_handler;
            }
            p_Var8[0x10].sa_handler = (__sighandler_t)p_Var11;
            pcVar13 = (code *)&DAT_01793650;
            if (p_Var11 != (_union_1457 *)0x0) {
              pcVar13 = p_Var6[0x10].sa_handler + 0x70;
              if (p_Var6 != *(_union_1457 **)pcVar13) {
                pcVar13 = p_Var6[0x10].sa_handler + 0x78;
              }
            }
            *(_union_1457 **)pcVar13 = p_Var8;
            p_Var11 = p_Var8 + 0x11;
            p_Var8[0xf].sa_handler = (__sighandler_t)p_Var6;
            p_Var6[0x10].sa_handler = (__sighandler_t)p_Var8;
            p_Var8 = p_Var6;
          }
          *(int *)p_Var11 = 0;
          p_Var10 = p_Var9[0xf].sa_handler;
          *(undefined4 *)(p_Var9 + 0x11) = 1;
          p_Var12 = *(__sighandler_t *)(p_Var10 + 0x70);
          p_Var9[0xf].sa_handler = p_Var12;
          if (p_Var12 != (__sighandler_t)0x0) {
            *(_union_1457 **)(p_Var12 + 0x80) = p_Var9;
          }
          p_Var12 = p_Var9[0x10].sa_handler;
          *(__sighandler_t *)(p_Var10 + 0x80) = p_Var12;
          pcVar13 = (code *)&DAT_01793650;
          if (p_Var12 != (__sighandler_t)0x0) {
            pcVar13 = p_Var9[0x10].sa_handler + 0x70;
            if (p_Var9 != *(_union_1457 **)pcVar13) {
              pcVar13 = p_Var9[0x10].sa_handler + 0x78;
            }
          }
          *(__sighandler_t *)pcVar13 = p_Var10;
          *(_union_1457 **)(p_Var10 + 0x70) = p_Var9;
          p_Var9[0x10].sa_handler = p_Var10;
          p_Var6 = (_union_1457 *)p_Var8[0x10].sa_handler;
        }
        else {
LAB_011a78fc:
          *(undefined4 *)(p_Var14 + 0x11) = 0;
          *(int *)p_Var11 = 0;
          *(undefined4 *)(p_Var9 + 0x11) = 1;
          p_Var6 = (_union_1457 *)p_Var9[0x10].sa_handler;
          p_Var8 = p_Var9;
        }
        if (p_Var6 == (_union_1457 *)0x0) goto LAB_011a7aa4;
      }
      p_Var14 = (_union_1457 *)p_Var9[0xf].sa_handler;
      if ((p_Var14 != (_union_1457 *)0x0) && (*(int *)(p_Var14 + 0x11) == 1)) goto LAB_011a78fc;
      p_Var14 = p_Var6 + 0xf;
      p_Var15 = (_union_1457 *)p_Var14->sa_handler;
      if (p_Var15 == p_Var8) {
        p_Var10 = p_Var8[0xe].sa_handler;
        p_Var14->sa_handler = p_Var10;
        if (p_Var10 == (__sighandler_t)0x0) {
          p_Var8[0x10].sa_handler = (__sighandler_t)p_Var9;
LAB_011a7a60:
          pcVar13 = p_Var6[0x10].sa_handler + 0x70;
          if (p_Var6 != *(_union_1457 **)pcVar13) {
            pcVar13 = p_Var6[0x10].sa_handler + 0x78;
          }
        }
        else {
          *(_union_1457 **)(p_Var10 + 0x80) = p_Var6;
          p_Var10 = p_Var6[0x10].sa_handler;
          p_Var8[0x10].sa_handler = p_Var10;
          pcVar13 = (code *)&DAT_01793650;
          if (p_Var10 != (__sighandler_t)0x0) goto LAB_011a7a60;
        }
        *(_union_1457 **)pcVar13 = p_Var8;
        p_Var8[0xe].sa_handler = (__sighandler_t)p_Var6;
        p_Var6[0x10].sa_handler = (__sighandler_t)p_Var8;
        p_Var11 = (_union_1457 *)p_Var9[0xe].sa_handler;
        p_Var14 = p_Var11 + 0xf;
        p_Var15 = (_union_1457 *)p_Var14->sa_handler;
        *(undefined4 *)(p_Var8 + 0x11) = 0;
        *(undefined4 *)(p_Var9 + 0x11) = 1;
        p_Var9[0xe].sa_handler = (__sighandler_t)p_Var15;
        p_Var8 = p_Var6;
      }
      else {
        *(int *)p_Var11 = 0;
        *(undefined4 *)(p_Var9 + 0x11) = 1;
        p_Var9[0xe].sa_handler = (__sighandler_t)p_Var15;
        p_Var11 = p_Var6;
      }
      if (p_Var15 != (_union_1457 *)0x0) {
        p_Var15[0x10].sa_handler = (__sighandler_t)p_Var9;
      }
      p_Var10 = p_Var9[0x10].sa_handler;
      p_Var11[0x10].sa_handler = p_Var10;
      pcVar13 = (code *)&DAT_01793650;
      if (p_Var10 != (__sighandler_t)0x0) {
        pcVar13 = p_Var9[0x10].sa_handler + 0x70;
        if (p_Var9 != *(_union_1457 **)pcVar13) {
          pcVar13 = p_Var9[0x10].sa_handler + 0x78;
        }
      }
      *(_union_1457 **)pcVar13 = p_Var11;
      p_Var14->sa_handler = (__sighandler_t)p_Var9;
      p_Var9[0x10].sa_handler = (__sighandler_t)p_Var11;
      p_Var6 = (_union_1457 *)p_Var8[0x10].sa_handler;
    } while (p_Var6 != (_union_1457 *)0x0);
  }
LAB_011a7aa4:
  *(undefined4 *)(DAT_01793650 + 0x11) = 0;
LAB_011a7aac:
  local_e0._0_1_ = 0x2a;
  do {
    sVar4 = write(DAT_01781874,&local_e0,1);
    if (-1 < (int)sVar4) {
      iVar2 = FUN_011ae428(2,auStack_e8,0);
      if (iVar2 == 0) {
        uVar1 = *(uint *)(param_1 + 0xb);
        param_1[0xc] = param_2;
        if ((uVar1 >> 2 & 1) != 0) {
          return 0;
        }
        *(uint *)(param_1 + 0xb) = uVar1 | 4;
        if ((uVar1 >> 3 & 1) == 0) {
          return 0;
        }
        *(int *)(param_1[1].sa_handler + 8) = *(int *)(param_1[1].sa_handler + 8) + 1;
        return 0;
      }
      break;
    }
    piVar5 = (int *)__errno();
  } while (*piVar5 == 4);
LAB_011a7b48:
                    /* WARNING: Subroutine does not return */
  abort();
}

