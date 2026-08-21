
/* lua_cocos2dx_3d_BatchSprite3D_setTexture(lua_State*) */

void lua_cocos2dx_3d_BatchSprite3D_setTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
                    /* try { // try from 0090aa88 to 00a0aad3 has its CatchHandler @ 0090aa88
                       catch() { ... } // from try @ 0090aa88 with catch @ 0090aa88
                       catch() { ... } // from try @ 0090aad8 with catch @ 0090aa88 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
                    /* try { // try from 0090aad4 to 00a0aad7 has its CatchHandler @ 0090ab0c */
                    /* try { // try from 0090aad8 to 00a0ab1f has its CatchHandler @ 0090aa88 */
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"cc.BatchSprite3D:setTexture");
    if ((uVar4 & 1) != 0) {
      if (*(BatchMesh **)(lVar3 + 0x338) != (BatchMesh *)0x0) {
        cocos2d::BatchMesh::setTexture(*(BatchMesh **)(lVar3 + 0x338),(basic_string *)local_50);
      }
      lua_settop(param_1,1);
                    /* catch() { ... } // from try @ 0090aad4 with catch @ 0090ab0c */
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      uVar5 = 1;
      goto LAB_0090ab54;
    }
                    /* try { // try from 0090ab20 to 00a0ac37 has its CatchHandler @ 0090ab20
                       catch() { ... } // from try @ 0090ab20 with catch @ 0090ab20
                       catch() { ... } // from try @ 0090acb8 with catch @ 0090ab20 */
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.BatchSprite3D:setTexture",iVar2 + -1,1);
  uVar5 = 0;
LAB_0090ab54:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

