
/* WARNING: Type propagation algorithm not settling */

void FUN_011a6e70(__sighandler_t param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ssize_t sVar4;
  int *piVar5;
  _union_1457 *p_Var6;
  _union_1457 *p_Var7;
  _union_1457 *p_Var8;
  long lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  __sighandler_t p_Var12;
  _union_1457 *p_Var13;
  __sighandler_t p_Var14;
  _union_1457 _Var15;
  undefined1 auStack_c8 [12];
  undefined1 auStack_bc [4];
  _union_1457 local_b8;
  code *pcStack_b0;
  sigset_t local_a8;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return;
  }
  iVar2 = sigfillset((sigset_t *)&local_b8);
  if ((iVar2 == 0) && (iVar2 = FUN_011ae428(2,&local_b8,auStack_c8), iVar2 == 0)) {
    do {
      sVar4 = read(DAT_01781870,auStack_bc,1);
      if (-1 < (int)sVar4) {
        p_Var8 = *(_union_1457 **)(param_1 + 0x70);
        p_Var6 = *(_union_1457 **)(param_1 + 0x78);
        if (p_Var8 == (_union_1457 *)0x0) {
          p_Var7 = *(_union_1457 **)(param_1 + 0x80);
          iVar2 = *(int *)(param_1 + 0x88);
          if (p_Var6 != (_union_1457 *)0x0) goto LAB_011a6f64;
        }
        else {
          if (p_Var6 != (_union_1457 *)0x0) goto LAB_011a6eec;
          p_Var7 = *(_union_1457 **)(param_1 + 0x80);
          iVar2 = *(int *)(param_1 + 0x88);
          p_Var6 = p_Var8;
LAB_011a6f64:
          p_Var6[0x10].sa_handler = (__sighandler_t)p_Var7;
        }
        p_Var8 = p_Var6;
        if (p_Var7 != (_union_1457 *)0x0) {
          p_Var8 = p_Var7 + 0xe;
          if (p_Var7[0xe].sa_handler != param_1) {
            p_Var8 = p_Var7 + 0xf;
          }
          p_Var8->sa_handler = (__sighandler_t)p_Var6;
          p_Var8 = DAT_01793650;
        }
        goto joined_r0x011a6ff0;
      }
      piVar5 = (int *)__errno();
    } while (*piVar5 == 4);
  }
  goto LAB_011a74b8;
LAB_011a7168:
  if ((p_Var14 == (__sighandler_t)0x0) || (*(int *)(p_Var14 + 0x88) == 0)) {
    *(undefined4 *)(p_Var12 + 0x88) = 0;
    *(undefined4 *)(p_Var8 + 0x11) = 1;
    p_Var14 = *(__sighandler_t *)(p_Var12 + 0x70);
    p_Var8[0xf].sa_handler = p_Var14;
    if (p_Var14 != (__sighandler_t)0x0) {
      *(_union_1457 **)(p_Var14 + 0x80) = p_Var8;
    }
    p_Var14 = p_Var8[0x10].sa_handler;
    *(__sighandler_t *)(p_Var12 + 0x80) = p_Var14;
    if (p_Var14 == (__sighandler_t)0x0) {
      pcVar11 = (code *)&DAT_01793650;
    }
    else {
      pcVar11 = p_Var8[0x10].sa_handler + 0x70;
      if (p_Var8 != *(_union_1457 **)pcVar11) {
        pcVar11 = p_Var8[0x10].sa_handler + 0x78;
      }
    }
    *(__sighandler_t *)pcVar11 = p_Var12;
    *(_union_1457 **)(p_Var12 + 0x70) = p_Var8;
    p_Var8[0x10].sa_handler = p_Var12;
    p_Var8 = (_union_1457 *)p_Var7[0xe].sa_handler;
    p_Var14 = p_Var8[0xe].sa_handler;
    *(undefined4 *)(p_Var8 + 0x11) = *(undefined4 *)(p_Var7 + 0x11);
    *(undefined4 *)(p_Var7 + 0x11) = 0;
    if (p_Var14 != (__sighandler_t)0x0) goto LAB_011a7250;
  }
  else {
LAB_011a7174:
    *(undefined4 *)(p_Var8 + 0x11) = *(undefined4 *)(p_Var7 + 0x11);
    *(undefined4 *)(p_Var7 + 0x11) = 0;
LAB_011a7250:
    *(undefined4 *)(p_Var14 + 0x88) = 0;
  }
  p_Var14 = p_Var8[0xf].sa_handler;
  p_Var7[0xe].sa_handler = p_Var14;
  if (p_Var14 != (__sighandler_t)0x0) {
    *(_union_1457 **)(p_Var14 + 0x80) = p_Var7;
  }
  p_Var14 = p_Var7[0x10].sa_handler;
  p_Var8[0x10].sa_handler = p_Var14;
  if (p_Var14 == (__sighandler_t)0x0) {
    pcVar11 = (code *)&DAT_01793650;
  }
  else {
    pcVar11 = p_Var7[0x10].sa_handler + 0x70;
    if (p_Var7 != *(_union_1457 **)pcVar11) {
      pcVar11 = p_Var7[0x10].sa_handler + 0x78;
    }
  }
  *(_union_1457 **)pcVar11 = p_Var8;
  p_Var8[0xf].sa_handler = (__sighandler_t)p_Var7;
  p_Var7[0x10].sa_handler = (__sighandler_t)p_Var8;
  p_Var8 = DAT_01793650;
