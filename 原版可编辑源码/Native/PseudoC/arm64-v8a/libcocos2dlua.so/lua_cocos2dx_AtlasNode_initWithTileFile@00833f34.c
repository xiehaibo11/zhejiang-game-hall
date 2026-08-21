
/* lua_cocos2dx_AtlasNode_initWithTileFile(lua_State*) */

bool lua_cocos2dx_AtlasNode_initWithTileFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  AtlasNode *this;
  bool bVar7;
  int local_6c;
  int local_68;
  int iStack_64;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (AtlasNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"cc.AtlasNode:initWithTileFile");
    uVar4 = luaval_to_int32(param_1,3,&iStack_64,"cc.AtlasNode:initWithTileFile");
    uVar5 = luaval_to_int32(param_1,4,&local_68,"cc.AtlasNode:initWithTileFile");
    uVar6 = luaval_to_int32(param_1,5,&local_6c,"cc.AtlasNode:initWithTileFile");
    bVar7 = (uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0;
    if (bVar7) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_AtlasNode_initWithTileFile\'",0);
    }
    else {
      uVar3 = cocos2d::AtlasNode::initWithTileFile
                        (this,(basic_string *)&local_60,iStack_64,local_68,local_6c);
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    bVar7 = !bVar7;
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AtlasNode:initWithTileFile",iVar2 + -1,4);
    bVar7 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

