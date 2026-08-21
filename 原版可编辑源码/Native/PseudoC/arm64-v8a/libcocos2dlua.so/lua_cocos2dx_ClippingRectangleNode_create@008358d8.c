
/* lua_cocos2dx_ClippingRectangleNode_create(lua_State*) */

void lua_cocos2dx_ClippingRectangleNode_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 uVar5;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 2) {
    cocos2d::Rect::Rect(aRStack_48);
    uVar4 = luaval_to_rect(param_1,2,aRStack_48,"cc.ClippingRectangleNode:create");
    if ((uVar4 & 1) == 0) goto LAB_0083597c;
    pvVar3 = (void *)cocos2d::ClippingRectangleNode::create(aRStack_48);
    if (pvVar3 == (void *)0x0) goto LAB_0083596c;
LAB_0083591c:
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
               "cc.ClippingRectangleNode");
  }
  else {
    if (iVar2 != 1) {
LAB_0083597c:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
                 "cc.ClippingRectangleNode:create",iVar2 + -1,1);
      uVar5 = 0;
      goto LAB_008359a0;
    }
    pvVar3 = (void *)cocos2d::ClippingRectangleNode::create();
    if (pvVar3 != (void *)0x0) goto LAB_0083591c;
LAB_0083596c:
    lua_pushnil(param_1);
  }
  uVar5 = 1;
LAB_008359a0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

