
/* luaval_to_long(lua_State*, int, long*, char const*) */

bool luaval_to_long(lua_State *param_1,int param_2,long *param_3,char *param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  bVar2 = false;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (long *)0x0)) {
    iVar3 = tolua_isnumber(param_1,param_2,0,auStack_58);
    bVar2 = iVar3 != 0;
    if (iVar3 != 0) {
      dVar4 = (double)tolua_tonumber(0,param_1,param_2);
      *param_3 = (long)dVar4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

