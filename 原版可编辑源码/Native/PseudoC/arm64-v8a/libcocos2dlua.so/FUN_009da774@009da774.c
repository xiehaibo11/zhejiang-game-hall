
void FUN_009da774(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  size_t local_a8;
  char *local_a0;
  MD5_CTX MStack_98;
  uchar auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"lua_universe_hash: expected 1 argument");
  }
  uVar3 = universe::get_cstr(param_1,1,&local_a0,&local_a8,"lua_universe_hash");
  if ((uVar3 & 1) != 0) {
    if (local_a8 != 0) {
      MD5_Init(&MStack_98);
      MD5_Update(&MStack_98,local_a0,local_a8);
      MD5_Final(auStack_38,&MStack_98);
      lua_pushlstring(param_1,auStack_38,0x10);
      uVar4 = 1;
      goto LAB_009da828;
    }
    lua_pushstring(param_1,&DAT_013c996e);
  }
  uVar4 = 0;
LAB_009da828:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

