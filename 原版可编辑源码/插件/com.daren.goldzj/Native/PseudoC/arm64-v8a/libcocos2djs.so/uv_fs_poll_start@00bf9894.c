
uint uv_fs_poll_start(long param_1,long param_2,char *param_3,int param_4)

{
  uint uVar1;
  size_t sVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((*(uint *)(param_1 + 0x58) >> 0xe & 1) != 0) {
    return 0;
  }
  sVar2 = strlen(param_3);
  lVar5 = *(long *)(param_1 + 8);
  plVar3 = (long *)uv__calloc(1,sVar2 + 800);
  if (plVar3 == (long *)0x0) {
    return 0xfffffff4;
  }
  plVar3[4] = param_2;
  if (param_4 == 0) {
    param_4 = 1;
  }
  plVar3[3] = lVar5;
  *(int *)((long)plVar3 + 0xc) = param_4;
  lVar4 = uv_now(lVar5);
  *plVar3 = param_1;
  plVar3[2] = lVar4;
  memcpy(plVar3 + 99,param_3,sVar2 + 1);
  uVar1 = uv_timer_init(lVar5,plVar3 + 5);
  if (-1 < (int)uVar1) {
    uVar1 = *(uint *)(plVar3 + 0x10);
    if ((uVar1 >> 0xd & 1) == 0) {
      *(uint *)(plVar3 + 0x10) = uVar1 | 0x8000;
    }
    else {
      *(uint *)(plVar3 + 0x10) = uVar1 & 0xffffdfff | 0x8000;
      if ((uVar1 >> 0xe & 1) != 0) {
        *(int *)(plVar3[6] + 8) = *(int *)(plVar3[6] + 8) + -1;
      }
    }
    uVar1 = uv_fs_stat(lVar5,plVar3 + 0x18,plVar3 + 99,FUN_00bf9628);
    if (-1 < (int)uVar1) {
      uVar1 = *(uint *)(param_1 + 0x58);
      *(long **)(param_1 + 0x60) = plVar3;
      if ((uVar1 >> 0xe & 1) != 0) {
        return 0;
      }
      *(uint *)(param_1 + 0x58) = uVar1 | 0x4000;
      if ((uVar1 >> 0xd & 1) == 0) {
        return 0;
      }
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
      return uVar1 & 0x4000;
    }
  }
  uv__free(plVar3);
  return uVar1;
}

