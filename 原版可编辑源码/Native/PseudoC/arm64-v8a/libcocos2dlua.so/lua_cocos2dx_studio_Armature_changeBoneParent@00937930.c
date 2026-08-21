
/* lua_cocos2dx_studio_Armature_changeBoneParent(lua_State*) */

bool lua_cocos2dx_studio_Armature_changeBoneParent(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  bool bVar6;
  undefined8 unaff_x21;
  uint uVar7;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009378c4 with catch @ 00937954 */
                    /* catch() { ... } // from try @ 00937888 with catch @ 00937958 */
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0093796c to 00a37c1b has its CatchHandler @ 0093796c
                       catch() { ... } // from try @ 0093796c with catch @ 0093796c
                       catch() { ... } // from try @ 00937c9c with catch @ 0093796c */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"ccs.Bone",0), (uVar5 & 1) == 0)) {
      uVar7 = 0;
    }
    else {
      unaff_x21 = tolua_tousertype(param_1,2,0);
      uVar7 = 1;
    }
    uVar3 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_60,"ccs.Armature:changeBoneParent");
    bVar6 = (uVar7 & uVar3) == 0;
    if (bVar6) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_Armature_changeBoneParent\'",
                  0);
    }
    else {
      (**(code **)(*plVar4 + 0x550))(plVar4,unaff_x21,&local_60);
      lua_settop(param_1,1);
    }
    bVar6 = !bVar6;
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Armature:changeBoneParent",iVar2 + -1,2);
    bVar6 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

