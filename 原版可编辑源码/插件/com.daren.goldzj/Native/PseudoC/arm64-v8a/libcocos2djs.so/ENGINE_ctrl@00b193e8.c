
int ENGINE_ctrl(ENGINE *e,int cmd,long i,void *p,f *f)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int line;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar5;
  uint uVar6;
  char *__s;
  uint *puVar7;
  
  if (e == (ENGINE *)0x0) {
    iVar2 = 0x43;
    iVar3 = 0x89;
LAB_00b194bc:
    ERR_put_error(0x26,0x8e,iVar2,"crypto/engine/eng_ctrl.c",iVar3);
    return 0;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  iVar2 = *(int *)(e + 0x9c);
  CRYPTO_THREAD_unlock(global_engine_lock);
  if (iVar2 < 1) {
    iVar2 = 0x82;
    iVar3 = 0x91;
    goto LAB_00b194bc;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(e + 0x70);
  if (7 < cmd - 0xbU) {
    if (cmd == 10) {
      return (uint)(UNRECOVERED_JUMPTABLE != (code *)0x0);
    }
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_00b1950c:
                    /* WARNING: Could not recover jumptable at 0x00b19534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE)(e,cmd,i,p,f);
      return iVar2;
    }
    iVar2 = 0x78;
    iVar3 = 0xb3;
    goto LAB_00b194bc;
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    iVar2 = 0x8e;
    iVar3 = 0x78;
    line = 0xa6;
    goto LAB_00b194e0;
  }
  if (((byte)e[0x98] >> 1 & 1) != 0) goto LAB_00b1950c;
  if (cmd == 0xb) {
    piVar5 = *(int **)(e + 0x90);
    if ((piVar5 != (int *)0x0) && (*piVar5 != 0)) {
      if (*(long *)(piVar5 + 2) != 0) {
        return *piVar5;
      }
      return 0;
    }
    return 0;
  }
  if (((cmd | 2U) == 0xf || cmd == 0x11) && (p == (void *)0x0)) {
    iVar2 = 0xac;
    iVar3 = 0x43;
    line = 0x4d;
    goto LAB_00b194e0;
  }
  puVar7 = *(uint **)(e + 0x90);
  if (cmd == 0xd) {
    if ((puVar7 != (uint *)0x0) && (*puVar7 != 0)) {
      iVar2 = 0;
      do {
        if (*(char **)(puVar7 + 2) == (char *)0x0) break;
        iVar3 = strcmp(*(char **)(puVar7 + 2),p);
        if (iVar3 == 0) {
          if (-1 < iVar2) {
            return *puVar7;
          }
          break;
        }
        puVar7 = puVar7 + 8;
        iVar2 = iVar2 + 1;
      } while (*puVar7 != 0);
    }
    iVar2 = 0xac;
    iVar3 = 0x89;
    line = 0x55;
    goto LAB_00b194e0;
  }
  if (puVar7 == (uint *)0x0) {
LAB_00b19658:
    iVar2 = 0xac;
    iVar3 = 0x8a;
    line = 0x61;
LAB_00b194e0:
    ERR_put_error(0x26,iVar2,iVar3,"crypto/engine/eng_ctrl.c",line);
    return -1;
  }
  uVar6 = *puVar7;
  if (uVar6 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    puVar1 = puVar7;
    do {
      if (((uint)i <= uVar6) || (*(long *)(puVar1 + 2) == 0)) break;
      uVar6 = puVar1[8];
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 8;
    } while (uVar6 != 0);
  }
  if (uVar6 != (uint)i) {
    iVar2 = -1;
  }
  if (iVar2 < 0) goto LAB_00b19658;
  switch(cmd) {
  case 0xc:
    if (puVar7[((long)iVar2 + 1) * 8] == 0) {
      return 0;
    }
    if (*(long *)(puVar7 + ((long)iVar2 + 1) * 8 + 2) != 0) {
      return puVar7[((long)iVar2 + 1) * 8];
    }
    return 0;
  default:
    iVar2 = 0xac;
    iVar3 = 0x6e;
    line = 0x81;
    goto LAB_00b194e0;
  case 0xe:
    sVar4 = strlen(*(char **)(puVar7 + (long)iVar2 * 8 + 2));
    uVar6 = (uint)sVar4;
    break;
  case 0xf:
    __s = *(char **)(puVar7 + (long)iVar2 * 8 + 2);
    goto LAB_00b19704;
  case 0x10:
    uVar6 = 0;
    if (*(char **)(puVar7 + (long)iVar2 * 8 + 4) != (char *)0x0) {
      sVar4 = strlen(*(char **)(puVar7 + (long)iVar2 * 8 + 4));
      uVar6 = (uint)sVar4;
    }
    break;
  case 0x11:
    __s = *(char **)(puVar7 + (long)iVar2 * 8 + 4);
    if (__s == (char *)0x0) {
      __s = "";
      sVar4 = 1;
      goto LAB_00b1974c;
    }
LAB_00b19704:
    sVar4 = strlen(__s);
    sVar4 = sVar4 + 1;
LAB_00b1974c:
    iVar2 = BIO_snprintf(p,sVar4,"%s",__s);
    return iVar2;
  case 0x12:
    uVar6 = puVar7[(long)iVar2 * 8 + 6];
  }
  return uVar6;
}

