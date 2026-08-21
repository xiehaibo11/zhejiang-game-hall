
undefined8 FUN_00a20330(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  
  sVar2 = strlen(param_2);
  puVar3 = *(undefined8 **)(*param_1 + 0x3b8);
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = FUN_00a33838(*puVar3,param_2,sVar2);
    if (iVar1 != 0) break;
    puVar3 = (undefined8 *)puVar3[1];
  }
  return *puVar3;
}

