
char * FUN_00148474(char *param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if (0x270 < param_2 >> 4) {
    uVar3 = param_2 / 10000;
    if (param_2 < 1000000) {
      if (param_2 >> 5 < 0xc35) {
        *param_1 = (char)uVar3 + '0';
        lVar4 = 1;
      }
      else {
        *(undefined2 *)param_1 = (&DAT_0011ed00)[(ulong)param_2 / 10000];
        lVar4 = 2;
      }
    }
    else if (param_2 < 10000000) {
      uVar2 = (param_2 / 40000 & 0x3fff) / 0x19;
      uVar1 = (&DAT_0011ed00)[(ulong)(uVar3 + uVar2 * -100) & 0xffff];
      *param_1 = (char)uVar2 + '0';
      lVar4 = 3;
      *(undefined2 *)(param_1 + 1) = uVar1;
    }
    else {
      uVar1 = (&DAT_0011ed00)[uVar3 + (int)(((ulong)param_2 / 10000) / 100) * -100];
      *(undefined2 *)param_1 = (&DAT_0011ed00)[param_2 / 1000000];
      lVar4 = 4;
      *(undefined2 *)(param_1 + 2) = uVar1;
    }
    uVar1 = (&DAT_0011ed00)[(param_2 % 10000) % 100];
    param_1 = param_1 + lVar4;
    *(undefined2 *)param_1 = (&DAT_0011ed00)[(param_2 % 10000) / 100];
    *(undefined2 *)(param_1 + 2) = uVar1;
    return param_1 + 4;
  }
  if (99 < param_2) {
    uVar3 = (param_2 >> 2 & 0x3fff) / 0x19;
    if (999 < param_2) {
      uVar1 = (&DAT_0011ed00)[(ulong)(param_2 + uVar3 * -100) & 0xffff];
      *(undefined2 *)param_1 = (&DAT_0011ed00)[uVar3];
      *(undefined2 *)(param_1 + 2) = uVar1;
      return param_1 + 4;
    }
    uVar1 = (&DAT_0011ed00)[(ulong)(param_2 + uVar3 * -100) & 0xffff];
    *param_1 = (char)uVar3 + '0';
    *(undefined2 *)(param_1 + 1) = uVar1;
    return param_1 + 3;
  }
  if (9 < param_2) {
    *(undefined2 *)param_1 = (&DAT_0011ed00)[param_2];
    return param_1 + 2;
  }
  *param_1 = (char)param_2 + '0';
  return param_1 + 1;
}

