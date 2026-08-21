
/* lua_dragonbones_BaseFactory_replaceDisplay(lua_State*) */

undefined4 lua_dragonbones_BaseFactory_replaceDisplay(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 unaff_x21;
  uint uVar8;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0095d1c4 to 00a5d1c7 has its CatchHandler @ 0095d1fc */
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0095d1c8 to 00a5d20f has its CatchHandler @ 0095d178 */
  if (iVar2 + -1 == 3) {
    if (param_1 == (lua_State *)0x0) {
LAB_0095d2d4:
      luaval_to_int32(param_1,4,&local_4c,"db.BaseFactory:replaceDisplay");
    }
    else {
      iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 0095d1c4 with catch @ 0095d1fc */
      if ((iVar2 < 2) || (uVar5 = luaval_is_usertype(param_1,2,"db.Slot",0), (uVar5 & 1) == 0)) {
        uVar8 = 0;
      }
      else {
                    /* try { // try from 0095d210 to 00a5d2c7 has its CatchHandler @ 0095d210
                       catch() { ... } // from try @ 0095d210 with catch @ 0095d210
                       catch() { ... } // from try @ 0095d348 with catch @ 0095d210 */
        unaff_x21 = tolua_tousertype(param_1,2,0);
        uVar8 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 3) ||
         (uVar5 = luaval_is_usertype(param_1,3,"db.DisplayData",0), (uVar5 & 1) == 0))
      goto LAB_0095d2d4;
      uVar6 = tolua_tousertype(param_1,3,0);
      uVar3 = luaval_to_int32(param_1,4,&local_4c,"db.BaseFactory:replaceDisplay");
      if ((uVar8 & uVar3) != 0) {
        (**(code **)(*plVar4 + 0xa8))(plVar4,unaff_x21,uVar6,local_4c);
                    /* try { // try from 0095d2c8 to 00a5d2fb has its CatchHandler @ 0095d3c8 */
        uVar7 = 1;
        lua_settop(param_1,1);
        goto LAB_0095d304;
      }
    }
                    /* try { // try from 0095d2fc to 00a5d30f has its CatchHandler @ 0095d394 */
    tolua_error(param_1,&DAT_012d3d1a,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.BaseFactory:replaceDisplay",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_0095d304:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0095d314 to 00a5d347 has its CatchHandler @ 0095d398 */
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

