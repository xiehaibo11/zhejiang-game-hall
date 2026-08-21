
undefined8 FUN_00a2e7c4(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = getenv(param_1);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
                    /* try { // try from 00a2e7ec to 00b2e803 has its CatchHandler @ 00a2e9dc */
    uVar2 = (*(code *)PTR_strdup_01d1b758)();
    return uVar2;
  }
  return 0;
}

