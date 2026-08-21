
undefined8 FUN_008fb428(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_toboolean(param_1,2);
                    /* try { // try from 008fb45c to 009fb507 has its CatchHandler @ 008fb45c
                       catch() { ... } // from try @ 008fb45c with catch @ 008fb45c
                       catch() { ... } // from try @ 008fb560 with catch @ 008fb45c */
  *(bool *)(lVar2 + 0x21) = iVar1 != 0;
  return 0;
}

