
int uv_fs_poll_start(long param_1,long param_2,char *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x58) >> 2 & 1) == 0) {
    lVar6 = *(long *)(param_1 + 8);
    sVar3 = strlen(param_3);
    plVar4 = calloc(1,sVar3 + 800);
    if (plVar4 == (long *)0x0) {
      return -0xc;
    }
    if (param_4 == 0) {
      param_4 = 1;
    }
    plVar4[3] = lVar6;
    plVar4[4] = param_2;
    *(int *)((long)plVar4 + 0xc) = param_4;
    lVar5 = uv_now(lVar6);
    plVar4[2] = lVar5;
    *plVar4 = param_1;
    memcpy(plVar4 + 99,param_3,sVar3 + 1);
    iVar2 = uv_timer_init(lVar6,plVar4 + 5);
    if (-1 < iVar2) {
      uVar1 = *(uint *)(plVar4 + 0x10);
      *(uint *)(plVar4 + 0x10) = uVar1 | 0x10;
      if (((uVar1 >> 3 & 1) != 0) &&
         (*(uint *)(plVar4 + 0x10) = uVar1 & 0xfffffff7 | 0x10, (uVar1 & 5) == 4)) {
        *(int *)(plVar4[6] + 8) = *(int *)(plVar4[6] + 8) + -1;
      }
      iVar2 = uv_fs_stat(lVar6,plVar4 + 0x18,plVar4 + 99,FUN_011ae670);
      if (-1 < iVar2) {
        uVar1 = *(uint *)(param_1 + 0x58);
        *(long **)(param_1 + 0x60) = plVar4;
        if ((uVar1 >> 2 & 1) == 0) {
          *(uint *)(param_1 + 0x58) = uVar1 | 4;
          if ((uVar1 >> 3 & 1) == 0) {
            return 0;
          }
          *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
          return 0;
        }
        goto LAB_011ae63c;
      }
    }
    FUN_0119f27c(plVar4);
  }
  else {
LAB_011ae63c:
    iVar2 = 0;
  }
  return iVar2;
}

