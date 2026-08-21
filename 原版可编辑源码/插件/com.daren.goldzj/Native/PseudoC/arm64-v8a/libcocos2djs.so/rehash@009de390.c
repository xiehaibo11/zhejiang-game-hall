
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::WebViewImpl*>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::WebViewImpl*>, std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::WebViewImpl*>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::WebViewImpl*> >
   >::rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
                    /* try { // try from 009de3a4 to 00ade3ab has its CatchHandler @ 009de4bc */
  if (param_1 - 1 == 0) {
                    /* try { // try from 009de3ac to 00ade3bf has its CatchHandler @ 009de4ac */
    param_1 = 2;
  }
  else if ((param_1 - 1 & param_1) != 0) {
    param_1 = __next_prime(param_1);
  }
  uVar2 = *(ulong *)(this + 8);
                    /* try { // try from 009de3d0 to 00ade3d7 has its CatchHandler @ 009de4a8 */
  uVar1 = param_1;
  if (uVar2 < param_1) {
LAB_009de3e0:
    __rehash(this,uVar1);
    return;
  }
  if (param_1 < uVar2) {
                    /* try { // try from 009de3fc to 00ade403 has its CatchHandler @ 009de4a0 */
    uVar1 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
    if (uVar2 < 3 || (uVar2 - 1 & uVar2) != 0) {
      uVar1 = __next_prime(uVar1);
    }
    else {
                    /* try { // try from 009de428 to 00ade42f has its CatchHandler @ 009de498 */
      if (1 < uVar1) {
                    /* try { // try from 009de430 to 00ade443 has its CatchHandler @ 009de494 */
        uVar1 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar1 - 1) & 0x3f);
      }
    }
                    /* try { // try from 009de44c to 00ade45b has its CatchHandler @ 009de490 */
    if (uVar1 <= param_1) {
      uVar1 = param_1;
    }
    if (uVar1 < uVar2) goto LAB_009de3e0;
  }
  return;
}

