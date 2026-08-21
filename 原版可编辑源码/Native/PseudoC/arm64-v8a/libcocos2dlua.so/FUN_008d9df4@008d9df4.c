
undefined8 FUN_008d9df4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  Value aVStack_48 [16];
  long local_38;
  
                    /* try { // try from 008d9df4 to 009d9dff has its CatchHandler @ 008da048 */
                    /* try { // try from 008d9e04 to 009d9e27 has its CatchHandler @ 008da074 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 008d9e2c to 009d9e67 has its CatchHandler @ 008da15c */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Value::Value(aVStack_48);
    uVar4 = luaval_to_ccvalue(param_1,2,aVStack_48,"fairygui.GObject:setCustomData");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_setCustomData\'",0);
    }
    else {
      cocos2d::Value::operator=((Value *)(lVar3 + 0x198),aVStack_48);
    }
                    /* try { // try from 008d9ea4 to 009d9eaf has its CatchHandler @ 008da15c */
    cocos2d::Value::~Value(aVStack_48);
  }
  else {
                    /* try { // try from 008d9e70 to 009d9e77 has its CatchHandler @ 008da02c */
                    /* try { // try from 008d9e7c to 009d9e9f has its CatchHandler @ 008da054 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:setCustomData",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008d9ec0 to 009d9ed7 has its CatchHandler @ 008da0a4 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

