
/* cocos2d::LuaStack::luaLoadBuffer(lua_State*, char const*, int, char const*) */

ulong __thiscall
cocos2d::LuaStack::luaLoadBuffer
          (LuaStack *this,lua_State *param_1,char *param_2,int param_3,char *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char *__ptr;
  char *pcVar5;
  uint uVar6;
  uint local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (this[0x34] != (LuaStack)0x0) {
    iVar1 = *(int *)(this + 0x50);
    iVar3 = strncmp(param_2,*(char **)(this + 0x48),(long)iVar1);
    if (iVar3 == 0) {
      local_5c = 0;
      __ptr = (char *)xxtea_decrypt((uchar *)(param_2 + iVar1),param_3 - iVar1,
                                    *(uchar **)(this + 0x38),*(uint *)(this + 0x40),&local_5c);
      pcVar5 = __ptr;
      uVar6 = local_5c;
      if (((*__ptr == -0x11) && (__ptr[1] == -0x45)) && (__ptr[2] == -0x41)) {
        pcVar5 = __ptr + 3;
        uVar6 = local_5c - 3;
      }
      uVar4 = luaL_loadbuffer(param_1,pcVar5,uVar6,param_4);
      free(__ptr);
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return uVar4 & 0xffffffff;
      }
      goto LAB_007d2a38;
    }
  }
  if (((*param_2 == -0x11) && (param_2[1] == -0x45)) && (param_2[2] == -0x41)) {
    param_2 = param_2 + 3;
    param_3 = param_3 + -3;
  }
  uVar4 = luaL_loadbuffer(param_1,param_2,(long)param_3,param_4);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar4;
  }
LAB_007d2a38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

