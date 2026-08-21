
int FUN_00c07b70(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)FUN_00c1bdd4(param_1[2],*param_1,param_2);
  if (*(int *)((long)puVar2 + 4) != 0) {
    *puVar2 = (ulong)*(uint *)((long)param_1 + 0x3c);
    iVar1 = *(int *)((long)param_1 + 0x3c);
    *(int *)((long)param_1 + 0x3c) = iVar1 + 1;
    return iVar1;
  }
  return (int)*puVar2;
}

