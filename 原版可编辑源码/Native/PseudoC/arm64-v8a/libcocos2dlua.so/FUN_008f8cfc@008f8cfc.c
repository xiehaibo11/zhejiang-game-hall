
undefined8 FUN_008f8cfc(undefined8 param_1)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 008f8c74 with catch @ 008f8d0c */
                    /* catch() { ... } // from try @ 008f8c8c with catch @ 008f8d10 */
  lVar1 = tolua_tousertype(param_1,1,0);
  lua_pushinteger(param_1,(long)*(int *)(lVar1 + 0x34));
  return 1;
}

