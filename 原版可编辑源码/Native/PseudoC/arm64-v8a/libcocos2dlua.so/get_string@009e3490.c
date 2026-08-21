
/* universe::get_string(lua_State*, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*, char const*) */

void universe::get_string(lua_State *param_1,int param_2,basic_string *param_3,char *param_4)

{
  long lVar1;
  int iVar2;
  void *__src;
  undefined8 uVar3;
  void *__dest;
  ulong uVar4;
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_type();
  if ((iVar2 != 0) && (iVar2 = lua_isstring(param_1,param_2), iVar2 == 0)) {
    luaL_error(param_1,"%s: arg %d is not a string",param_4,param_2);
    uVar3 = 0;
    goto LAB_009e35bc;
  }
  __src = (void *)lua_tolstring(param_1,param_2,&local_50);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  if (0xffffffffffffffef < local_50) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (local_50 < 0x17) {
    __dest = (void *)((ulong)&local_68 | 1);
    local_68 = (ulong)(byte)((int)local_50 << 1);
    if (local_50 != 0) goto LAB_009e3544;
  }
  else {
    uVar4 = local_50 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_68 = uVar4 | 1;
    uStack_60 = local_50;
    local_58 = __dest;
LAB_009e3544:
    memcpy(__dest,__src,local_50);
  }
  *(undefined1 *)((long)__dest + local_50) = 0;
  if (((byte)*param_3 & 1) == 0) {
    *(undefined2 *)param_3 = 0;
  }
  else {
    **(undefined1 **)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    if (((byte)*param_3 & 1) != 0) {
      operator_delete(*(void **)(param_3 + 0x10));
      *(undefined8 *)param_3 = 0;
    }
  }
  uVar3 = 1;
  *(void **)(param_3 + 0x10) = local_58;
  *(ulong *)(param_3 + 8) = uStack_60;
  *(ulong *)param_3 = local_68;
LAB_009e35bc:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

