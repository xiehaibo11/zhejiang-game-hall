
undefined8 FUN_008d94e0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 008d951c to 009d9527 has its CatchHandler @ 008d9660 */
  if (iVar2 + -1 == 2) {
    cocos2d::Value::Value(aVStack_48);
                    /* try { // try from 008d9534 to 009d953f has its CatchHandler @ 008d96dc */
    luaval_to_ccvalue(param_1,3,aVStack_48,"fairygui.GObject:setProp");
    uVar4 = lua_tointeger(param_1,2);
    (**(code **)(*plVar3 + 0x38))(plVar3,uVar4,aVStack_48);
    cocos2d::Value::~Value(aVStack_48);
  }
  else {
                    /* try { // try from 008d9578 to 009d9583 has its CatchHandler @ 008d96b8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:setProp",iVar2 + -1,2);
  }
                    /* try { // try from 008d959c to 009d95a7 has its CatchHandler @ 008d9694 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

