
long lua_setupvalue(long param_1,undefined8 param_2,int param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *local_8;
  
  puVar1 = (ulong *)FUN_00c03214();
  lVar2 = FUN_00bfc96c(puVar1,param_3 + -1,&local_8);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar3 + -8;
    *local_8 = *(undefined8 *)(lVar3 + -8);
    if (((0xfffffff6 < (int)((long)*(ulong *)(lVar3 + -8) >> 0x2f) + 4U) &&
        ((*(byte *)((*(ulong *)(lVar3 + -8) & 0x7fffffffffff) + 8) & 3) != 0)) &&
       ((*(byte *)((*puVar1 & 0x7fffffffffff) + 8) >> 2 & 1) != 0)) {
      FUN_00c1a1ac(*(undefined8 *)(param_1 + 0x10));
      return lVar2;
    }
  }
  return lVar2;
}

