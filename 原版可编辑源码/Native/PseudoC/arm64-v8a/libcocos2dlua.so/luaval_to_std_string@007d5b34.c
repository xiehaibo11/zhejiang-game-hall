
/* luaval_to_std_string(lua_State*, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*, char const*) */

bool luaval_to_std_string(lua_State *param_1,int param_2,basic_string *param_3,char *param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  void *__src;
  void *__dest;
  ulong uVar4;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  ulong local_70;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  bVar2 = false;
  if ((param_1 == (lua_State *)0x0) || (param_3 == (basic_string *)0x0)) goto LAB_007d5c48;
  iVar3 = tolua_isstring(param_1,param_2,0,auStack_68);
  bVar2 = iVar3 != 0;
  if (iVar3 == 0) goto LAB_007d5c48;
  __src = (void *)lua_tolstring(param_1,param_2,&local_70);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (void *)0x0;
  if (0xffffffffffffffef < local_70) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (local_70 < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = (ulong)(byte)((int)local_70 << 1);
    if (local_70 != 0) goto LAB_007d5bf4;
  }
  else {
    uVar4 = local_70 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_88 = uVar4 | 1;
    uStack_80 = local_70;
    local_78 = __dest;
LAB_007d5bf4:
    memcpy(__dest,__src,local_70);
  }
  *(undefined1 *)((long)__dest + local_70) = 0;
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
  *(void **)(param_3 + 0x10) = local_78;
  *(ulong *)(param_3 + 8) = uStack_80;
  *(ulong *)param_3 = local_88;
LAB_007d5c48:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}

