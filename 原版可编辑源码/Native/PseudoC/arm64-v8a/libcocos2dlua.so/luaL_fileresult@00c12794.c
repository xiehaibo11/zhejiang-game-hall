
undefined8 luaL_fileresult(long param_1,int param_2,long param_3)

{
  int __errnum;
  int *piVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  if (param_2 == 0) {
    piVar1 = (int *)__errno();
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    __errnum = *piVar1;
    *(undefined8 **)(param_1 + 0x28) = puVar3 + 1;
    *puVar3 = 0xffffffffffffffff;
    if (param_3 == 0) {
      pcVar2 = strerror(__errnum);
      lua_pushfstring(param_1,"%s",pcVar2);
    }
    else {
      pcVar2 = strerror(__errnum);
      lua_pushfstring(param_1,"%s: %s",param_3,pcVar2);
    }
    piVar1 = *(int **)(param_1 + 0x28);
    *(int **)(param_1 + 0x28) = piVar1 + 2;
    *piVar1 = __errnum;
    piVar1[1] = -0x70000;
    return 3;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x28) = puVar3 + 1;
  *puVar3 = 0xfffeffffffffffff;
  return 1;
}

