
/* luaval_to_color3b(lua_State*, int, cocos2d::Color3B*, char const*) */

bool luaval_to_color3b(lua_State *param_1,int param_2,Color3B *param_3,char *param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  Color3B CVar4;
  double dVar5;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  bVar2 = false;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (Color3B *)0x0)) {
    iVar3 = tolua_istable(param_1,param_2,0,auStack_58);
    bVar2 = iVar3 != 0;
    if (iVar3 != 0) {
      lua_pushstring(param_1,"r");
      lua_gettable(param_1,param_2);
      iVar3 = lua_type(param_1,0xffffffff);
      if (iVar3 == 0) {
        CVar4 = (Color3B)0x0;
      }
      else {
        dVar5 = (double)lua_tonumber(param_1,0xffffffff);
        CVar4 = SUB41((int)dVar5,0);
      }
      *param_3 = CVar4;
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,&DAT_012f093b);
      lua_gettable(param_1,param_2);
      iVar3 = lua_type(param_1,0xffffffff);
      if (iVar3 == 0) {
        CVar4 = (Color3B)0x0;
      }
      else {
        dVar5 = (double)lua_tonumber(param_1,0xffffffff);
        CVar4 = SUB41((int)dVar5,0);
      }
      param_3[1] = CVar4;
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,&DAT_014a2468);
      lua_gettable(param_1,param_2);
      iVar3 = lua_type(param_1,0xffffffff);
      if (iVar3 == 0) {
        CVar4 = (Color3B)0x0;
      }
      else {
        dVar5 = (double)lua_tonumber(param_1,0xffffffff);
        CVar4 = SUB41((int)dVar5,0);
      }
      param_3[2] = CVar4;
      lua_settop(param_1,0xfffffffe);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

