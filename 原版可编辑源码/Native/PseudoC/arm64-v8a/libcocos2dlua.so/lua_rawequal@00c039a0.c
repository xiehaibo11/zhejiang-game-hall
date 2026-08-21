
undefined8 lua_rawequal(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_00c03214();
  lVar3 = FUN_00c03214(param_1,param_3);
  lVar1 = *(long *)(param_1 + 0x10) + 0xe8;
  if ((lVar2 != lVar1) && (lVar3 != lVar1)) {
    uVar4 = FUN_00bfb678(lVar2);
    return uVar4;
  }
  return 0;
}