joined_r0x011a7328:
  DAT_01793650 = p_Var8;
  if (p_Var8 != (_union_1457 *)0x0) {
    p_Var13 = p_Var8 + 0x11;
LAB_011a7330:
    p_Var8 = DAT_01793650;
    *(int *)p_Var13 = 0;
  }
  goto LAB_011a7334;
LAB_011a6eec:
  do {
    p_Var8 = p_Var6;
    p_Var6 = (_union_1457 *)p_Var8[0xe].sa_handler;
  } while (p_Var6 != (_union_1457 *)0x0);
  p_Var6 = (_union_1457 *)p_Var8[0xf].sa_handler;
  p_Var13 = (_union_1457 *)p_Var8[0x10].sa_handler;
  iVar2 = *(int *)(p_Var8 + 0x11);
  if (p_Var6 != (_union_1457 *)0x0) {
    p_Var6[0x10].sa_handler = (__sighandler_t)p_Var13;
  }
  if (p_Var13 == (_union_1457 *)0x0) {
    p_Var7 = (_union_1457 *)&DAT_01793650;
  }
  else {
    p_Var7 = p_Var13 + 0xe;
    if ((_union_1457 *)p_Var13[0xe].sa_handler != p_Var8) {
      p_Var7 = p_Var13 + 0xf;
    }
  }
  p_Var7->sa_handler = (__sighandler_t)p_Var6;
  _Var15 = *(_union_1457 *)(param_1 + 0x80);
  p_Var14 = p_Var8[0x10].sa_handler;
  p_Var8[0x11] = *(_union_1457 *)(param_1 + 0x88);
  p_Var8[0x10] = _Var15;
  p_Var12 = *(__sighandler_t *)(param_1 + 0x70);
  p_Var7 = p_Var8;
  if (p_Var14 != param_1) {
    p_Var7 = p_Var13;
  }
  p_Var8[0xf] = *(_union_1457 *)(param_1 + 0x78);
  p_Var8[0xe].sa_handler = p_Var12;
  lVar9 = *(long *)(param_1 + 0x80);
  if (lVar9 == 0) {
    puVar10 = &DAT_01793650;
  }
  else {
    puVar10 = (undefined8 *)(lVar9 + 0x70);
    if (*(__sighandler_t *)(lVar9 + 0x70) != param_1) {
      puVar10 = (undefined8 *)(lVar9 + 0x78);
    }
  }
  *puVar10 = p_Var8;
  *(_union_1457 **)(*(long *)(param_1 + 0x70) + 0x80) = p_Var8;
  p_Var13 = p_Var7;
  if (*(long *)(param_1 + 0x78) != 0) {
    *(_union_1457 **)(*(long *)(param_1 + 0x78) + 0x80) = p_Var8;
  }
  for (; p_Var8 = DAT_01793650, p_Var13 != (_union_1457 *)0x0;
      p_Var13 = (_union_1457 *)p_Var13[0x10].sa_handler) {
  }
