
/* lua_cocos2dx_ParticleBatchNode_createWithTexture(lua_State*) */

void lua_cocos2dx_ParticleBatchNode_createWithTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Texture2D *pTVar4;
  void *pvVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar3 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"cc.ParticleBatchNode:createWithTexture");
    }
    else {
      pTVar4 = (Texture2D *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"cc.ParticleBatchNode:createWithTexture");
      if ((uVar3 & 1) != 0) {
        pvVar5 = (void *)cocos2d::ParticleBatchNode::createWithTexture(pTVar4,local_3c);
        goto joined_r0x0084884c;
      }
    }
LAB_0084889c:
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ParticleBatchNode_createWithTexture\'"
                ,0);
  }
  else {
    if (iVar2 == 2) {
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar3 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar3 & 1) != 0)) {
        pTVar4 = (Texture2D *)tolua_tousertype(param_1,2,0);
        pvVar5 = (void *)cocos2d::ParticleBatchNode::createWithTexture(pTVar4,500);
joined_r0x0084884c:
        if (pvVar5 == (void *)0x0) {
          lua_pushnil(param_1);
          uVar6 = 1;
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "cc.ParticleBatchNode");
          uVar6 = 1;
        }
        goto LAB_008488b4;
      }
      goto LAB_0084889c;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.ParticleBatchNode:createWithTexture",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_008488b4:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

