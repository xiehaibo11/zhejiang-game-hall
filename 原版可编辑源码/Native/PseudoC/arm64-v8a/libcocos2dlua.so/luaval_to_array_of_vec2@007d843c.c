
/* luaval_to_array_of_vec2(lua_State*, int, cocos2d::Vec2**, int*, char const*) */

void luaval_to_array_of_vec2
               (lua_State *param_1,int param_2,Vec2 **param_3,int *param_4,char *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  Vec2 *__s;
  ulong uVar5;
  char *pcVar6;
  Vec2 *pVVar7;
  ulong uVar8;
  char acStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if ((param_1 != (lua_State *)0x0) &&
     (uVar3 = tolua_istable(param_1,param_2,0,acStack_78), (int)uVar3 != 0)) {
    uVar4 = lua_objlen(param_1,param_2);
    if (uVar4 == 0) {
LAB_007d8540:
      uVar3 = 1;
    }
    else {
      uVar8 = uVar4 << 3;
      if (uVar4 >> 0x3d != 0) {
        uVar8 = 0xffffffffffffffff;
      }
      __s = operator_new__(uVar8);
      memset(__s,0,uVar4 << 3);
      uVar8 = 0;
      pVVar7 = __s;
      do {
        if (uVar4 == uVar8) {
          *param_4 = (int)uVar4;
          *param_3 = __s;
          goto LAB_007d8540;
        }
        uVar8 = uVar8 + 1;
        lua_pushnumber((double)uVar8,param_1);
        lua_gettable(param_1,param_2);
        pcVar6 = acStack_78;
        iVar2 = tolua_istable(param_1,0xffffffff,0);
        if (iVar2 == 0) {
          lua_settop(param_1,0xfffffffe);
          break;
        }
        iVar2 = lua_gettop(param_1);
        uVar5 = luaval_to_vec2(param_1,iVar2,pVVar7,pcVar6);
        lua_settop(param_1,0xfffffffe);
        pVVar7 = pVVar7 + 8;
      } while ((uVar5 & 1) != 0);
      operator_delete__(__s);
      uVar3 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

