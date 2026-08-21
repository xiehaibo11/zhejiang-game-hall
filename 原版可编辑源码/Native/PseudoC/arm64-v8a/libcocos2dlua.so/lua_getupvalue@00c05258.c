
long lua_getupvalue(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_8;
  
  uVar1 = FUN_00c03214();
  lVar2 = FUN_00bfc96c(uVar1,param_3 + -1,&local_8);
  if (lVar2 != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x30);
    puVar3 = *(undefined8 **)(param_1 + 0x28) + 1;
    **(undefined8 **)(param_1 + 0x28) = *local_8;
    *(undefined8 **)(param_1 + 0x28) = puVar3;
    if (puVar4 <= puVar3) {
      FUN_00bfe164(param_1);
    }
  }
  return lVar2;
}

