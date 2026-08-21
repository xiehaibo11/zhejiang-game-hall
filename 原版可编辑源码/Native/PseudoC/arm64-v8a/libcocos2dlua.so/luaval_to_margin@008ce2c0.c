
/* luaval_to_margin(lua_State*, int, fairygui::Margin*, char const*) */

void luaval_to_margin(lua_State *param_1,int param_2,Margin *param_3,char *param_4)

{
  long lVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = tolua_istable(param_1,param_2,0,auStack_58);
  if (iVar3 != 0) {
    lua_pushstring(param_1,"left");
    lua_gettable(param_1,param_2);
    iVar4 = lua_type(param_1,0xffffffff);
    fVar6 = 0.0;
    fVar5 = 0.0;
    if (iVar4 != 0) {
      dVar2 = (double)lua_tonumber(param_1,0xffffffff);
      fVar5 = (float)dVar2;
    }
    *(float *)param_3 = fVar5;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"top");
    lua_gettable(param_1,param_2);
    iVar4 = lua_type(param_1,0xffffffff);
    if (iVar4 != 0) {
      dVar2 = (double)lua_tonumber(param_1,0xffffffff);
      fVar6 = (float)dVar2;
    }
    *(float *)(param_3 + 4) = fVar6;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,&DAT_012d6ea7);
    lua_gettable(param_1,param_2);
    iVar4 = lua_type(param_1,0xffffffff);
    fVar6 = 0.0;
    fVar5 = 0.0;
    if (iVar4 != 0) {
      dVar2 = (double)lua_tonumber(param_1,0xffffffff);
      fVar5 = (float)dVar2;
    }
    *(float *)(param_3 + 8) = fVar5;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"bottom");
    lua_gettable(param_1,param_2);
    iVar4 = lua_type(param_1,0xffffffff);
    if (iVar4 != 0) {
      dVar2 = (double)lua_tonumber(param_1,0xffffffff);
      fVar6 = (float)dVar2;
    }
    *(float *)(param_3 + 0xc) = fVar6;
    lua_settop(param_1,0xfffffffe);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 != 0);
}

