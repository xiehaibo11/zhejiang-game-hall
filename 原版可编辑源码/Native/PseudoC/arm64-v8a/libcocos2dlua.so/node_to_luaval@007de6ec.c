
/* node_to_luaval(lua_State*, char const*, cocos2d::Node*) */

void node_to_luaval(lua_State *param_1,char *param_2,Node *param_3)

{
  if (param_3 != (Node *)0x0) {
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(param_3 + 0xc),(int *)(param_3 + 0x10),param_3,param_2);
    return;
  }
  lua_pushnil();
  return;
}

