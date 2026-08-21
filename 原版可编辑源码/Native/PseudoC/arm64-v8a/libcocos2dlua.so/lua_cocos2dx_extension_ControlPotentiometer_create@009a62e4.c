
/* lua_cocos2dx_extension_ControlPotentiometer_create(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlPotentiometer_create(lua_State *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 uVar10;
  ulong local_90;
  undefined8 local_88;
  char *local_80;
  ulong local_78;
  undefined8 local_70;
  char *local_68;
  ulong local_60;
  undefined8 local_58;
  char *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  iVar5 = lua_gettop();
  if (iVar5 + -1 == 3) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"cc.ControlPotentiometer:create");
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    local_70 = 0;
    local_68 = (char *)0x0;
    local_78 = 0;
    uVar7 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_78,"cc.ControlPotentiometer:create");
    pcVar2 = (char *)((ulong)&local_78 | 1);
    if ((local_78 & 1) != 0) {
      pcVar2 = local_68;
    }
    local_88 = 0;
    local_80 = (char *)0x0;
    local_90 = 0;
    uVar8 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_90,"cc.ControlPotentiometer:create");
    if ((uVar6 & uVar7 & uVar8 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_ControlPotentiometer_create\'"
                  ,0);
      uVar10 = 0;
    }
    else {
      pcVar3 = (char *)((ulong)&local_90 | 1);
      if ((local_90 & 1) != 0) {
        pcVar3 = local_80;
      }
      pvVar9 = (void *)cocos2d::extension::ControlPotentiometer::create(pcVar1,pcVar2,pcVar3);
      if (pvVar9 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "cc.ControlPotentiometer");
      }
      uVar10 = 1;
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.ControlPotentiometer:create",iVar5 + -1,3);
    uVar10 = 0;
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

