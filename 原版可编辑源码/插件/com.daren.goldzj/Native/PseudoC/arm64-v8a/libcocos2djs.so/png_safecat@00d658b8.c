
ulong png_safecat(long param_1,ulong param_2,ulong param_3,char *param_4)

{
  char cVar1;
  
  if ((param_1 != 0) && (param_3 < param_2)) {
    if ((param_4 != (char *)0x0) && (param_3 < param_2 - 1)) {
      cVar1 = *param_4;
      do {
        if (cVar1 == '\0') break;
        param_4 = param_4 + 1;
        *(char *)(param_1 + param_3) = cVar1;
        cVar1 = *param_4;
        param_3 = param_3 + 1;
      } while (param_3 < param_2 - 1);
    }
    *(undefined1 *)(param_1 + param_3) = 0;
  }
  return param_3;
}

