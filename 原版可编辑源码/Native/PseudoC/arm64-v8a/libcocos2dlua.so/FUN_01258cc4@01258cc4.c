
undefined8 FUN_01258cc4(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  long local_18;
  
  pcVar2 = (char *)*param_1;
  if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'D')) {
    pcVar1 = pcVar2 + 1;
    *param_1 = (long)pcVar1;
    if ((pcVar1 != (char *)param_1[1]) && ((*pcVar1 == 't' || (*pcVar1 == 'T')))) {
      *param_1 = (long)(pcVar2 + 2);
      local_18 = FUN_01259b70(param_1);
      if (local_18 == 0) {
        return 0;
      }
      pcVar2 = (char *)*param_1;
      if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) {
        *param_1 = (long)(pcVar2 + 1);
        uVar3 = FUN_0125b784(param_1,"decltype(",&local_18);
        return uVar3;
      }
    }
  }
  return 0;
}

