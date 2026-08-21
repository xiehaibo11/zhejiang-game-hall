
/* lua_cocos2dx_ui_RichElement_init(lua_State*) */

void lua_cocos2dx_ui_RichElement_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  RichElement *this;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uchar local_54 [4];
  Color3B aCStack_50 [4];
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (RichElement *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    cocos2d::Color3B::Color3B(aCStack_50);
    uVar4 = luaval_to_int32(param_1,2,&local_4c,"ccui.RichElement:init");
    uVar5 = luaval_to_color3b(param_1,3,aCStack_50,"ccui.RichElement:init");
    uVar6 = luaval_to_uint16(param_1,4,(ushort *)local_54,"ccui.RichElement:init");
    if ((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      uVar3 = cocos2d::ui::RichElement::init(this,local_4c,aCStack_50,local_54[0]);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar7 = 1;
      goto LAB_00986d14;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_RichElement_init\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichElement:init",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_00986d14:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

