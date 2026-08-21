
/* luaval_to_node(lua_State*, int, char const*, cocos2d::Node**) */

undefined8 luaval_to_node(lua_State *param_1,int param_2,char *param_3,Node **param_4)

{
  int iVar1;
  undefined8 uVar2;
  Node *pNVar3;
  
  uVar2 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar1 = lua_gettop();
    if (iVar1 < param_2) {
      uVar2 = 0;
    }
    else {
      iVar1 = lua_type(param_1,param_2);
      if ((iVar1 == 0) || (uVar2 = lua_isusertype(param_1,param_2,param_3), (int)uVar2 != 0)) {
        pNVar3 = (Node *)tolua_tousertype(param_1,param_2,0);
        *param_4 = pNVar3;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

