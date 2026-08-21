
undefined8 FUN_008fa36c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008fa38c to 009fa3d7 has its CatchHandler @ 008fa38c
                       catch() { ... } // from try @ 008fa38c with catch @ 008fa38c
                       catch() { ... } // from try @ 008fa3dc with catch @ 008fa38c */
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Value::Value(aVStack_48);
    luaval_to_ccvalue(param_1,2,aVStack_48,"");
                    /* try { // try from 008fa3d8 to 009fa3db has its CatchHandler @ 008fa410 */
                    /* try { // try from 008fa3dc to 009fa423 has its CatchHandler @ 008fa38c */
    cocos2d::Value::operator=((Value *)(lVar3 + 0x48),aVStack_48);
    cocos2d::Value::~Value(aVStack_48);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:setData",iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 008fa3d8 with catch @ 008fa410 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008fa424 to 009fa613 has its CatchHandler @ 008fa424
                       catch() { ... } // from try @ 008fa424 with catch @ 008fa424
                       catch() { ... } // from try @ 008fa694 with catch @ 008fa424 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

