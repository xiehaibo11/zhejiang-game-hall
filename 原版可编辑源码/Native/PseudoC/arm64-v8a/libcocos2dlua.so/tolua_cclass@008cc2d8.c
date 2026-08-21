
void tolua_cclass(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long lVar1;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_e0 = 0x2074736e6f63;
  uStack_158 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  local_160 = 0x2074736e6f63;
  __strncat_chk(&local_e0,param_3,0x78,0x80);
  __strncat_chk(&local_160,param_4,0x78,0x80);
  FUN_008cc558(param_1,param_3,param_4);
  FUN_008cc558(param_1,&local_e0,param_3);
  FUN_008cc188(param_1,&local_e0,&local_160);
  FUN_008cc188(param_1,param_3,param_4);
  lua_pushstring(param_1,param_2);
  if (param_5 == 0) {
    lua_createtable(param_1,0,0);
    lua_getfield(param_1,0xffffd8f0,param_3);
    lua_setmetatable(param_1,0xfffffffe);
    lua_pushlstring(param_1,".isclass",8);
    lua_pushboolean(param_1,1);
    lua_rawset(param_1,0xfffffffd);
    lua_rawset(param_1,0xfffffffd);
  }
  else {
    lua_getfield(param_1,0xffffd8f0,param_3);
    lua_pushstring(param_1,".collector");
    lua_pushcclosure(param_1,param_5,0);
    lua_rawset(param_1,0xfffffffd);
    lua_settop(param_1,0xfffffffe);
    lua_createtable(param_1,0,0);
    lua_getfield(param_1,0xffffd8f0,param_3);
    lua_setmetatable(param_1,0xfffffffe);
    lua_pushlstring(param_1,".isclass",8);
    lua_pushboolean(param_1,1);
    lua_rawset(param_1,0xfffffffd);
    lua_rawset(param_1,0xfffffffd);
    lua_getfield(param_1,0xffffd8f0,&local_e0);
    lua_pushstring(param_1,".collector");
    lua_pushcclosure(param_1,param_5,0);
    lua_rawset(param_1,0xfffffffd);
    lua_settop(param_1,0xfffffffe);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

