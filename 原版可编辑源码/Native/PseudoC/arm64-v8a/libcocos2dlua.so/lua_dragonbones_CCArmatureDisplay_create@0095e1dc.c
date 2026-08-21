
/* lua_dragonbones_CCArmatureDisplay_create(lua_State*) */

undefined8 lua_dragonbones_CCArmatureDisplay_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)dragonBones::CCArmatureDisplay::create();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "db.CCArmatureDisplay");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "db.CCArmatureDisplay:create",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

