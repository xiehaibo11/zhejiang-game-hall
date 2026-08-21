
/* lua_cocos2dx_SpriteBatchNode_addSpriteWithoutQuad(lua_State*) */

void lua_cocos2dx_SpriteBatchNode_addSpriteWithoutQuad(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  SpriteBatchNode *this;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  Sprite *unaff_x21;
  int local_60;
  int iStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (SpriteBatchNode *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 3) {
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar4 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      unaff_x21 = (Sprite *)tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
    uVar4 = luaval_to_int32(param_1,3,&iStack_5c,"cc.SpriteBatchNode:addSpriteWithoutQuad");
    uVar5 = luaval_to_int32(param_1,4,&local_60,"cc.SpriteBatchNode:addSpriteWithoutQuad");
    if (((bVar2) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
      pvVar6 = (void *)cocos2d::SpriteBatchNode::addSpriteWithoutQuad
                                 (this,unaff_x21,iStack_5c,local_60);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar7 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.SpriteBatchNode");
        uVar7 = 1;
      }
      goto LAB_00874fdc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_SpriteBatchNode_addSpriteWithoutQuad\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SpriteBatchNode:addSpriteWithoutQuad",iVar3 + -1,3);
  }
  uVar7 = 0;
LAB_00874fdc:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

