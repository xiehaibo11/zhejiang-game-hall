
/* luaval_to_mat4(lua_State*, int, cocos2d::Mat4*, char const*) */

void luaval_to_mat4(lua_State *param_1,int param_2,Mat4 *param_3,char *param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  double dVar8;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = 0;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (Mat4 *)0x0)) {
    tolua_istable(param_1,param_2,0,auStack_58);
    lVar5 = lua_objlen(param_1,param_2);
    uVar4 = 0;
    if (lVar5 == 0x10) {
      uVar6 = 0;
      do {
        uVar1 = uVar6 + 1;
        lua_pushnumber((double)uVar1,param_1);
        lua_gettable(param_1,param_2);
        iVar3 = tolua_isnumber(param_1,0xffffffff,0,auStack_58);
        if (iVar3 == 0) {
          fVar7 = 0.0;
        }
        else {
          dVar8 = (double)tolua_tonumber(0,param_1,0xffffffff);
          fVar7 = (float)dVar8;
        }
        *(float *)(param_3 + uVar6 * 4) = fVar7;
        lua_settop(param_1,0xfffffffe);
        uVar6 = uVar1;
      } while (uVar1 != 0x10);
      uVar4 = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

