
/* lua_cocos2dx_3d_Skeleton3D_getRootBone(lua_State*) */

void lua_cocos2dx_3d_Skeleton3D_getRootBone(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Skeleton3D *this;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009045e4 to 00a04617 has its CatchHandler @ 009046e4 */
  this = (Skeleton3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.Skeleton3D:getRootBone");
                    /* try { // try from 00904618 to 00a0462b has its CatchHandler @ 009046b0 */
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::Skeleton3D::getRootBone(this,local_3c);
      if (pvVar4 == (void *)0x0) {
                    /* catch() { ... } // from try @ 00904618 with catch @ 009046b0 */
        lua_pushnil(param_1);
                    /* catch() { ... } // from try @ 00904630 with catch @ 009046b4 */
        uVar5 = 1;
      }
      else {
                    /* try { // try from 00904630 to 00a04663 has its CatchHandler @ 009046b4 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.Bone3D");
        uVar5 = 1;
      }
      goto LAB_00904688;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Skeleton3D_getRootBone\'",0
               );
  }
  else {
                    /* try { // try from 00904664 to 00a046ff has its CatchHandler @ 00904514 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Skeleton3D:getRootBone",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00904688:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

