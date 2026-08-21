
/* lua_cocos2dx_navmesh_NavMeshAgent_create(lua_State*) */

void lua_cocos2dx_navmesh_NavMeshAgent_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  NavMeshAgentParam aNStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    cocos2d::NavMeshAgentParam::NavMeshAgentParam(aNStack_48);
    uVar3 = luaval_to_navmeshagentparam(param_1,2,aNStack_48,"cc.NavMeshAgent:create");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::NavMeshAgent::create(aNStack_48);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.NavMeshAgent");
        uVar5 = 1;
      }
      goto LAB_009c8d58;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_navmesh_NavMeshAgent_create\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.NavMeshAgent:create",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009c8d58:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

