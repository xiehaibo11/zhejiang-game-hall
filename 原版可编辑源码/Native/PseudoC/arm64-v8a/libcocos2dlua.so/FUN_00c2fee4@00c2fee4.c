
undefined8 FUN_00c2fee4(long param_1)

{
  int iVar1;
  char *__command;
  int *piVar2;
  
  __command = (char *)luaL_optlstring(param_1,1,0,0);
  iVar1 = system(__command);
  piVar2 = *(int **)(param_1 + 0x28);
  *(int **)(param_1 + 0x28) = piVar2 + 2;
  *piVar2 = iVar1;
  piVar2[1] = -0x70000;
  return 1;
}

