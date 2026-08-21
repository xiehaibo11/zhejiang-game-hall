
/* lua_cocos2dx_studio_Bone_addDisplay(lua_State*) */

undefined4 lua_cocos2dx_studio_Bone_addDisplay(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Bone *this;
  ulong uVar4;
  Node *pNVar5;
  DisplayData *pDVar6;
  undefined4 uVar7;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Bone *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if ((param_1 != (lua_State *)0x0) && (iVar2 + -1 == 2)) {
    iVar3 = lua_gettop(param_1);
    if ((1 < iVar3) && (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) != 0)) {
      pNVar5 = (Node *)tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_int32(param_1,3,&local_4c,"ccs.Bone:addDisplay");
      if ((uVar4 & 1) == 0) goto LAB_009328ec;
      cocostudio::Bone::addDisplay(this,pNVar5,local_4c);
LAB_00932958:
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_00932990;
    }
LAB_009328ec:
    iVar3 = lua_gettop(param_1);
    if ((1 < iVar3) && (uVar4 = luaval_is_usertype(param_1,2,"ccs.DisplayData",0), (uVar4 & 1) != 0)
       ) {
      pDVar6 = (DisplayData *)tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_int32(param_1,3,&local_4c,"ccs.Bone:addDisplay");
      if ((uVar4 & 1) != 0) {
        cocostudio::Bone::addDisplay(this,pDVar6,local_4c);
        goto LAB_00932958;
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "ccs.Bone:addDisplay",iVar2 + -1,2);
  uVar7 = 0;
LAB_00932990:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

