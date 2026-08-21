
/* lua_universe_core_Encryption_decryptLua(lua_State*) */

undefined4 lua_universe_core_Encryption_decryptLua(lua_State *param_1)

{
  void *pvVar1;
  long lVar2;
  ulong __n;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  void *__dest;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "un.Encryption:decryptLua",iVar3 + -1,1);
    uVar6 = 0;
    goto LAB_007c5994;
  }
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_70,"un.Encryption:decryptLua");
  pvVar1 = local_60;
  __n = uStack_68;
  if ((uVar5 & 1) == 0) {
    tolua_error(param_1,"invalid arguments in function \'lua_universe_core_Encryption_decryptLua\'",
                0);
    uVar6 = 0;
  }
  else {
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = (void *)0x0;
    if ((local_70 & 1) == 0) {
      uStack_98 = uStack_68;
      local_a0 = local_70;
      local_90 = local_60;
    }
    else {
      if (0xffffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_68 < 0x17) {
        __dest = (void *)((ulong)&local_a0 | 1);
        local_a0 = (ulong)(byte)((int)uStack_68 << 1);
        if (uStack_68 != 0) goto LAB_007c5a14;
      }
      else {
        uVar5 = uStack_68 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar5);
        local_a0 = uVar5 | 1;
        uStack_98 = __n;
        local_90 = __dest;
LAB_007c5a14:
        memcpy(__dest,pvVar1,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
    }
    universe::network::Encryption::decryptLua(local_88,uVar4,&local_a0);
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    pvVar1 = (void *)((ulong)local_88 | 1);
    if ((local_88[0] & 1) != 0) {
      pvVar1 = local_78;
    }
    tolua_pushstring(param_1,pvVar1);
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    uVar6 = 1;
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_007c5994:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

