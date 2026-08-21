
void FUN_00df9734(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  char *__filename;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  void *pvVar5;
  long *plVar6;
  AssetsManager *pAVar7;
  AssetsManager *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_178 [16];
  void *local_168;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_160 [8];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_158 [16];
  char *local_148;
  long local_58;
  
                    /* try { // try from 00df9748 to 00ef9753 has its CatchHandler @ 00df9c3c */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this = *(AssetsManager **)(param_1 + 8);
                    /* try { // try from 00df9760 to 00ef976b has its CatchHandler @ 00df9c34 */
  plVar6 = (long *)cocos2d::UserDefault::getInstance();
                    /* try { // try from 00df9774 to 00ef977f has its CatchHandler @ 00df9cf0 */
  uVar1 = (ulong)((byte)this[0x328] >> 1);
  pAVar7 = this + 0x329;
  if (((byte)this[0x328] & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x330);
    pAVar7 = *(AssetsManager **)(this + 0x338);
  }
                    /* try { // try from 00df978c to 00ef9797 has its CatchHandler @ 00df9c30 */
  std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_160,pAVar7,uVar1);
  FUN_00df8418(local_158);
                    /* try { // try from 00df97a4 to 00ef97af has its CatchHandler @ 00df9c2c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_178,(char *)local_158);
                    /* try { // try from 00df97b8 to 00ef97c3 has its CatchHandler @ 00df9cec */
  pvVar2 = (void *)((ulong)local_178 | 1);
  if (((byte)local_178[0] & 1) != 0) {
    pvVar2 = local_168;
  }
  if (((byte)this[0x310] & 1) == 0) {
    pAVar7 = this + 0x311;
  }
  else {
    pAVar7 = *(AssetsManager **)(this + 800);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_158,(char *)pAVar7);
                    /* try { // try from 00df97f4 to 00ef97ff has its CatchHandler @ 00df9c24 */
  (**(code **)(*plVar6 + 0x50))(plVar6,pvVar2,local_158);
                    /* try { // try from 00df9800 to 00ef980b has its CatchHandler @ 00df9c04 */
  if (((byte)local_158[0] & 1) != 0) {
    operator_delete(local_148);
  }
  if (((byte)local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  plVar6 = (long *)cocos2d::UserDefault::getInstance();
                    /* try { // try from 00df9828 to 00ef9833 has its CatchHandler @ 00df9bec */
  uVar1 = (ulong)((byte)this[0x328] >> 1);
  pAVar7 = this + 0x329;
  if (((byte)this[0x328] & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x330);
    pAVar7 = *(AssetsManager **)(this + 0x338);
  }
  std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_160,pAVar7,uVar1);
                    /* try { // try from 00df9858 to 00ef985f has its CatchHandler @ 00df9d54 */
  FUN_00df8418(local_158);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_178,(char *)local_158);
  pvVar5 = local_168;
  bVar4 = local_178[0];
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_158,"");
  pvVar2 = (void *)((ulong)local_178 | 1);
  if (((byte)bVar4 & 1) != 0) {
    pvVar2 = pvVar5;
  }
                    /* try { // try from 00df98a0 to 00ef98b3 has its CatchHandler @ 00df9c14 */
  (**(code **)(*plVar6 + 0x50))(plVar6,pvVar2,local_158);
  if (((byte)local_158[0] & 1) != 0) {
    operator_delete(local_148);
  }
                    /* try { // try from 00df98b8 to 00ef98df has its CatchHandler @ 00df9c88 */
  if (((byte)local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  plVar6 = (long *)cocos2d::UserDefault::getInstance();
  (**(code **)(*plVar6 + 0x60))();
  cocos2d::extension::AssetsManager::setSearchPath(this);
                    /* try { // try from 00df98f0 to 00ef9903 has its CatchHandler @ 00df9c00 */
  FUN_007c1fb0(local_158,this + 0x2f8,"cocos2dx-update-temp-package.zip");
  __filename = (char *)((ulong)local_158 | 1);
                    /* try { // try from 00df9908 to 00ef992f has its CatchHandler @ 00df9c84 */
  if (((byte)local_158[0] & 1) != 0) {
    __filename = local_148;
  }
  remove(__filename);
  if (*(long **)(this + 0x380) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x380) + 0x20))();
  }
  if (((byte)local_158[0] & 1) != 0) {
    operator_delete(local_148);
  }
                    /* try { // try from 00df9940 to 00ef9953 has its CatchHandler @ 00df9bfc */
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00df9958 to 00ef997f has its CatchHandler @ 00df9c80 */
  return;
}

