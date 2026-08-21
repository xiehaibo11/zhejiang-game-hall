
long luaL_newstate(void)

{
  long lVar1;
  
  lVar1 = FUN_00c124e0();
  if ((lVar1 != 0) && (lVar1 = FUN_00bfe1e8(FUN_00c12650,lVar1), lVar1 != 0)) {
    *(code **)(*(long *)(lVar1 + 0x10) + 0x148) = FUN_00c1266c;
    return lVar1;
  }
  return 0;
}

