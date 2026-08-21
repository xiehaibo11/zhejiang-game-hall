
/* cocos2d::extension::AssetsManager::keyOfDownloadedVersion() const */

void cocos2d::extension::AssetsManager::keyOfDownloadedVersion(void)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00df6e74 with catch @ 00df701c */
  uVar1 = (ulong)(*(byte *)(in_x0 + 0x328) >> 1);
  pvVar3 = (void *)(in_x0 + 0x329);
                    /* catch() { ... } // from try @ 00df6e48 with catch @ 00df7034 */
  if ((*(byte *)(in_x0 + 0x328) & 1) != 0) {
    uVar1 = *(ulong *)(in_x0 + 0x330);
    pvVar3 = *(void **)(in_x0 + 0x338);
  }
  std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_138,pvVar3,uVar1);
                    /* catch() { ... } // from try @ 00df6db4 with catch @ 00df704c */
  FUN_00df8418(a_Stack_138);
                    /* catch() { ... } // from try @ 00df6df0 with catch @ 00df705c */
                    /* catch() { ... } // from try @ 00df6e30 with catch @ 00df7060 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,(char *)a_Stack_138);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00df6e18 with catch @ 00df7080 */
  return;
}

