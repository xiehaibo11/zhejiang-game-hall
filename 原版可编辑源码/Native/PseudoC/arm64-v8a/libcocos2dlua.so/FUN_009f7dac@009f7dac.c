
undefined8 FUN_009f7dac(undefined8 param_1)

{
  undefined8 uVar1;
  
  lua_settop(param_1,3);
                    /* try { // try from 009f7dc4 to 00af7dd7 has its CatchHandler @ 009f7de0 */
  uVar1 = lua_newuserdata(param_1,0x60);
                    /* try { // try from 009f7dd8 to 00af7dfb has its CatchHandler @ 009f7cec */
                    /* catch() { ... } // from try @ 009f7d3c with catch @ 009f7de0
                       catch() { ... } // from try @ 009f7dc4 with catch @ 009f7de0 */
  FUN_009fb208(param_1,1,uVar1,0x60);
  lua_getfield(param_1,0xffffd8f0,"pb.Slice");
  lua_setmetatable(param_1,0xfffffffe);
  return 1;
}

