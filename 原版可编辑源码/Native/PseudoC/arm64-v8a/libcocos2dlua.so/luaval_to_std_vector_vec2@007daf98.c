
/* luaval_to_std_vector_vec2(lua_State*, int, std::__ndk1::vector<cocos2d::Vec2,
   std::__ndk1::allocator<cocos2d::Vec2> >*, char const*) */

uint luaval_to_std_vector_vec2(lua_State *param_1,int param_2,vector *param_3,char *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 local_70;
  char acStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar8 = 0;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (vector *)0x0)) {
    iVar3 = lua_gettop();
    if (param_2 <= iVar3) {
      pcVar7 = acStack_68;
      iVar3 = tolua_istable(param_1,param_2,0);
      if (iVar3 != 0) {
        uVar6 = lua_objlen(param_1,param_2);
        local_70 = 0;
        if (uVar6 == 0) {
          uVar8 = 1;
        }
        else {
          uVar9 = 0;
          uVar8 = 1;
          do {
            uVar9 = uVar9 + 1;
            lua_pushnumber((double)uVar9,param_1);
            lua_gettable(param_1,param_2);
            uVar4 = lua_gettop(param_1);
            iVar3 = lua_type(param_1,uVar4);
            if (iVar3 == 5) {
              iVar3 = lua_gettop(param_1);
              uVar5 = luaval_to_vec2(param_1,iVar3,(Vec2 *)&local_70,pcVar7);
              if ((uVar8 & uVar5) == 0) {
                uVar8 = 0;
              }
              else {
                puVar1 = *(undefined8 **)(param_3 + 8);
                if (puVar1 == *(undefined8 **)(param_3 + 0x10)) {
                  std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
                  __push_back_slow_path<cocos2d::Vec2_const&>
                            ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)param_3,
                             (Vec2 *)&local_70);
                }
                else {
                  *puVar1 = local_70;
                  *(undefined8 **)(param_3 + 8) = puVar1 + 1;
                }
                uVar8 = 1;
              }
            }
            lua_settop(param_1,0xfffffffe);
          } while (uVar6 != uVar9);
        }
        goto LAB_007db0c4;
      }
    }
    uVar8 = 0;
  }
LAB_007db0c4:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

