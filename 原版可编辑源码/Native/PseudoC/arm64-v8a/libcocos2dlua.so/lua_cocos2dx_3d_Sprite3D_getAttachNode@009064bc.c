
/* lua_cocos2dx_3d_Sprite3D_getAttachNode(lua_State*) */

undefined4 lua_cocos2dx_3d_Sprite3D_getAttachNode(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Sprite3D *this;
  ulong uVar3;
  void *pvVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Sprite3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Sprite3D:getAttachNode");
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 0090657c to 00a065c7 has its CatchHandler @ 0090657c
                       catch() { ... } // from try @ 0090657c with catch @ 0090657c
                       catch() { ... } // from try @ 009065cc with catch @ 0090657c */
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Sprite3D_getAttachNode\'"
                  ,0);
      uVar5 = 0;
    }
    else {
      pvVar4 = (void *)cocos2d::Sprite3D::getAttachNode(this,(basic_string *)&local_50);
      if (pvVar4 == (void *)0x0) {
                    /* try { // try from 009065cc to 00a0662b has its CatchHandler @ 0090657c */
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.AttachNode");
      }
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3D:getAttachNode",iVar2 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009065c8 to 00a065cb has its CatchHandler @ 00906618 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

