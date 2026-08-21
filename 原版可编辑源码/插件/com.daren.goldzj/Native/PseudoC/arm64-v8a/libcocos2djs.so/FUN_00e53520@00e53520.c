
char FUN_00e53520(long param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  do {
    uVar2 = uVar2 + 1;
    if (0xff < uVar2) {
      *param_2 = 0;
      return '\0';
    }
    cVar1 = *(char *)(*(long *)(param_1 + 0x18) + 6 + (ulong)uVar2);
  } while (cVar1 == '\0');
  *param_2 = uVar2;
  return cVar1;
}

