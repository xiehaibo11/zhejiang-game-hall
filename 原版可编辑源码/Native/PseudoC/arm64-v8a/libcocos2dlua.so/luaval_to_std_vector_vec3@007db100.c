
/* luaval_to_std_vector_vec3(lua_State*, int, std::__ndk1::vector<cocos2d::Vec3,
   std::__ndk1::allocator<cocos2d::Vec3> >*, char const*) */

uint luaval_to_std_vector_vec3(lua_State *param_1,int param_2,vector *param_3,char *param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  void *__src;
  size_t __n;
  ulong uVar13;
  ulong uVar14;
  undefined8 local_88;
  undefined4 local_80;
  char acStack_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar12 = 0;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (vector *)0x0)) {
    iVar3 = lua_gettop();
    if (param_2 <= iVar3) {
      pcVar8 = acStack_78;
      iVar3 = tolua_istable(param_1,param_2,0);
      if (iVar3 != 0) {
        uVar6 = lua_objlen(param_1,param_2);
        cocos2d::Vec3::Vec3((Vec3 *)&local_88);
        if (uVar6 == 0) {
          uVar12 = 1;
        }
        else {
          uVar13 = 0;
          uVar12 = 1;
          do {
            uVar13 = uVar13 + 1;
            lua_pushnumber((double)uVar13,param_1);
            lua_gettable(param_1,param_2);
            uVar4 = lua_gettop(param_1);
            iVar3 = lua_type(param_1,uVar4);
            if (iVar3 == 5) {
              iVar3 = lua_gettop(param_1);
              uVar5 = luaval_to_vec3(param_1,iVar3,(Vec3 *)&local_88,pcVar8);
              if ((uVar12 & uVar5) == 0) {
                uVar12 = 0;
              }
              else {
                puVar9 = *(undefined8 **)(param_3 + 8);
                if (puVar9 == *(undefined8 **)(param_3 + 0x10)) {
                  __src = *(void **)param_3;
                  __n = (long)puVar9 - (long)__src;
                  uVar1 = ((long)__n >> 2) * -0x5555555555555555 + 1;
                  if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar10 = (long)*(undefined8 **)(param_3 + 0x10) - (long)__src >> 2;
                  uVar14 = 0x1555555555555555;
                  if ((ulong)(lVar10 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
                    uVar11 = lVar10 * 0x5555555555555556;
                    uVar14 = uVar1;
                    if (uVar1 <= uVar11) {
                      uVar14 = uVar11;
                    }
                    if (uVar14 != 0) goto LAB_007db294;
                    pvVar7 = (void *)0x0;
                  }
                  else {
LAB_007db294:
                    pvVar7 = operator_new(uVar14 * 0xc);
                  }
                  puVar9 = (undefined8 *)((long)pvVar7 + ((long)__n >> 2) * 4);
                  *(undefined4 *)(puVar9 + 1) = local_80;
                  *puVar9 = local_88;
                  if (0 < (long)__n) {
                    memcpy((void *)((long)puVar9 - __n),__src,__n);
                  }
                  *(void **)param_3 = (void *)((long)puVar9 - __n);
                  *(long *)(param_3 + 8) = (long)puVar9 + 0xc;
                  *(void **)(param_3 + 0x10) = (void *)((long)pvVar7 + uVar14 * 0xc);
                  if (__src != (void *)0x0) {
                    operator_delete(__src);
                  }
                  uVar12 = 1;
                }
                else {
                  uVar12 = 1;
                  *(undefined4 *)(puVar9 + 1) = local_80;
                  *puVar9 = local_88;
                  *(long *)(param_3 + 8) = (long)puVar9 + 0xc;
                }
              }
            }
            lua_settop(param_1,0xfffffffe);
          } while (uVar6 != uVar13);
        }
        goto LAB_007db318;
      }
    }
    uVar12 = 0;
  }
LAB_007db318:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}

