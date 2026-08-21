
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::Program*>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::Program*>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::Program*>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::Program*>
   > >::rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else {
                    /* try { // try from 009c7f40 to 00ac7f93 has its CatchHandler @ 009c7f40
                       catch() { ... } // from try @ 009c7f40 with catch @ 009c7f40
                       catch() { ... } // from try @ 009c80ec with catch @ 009c7f40 */
    if ((param_1 - 1 & param_1) != 0) {
      param_1 = __next_prime(param_1);
    }
  }
  uVar2 = *(ulong *)(this + 8);
  uVar1 = param_1;
  if (uVar2 < param_1) {
LAB_009c7f68:
    __rehash(this,uVar1);
    return;
  }
  if (param_1 < uVar2) {
    uVar1 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
    if (uVar2 < 3 || (uVar2 - 1 & uVar2) != 0) {
      uVar1 = __next_prime(uVar1);
    }
    else {
                    /* try { // try from 009c7fb4 to 00ac7fbf has its CatchHandler @ 009c8164 */
      if (1 < uVar1) {
                    /* try { // try from 009c7fc0 to 00ac7fcb has its CatchHandler @ 009c8160 */
        uVar1 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar1 - 1) & 0x3f);
                    /* try { // try from 009c7fcc to 00ac80eb has its CatchHandler @ 009c8178 */
      }
    }
    if (uVar1 <= param_1) {
      uVar1 = param_1;
    }
    if (uVar1 < uVar2) goto LAB_009c7f68;
  }
  return;
}