joined_r0x011a6ff0:
  DAT_01793650 = p_Var8;
  if (iVar2 == 0) {
    do {
      DAT_01793650 = p_Var8;
      if (p_Var6 == (_union_1457 *)0x0) {
        if (p_Var8 == (_union_1457 *)0x0) break;
      }
      else {
        p_Var13 = p_Var6 + 0x11;
        if ((*(int *)p_Var13 != 0) || (p_Var6 == p_Var8)) goto LAB_011a7330;
      }
      p_Var8 = (_union_1457 *)p_Var7[0xe].sa_handler;
      if (p_Var8 == p_Var6) {
        p_Var8 = (_union_1457 *)p_Var7[0xf].sa_handler;
        if (*(int *)(p_Var8 + 0x11) == 1) {
          *(undefined4 *)(p_Var8 + 0x11) = 0;
          *(undefined4 *)(p_Var7 + 0x11) = 1;
          p_Var14 = p_Var8[0xe].sa_handler;
          p_Var7[0xf].sa_handler = p_Var14;
          if (p_Var14 != (__sighandler_t)0x0) {
            *(_union_1457 **)(p_Var14 + 0x80) = p_Var7;
          }
          p_Var14 = p_Var7[0x10].sa_handler;
          p_Var8[0x10].sa_handler = p_Var14;
          pcVar11 = (code *)&DAT_01793650;
          if (p_Var14 != (__sighandler_t)0x0) {
            pcVar11 = p_Var7[0x10].sa_handler + 0x70;
            if (p_Var7 != *(_union_1457 **)pcVar11) {
              pcVar11 = p_Var7[0x10].sa_handler + 0x78;
            }
          }
          *(_union_1457 **)pcVar11 = p_Var8;
          p_Var8[0xe].sa_handler = (__sighandler_t)p_Var7;
          p_Var7[0x10].sa_handler = (__sighandler_t)p_Var8;
          p_Var8 = (_union_1457 *)p_Var7[0xf].sa_handler;
        }
        p_Var14 = p_Var8[0xe].sa_handler;
        if ((p_Var14 == (__sighandler_t)0x0) || (*(int *)(p_Var14 + 0x88) == 0)) {
          if ((p_Var8[0xf].sa_handler == (__sighandler_t)0x0) ||
             (pcVar11 = p_Var8[0xf].sa_handler + 0x88, *(int *)pcVar11 == 0)) goto LAB_011a7020;
LAB_011a7194:
          *(undefined4 *)(p_Var8 + 0x11) = *(undefined4 *)(p_Var7 + 0x11);
          *(undefined4 *)(p_Var7 + 0x11) = 0;
LAB_011a72d8:
          *(int *)pcVar11 = 0;
        }
        else {
          if ((p_Var8[0xf].sa_handler != (__sighandler_t)0x0) &&
             (pcVar11 = p_Var8[0xf].sa_handler + 0x88, *(int *)pcVar11 != 0)) goto LAB_011a7194;
          *(undefined4 *)(p_Var14 + 0x88) = 0;
          *(undefined4 *)(p_Var8 + 0x11) = 1;
          p_Var12 = *(__sighandler_t *)(p_Var14 + 0x78);
          p_Var8[0xe].sa_handler = p_Var12;
          if (p_Var12 != (__sighandler_t)0x0) {
            *(_union_1457 **)(p_Var12 + 0x80) = p_Var8;
          }
          p_Var12 = p_Var8[0x10].sa_handler;
          *(__sighandler_t *)(p_Var14 + 0x80) = p_Var12;
          if (p_Var12 == (__sighandler_t)0x0) {
            pcVar11 = (code *)&DAT_01793650;
          }
          else {
            pcVar11 = p_Var8[0x10].sa_handler + 0x70;
            if (p_Var8 != *(_union_1457 **)pcVar11) {
              pcVar11 = p_Var8[0x10].sa_handler + 0x78;
            }
          }
          *(__sighandler_t *)pcVar11 = p_Var14;
          *(_union_1457 **)(p_Var14 + 0x78) = p_Var8;
          p_Var8[0x10].sa_handler = p_Var14;
          p_Var8 = (_union_1457 *)p_Var7[0xf].sa_handler;
          p_Var14 = p_Var8[0xf].sa_handler;
          *(undefined4 *)(p_Var8 + 0x11) = *(undefined4 *)(p_Var7 + 0x11);
          *(undefined4 *)(p_Var7 + 0x11) = 0;
          if (p_Var14 != (__sighandler_t)0x0) {
            pcVar11 = p_Var14 + 0x88;
            goto LAB_011a72d8;
          }
        }
        p_Var14 = p_Var8[0xe].sa_handler;
        p_Var7[0xf].sa_handler = p_Var14;
        if (p_Var14 != (__sighandler_t)0x0) {
          *(_union_1457 **)(p_Var14 + 0x80) = p_Var7;
        }
        p_Var14 = p_Var7[0x10].sa_handler;
        p_Var8[0x10].sa_handler = p_Var14;
        if (p_Var14 == (__sighandler_t)0x0) {
          pcVar11 = (code *)&DAT_01793650;
        }
        else {
          pcVar11 = p_Var7[0x10].sa_handler + 0x70;
          if (p_Var7 != *(_union_1457 **)pcVar11) {
            pcVar11 = p_Var7[0x10].sa_handler + 0x78;
          }
        }
        *(_union_1457 **)pcVar11 = p_Var8;
        p_Var8[0xe].sa_handler = (__sighandler_t)p_Var7;
        p_Var7[0x10].sa_handler = (__sighandler_t)p_Var8;
        p_Var8 = DAT_01793650;
        goto joined_r0x011a7328;
      }
      if (*(int *)(p_Var8 + 0x11) == 1) {
        *(undefined4 *)(p_Var8 + 0x11) = 0;
        *(undefined4 *)(p_Var7 + 0x11) = 1;
        p_Var14 = p_Var8[0xf].sa_handler;
        p_Var7[0xe].sa_handler = p_Var14;
        if (p_Var14 != (__sighandler_t)0x0) {
          *(_union_1457 **)(p_Var14 + 0x80) = p_Var7;
        }
        p_Var14 = p_Var7[0x10].sa_handler;
        p_Var8[0x10].sa_handler = p_Var14;
        pcVar11 = (code *)&DAT_01793650;
        if (p_Var14 != (__sighandler_t)0x0) {
          pcVar11 = p_Var7[0x10].sa_handler + 0x70;
          if (p_Var7 != *(_union_1457 **)pcVar11) {
            pcVar11 = p_Var7[0x10].sa_handler + 0x78;
          }
        }
        *(_union_1457 **)pcVar11 = p_Var8;
        p_Var8[0xf].sa_handler = (__sighandler_t)p_Var7;
        p_Var7[0x10].sa_handler = (__sighandler_t)p_Var8;
        p_Var8 = (_union_1457 *)p_Var7[0xe].sa_handler;
      }
      p_Var14 = p_Var8[0xe].sa_handler;
      if ((p_Var14 != (__sighandler_t)0x0) && (*(int *)(p_Var14 + 0x88) != 0)) goto LAB_011a7174;
      p_Var12 = p_Var8[0xf].sa_handler;
      if ((p_Var12 != (__sighandler_t)0x0) && (*(int *)(p_Var12 + 0x88) != 0)) goto LAB_011a7168;
LAB_011a7020:
      *(undefined4 *)(p_Var8 + 0x11) = 1;
      p_Var6 = p_Var7;
      p_Var7 = (_union_1457 *)p_Var7[0x10].sa_handler;
      p_Var8 = DAT_01793650;
    } while( true );
  }
