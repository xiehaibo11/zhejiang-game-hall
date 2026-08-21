
/* jsb_enable_debugger(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int, bool) */

void jsb_enable_debugger(basic_string *param_1,uint param_2,bool param_3)

{
  long lVar1;
  undefined8 uVar2;
  ScriptEngine *this;
  size_t __n;
  basic_string *__s;
  void *__dest;
  ulong uVar3;
  ulong local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  uVar3 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  if ((param_2 == 0) || (uVar3 == 0)) goto LAB_008eb650;
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  __s = *(basic_string **)(param_1 + 0x10);
  local_70 = 0;
  local_68 = 0;
  if (((byte)*param_1 & 1) == 0) {
    __s = param_1 + 1;
  }
  local_60 = (void *)0x0;
  __n = strlen((char *)__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_008eb614;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_70 = uVar3 | 1;
    local_68 = __n;
    local_60 = __dest;
LAB_008eb614:
    memcpy(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  se::ScriptEngine::enableDebugger(this,(basic_string *)&local_70,param_2,param_3);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  uVar2 = 1;
LAB_008eb650:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

