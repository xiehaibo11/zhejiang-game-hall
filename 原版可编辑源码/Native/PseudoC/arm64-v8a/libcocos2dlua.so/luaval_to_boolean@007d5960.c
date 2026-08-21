
/* luaval_to_boolean(lua_State*, int, bool*, char const*) */

bool luaval_to_boolean(lua_State *param_1,int param_2,bool *param_3,char *param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  bVar2 = false;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (bool *)0x0)) {
    iVar3 = tolua_isboolean(param_1,param_2,0,auStack_58);
    bVar2 = iVar3 != 0;
    if (iVar3 != 0) {
      iVar3 = tolua_toboolean(param_1,param_2,0);
      *param_3 = iVar3 != 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

