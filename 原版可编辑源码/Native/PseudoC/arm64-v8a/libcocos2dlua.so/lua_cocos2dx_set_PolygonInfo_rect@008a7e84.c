
/* lua_cocos2dx_set_PolygonInfo_rect(lua_State*) */

undefined8 lua_cocos2dx_set_PolygonInfo_rect(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    cocos2d::Rect::Rect(aRStack_48);
    luaval_to_rect(param_1,2,aRStack_48,"");
    cocos2d::Rect::operator=((Rect *)(lVar3 + 0x1c),aRStack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

