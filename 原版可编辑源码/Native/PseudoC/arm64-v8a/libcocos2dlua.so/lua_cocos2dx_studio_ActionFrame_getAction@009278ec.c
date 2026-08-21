
/* lua_cocos2dx_studio_ActionFrame_getAction(lua_State*) */

void lua_cocos2dx_studio_ActionFrame_getAction(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00927818 with catch @ 00927918 */
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
                    /* try { // try from 009279e0 to 00a27a7f has its CatchHandler @ 009279e0
                       catch() { ... } // from try @ 009279e0 with catch @ 009279e0
                       catch() { ... } // from try @ 00927b00 with catch @ 009279e0 */
    uVar5 = luaval_to_number(param_1,2,&local_50,"ccs.ActionFrame:getAction");
    if ((uVar5 & 1) == 0) goto LAB_00927a30;
    pvVar8 = (void *)(**(code **)(*plVar4 + 0x10))((float)local_50,plVar4);
  }
  else {
    if ((((iVar2 != 3) ||
         (uVar5 = luaval_to_number(param_1,2,&local_50,"ccs.ActionFrame:getAction"),
         param_1 == (lua_State *)0x0)) || ((uVar5 & 1) == 0)) ||
       (((iVar3 = lua_gettop(param_1), iVar3 < 3 ||
         (uVar6 = luaval_is_usertype(param_1,3,"ccs.ActionFrame",0), (uVar6 & 1) == 0)) ||
        (uVar7 = tolua_tousertype(param_1,3,0), (uVar5 & 1) == 0)))) {
LAB_00927a30:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccs.ActionFrame:getAction",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_00927a54;
    }
    pvVar8 = (void *)(**(code **)(*plVar4 + 0x18))((float)local_50,plVar4,uVar7);
  }
  if (pvVar8 == (void *)0x0) {
    lua_pushnil(param_1);
    uVar7 = 1;
  }
  else {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,
               "cc.ActionInterval");
    uVar7 = 1;
  }
LAB_00927a54:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

