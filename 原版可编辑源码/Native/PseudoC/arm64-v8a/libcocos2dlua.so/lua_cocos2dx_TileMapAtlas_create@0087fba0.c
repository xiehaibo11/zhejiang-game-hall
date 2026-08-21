
/* lua_cocos2dx_TileMapAtlas_create(lua_State*) */

undefined4 lua_cocos2dx_TileMapAtlas_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  int local_80;
  int iStack_7c;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.TileMapAtlas:create");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"cc.TileMapAtlas:create");
    uVar5 = luaval_to_int32(param_1,4,&iStack_7c,"cc.TileMapAtlas:create");
    uVar6 = luaval_to_int32(param_1,5,&local_80,"cc.TileMapAtlas:create");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_TileMapAtlas_create\'",0);
      uVar8 = 0;
    }
    else {
      pvVar7 = (void *)cocos2d::TileMapAtlas::create
                                 ((basic_string *)&local_60,(basic_string *)&local_78,iStack_7c,
                                  local_80);
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.TileMapAtlas");
      }
      uVar8 = 1;
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
               "cc.TileMapAtlas:create",iVar2 + -1,4);
    uVar8 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

