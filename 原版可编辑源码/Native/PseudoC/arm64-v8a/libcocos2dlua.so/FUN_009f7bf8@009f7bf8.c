
undefined8 FUN_009f7bf8(undefined8 param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* try { // try from 009f7c08 to 00af7c13 has its CatchHandler @ 009f7c50 */
                    /* try { // try from 009f7c14 to 00af7c57 has its CatchHandler @ 009f7af0 */
  uVar2 = luaL_checkudata(param_1,1,"pb.Slice");
  lVar3 = lua_objlen(param_1,1);
  pcVar1 = "";
  if (lVar3 != 0x60) {
    pcVar1 = " (raw)";
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f7bb8 with catch @ 009f7c50
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7be0 with catch @ 009f7c50
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7c08 with catch @ 009f7c50
                        */
  lua_pushfstring(param_1,"pb.Slice: %p%s",uVar2,pcVar1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f7b58 with catch @ 009f7c54
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7b84 with catch @ 009f7c54
                        */
  return 1;
}

