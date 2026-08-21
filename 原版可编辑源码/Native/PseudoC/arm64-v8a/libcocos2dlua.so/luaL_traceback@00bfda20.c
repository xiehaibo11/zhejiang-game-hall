
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void luaL_traceback(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_248 [8];
  undefined8 local_240;
  char *local_238;
  char *local_230;
  int local_220;
  undefined4 local_218;
  undefined1 auStack_210 [512];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = (int)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3);
  if (param_3 != 0) {
    lua_pushfstring(param_1,&DAT_0140ff58);
  }
  lua_pushlstring(param_1,"stack traceback:",0x10);
  iVar6 = 0xc;
  iVar5 = param_4 + 1;
LAB_00bfdabc:
  do {
    iVar2 = lua_getstack(param_2,param_4,auStack_248);
    while( true ) {
      if (iVar2 == 0) {
        lua_concat(param_1,(int)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) - iVar1
                  );
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      if (iVar5 <= iVar6) break;
      iVar6 = 0x7fffffff;
      iVar2 = lua_getstack(param_2,param_4 + 0xb,auStack_248);
      if (iVar2 == 0) goto LAB_00bfdabc;
      lua_pushlstring(param_1,"\n\t...",5);
      lua_getstack(param_2,0xfffffff6,auStack_248);
      param_4 = local_10 + -10;
      iVar5 = local_10 + -9;
      iVar2 = lua_getstack(param_2,param_4,auStack_248);
    }
    lua_getinfo(param_2,&DAT_0140ff80,auStack_248);
    puVar3 = (ulong *)(*(long *)(param_2 + 0x28) + -8);
    uVar4 = *puVar3;
    *(ulong **)(param_2 + 0x28) = puVar3;
    uVar4 = uVar4 & 0x7fffffffffff;
    if ((*(byte *)(uVar4 + 10) < 2) || (*local_238 != '\0')) {
      lua_pushfstring(param_1,"\n\t%s:",auStack_210);
    }
    else {
      lua_pushfstring(param_1,"\n\t[builtin#%d]:");
    }
    if (0 < local_220) {
      lua_pushfstring(param_1,&DAT_0140ffa0);
    }
    param_4 = iVar5;
    if (*local_238 != '\0') {
      lua_pushfstring(param_1," in function \'%s\'",local_240);
      if ((int)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) - iVar1 < 0xf)
      goto LAB_00bfdc44;
LAB_00bfdc80:
      iVar5 = iVar5 + 1;
      lua_concat(param_1);
      goto LAB_00bfdabc;
    }
    if (*local_230 == 'm') {
      lua_pushlstring(param_1," in main chunk",0xe);
    }
    else if (*local_230 == 'C') {
      lua_pushfstring(param_1," at %p",*(undefined8 *)(uVar4 + 0x28));
    }
    else {
      lua_pushfstring(param_1," in function <%s:%d>",auStack_210,local_218);
    }
    if (0xe < (int)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) - iVar1)
    goto LAB_00bfdc80;
LAB_00bfdc44:
    iVar5 = iVar5 + 1;
  } while( true );
}

