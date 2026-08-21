
/* cocos2d::renderer::Pass::setProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, void*) */

void __thiscall cocos2d::renderer::Pass::setProperty(Pass *this,basic_string *param_1,void *param_2)

{
  basic_string *pbVar1;
  long lVar2;
  ulong uVar3;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = *(ulong *)(param_1 + 8);
  pbVar1 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar3 = (ulong)((byte)*param_1 >> 1);
  }
  uVar3 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_40,pbVar1,uVar3);
  setProperty(this,uVar3,param_2);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

