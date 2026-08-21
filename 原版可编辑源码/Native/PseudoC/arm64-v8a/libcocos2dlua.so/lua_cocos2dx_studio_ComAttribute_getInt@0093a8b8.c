
/* lua_cocos2dx_studio_ComAttribute_getInt(lua_State*) */

undefined4 lua_cocos2dx_studio_ComAttribute_getInt(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ComAttribute *this;
  ulong uVar5;
  undefined4 uVar6;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 0093a8c4 to 00a3a98b has its CatchHandler @ 0093a6b0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComAttribute *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* catch() { ... } // from try @ 0093a8ac with catch @ 0093a958 */
                    /* catch() { ... } // from try @ 0093a880 with catch @ 0093a95c */
                    /* catch() { ... } // from try @ 0093a864 with catch @ 0093a960 */
                    /* catch() { ... } // from try @ 0093a848 with catch @ 0093a964 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.ComAttribute:getInt");
                    /* catch() { ... } // from try @ 0093a82c with catch @ 0093a968 */
                    /* catch() { ... } // from try @ 0093a7f8 with catch @ 0093a96c */
                    /* catch() { ... } // from try @ 0093a7d4 with catch @ 0093a970 */
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccs.ComAttribute:getInt");
    if ((uVar3 & uVar4 & 1) != 0) {
      iVar2 = cocostudio::ComAttribute::getInt(this,(basic_string *)&local_50,local_54);
      tolua_pushnumber((double)iVar2,param_1);
      goto LAB_0093a9a8;
    }
    tolua_error(param_1,&DAT_012cce6f,0);
LAB_0093aa0c:
    uVar6 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccs.ComAttribute:getInt",iVar2 + -1,1);
      uVar6 = 0;
      goto LAB_0093aa20;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.ComAttribute:getInt");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,&DAT_012cce6f,0);
      goto LAB_0093aa0c;
    }
    iVar2 = cocostudio::ComAttribute::getInt(this,(basic_string *)&local_50,0);
    tolua_pushnumber((double)iVar2,param_1);
LAB_0093a9a8:
    uVar6 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0093aa20:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

