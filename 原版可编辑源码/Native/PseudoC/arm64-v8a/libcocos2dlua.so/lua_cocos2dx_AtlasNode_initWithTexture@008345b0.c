
/* lua_cocos2dx_AtlasNode_initWithTexture(lua_State*) */

void lua_cocos2dx_AtlasNode_initWithTexture(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  AtlasNode *this;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  Texture2D *unaff_x21;
  int local_64;
  int local_60;
  int iStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (AtlasNode *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 4) {
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar5 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      unaff_x21 = (Texture2D *)tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
    uVar5 = luaval_to_int32(param_1,3,&iStack_5c,"cc.AtlasNode:initWithTexture");
    uVar6 = luaval_to_int32(param_1,4,&local_60,"cc.AtlasNode:initWithTexture");
    uVar7 = luaval_to_int32(param_1,5,&local_64,"cc.AtlasNode:initWithTexture");
    if (((bVar2) && ((uVar5 & 1) != 0)) && (((uVar6 & 1) != 0 && ((uVar7 & 1) != 0)))) {
      uVar4 = cocos2d::AtlasNode::initWithTexture(this,unaff_x21,iStack_5c,local_60,local_64);
      tolua_pushboolean(param_1,uVar4 & 1);
      uVar8 = 1;
      goto LAB_0083470c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_AtlasNode_initWithTexture\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AtlasNode:initWithTexture",iVar3 + -1,4);
  }
  uVar8 = 0;
LAB_0083470c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

