
/* lua_cocos2dx_Node_setRotationQuat(lua_State*) */

void lua_cocos2dx_Node_setRotationQuat(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  Quaternion aQStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Quaternion::Quaternion(aQStack_48);
    uVar4 = luaval_to_quaternion(param_1,2,aQStack_48,"cc.Node:setRotationQuat");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x1a0))(plVar3,aQStack_48);
      lua_settop(param_1,1);
      cocos2d::Quaternion::~Quaternion(aQStack_48);
      uVar5 = 1;
      goto LAB_008a4ef4;
    }
    cocos2d::Quaternion::~Quaternion(aQStack_48);
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.Node:setRotationQuat",iVar2 + -1,1);
  uVar5 = 0;
LAB_008a4ef4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

