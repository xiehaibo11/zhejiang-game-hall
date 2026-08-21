
/* lua_cocos2dx_3d_Bundle3D_getTrianglesList(lua_State*) */

undefined4 lua_cocos2dx_3d_Bundle3D_getTrianglesList(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  void *local_58;
  void *local_50;
  ulong local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    local_38 = 0;
    local_30 = (void *)0x0;
    local_40 = 0;
    auVar4 = luaval_to_std_string
                       (param_1,2,(basic_string *)&local_40,"cc.Bundle3D:getTrianglesList");
    if ((auVar4._0_8_ & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_3d_Bundle3D_getTrianglesList\'",0);
      uVar3 = 0;
    }
    else {
      cocos2d::Bundle3D::getTrianglesList((Bundle3D *)&local_40,auVar4._8_8_);
      std_vector_vec3_to_luaval(param_1,(vector *)&local_58);
      if (local_58 != (void *)0x0) {
        local_50 = local_58;
        operator_delete(local_58);
      }
      uVar3 = 1;
    }
                    /* try { // try from 008fd9e4 to 009fda17 has its CatchHandler @ 008fdae4 */
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Bundle3D:getTrianglesList",iVar2 + -1,1);
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

