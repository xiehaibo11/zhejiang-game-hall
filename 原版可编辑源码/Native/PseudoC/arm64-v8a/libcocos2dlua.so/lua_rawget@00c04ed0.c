
void lua_rawget(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = (ulong *)FUN_00c03214();
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2 = (undefined8 *)FUN_00c1bc70(param_1,*puVar1 & 0x7fffffffffff,lVar3 + -8);
  *(undefined8 *)(lVar3 + -8) = *puVar2;
  return;
}

