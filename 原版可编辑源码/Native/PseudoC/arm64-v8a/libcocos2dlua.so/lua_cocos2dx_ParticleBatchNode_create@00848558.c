
/* lua_cocos2dx_ParticleBatchNode_create(lua_State*) */

undefined4 lua_cocos2dx_ParticleBatchNode_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined4 uVar7;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.ParticleBatchNode:create");
    uVar4 = luaval_to_int32(param_1,3,&local_54,"cc.ParticleBatchNode:create");
    if ((uVar3 & uVar4 & 1) != 0) {
      pvVar6 = (void *)cocos2d::ParticleBatchNode::create((basic_string *)&local_50,local_54);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.ParticleBatchNode");
      }
      goto LAB_008486fc;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ParticleBatchNode_create\'",0)
    ;
LAB_008486ac:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "cc.ParticleBatchNode:create",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_008486c0;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.ParticleBatchNode:create");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ParticleBatchNode_create\'",
                  0);
      goto LAB_008486ac;
    }
    pvVar6 = (void *)cocos2d::ParticleBatchNode::create((basic_string *)&local_50,500);
    if (pvVar6 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                 "cc.ParticleBatchNode");
    }
LAB_008486fc:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_008486c0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

