
void FUN_009da84c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  size_t local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  MD5_CTX MStack_a8;
  uchar local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,&DAT_012f25de);
  }
  uVar3 = universe::get_cstr(param_1,1,&local_f8,&local_100,"lua_universe_md5Encode");
  if ((uVar3 & 1) != 0) {
    if (local_100 != 0) {
      local_48[0] = '\0';
      local_48[1] = '\0';
      local_48[2] = '\0';
      local_48[3] = '\0';
      local_48[4] = '\0';
      local_48[5] = '\0';
      local_48[6] = '\0';
      local_48[7] = '\0';
      local_48[8] = '\0';
      local_48[9] = '\0';
      local_48[10] = '\0';
      local_48[0xb] = '\0';
      local_48[0xc] = '\0';
      local_48[0xd] = '\0';
      local_48[0xe] = '\0';
      local_48[0xf] = '\0';
      MD5_Init(&MStack_a8);
      MD5_Update(&MStack_a8,local_f8,local_100);
      MD5_Final(local_48,&MStack_a8);
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      FUN_009dab44(&local_f0);
      lua_pushstring(param_1,&local_f0);
      uVar4 = 1;
      goto LAB_009da984;
    }
    lua_pushstring(param_1,&DAT_013c996e);
  }
  uVar4 = 0;
LAB_009da984:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

