
void FUN_00df9530(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_170 [16];
  void *local_160;
  __murmur2_or_cityhash<unsigned_long,64ul> local_158 [16];
  void *local_148;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar7 = *(long *)(param_1 + 8);
  plVar6 = (long *)cocos2d::UserDefault::getInstance();
  uVar1 = (ulong)(*(byte *)(lVar7 + 0x328) >> 1);
  pvVar2 = (void *)(lVar7 + 0x329);
  if ((*(byte *)(lVar7 + 0x328) & 1) != 0) {
    uVar1 = *(ulong *)(lVar7 + 0x330);
    pvVar2 = *(void **)(lVar7 + 0x338);
  }
                    /* catch() { ... } // from try @ 00df95d0 with catch @ 00df9580
                       catch() { ... } // from try @ 00df9ba0 with catch @ 00df9580 */
  std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()(local_158,pvVar2,uVar1);
  FUN_00df8418(local_158);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_170,(char *)local_158);
  pvVar5 = local_160;
  bVar4 = local_170[0];
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_158,"");
                    /* try { // try from 00df95c8 to 00ef95cf has its CatchHandler @ 00df9d38 */
                    /* try { // try from 00df95d0 to 00ef96d3 has its CatchHandler @ 00df9580 */
  pvVar2 = (void *)((ulong)local_170 | 1);
  if (((byte)bVar4 & 1) != 0) {
    pvVar2 = pvVar5;
  }
  (**(code **)(*plVar6 + 0x50))(plVar6,pvVar2,local_158);
  if (((byte)local_158[0] & 1) != 0) {
    operator_delete(local_148);
  }
  if (((byte)local_170[0] & 1) != 0) {
    operator_delete(local_160);
  }
  plVar6 = (long *)cocos2d::UserDefault::getInstance();
  (**(code **)(*plVar6 + 0x60))();
  plVar6 = *(long **)(lVar7 + 0x380);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6,3);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

