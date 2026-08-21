
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_3d_Skybox_init(lua_State*) */

bool lua_cocos2dx_3d_Skybox_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  Skybox *this;
  bool bVar9;
  ulong local_e8;
  undefined8 local_e0;
  void *local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  void *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (Skybox *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 6) {
    local_68 = 0;
    local_60 = (void *)0x0;
    local_70 = 0;
    local_80 = 0;
    local_78 = (void *)0x0;
    local_90 = (void *)0x0;
    local_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_c0 = (void *)0x0;
    local_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (void *)0x0;
    local_e8 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_70,"cc.Skybox:init");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_88,"cc.Skybox:init");
    uVar5 = luaval_to_std_string(param_1,4,(basic_string *)&local_a0,"cc.Skybox:init");
    uVar6 = luaval_to_std_string(param_1,5,(basic_string *)&local_b8,"cc.Skybox:init");
    uVar7 = luaval_to_std_string(param_1,6,(basic_string *)&local_d0,"cc.Skybox:init");
    uVar8 = luaval_to_std_string(param_1,7,(basic_string *)&local_e8,"cc.Skybox:init");
    bVar9 = (uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & 1) == 0;
    if (bVar9) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Skybox_init\'",0);
    }
    else {
      uVar3 = cocos2d::Skybox::init
                        (this,(basic_string *)&local_70,(basic_string *)&local_88,
                         (basic_string *)&local_a0,(basic_string *)&local_b8,
                         (basic_string *)&local_d0,(basic_string *)&local_e8);
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    bVar9 = !bVar9;
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Skybox:init",
               iVar2 + -1,6);
    bVar9 = false;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}

