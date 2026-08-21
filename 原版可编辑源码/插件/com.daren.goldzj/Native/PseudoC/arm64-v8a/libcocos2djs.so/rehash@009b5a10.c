
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::DeviceGraphics::Uniform>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::DeviceGraphics::Uniform>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::DeviceGraphics::Uniform>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::DeviceGraphics::Uniform> > >::rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
                    /* try { // try from 009b5a1c to 00ab5a33 has its CatchHandler @ 009b5c78 */
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else {
                    /* try { // try from 009b5a3c to 00ab5a47 has its CatchHandler @ 009b5c74 */
    if ((param_1 - 1 & param_1) != 0) {
      param_1 = __next_prime(param_1);
                    /* try { // try from 009b5a48 to 00ab5a53 has its CatchHandler @ 009b5c70 */
    }
  }
  uVar2 = *(ulong *)(this + 8);
  uVar1 = param_1;
                    /* try { // try from 009b5a54 to 00ab5c5b has its CatchHandler @ 009b5c88 */
  if (uVar2 < param_1) {
LAB_009b5a60:
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
    if (uVar1 < uVar2) goto LAB_009b5a60;
  }
  return;
}

