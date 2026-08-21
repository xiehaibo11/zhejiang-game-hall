
/* lua_cocos2dx_studio_ComAttribute_parse(lua_State*) */

bool lua_cocos2dx_studio_ComAttribute_parse(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ComAttribute *this;
  ulong uVar4;
  bool bVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComAttribute *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0093a7d4 to 00a3a7eb has its CatchHandler @ 0093a970 */
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.ComAttribute:parse");
    bVar5 = (uVar4 & 1) == 0;
    if (bVar5) {
                    /* try { // try from 0093a848 to 00a3a85f has its CatchHandler @ 0093a964 */
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_ComAttribute_parse\'"
                  ,0);
    }
    else {
                    /* try { // try from 0093a7f8 to 00a3a80f has its CatchHandler @ 0093a96c */
      uVar3 = cocostudio::ComAttribute::parse(this,(basic_string *)&local_50);
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    bVar5 = !bVar5;
    if ((local_50 & 1) != 0) {
                    /* try { // try from 0093a864 to 00a3a87b has its CatchHandler @ 0093a960 */
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 0093a82c to 00a3a843 has its CatchHandler @ 0093a968 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ComAttribute:parse",iVar2 + -1,1);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0093a880 to 00a3a897 has its CatchHandler @ 0093a95c */
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

