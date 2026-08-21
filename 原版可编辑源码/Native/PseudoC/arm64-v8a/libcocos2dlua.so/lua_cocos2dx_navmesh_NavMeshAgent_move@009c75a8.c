
/* lua_cocos2dx_navmesh_NavMeshAgent_move(lua_State*) */

undefined4 lua_cocos2dx_navmesh_NavMeshAgent_move(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  NavMeshAgent *this;
  ulong uVar4;
  ScriptHandlerMgr *this_00;
  code *pcVar5;
  undefined4 uVar6;
  Vec3 aVStack_90 [16];
  undefined **local_80;
  lua_State *plStack_78;
  ulong local_70;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (NavMeshAgent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    cocos2d::Vec3::Vec3(aVStack_90);
    uVar4 = luaval_to_vec3(param_1,2,aVStack_90,"cc.NavMeshAgent:move");
    uVar3 = toluafix_ref_function(param_1,3,0);
    if ((uVar4 & 1) == 0) {
LAB_009c76d4:
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_navmesh_NavMeshAgent_move\'"
                  ,0);
      goto LAB_009c770c;
    }
    local_70 = (ulong)uVar3;
    local_80 = &PTR_FUN_0169ed30;
    plStack_78 = param_1;
    local_60 = &local_80;
    cocos2d::NavMeshAgent::move(this,aVStack_90,(function *)&local_80);
    if (&local_80 == local_60) {
      pcVar5 = (code *)(*local_60)[4];
LAB_009c772c:
      (*pcVar5)();
    }
    else if (local_60 != (undefined ***)0x0) {
      pcVar5 = (code *)(*local_60)[5];
      goto LAB_009c772c;
    }
    this_00 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addCustomHandler(this_00,this,uVar3);
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.NavMeshAgent:move",iVar2 + -1,1);
LAB_009c770c:
      uVar6 = 0;
      goto LAB_009c7750;
    }
    cocos2d::Vec3::Vec3(aVStack_90);
    uVar4 = luaval_to_vec3(param_1,2,aVStack_90,"cc.NavMeshAgent:move");
    if ((uVar4 & 1) == 0) goto LAB_009c76d4;
    local_60 = (undefined ***)0x0;
    cocos2d::NavMeshAgent::move(this,aVStack_90,(function *)&local_80);
    if (&local_80 == local_60) {
      pcVar5 = (code *)(*local_60)[4];
LAB_009c771c:
      (*pcVar5)();
    }
    else if (local_60 != (undefined ***)0x0) {
      pcVar5 = (code *)(*local_60)[5];
      goto LAB_009c771c;
    }
  }
  uVar6 = 1;
  lua_settop(param_1,1);
LAB_009c7750:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