LAB_011a7334:
  iVar2 = *(int *)(param_1 + 0x68);
  local_a8.__val[9]._0_4_ = 0;
  pcStack_b0 = (code *)0x0;
  local_a8.__val[0xb]._0_4_ = iVar2;
  if (p_Var8 == (_union_1457 *)0x0) {
LAB_011a7414:
    local_a8.__val[1] = 0;
    local_a8.__val[0] = 0;
    pcStack_b0 = (code *)0x0;
    local_b8.sa_handler = (__sighandler_t)0x0;
    iVar2 = sigaction(iVar2,(sigaction *)&local_b8,(sigaction *)0x0);
    if (iVar2 != 0) goto LAB_011a74b8;
  }
  else {
    p_Var6 = (_union_1457 *)0x0;
    do {
      while (iVar3 = *(int *)(p_Var8 + 0xd), iVar2 < iVar3) {
LAB_011a735c:
        p_Var7 = p_Var8 + 0xe;
        p_Var6 = p_Var8;
        p_Var8 = (_union_1457 *)p_Var7->sa_handler;
        if ((_union_1457 *)p_Var7->sa_handler == (_union_1457 *)0x0) goto LAB_011a7400;
      }
      if (iVar2 <= iVar3) {
        if ((((*(byte *)((long)p_Var8 + 0x5b) >> 1 & 1) != 0) || (&local_b8 < p_Var8)) ||
           (p_Var8[1].sa_handler != (__sighandler_t)0x0)) goto LAB_011a735c;
        if (&local_b8 <= p_Var8) goto joined_r0x011a73a8;
      }
      p_Var8 = (_union_1457 *)p_Var8[0xf].sa_handler;
    } while (p_Var8 != (_union_1457 *)0x0);
LAB_011a7400:
    if (p_Var6 == (_union_1457 *)0x0) goto LAB_011a7414;
    iVar3 = *(int *)(p_Var6 + 0xd);
    p_Var8 = p_Var6;
joined_r0x011a73a8:
    if (iVar3 != iVar2) goto LAB_011a7414;
    if (((*(uint *)(param_1 + 0x58) >> 0x19 & 1) == 0) &&
       ((*(uint *)(p_Var8 + 0xb) >> 0x19 & 1) != 0)) {
      local_a8.__val[1] = 0;
      local_a8.__val[0] = 0;
      pcStack_b0 = (code *)0x0;
      local_b8.sa_handler = (__sighandler_t)0x0;
      iVar3 = sigfillset(&local_a8);
      if (iVar3 != 0) goto LAB_011a74b8;
      pcStack_b0 = FUN_011a7d60;
      local_b8._0_4_ = 0x90000000;
      sigaction(iVar2,(sigaction *)&local_b8,(sigaction *)0x0);
    }
  }
  local_b8._0_1_ = 0x2a;
  do {
    sVar4 = write(DAT_01781874,&local_b8,1);
    if (-1 < (int)sVar4) {
      iVar2 = FUN_011ae428(2,auStack_c8,0);
      if (iVar2 == 0) {
        uVar1 = *(uint *)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x68) = 0;
        if ((uVar1 >> 2 & 1) == 0) {
          return;
        }
        *(uint *)(param_1 + 0x58) = uVar1 & 0xfffffffb;
        if ((uVar1 >> 3 & 1) == 0) {
          return;
        }
        *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
        return;
      }
      break;
    }
    piVar5 = (int *)__errno();
  } while (*piVar5 == 4);
LAB_011a74b8:
                    /* WARNING: Subroutine does not return */
  abort();
}

