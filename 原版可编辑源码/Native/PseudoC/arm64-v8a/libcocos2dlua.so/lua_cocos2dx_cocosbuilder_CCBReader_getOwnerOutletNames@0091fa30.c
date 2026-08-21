
/* lua_cocos2dx_cocosbuilder_CCBReader_getOwnerOutletNames(lua_State*) */

void lua_cocos2dx_cocosbuilder_CCBReader_getOwnerOutletNames(lua_State *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  undefined8 uVar4;
  Value *local_50;
  Value *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0091fa58 to 00a1fa6b has its CatchHandler @ 0091faf0 */
  tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
                    /* try { // try from 0091fa70 to 00a1faa3 has its CatchHandler @ 0091faf4 */
  if (iVar3 + -1 == 0) {
    cocosbuilder::CCBReader::getOwnerOutletNames();
                    /* try { // try from 0091faa4 to 00a1fb3f has its CatchHandler @ 0091f96c */
    ccvaluevector_to_luaval(param_1,(vector *)&local_50);
    pVVar2 = local_50;
    if (local_50 != (Value *)0x0) {
      while (local_48 != pVVar2) {
        cocos2d::Value::~Value(local_48 + -0x10);
        local_48 = local_48 + -0x10;
      }
      local_48 = pVVar2;
      operator_delete(local_50);
    }
    uVar4 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBReader:getOwnerOutletNames",iVar3 + -1,0);
    uVar4 = 0;
  }
                    /* catch() { ... } // from try @ 0091fa58 with catch @ 0091faf0 */
                    /* catch() { ... } // from try @ 0091fa70 with catch @ 0091faf4 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

