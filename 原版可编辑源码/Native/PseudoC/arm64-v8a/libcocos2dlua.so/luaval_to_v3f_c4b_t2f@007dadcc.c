
/* luaval_to_v3f_c4b_t2f(lua_State*, int, cocos2d::V3F_C4B_T2F*, char const*) */

void luaval_to_v3f_c4b_t2f(lua_State *param_1,int param_2,V3F_C4B_T2F *param_3,char *param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  char acStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  if (((param_1 == (lua_State *)0x0) || (param_3 == (V3F_C4B_T2F *)0x0)) ||
     (uVar4 = tolua_istable(param_1,param_2,0,acStack_58), (int)uVar4 == 0)) goto LAB_007daf6c;
  lua_pushstring(param_1,"vertices");
  lua_gettable(param_1,param_2);
  uVar2 = lua_gettop(param_1);
  pcVar6 = acStack_58;
  iVar3 = tolua_istable(param_1,uVar2,0);
  if (iVar3 == 0) {
LAB_007daf5c:
    lua_settop(param_1,0xfffffffe);
  }
  else {
    iVar3 = lua_gettop(param_1);
    uVar5 = luaval_to_vec3(param_1,iVar3,(Vec3 *)param_3,pcVar6);
    lua_settop(param_1,0xfffffffe);
    if ((uVar5 & 1) != 0) {
      lua_pushstring(param_1,"colors");
      lua_gettable(param_1,param_2);
      uVar2 = lua_gettop(param_1);
      pcVar6 = acStack_58;
      iVar3 = tolua_istable(param_1,uVar2,0);
      if (iVar3 == 0) goto LAB_007daf5c;
      iVar3 = lua_gettop(param_1);
      uVar5 = luaval_to_color4b(param_1,iVar3,(Color4B *)(param_3 + 0xc),pcVar6);
      lua_settop(param_1,0xfffffffe);
      if ((uVar5 & 1) != 0) {
        lua_pushstring(param_1,"texCoords");
        lua_gettable(param_1,param_2);
        uVar2 = lua_gettop(param_1);
        pcVar6 = acStack_58;
        iVar3 = tolua_istable(param_1,uVar2,0);
        if (iVar3 == 0) goto LAB_007daf5c;
        iVar3 = lua_gettop(param_1);
        uVar5 = luaval_to_tex2f(param_1,iVar3,(Tex2F *)(param_3 + 0x10),pcVar6);
        lua_settop(param_1,0xfffffffe);
        if ((uVar5 & 1) != 0) {
          uVar4 = 1;
          goto LAB_007daf6c;
        }
      }
    }
  }
  uVar4 = 0;
LAB_007daf6c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

