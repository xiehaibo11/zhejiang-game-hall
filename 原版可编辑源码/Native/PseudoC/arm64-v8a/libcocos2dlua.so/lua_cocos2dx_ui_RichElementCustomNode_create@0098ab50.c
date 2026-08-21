
/* lua_cocos2dx_ui_RichElementCustomNode_create(lua_State*) */

void lua_cocos2dx_ui_RichElementCustomNode_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  Node *pNVar7;
  void *pvVar8;
  undefined8 uVar9;
  uchar local_54 [4];
  Color3B aCStack_50 [4];
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 4) {
    cocos2d::Color3B::Color3B(aCStack_50);
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"ccui.RichElementCustomNode:create");
    uVar4 = luaval_to_color3b(param_1,3,aCStack_50,"ccui.RichElementCustomNode:create");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_54,"ccui.RichElementCustomNode:create");
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if (((4 < iVar2) && (uVar6 = luaval_is_usertype(param_1,5,"cc.Node",0), (uVar6 & 1) != 0)) &&
         (pNVar7 = (Node *)tolua_tousertype(param_1,5,0), (uVar3 & uVar4 & uVar5 & 1) != 0)) {
        pvVar8 = (void *)cocos2d::ui::RichElementCustomNode::create
                                   (local_4c,aCStack_50,local_54[0],pNVar7);
        if (pvVar8 == (void *)0x0) {
          lua_pushnil(param_1);
          uVar9 = 1;
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,
                     "ccui.RichElementCustomNode");
          uVar9 = 1;
        }
        goto LAB_0098aca0;
      }
    }
    tolua_error(param_1,&DAT_012de85e,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccui.RichElementCustomNode:create",iVar2 + -1,4);
  }
  uVar9 = 0;
LAB_0098aca0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

