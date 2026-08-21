
void lua_call(long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  puVar3 = puVar4 + -(long)param_2;
  puVar1 = puVar4 + 1;
  *(undefined8 **)(param_1 + 0x28) = puVar1;
  puVar2 = puVar4;
  if (puVar3 < puVar4) {
    do {
      puVar1 = puVar2 + -1;
      *puVar2 = puVar2[-1];
      puVar2 = puVar1;
    } while (puVar3 < puVar1);
    puVar4 = puVar4 + ~((ulong)((long)puVar4 + (-1 - (long)puVar3)) >> 3);
    puVar1 = puVar4 + 1;
  }
  *puVar4 = 0xffffffffffffffff;
  FUN_00c175d8(param_1,puVar1,param_3 + 1);
  return;
}

