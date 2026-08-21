
void FUN_00917270(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  int local_1ac;
  undefined1 auStack_1a8 [24];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
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
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  local_1ac = -1;
  uVar9 = luaL_optnumber(0xbff0000000000000,param_1,3);
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  lua_settop(param_1,3);
  lua_createtable(param_1,0,0);
  uVar2 = lua_gettop(param_1);
  lua_createtable(param_1,0,0);
  uVar3 = lua_gettop(param_1);
  lua_createtable(param_1,0,0);
  uVar4 = lua_gettop(param_1);
  FUN_00917680(param_1,1,uVar2,&uStack_110,&local_1ac);
  FUN_00917680(param_1,2,uVar2,&local_190,&local_1ac);
  iVar5 = lua_type(param_1,1);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    lua_pushnumber(0x3ff0000000000000,param_1);
    lua_gettable(param_1,1);
    iVar6 = lua_type(param_1,0xffffffff);
    iVar5 = 0;
    if (iVar6 != 0) {
      iVar6 = 2;
      do {
        iVar7 = FUN_009178d4(param_1);
        if (iVar7 != -1) {
          lua_pushstring(param_1,"dirty");
          lua_gettable(param_1,0xfffffffe);
          iVar8 = lua_type(param_1,0xffffffff);
          if (iVar8 == 0) {
            lua_settop(param_1,0xfffffffe);
          }
          else {
            lua_pushvalue(param_1);
            lua_call(param_1,1,1);
            iVar8 = lua_toboolean(param_1,0xffffffff);
            lua_settop(param_1,0xfffffffe);
            if (iVar8 != 0) {
              iVar5 = iVar5 + 1;
              lua_pushnumber((double)iVar5,param_1);
              lua_pushvalue(param_1,0xfffffffe);
              lua_settable(param_1,uVar3);
              __FD_CLR_chk(iVar7,&uStack_110,0x80);
            }
          }
        }
        lua_settop(param_1,0xfffffffe);
        lua_pushnumber((double)iVar6,param_1);
        lua_gettable(param_1,1);
        iVar7 = lua_type(param_1,0xffffffff);
        iVar6 = iVar6 + 1;
      } while (iVar7 != 0);
    }
    lua_settop(param_1,0xfffffffe);
  }
  uVar10 = 0;
  if (iVar5 < 1) {
    uVar10 = uVar9;
  }
  timeout_init(uVar10,0xbff0000000000000,auStack_1a8);
  timeout_markstart(auStack_1a8);
  iVar6 = local_1ac;
  iVar7 = socket_select(local_1ac + 1,&uStack_110,&local_190,0,auStack_1a8);
  if ((iVar5 < 1) && (iVar7 < 1)) {
    if (iVar7 == 0) {
      lua_pushstring(param_1,"timeout");
    }
    else {
      luaL_error(param_1,"select failed");
    }
    uVar9 = 3;
  }
  else {
    if (-1 < iVar6) {
      iVar7 = 0;
      dVar11 = 0.0;
      do {
        iVar8 = __FD_ISSET_chk(iVar7,&uStack_110,0x80);
        if (iVar8 != 0) {
          iVar5 = iVar5 + 1;
          lua_pushnumber((double)iVar5,param_1);
          lua_pushnumber(dVar11,param_1);
          lua_gettable(param_1,uVar2);
          lua_settable(param_1,uVar3);
        }
        iVar7 = iVar7 + 1;
        dVar11 = dVar11 + 1.0;
      } while (iVar6 + 1 != iVar7);
      iVar5 = 0;
      iVar7 = 0;
      dVar11 = 0.0;
      do {
        iVar8 = __FD_ISSET_chk(iVar5,&local_190,0x80);
        if (iVar8 != 0) {
          iVar7 = iVar7 + 1;
          lua_pushnumber((double)iVar7,param_1);
          lua_pushnumber(dVar11,param_1);
          lua_gettable(param_1,uVar2);
          lua_settable(param_1,uVar4);
        }
        iVar5 = iVar5 + 1;
        dVar11 = dVar11 + 1.0;
      } while (iVar6 + 1 != iVar5);
    }
    FUN_009177e8(param_1,uVar3);
    FUN_009177e8(param_1,uVar4);
    uVar9 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* try { // try from 00917678 to 00a176c7 has its CatchHandler @ 00917678
                       catch() { ... } // from try @ 00917678 with catch @ 00917678
                       catch() { ... } // from try @ 009176fc with catch @ 00917678
                       catch() { ... } // from try @ 00917744 with catch @ 00917678 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

