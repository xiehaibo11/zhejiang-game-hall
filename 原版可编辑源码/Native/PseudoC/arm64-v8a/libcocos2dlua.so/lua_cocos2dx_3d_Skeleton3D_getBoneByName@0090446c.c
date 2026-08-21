
/* lua_cocos2dx_3d_Skeleton3D_getBoneByName(lua_State*) */

undefined4 lua_cocos2dx_3d_Skeleton3D_getBoneByName(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Skeleton3D *this;
  ulong uVar3;
  void *pvVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 0090447c to 00a044c7 has its CatchHandler @ 0090447c
                       catch() { ... } // from try @ 0090447c with catch @ 0090447c
                       catch() { ... } // from try @ 009044cc with catch @ 0090447c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Skeleton3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 009044c8 to 00a044cb has its CatchHandler @ 00904500 */
                    /* try { // try from 009044cc to 00a04513 has its CatchHandler @ 0090447c */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Skeleton3D:getBoneByName");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_3d_Skeleton3D_getBoneByName\'",0);
      uVar5 = 0;
    }
    else {
      pvVar4 = (void *)cocos2d::Skeleton3D::getBoneByName(this,(basic_string *)&local_50);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* catch() { ... } // from try @ 009044c8 with catch @ 00904500 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.Bone3D");
      }
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 00904514 to 00a045e3 has its CatchHandler @ 00904514
                       catch() { ... } // from try @ 00904514 with catch @ 00904514
                       catch() { ... } // from try @ 00904664 with catch @ 00904514 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Skeleton3D:getBoneByName",iVar2 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

