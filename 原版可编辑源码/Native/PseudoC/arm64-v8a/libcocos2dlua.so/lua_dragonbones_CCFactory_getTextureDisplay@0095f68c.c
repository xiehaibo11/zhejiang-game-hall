
/* lua_dragonbones_CCFactory_getTextureDisplay(lua_State*) */

undefined4 lua_dragonbones_CCFactory_getTextureDisplay(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  undefined4 uVar8;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.CCFactory:getTextureDisplay");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_68,"db.CCFactory:getTextureDisplay");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_CCFactory_getTextureDisplay\'",0)
      ;
      uVar8 = 0;
    }
    else {
      pvVar7 = (void *)(**(code **)(*plVar5 + 0xe8))(plVar5,&local_50,&local_68);
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.Sprite");
      }
      uVar8 = 1;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "db.CCFactory:getTextureDisplay",iVar2 + -1,1);
      uVar8 = 0;
      goto LAB_0095f864;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"db.CCFactory:getTextureDisplay");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_dragonbones_CCFactory_getTextureDisplay\'",0)
      ;
      uVar8 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_68,"");
      pvVar7 = (void *)(**(code **)(*plVar5 + 0xe8))(plVar5,&local_50,&local_68);
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.Sprite");
      }
      uVar8 = 1;
    }
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0095f864:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

