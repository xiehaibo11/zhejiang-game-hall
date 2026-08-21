
/* lua_cocos2dx_cocosbuilder_CCBReader_getOwnerCallbackNames(lua_State*) */

void lua_cocos2dx_cocosbuilder_CCBReader_getOwnerCallbackNames(lua_State *param_1)

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
  tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 0) {
    cocosbuilder::CCBReader::getOwnerCallbackNames();
    ccvaluevector_to_luaval(param_1,(vector *)&local_50);
    pVVar2 = local_50;
                    /* try { // try from 0091f1dc to 00a1f227 has its CatchHandler @ 0091f1dc
                       catch() { ... } // from try @ 0091f1dc with catch @ 0091f1dc
                       catch() { ... } // from try @ 0091f22c with catch @ 0091f1dc */
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
               "cc.CCBReader:getOwnerCallbackNames",iVar3 + -1,0);
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
                    /* try { // try from 0091f228 to 00a1f22b has its CatchHandler @ 0091f280 */
                    /* try { // try from 0091f22c to 00a1f293 has its CatchHandler @ 0091f1dc */
  return;
}

