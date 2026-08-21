
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::IAudioPlayer*>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::IAudioPlayer*>, std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::IAudioPlayer*>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::IAudioPlayer*> >
   >::rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
                    /* try { // try from 00a71dec to 00b71e3f has its CatchHandler @ 00a71dec
                       catch() { ... } // from try @ 00a71dec with catch @ 00a71dec
                       catch() { ... } // from try @ 00a71f50 with catch @ 00a71dec */
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else if ((param_1 - 1 & param_1) != 0) {
    param_1 = __next_prime(param_1);
  }
  uVar2 = *(ulong *)(this + 8);
  uVar1 = param_1;
  if (uVar2 < param_1) {
LAB_00a71e30:
    __rehash(this,uVar1);
    return;
  }
                    /* try { // try from 00a71e40 to 00b71e57 has its CatchHandler @ 00a71fcc */
  if (param_1 < uVar2) {
                    /* try { // try from 00a71e60 to 00b71e6b has its CatchHandler @ 00a71fc8 */
                    /* try { // try from 00a71e6c to 00b71e77 has its CatchHandler @ 00a71fc4 */
    uVar1 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
    if (uVar2 < 3 || (uVar2 - 1 & uVar2) != 0) {
      uVar1 = __next_prime(uVar1);
    }
    else {
                    /* try { // try from 00a71e78 to 00b71f4f has its CatchHandler @ 00a71fdc */
      if (1 < uVar1) {
        uVar1 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar1 - 1) & 0x3f);
      }
    }
    if (uVar1 <= param_1) {
      uVar1 = param_1;
    }
    if (uVar1 < uVar2) goto LAB_00a71e30;
  }
  return;
}

