
/* lua_cocos2dx_studio_BoneNode_create(lua_State*) */

void lua_cocos2dx_studio_BoneNode_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    pvVar4 = (void *)cocostudio::timeline::BoneNode::create();
    if (pvVar4 == (void *)0x0) goto LAB_0094b3f4;
LAB_0094b430:
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
               "ccs.BoneNode");
  }
  else {
    if ((iVar2 != 2) ||
       (uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccs.BoneNode:create"), (uVar3 & 1) == 0)) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
                 "ccs.BoneNode:create",iVar2 + -1,0);
      uVar5 = 0;
      goto LAB_0094b450;
    }
    pvVar4 = (void *)cocostudio::timeline::BoneNode::create(local_3c);
    if (pvVar4 != (void *)0x0) goto LAB_0094b430;
LAB_0094b3f4:
    lua_pushnil(param_1);
  }
  uVar5 = 1;
LAB_0094b450:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

