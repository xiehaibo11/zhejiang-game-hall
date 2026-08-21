
/* universe::get_cstr(lua_State*, int, char const**, unsigned long*, char const*) */

void universe::get_cstr(lua_State *param_1,int param_2,char **param_3,ulong *param_4,char *param_5)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 009e3730 with catch @ 009e3790 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_type();
  if ((iVar2 == 0) || (iVar2 = lua_isstring(param_1,param_2), iVar2 != 0)) {
    pcVar3 = (char *)lua_tolstring(param_1,param_2,&local_50);
    *param_3 = pcVar3;
    uVar4 = 1;
    *param_4 = local_50;
  }
  else {
    luaL_error(param_1,"%s: arg %d is not a string",param_5,param_2);
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

