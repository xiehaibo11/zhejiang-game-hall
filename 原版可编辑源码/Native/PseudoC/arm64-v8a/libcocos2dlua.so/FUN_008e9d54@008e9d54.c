
undefined8 FUN_008e9d54(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GGraph *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  Color4F aCStack_90 [16];
  Color4F aCStack_80 [20];
  int local_6c;
  double local_68;
  double dStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (GGraph *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 5) {
    cocos2d::Color4F::Color4F(aCStack_80);
    cocos2d::Color4F::Color4F(aCStack_90);
    uVar3 = luaval_to_number(param_1,2,&dStack_60,"fairygui.GGraph:drawEllipse");
    uVar4 = luaval_to_number(param_1,3,&local_68,"fairygui.GGraph:drawEllipse");
    uVar5 = luaval_to_int32(param_1,4,&local_6c,"fairygui.GGraph:drawEllipse");
    uVar6 = luaval_to_color4f(param_1,5,aCStack_80,"fairygui.GGraph:drawEllipse");
    uVar7 = luaval_to_color4f(param_1,6,aCStack_90,"fairygui.GGraph:drawEllipse");
    if (((((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) || ((uVar5 & 1) == 0)) ||
       (((uVar6 & 1) == 0 || ((uVar7 & 1) == 0)))) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GGraph_drawEllipse\'",0);
    }
    else {
      fairygui::GGraph::drawEllipse
                (this,(float)dStack_60,(float)local_68,local_6c,aCStack_80,aCStack_90);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GGraph:drawEllipse",iVar2 + -1,5);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

