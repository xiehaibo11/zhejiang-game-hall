
/* cocos2d::extension::AssetsManager::getVersion() */

void __thiscall cocos2d::extension::AssetsManager::getVersion(AssetsManager *this)

{
  ulong uVar1;
  long lVar2;
  AssetsManager *pAVar3;
  char *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_160 [16];
  void *local_150;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_148 [256];
  long local_48;
  
                    /* try { // try from 00df7fac to 00ef7fb7 has its CatchHandler @ 00df8fd8 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pcVar4 = (char *)UserDefault::getInstance();
  uVar1 = (ulong)((byte)this[0x328] >> 1);
  pAVar3 = this + 0x329;
  if (((byte)this[0x328] & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x330);
    pAVar3 = *(AssetsManager **)(this + 0x338);
  }
  std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_148,pAVar3,uVar1);
  FUN_00df8418(a_Stack_148);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_160,(char *)a_Stack_148);
  UserDefault::getStringForKey(pcVar4);
  if (((byte)local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

