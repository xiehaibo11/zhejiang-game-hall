
int FUN_00a46714(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x8c48);
  iVar2 = 0;
  if ((ENGINE *)*puVar1 != (ENGINE *)0x0) {
    ENGINE_finish((ENGINE *)*puVar1);
    iVar2 = ENGINE_free((ENGINE *)*puVar1);
    *puVar1 = 0;
  }
  return iVar2;
}

