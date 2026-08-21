
/* cocos2d::extension::AssetsManager::deleteVersion() */

void __thiscall cocos2d::extension::AssetsManager::deleteVersion(AssetsManager *this)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  AssetsManager *pAVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  void *pvVar6;
  long *plVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_160 [16];
  void *local_150;
  __murmur2_or_cityhash<unsigned_long,64ul> local_148 [16];
  void *local_138;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar7 = (long *)UserDefault::getInstance();
  uVar1 = (ulong)((byte)this[0x328] >> 1);
  pAVar4 = this + 0x329;
  if (((byte)this[0x328] & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x330);
    pAVar4 = *(AssetsManager **)(this + 0x338);
  }
                    /* try { // try from 00df80e4 to 00ef80ef has its CatchHandler @ 00df8fd4 */
  std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()(local_148,pAVar4,uVar1);
  FUN_00df8418(local_148);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_160,(char *)local_148);
  pvVar6 = local_150;
  bVar5 = local_160[0];
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_148,"");
  pvVar2 = (void *)((ulong)local_160 | 1);
  if (((byte)bVar5 & 1) != 0) {
    pvVar2 = pvVar6;
  }
  (**(code **)(*plVar7 + 0x50))(plVar7,pvVar2,local_148);
                    /* try { // try from 00df814c to 00ef814f has its CatchHandler @ 00df8ff0 */
  if (((byte)local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
                    /* try { // try from 00df8160 to 00ef81b3 has its CatchHandler @ 00df8ff8 */
  if (((byte)local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

