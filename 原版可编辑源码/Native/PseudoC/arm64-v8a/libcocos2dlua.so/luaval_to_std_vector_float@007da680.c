
/* luaval_to_std_vector_float(lua_State*, int, std::__ndk1::vector<float,
   std::__ndk1::allocator<float> >*, char const*) */

bool luaval_to_std_vector_float(lua_State *param_1,int param_2,vector *param_3,char *param_4)

{
  float *pfVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  float local_6c;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  bVar3 = false;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (vector *)0x0)) {
    iVar4 = lua_gettop();
    if (iVar4 < param_2) {
      bVar3 = false;
    }
    else {
      iVar4 = tolua_istable(param_1,param_2,0,auStack_68);
      bVar3 = iVar4 != 0;
      if ((iVar4 != 0) && (uVar5 = lua_objlen(param_1,param_2), uVar5 != 0)) {
        uVar6 = 0;
        do {
          uVar6 = uVar6 + 1;
          lua_pushnumber((double)uVar6,param_1);
          lua_gettable(param_1,param_2);
          iVar4 = lua_isnumber(param_1,0xffffffff);
          if (iVar4 != 0) {
            dVar7 = (double)tolua_tonumber(0,param_1,0xffffffff);
            local_6c = (float)dVar7;
            pfVar1 = *(float **)(param_3 + 8);
            if (pfVar1 < *(float **)(param_3 + 0x10)) {
              *pfVar1 = local_6c;
              *(float **)(param_3 + 8) = pfVar1 + 1;
            }
            else {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float>
                        ((vector<float,std::__ndk1::allocator<float>> *)param_3,&local_6c);
            }
          }
          lua_settop(param_1,0xfffffffe);
        } while (uVar5 != uVar6);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

