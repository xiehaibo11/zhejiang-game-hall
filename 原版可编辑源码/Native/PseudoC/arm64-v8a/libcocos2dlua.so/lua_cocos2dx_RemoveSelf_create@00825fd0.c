
/* lua_cocos2dx_RemoveSelf_create(lua_State*) */

void lua_cocos2dx_RemoveSelf_create(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  bool local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = lua_gettop();
  if (uVar2 == 2) {
    uVar3 = luaval_to_boolean(param_1,2,local_2c,"cc.RemoveSelf:create");
    if ((uVar3 & 1) != 0) {
      uVar2 = (uint)local_2c[0];
      goto LAB_00826044;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_RemoveSelf_create\'",0);
  }
  else {
    if (uVar2 - 1 == 0) {
LAB_00826044:
      pvVar4 = (void *)cocos2d::RemoveSelf::create(SUB41(uVar2,0));
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.RemoveSelf");
        uVar5 = 1;
      }
      goto LAB_00826098;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.RemoveSelf:create",uVar2 - 1,0);
  }
  uVar5 = 0;
LAB_00826098:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

