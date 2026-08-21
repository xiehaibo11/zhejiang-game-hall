
/* universe::CustomFileManager::renameFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

uint __thiscall
universe::CustomFileManager::renameFile
          (CustomFileManager *this,basic_string *param_1,basic_string *param_2,basic_string *param_3
          )

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  basic_string *pbVar4;
  basic_string *__n;
  void *__src;
  void *__dest;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  basic_string *pbStack_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pbVar4 = param_2;
  uVar3 = (**(code **)(*(long *)this + 0x40))();
  if ((uVar3 & 1) == 0) {
    std::__ndk1::operator+((__ndk1 *)(this + 8),param_1,pbVar4);
    goto LAB_009f8428;
  }
  pbStack_68 = (basic_string *)0x0;
  local_60 = (void *)0x0;
  local_70 = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_60 = *(void **)(param_1 + 0x10);
    pbStack_68 = *(basic_string **)(param_1 + 8);
    local_70 = *(ulong *)param_1;
    goto LAB_009f8428;
  }
  __n = *(basic_string **)(param_1 + 8);
  if ((basic_string *)0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x10);
  if (__n < (basic_string *)0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = (ulong)(byte)((int)__n << 1);
    if (__n != (basic_string *)0x0) goto LAB_009f8414;
  }
  else {
    __dest = operator_new((ulong)(__n + 0x10) & 0xfffffffffffffff0);
    local_70 = (ulong)(__n + 0x10) & 0xfffffffffffffff0 | 1;
    pbStack_68 = __n;
    local_60 = __dest;
LAB_009f8414:
    pbVar4 = __n;
    memcpy(__dest,__src,(size_t)__n);
  }
  *(basic_string *)((long)__dest + (long)__n) = (basic_string)0x0;
LAB_009f8428:
  std::__ndk1::operator+((__ndk1 *)&local_70,param_2,pbVar4);
  std::__ndk1::operator+((__ndk1 *)&local_70,param_3,pbVar4);
  uVar2 = (**(code **)(*(long *)this + 0x20))(this,local_88,local_a0);
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

