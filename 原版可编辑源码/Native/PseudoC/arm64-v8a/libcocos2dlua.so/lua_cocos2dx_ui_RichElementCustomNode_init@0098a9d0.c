
/* lua_cocos2dx_ui_RichElementCustomNode_init(lua_State*) */

void lua_cocos2dx_ui_RichElementCustomNode_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  RichElementCustomNode *this;
  ulong uVar6;
  Node *pNVar7;
  undefined8 uVar8;
  uchar local_54 [4];
  Color3B aCStack_50 [4];
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (RichElementCustomNode *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    cocos2d::Color3B::Color3B(aCStack_50);
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"ccui.RichElementCustomNode:init");
    uVar4 = luaval_to_color3b(param_1,3,aCStack_50,"ccui.RichElementCustomNode:init");
    uVar5 = luaval_to_uint16(param_1,4,(ushort *)local_54,"ccui.RichElementCustomNode:init");
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if (((4 < iVar2) && (uVar6 = luaval_is_usertype(param_1,5,"cc.Node",0), (uVar6 & 1) != 0)) &&
         (pNVar7 = (Node *)tolua_tousertype(param_1,5,0), (uVar3 & uVar4 & uVar5 & 1) != 0)) {
        uVar3 = cocos2d::ui::RichElementCustomNode::init
                          (this,local_4c,aCStack_50,local_54[0],pNVar7);
        tolua_pushboolean(param_1,uVar3 & 1);
        uVar8 = 1;
        goto LAB_0098ab24;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_RichElementCustomNode_init\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichElementCustomNode:init",iVar2 + -1,4);
  }
  uVar8 = 0;
LAB_0098ab24:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

