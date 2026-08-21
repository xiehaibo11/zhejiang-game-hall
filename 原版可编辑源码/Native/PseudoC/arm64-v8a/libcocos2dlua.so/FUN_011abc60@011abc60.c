
ulong FUN_011abc60(long param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  uint uVar4;
  sockaddr local_50 [2];
  
  uVar2 = 0xffffffea;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = FUN_011a393c(param_1 + 0x80,1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0xb0) == -1) {
        local_50[0].sa_data[6] = '\0';
        local_50[0].sa_data[7] = '\0';
        local_50[0].sa_data[8] = '\0';
        local_50[0].sa_data[9] = '\0';
        local_50[0].sa_data[10] = '\0';
        local_50[0].sa_data[0xb] = '\0';
        local_50[0].sa_data[0xc] = '\0';
        local_50[0].sa_data[0xd] = '\0';
        local_50[0].sa_family = 2;
        local_50[0].sa_data[0] = '\0';
        local_50[0].sa_data[1] = '\0';
        local_50[0].sa_data[2] = '\0';
        local_50[0].sa_data[3] = '\0';
        local_50[0].sa_data[4] = '\0';
        local_50[0].sa_data[5] = '\0';
        uVar2 = FUN_011a2b64(2,2,0);
        iVar1 = (int)uVar2;
        if (iVar1 < 0) {
          return uVar2;
        }
        *(int *)(param_1 + 0xb0) = iVar1;
        iVar1 = bind(iVar1,local_50,0x10);
        if (iVar1 == 0) {
          uVar4 = *(uint *)(param_1 + 0x58);
          if (local_50[0].sa_family == 10) {
            uVar4 = uVar4 | 0x400000;
            *(uint *)(param_1 + 0x58) = uVar4;
          }
          *(uint *)(param_1 + 0x58) = uVar4 | 0x2000;
        }
        else {
          piVar3 = (int *)__errno();
          iVar1 = *piVar3;
          if (iVar1 == 0x61) {
            return 0xffffffea;
          }
          if (iVar1 != 0) {
            return (ulong)(uint)-iVar1;
          }
        }
      }
      *(long *)(param_1 + 0x70) = param_2;
      *(long *)(param_1 + 0x78) = param_3;
      FUN_011a3688(*(undefined8 *)(param_1 + 8),param_1 + 0x80,1);
      uVar4 = *(uint *)(param_1 + 0x58);
      if ((uVar4 >> 2 & 1) == 0) {
        uVar2 = 0;
        *(uint *)(param_1 + 0x58) = uVar4 | 4;
        if ((uVar4 >> 3 & 1) != 0) {
          *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0xffffff8e;
    }
  }
  return uVar2;
}

