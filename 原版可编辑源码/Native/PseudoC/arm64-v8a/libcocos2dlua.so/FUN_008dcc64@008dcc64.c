
bool FUN_008dcc64(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 008dc990 with catch @ 008dcc80 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* catch() { ... } // from try @ 008dca78 with catch @ 008dcc90 */
  if (iVar1 == 0) {
    vec2_to_luaval(param_1,(Vec2 *)(lVar2 + 0xd8));
  }
  else {
                    /* catch() { ... } // from try @ 008dc99c with catch @ 008dcc94
                       catch() { ... } // from try @ 008dcac8 with catch @ 008dcc94 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getPivot",iVar1,0);
  }
                    /* try { // try from 008dccd0 to 009dcdcb has its CatchHandler @ 008dccd0
                       catch() { ... } // from try @ 008dccd0 with catch @ 008dccd0
                       catch() { ... } // from try @ 008dcdd4 with catch @ 008dccd0 */
  return iVar1 == 0;
}

