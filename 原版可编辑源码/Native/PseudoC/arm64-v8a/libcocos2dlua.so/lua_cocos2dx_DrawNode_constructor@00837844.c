
/* lua_cocos2dx_DrawNode_constructor(lua_State*) */

void lua_cocos2dx_DrawNode_constructor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DrawNode *this;
  ulong uVar3;
  undefined8 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 2) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.DrawNode:DrawNode");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_DrawNode_constructor\'",0);
      goto LAB_00837928;
    }
    this = operator_new(0x460);
    cocos2d::DrawNode::DrawNode(this,(float)local_40);
  }
  else {
    if (iVar2 + -1 != 0) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.DrawNode:DrawNode",iVar2 + -1,0);
LAB_00837928:
      uVar4 = 0;
      goto LAB_0083792c;
    }
    this = operator_new(0x460);
    cocos2d::DrawNode::DrawNode(this,2.0);
  }
  cocos2d::Ref::autorelease((Ref *)this);
  toluafix_pushusertype_ccobject
            (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.DrawNode");
  uVar4 = 1;
LAB_0083792c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

