
void FUN_008d93fc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  Value aVStack_48 [16];
  long local_38;
  
                    /* try { // try from 008d9408 to 009d9413 has its CatchHandler @ 008d96ac */
  lVar1 = tpidr_el0;
                    /* try { // try from 008d9414 to 009d9477 has its CatchHandler @ 008d9248 */
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 != 1) {
                    /* try { // try from 008d9498 to 009d94af has its CatchHandler @ 008d9714 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getProp",iVar2,1);
  }
  else {
    uVar4 = lua_tointeger(param_1,2);
    (**(code **)(*plVar3 + 0x30))(aVStack_48,plVar3,uVar4);
    ccvalue_to_luaval(param_1,aVStack_48);
                    /* try { // try from 008d9478 to 009d9483 has its CatchHandler @ 008d9668 */
    cocos2d::Value::~Value(aVStack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008d94b4 to 009d94bf has its CatchHandler @ 008d96f4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 1);
}

