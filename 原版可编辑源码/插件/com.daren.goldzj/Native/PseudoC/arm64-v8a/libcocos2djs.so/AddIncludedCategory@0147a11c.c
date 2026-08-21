
/* v8::platform::tracing::TraceConfig::AddIncludedCategory(char const*) */

void __thiscall
v8::platform::tracing::TraceConfig::AddIncludedCategory(TraceConfig *this,char *param_1)

{
  ulong *puVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  ulong local_58;
  size_t sStack_50;
  void *local_48;
  
  sStack_50 = 0;
  local_48 = (void *)0x0;
  local_58 = 0;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_58 | 1);
    local_58 = CONCAT71(local_58._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_0147a1a8;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_58 = uVar2 | 1;
    sStack_50 = __n;
    local_48 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_0147a1a8:
  *(undefined1 *)((long)__dest + __n) = 0;
  puVar1 = *(ulong **)(this + 0x10);
  if (puVar1 < *(ulong **)(this + 0x18)) {
    puVar1[2] = (ulong)local_48;
    puVar1[1] = sStack_50;
    *puVar1 = local_58;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 0x18;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 8),(basic_string *)&local_58);
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
  }
  return;
}

