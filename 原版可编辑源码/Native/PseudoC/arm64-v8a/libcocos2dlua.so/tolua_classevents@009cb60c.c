
void tolua_classevents(undefined8 param_1)

{
  lua_pushstring(param_1,"__index");
  lua_pushcclosure(param_1,FUN_009cb838,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,"__newindex");
  lua_pushcclosure(param_1,FUN_009cbbc8,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,"__add");
  lua_pushcclosure(param_1,FUN_009cbfd8,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,"__sub");
  lua_pushcclosure(param_1,class_sub_event,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,"__mul");
  lua_pushcclosure(param_1,FUN_009cbfe4,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,"__div");
  lua_pushcclosure(param_1,FUN_009cbff0,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,&DAT_012efbb3);
  lua_pushcclosure(param_1,FUN_009cbffc,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,&DAT_012efbb8);
  lua_pushcclosure(param_1,FUN_009cc008,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,&DAT_012efbbd);
  lua_pushcclosure(param_1,FUN_009cc014,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,"__call");
  lua_pushcclosure(param_1,FUN_009cc0fc,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,&DAT_012b4a80);
  lua_pushstring(param_1,"tolua_gc_event");
  lua_rawget(param_1,0xffffd8f0);
  lua_rawset(param_1,0xfffffffd);
  return;
}

