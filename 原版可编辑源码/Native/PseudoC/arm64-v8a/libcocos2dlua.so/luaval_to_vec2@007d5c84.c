
/* luaval_to_vec2(lua_State*, int, cocos2d::Vec2*, char const*) */

bool luaval_to_vec2(lua_State *param_1,int param_2,Vec2 *param_3,char *param_4)

{
  long lVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  bVar3 = false;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (Vec2 *)0x0)) {
    iVar4 = tolua_istable(param_1,param_2,0,auStack_58);
    bVar3 = iVar4 != 0;
    if (iVar4 != 0) {
      lua_pushstring(param_1,"x");
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
      lua_pushstring(param_1,&DAT_014a23fd);
      lua_gettable(param_1,param_2);
      iVar4 = lua_type(param_1,0xffffffff);
      if (iVar4 != 0) {
        dVar2 = (double)lua_tonumber(param_1,0xffffffff);
        fVar6 = (float)dVar2;
      }
      *(float *)(param_3 + 4) = fVar6;
      lua_settop(param_1,0xfffffffe);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

