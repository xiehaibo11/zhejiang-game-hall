
/* lua_cocos2dx_3d_Sprite3D_getMaterial(lua_State*) */

void lua_cocos2dx_3d_Sprite3D_getMaterial(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Sprite3D *this;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Sprite3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 00905b5c to 00a05b5f has its CatchHandler @ 00905bf0 */
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.Sprite3D:getMaterial");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::Sprite3D::getMaterial(this,local_3c);
                    /* try { // try from 00905b84 to 00a05b97 has its CatchHandler @ 00905bf8 */
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
                    /* try { // try from 00905c14 to 00a05ce3 has its CatchHandler @ 00905c14
                       catch() { ... } // from try @ 00905c14 with catch @ 00905c14
                       catch() { ... } // from try @ 00905d64 with catch @ 00905c14 */
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.Material");
        uVar5 = 1;
      }
      goto LAB_00905be4;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Sprite3D_getMaterial\'",0);
  }
  else {
                    /* try { // try from 00905bb4 to 00a05bb7 has its CatchHandler @ 00905bec */
                    /* try { // try from 00905bb8 to 00a05c13 has its CatchHandler @ 00905b10 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3D:getMaterial",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00905be4:
                    /* catch() { ... } // from try @ 00905bb4 with catch @ 00905bec */
                    /* catch() { ... } // from try @ 00905b5c with catch @ 00905bf0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00905b84 with catch @ 00905bf8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

