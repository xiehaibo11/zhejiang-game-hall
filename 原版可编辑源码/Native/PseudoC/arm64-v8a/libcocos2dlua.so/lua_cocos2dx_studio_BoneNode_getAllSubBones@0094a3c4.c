
/* lua_cocos2dx_studio_BoneNode_getAllSubBones(lua_State*) */

void lua_cocos2dx_studio_BoneNode_getAllSubBones(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 0) {
    cocostudio::timeline::BoneNode::getAllSubBones();
    ccvector_to_luaval<cocostudio::timeline::BoneNode*>(param_1,(Vector *)&local_50);
    for (puVar1 = local_50; puVar1 != local_48; puVar1 = puVar1 + 1) {
      cocos2d::Ref::release((Ref *)*puVar1);
    }
    if (local_50 != (undefined8 *)0x0) {
      operator_delete(local_50);
    }
    uVar4 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.BoneNode:getAllSubBones",iVar3 + -1,0);
    uVar4 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

