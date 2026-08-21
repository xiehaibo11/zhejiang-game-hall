
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   cocos2d::network::DownloadTaskAndroid*>, std::__ndk1::__unordered_map_hasher<int,
   std::__ndk1::__hash_value_type<int, cocos2d::network::DownloadTaskAndroid*>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::network::DownloadTaskAndroid*>,
   std::__ndk1::equal_to<int>, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,
   cocos2d::network::DownloadTaskAndroid*> > >::rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
                    /* try { // try from 009a89c8 to 00aa8af7 has its CatchHandler @ 009a8b84 */
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else if ((param_1 - 1 & param_1) != 0) {
    param_1 = __next_prime(param_1);
  }
  uVar2 = *(ulong *)(this + 8);
  uVar1 = param_1;
  if (uVar2 < param_1) {
LAB_009a8a14:
    __rehash(this,uVar1);
    return;
  }
  if (param_1 < uVar2) {
    uVar1 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
    if (uVar2 < 3 || (uVar2 - 1 & uVar2) != 0) {
      uVar1 = __next_prime(uVar1);
    }
    else if (1 < uVar1) {
      uVar1 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar1 - 1) & 0x3f);
    }
    if (uVar1 <= param_1) {
      uVar1 = param_1;
    }
    if (uVar1 < uVar2) goto LAB_009a8a14;
  }
  return;
}

