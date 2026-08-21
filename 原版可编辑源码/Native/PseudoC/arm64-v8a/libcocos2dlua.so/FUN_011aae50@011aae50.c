
ulong FUN_011aae50(long param_1,long param_2,void *param_3,uint param_4,short *param_5,uint param_6,
                  undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  socklen_t __len;
  long lVar10;
  sockaddr local_70;
  undefined8 local_60;
  undefined4 local_58;
  
  if (*(int *)(param_2 + 0xb0) == -1) {
    if (*param_5 == 10) {
      __len = 0x1c;
      local_70.sa_data[6] = '\0';
      local_70.sa_data[7] = '\0';
      local_70.sa_data[8] = '\0';
      local_70.sa_data[9] = '\0';
      local_70.sa_data[10] = '\0';
      local_70.sa_data[0xb] = '\0';
      local_70.sa_data[0xc] = '\0';
      local_70.sa_data[0xd] = '\0';
      local_58 = 0;
      local_60 = 0;
      local_70.sa_family = 10;
      local_70.sa_data[0] = '\0';
      local_70.sa_data[1] = '\0';
      local_70.sa_data[2] = '\0';
      local_70.sa_data[3] = '\0';
      local_70.sa_data[4] = '\0';
      local_70.sa_data[5] = '\0';
      uVar5 = FUN_011a2b64(10,2,0);
      iVar3 = (int)uVar5;
    }
    else {
      if (*param_5 != 2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_70.sa_data[6] = '\0';
      local_70.sa_data[7] = '\0';
      local_70.sa_data[8] = '\0';
      local_70.sa_data[9] = '\0';
      local_70.sa_data[10] = '\0';
      local_70.sa_data[0xb] = '\0';
      local_70.sa_data[0xc] = '\0';
      local_70.sa_data[0xd] = '\0';
      local_70.sa_family = 2;
      local_70.sa_data[0] = '\0';
      local_70.sa_data[1] = '\0';
      local_70.sa_data[2] = '\0';
      local_70.sa_data[3] = '\0';
      local_70.sa_data[4] = '\0';
      local_70.sa_data[5] = '\0';
      __len = 0x10;
      uVar5 = FUN_011a2b64(2,2,0);
      iVar3 = (int)uVar5;
    }
    if (iVar3 < 0) {
      return uVar5;
    }
    *(int *)(param_2 + 0xb0) = (int)uVar5;
    iVar3 = bind((int)uVar5,&local_70,__len);
    if (iVar3 == 0) {
      uVar7 = *(uint *)(param_2 + 0x58);
      if (local_70.sa_family == 10) {
        uVar7 = uVar7 | 0x400000;
        *(uint *)(param_2 + 0x58) = uVar7;
      }
      *(uint *)(param_2 + 0x58) = uVar7 | 0x2000;
    }
    else {
      piVar6 = (int *)__errno();
      iVar3 = *piVar6;
      if (iVar3 == 0x61) {
        return 0xffffffea;
      }
      if (iVar3 != 0) {
        return (ulong)(uint)-iVar3;
      }
    }
  }
  lVar10 = *(long *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 8) = 5;
  *(int *)(*(long *)(param_2 + 8) + 0x20) = *(int *)(*(long *)(param_2 + 8) + 0x20) + 1;
  memcpy((void *)(param_1 + 0x60),param_5,(ulong)param_6);
  *(uint *)(param_1 + 0xe0) = param_4;
  __dest = (void *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = param_7;
  *(long *)(param_1 + 0x40) = param_2;
  *(void **)(param_1 + 0xe8) = __dest;
  if (4 < param_4) {
    __dest = malloc((ulong)param_4 << 4);
    *(void **)(param_1 + 0xe8) = __dest;
    if (__dest == (void *)0x0) {
      *(int *)(*(long *)(param_2 + 8) + 0x20) = *(int *)(*(long *)(param_2 + 8) + 0x20) + -1;
      return 0xfffffff4;
    }
  }
  memcpy(__dest,param_3,(ulong)param_4 << 4);
  lVar4 = FUN_011a1a9c(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xe0));
  *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + lVar4;
  *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x68) + 1;
  plVar9 = (long *)(param_1 + 0x50);
  *plVar9 = param_2 + 0xb8;
  puVar8 = *(undefined8 **)(param_2 + 0xc0);
  *(undefined8 **)(param_1 + 0x58) = puVar8;
  *puVar8 = plVar9;
  uVar7 = *(uint *)(param_2 + 0x58);
  *(long **)(param_2 + 0xc0) = plVar9;
  if ((uVar7 >> 2 & 1) == 0) {
    uVar2 = uVar7 | 4;
    *(uint *)(param_2 + 0x58) = uVar2;
    uVar1 = uVar7 >> 3;
    uVar7 = uVar2;
    if ((uVar1 & 1) != 0) {
      *(int *)(*(long *)(param_2 + 8) + 8) = *(int *)(*(long *)(param_2 + 8) + 8) + 1;
    }
  }
  if (((lVar10 != 0) || ((uVar7 >> 0x18 & 1) != 0)) ||
     (FUN_011ab08c(param_2), param_2 + 0xb8 != *(long *)(param_2 + 0xb8))) {
    FUN_011a3688(*(undefined8 *)(param_2 + 8),param_2 + 0x80,4);
  }
  return 0;
}

