
/* std::__ndk1::__itoa::__u32toa(unsigned int, char*) */

char * std::__ndk1::__itoa::__u32toa(uint param_1,char *param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined2 *puVar7;
  long lVar8;
  
  if (param_1 < 100000000) {
    if (param_1 >> 4 < 0x271) {
      pcVar6 = (char *)FUN_0121317c(param_2,(ulong)param_1);
      return pcVar6;
    }
    puVar7 = (undefined2 *)FUN_0121317c(param_2,(ulong)param_1 / 10000);
    uVar2 = *(undefined2 *)(&DAT_014a4a84 + ((param_1 % 10000) % 100) * 2);
    *puVar7 = *(undefined2 *)(&DAT_014a4a84 + ((param_1 % 10000) / 100 << 1));
    puVar7[1] = uVar2;
    pcVar6 = (char *)(puVar7 + 2);
  }
  else {
    uVar5 = param_1 % 100000000;
    if (param_1 < 1000000000) {
      *param_2 = (char)(param_1 / 100000000) + '0';
      lVar8 = 1;
    }
    else {
      *(undefined2 *)param_2 = *(undefined2 *)(&DAT_014a4a84 + (param_1 / 100000000 << 1));
      lVar8 = 2;
    }
    uVar2 = *(undefined2 *)
             (&DAT_014a4a84 + ((ulong)((uVar5 / 10000 + (uVar5 / 1000000) * -100) * 2) & 0xfffe));
    uVar3 = *(undefined2 *)(&DAT_014a4a84 + ((uVar5 % 10000) / 100 << 1));
    uVar4 = *(undefined2 *)(&DAT_014a4a84 + ((uVar5 % 10000) % 100) * 2);
    pcVar1 = param_2 + lVar8;
    pcVar6 = pcVar1 + 8;
    *(undefined2 *)pcVar1 = *(undefined2 *)(&DAT_014a4a84 + (uVar5 / 1000000 << 1));
    *(undefined2 *)(pcVar1 + 2) = uVar2;
    *(undefined2 *)(pcVar1 + 4) = uVar3;
    *(undefined2 *)(pcVar1 + 6) = uVar4;
  }
  return pcVar6;
}

