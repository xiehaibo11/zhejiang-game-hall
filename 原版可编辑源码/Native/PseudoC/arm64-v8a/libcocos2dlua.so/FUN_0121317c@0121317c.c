
char * FUN_0121317c(char *param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  
  if (99 < param_2) {
    if (param_2 < 1000) {
      uVar2 = (param_2 & 0xffff) / 100;
      uVar1 = *(undefined2 *)(&DAT_014a4a84 + ((ulong)((param_2 + uVar2 * -100) * 2) & 0xfffe));
      *param_1 = (char)uVar2 + '0';
      *(undefined2 *)(param_1 + 1) = uVar1;
      return param_1 + 3;
    }
    uVar1 = *(undefined2 *)(&DAT_014a4a84 + (param_2 / 100 << 1));
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(&DAT_014a4a84 + (param_2 % 100) * 2);
    *(undefined2 *)param_1 = uVar1;
    return param_1 + 4;
  }
  if (param_2 < 10) {
    *param_1 = (char)param_2 + '0';
    return param_1 + 1;
  }
  *(undefined2 *)param_1 = *(undefined2 *)(&DAT_014a4a84 + (param_2 << 1));
  return param_1 + 2;
}

