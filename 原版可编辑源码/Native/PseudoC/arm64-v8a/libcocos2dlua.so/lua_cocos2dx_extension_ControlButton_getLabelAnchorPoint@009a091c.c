
/* lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint(lua_State*) */

bool lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  Vec2 *pVVar3;
  
                    /* catch() { ... } // from try @ 009a06d8 with catch @ 009a091c */
                    /* catch() { ... } // from try @ 009a0614 with catch @ 009a0920 */
                    /* catch() { ... } // from try @ 009a04ec with catch @ 009a0924
                       catch() { ... } // from try @ 009a08c4 with catch @ 009a0924 */
                    /* catch() { ... } // from try @ 009a06bc with catch @ 009a0928 */
                    /* catch() { ... } // from try @ 009a05f8 with catch @ 009a092c */
                    /* catch() { ... } // from try @ 009a04c8 with catch @ 009a0930 */
                    /* catch() { ... } // from try @ 009a0570 with catch @ 009a0934
                       catch() { ... } // from try @ 009a08ac with catch @ 009a0934 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 009a06a0 with catch @ 009a0938 */
                    /* catch() { ... } // from try @ 009a05dc with catch @ 009a093c */
                    /* catch() { ... } // from try @ 009a0554 with catch @ 009a0940 */
  iVar1 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 009a04ac with catch @ 009a0944 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 009a067c with catch @ 009a0974 */
                    /* catch() { ... } // from try @ 009a05b8 with catch @ 009a0978 */
                    /* catch() { ... } // from try @ 009a0530 with catch @ 009a097c */
    pVVar3 = (Vec2 *)(**(code **)(*plVar2 + 0x7a8))(plVar2);
                    /* catch() { ... } // from try @ 009a0488 with catch @ 009a0980 */
    vec2_to_luaval(param_1,pVVar3);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:getLabelAnchorPoint",iVar1,0);
  }
  return iVar1 == 0;
}

