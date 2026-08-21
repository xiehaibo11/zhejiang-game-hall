
/* std::__ndk1::__itoa::__u32toa(unsigned int, char*) */

char * std::__ndk1::__itoa::__u32toa(uint param_1,char *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  
  if (99999999 < param_1) {
    uVar4 = param_1 % 100000000;
    if (param_1 < 1000000000) {
      *param_2 = (char)(param_1 / 100000000) + '0';
      lVar6 = 1;
    }
    else {
      *(undefined2 *)param_2 = (&DAT_0011ed00)[param_1 / 100000000];
      lVar6 = 2;
    }
    uVar1 = (&DAT_0011ed00)[(uVar4 % 10000) / 100];
    uVar2 = (&DAT_0011ed00)[(ulong)(uVar4 / 10000 + (uVar4 / 1000000) * -100) & 0xffff];
    uVar3 = (&DAT_0011ed00)[(uVar4 % 10000) % 100];
    pcVar5 = param_2 + lVar6;
    *(undefined2 *)pcVar5 = (&DAT_0011ed00)[uVar4 / 1000000];
    *(undefined2 *)(pcVar5 + 4) = uVar1;
    *(undefined2 *)(pcVar5 + 2) = uVar2;
    *(undefined2 *)(pcVar5 + 6) = uVar3;
    return pcVar5 + 8;
  }
  pcVar5 = (char *)FUN_00148474(param_2,param_1);
  return pcVar5;
}

