
undefined8 FUN_00a35d80(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  
  sVar2 = strlen(param_2);
  lVar3 = *param_1;
  if ((*(char *)((long)param_1 + 0x3bd) == '\0') || (*(char *)(lVar3 + 0x3d0) == '\0')) {
    puVar4 = *(undefined8 **)(lVar3 + 0x3b8);
  }
  else {
    puVar4 = *(undefined8 **)(lVar3 + 0x3c0);
  }
  while( true ) {
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = FUN_00a4a220(*puVar4,param_2,sVar2);
    if (iVar1 != 0) break;
    puVar4 = (undefined8 *)puVar4[1];
  }
  return *puVar4;
}

