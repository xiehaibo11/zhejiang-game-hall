
/* lua_cocos2dx_3d_Sprite3D_getMeshByIndex(lua_State*) */

void lua_cocos2dx_3d_Sprite3D_getMeshByIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Sprite3D *this;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
                    /* try { // try from 009061e4 to 00a06217 has its CatchHandler @ 009062e4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Sprite3D *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00906218 to 00a0622b has its CatchHandler @ 009062b0 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 00906230 to 00a06263 has its CatchHandler @ 009062b4 */
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.Sprite3D:getMeshByIndex");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::Sprite3D::getMeshByIndex(this,local_3c);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
                    /* try { // try from 00906264 to 00a062ff has its CatchHandler @ 00906114 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.Mesh");
        uVar5 = 1;
      }
      goto LAB_009062b0;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Sprite3D_getMeshByIndex\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3D:getMeshByIndex",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009062b0:
                    /* catch() { ... } // from try @ 00906218 with catch @ 009062b0 */
                    /* catch() { ... } // from try @ 00906230 with catch @ 009062b4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009061e4 with catch @ 009062e4 */
  __stack_chk_fail(uVar5);
}

