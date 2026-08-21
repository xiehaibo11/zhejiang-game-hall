
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_ui_ListView_scrollToItem(lua_State*) */

undefined4 lua_cocos2dx_ui_ListView_scrollToItem(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ListView *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_58 [3];
  long local_40;
  long local_38;
  
                    /* try { // try from 0097bb6c to 00a7bb93 has its CatchHandler @ 0097ba88 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ListView *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0097bb94 to 00a7bba7 has its CatchHandler @ 0097bc14 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097bbbc with catch @ 0097bc64
                        */
    uVar3 = luaval_to_ssize(param_1,2,&local_40,"ccui.ListView:scrollToItem");
    if ((uVar3 & 1) != 0) {
      local_58[2] = 0.0;
      uVar3 = luaval_to_vec2(param_1,3,(Vec2 *)(local_58 + 2),"ccui.ListView:scrollToItem");
      if ((uVar3 & 1) != 0) {
        local_58[1] = 0.0;
        uVar3 = luaval_to_vec2(param_1,4,(Vec2 *)(local_58 + 1),"ccui.ListView:scrollToItem");
        if ((uVar3 & 1) != 0) {
          cocos2d::ui::ListView::scrollToItem
                    (this,local_40,(Vec2 *)(local_58 + 2),(Vec2 *)(local_58 + 1));
          uVar4 = 1;
          lua_settop(param_1,1);
          goto LAB_0097bd18;
        }
      }
    }
  }
  else {
                    /* try { // try from 0097bbbc to 00a7bbbf has its CatchHandler @ 0097bc64 */
                    /* try { // try from 0097bbc0 to 00a7bc2f has its CatchHandler @ 0097ba88 */
    if ((iVar2 == 5) &&
       (uVar3 = luaval_to_ssize(param_1,2,&local_40,"ccui.ListView:scrollToItem"), (uVar3 & 1) != 0)
       ) {
      local_58[2] = 0.0;
      uVar3 = luaval_to_vec2(param_1,3,(Vec2 *)(local_58 + 2),"ccui.ListView:scrollToItem");
      if ((uVar3 & 1) != 0) {
        local_58[1] = 0.0;
        uVar3 = luaval_to_vec2(param_1,4,(Vec2 *)(local_58 + 1),"ccui.ListView:scrollToItem");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097badc with catch @ 0097bc14
                       catch(type#1 @ 00000000) { ... } // from try @ 0097bb34 with catch @ 0097bc14
                       catch(type#1 @ 00000000) { ... } // from try @ 0097bb60 with catch @ 0097bc14
                       catch(type#1 @ 00000000) { ... } // from try @ 0097bb94 with catch @ 0097bc14
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097bb4c with catch @ 0097bc18
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097bb18 with catch @ 0097bc1c
                        */
        if (((uVar3 & 1) != 0) &&
           (uVar3 = luaval_to_number(param_1,5,local_58,"ccui.ListView:scrollToItem"),
           (uVar3 & 1) != 0)) {
                    /* try { // try from 0097bc30 to 00a7bc33 has its CatchHandler @ 0097bc60 */
                    /* try { // try from 0097bc34 to 00a7bc77 has its CatchHandler @ 0097ba88 */
          cocos2d::ui::ListView::scrollToItem
                    (this,local_40,(Vec2 *)(local_58 + 2),(Vec2 *)(local_58 + 1),(float)local_58[0])
          ;
          lua_settop(param_1,1);
          uVar4 = 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097bc30 with catch @ 0097bc60
                        */
          goto LAB_0097bd18;
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "ccui.ListView:scrollToItem",iVar2 + -1,3);
  uVar4 = 0;
LAB_0097bd18:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

