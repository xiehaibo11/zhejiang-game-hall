
/* lua_cocos2dx_audioengine_AudioProfile_constructor(lua_State*) */

bool lua_cocos2dx_audioengine_AudioProfile_constructor(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    puVar3 = operator_new(0x28);
    puVar3[4] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    tolua_pushusertype(param_1,puVar3,"ccexp.AudioProfile");
    uVar2 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012efc54,
               iVar1,0);
  }
  return iVar1 == 0;
}

