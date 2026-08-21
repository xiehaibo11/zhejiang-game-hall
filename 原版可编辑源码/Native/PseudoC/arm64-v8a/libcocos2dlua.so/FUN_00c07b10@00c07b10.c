
int FUN_00c07b10(undefined8 *param_1,ulong param_2,long param_3)

{
  int iVar1;
  ulong *puVar2;
  ulong local_8;
  
  local_8 = param_2 | param_3 << 0x2f;
  puVar2 = (ulong *)FUN_00c1bdd4(param_1[2],*param_1,&local_8);
  if (*(int *)((long)puVar2 + 4) != 0) {
    *puVar2 = (ulong)*(uint *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar1 + 1;
    return iVar1;
  }
  return (int)*puVar2;
}

