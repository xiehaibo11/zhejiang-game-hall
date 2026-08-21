
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,
   std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem> >,
   std::__ndk1::__unordered_map_hasher<cocos2d::renderer::Texture*,
   std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,
   std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem> >,
   std::__ndk1::hash<cocos2d::renderer::Texture*>, true>,
   std::__ndk1::__unordered_map_equal<cocos2d::renderer::Texture*,
   std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,
   std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem> >,
   std::__ndk1::equal_to<cocos2d::renderer::Texture*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,
   std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem> > > >::rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::Texture*,std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::hash<cocos2d::renderer::Texture*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::Texture*,std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::equal_to<cocos2d::renderer::Texture*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>>>
::rehash(__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::Texture*,std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::hash<cocos2d::renderer::Texture*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::Texture*,std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>,std::__ndk1::equal_to<cocos2d::renderer::Texture*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::Texture*,std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>>>>
         *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
                    /* try { // try from 009b1840 to 00ab1847 has its CatchHandler @ 009b1d1c */
                    /* try { // try from 009b1848 to 00ab1867 has its CatchHandler @ 009b1d2c */
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else {
                    /* try { // try from 009b1868 to 00ab1877 has its CatchHandler @ 009b1d18 */
    if ((param_1 - 1 & param_1) != 0) {
      param_1 = __next_prime(param_1);
    }
  }
                    /* try { // try from 009b187c to 00ab1887 has its CatchHandler @ 009b1d10 */
  uVar2 = *(ulong *)(this + 8);
  uVar1 = param_1;
  if (uVar2 < param_1) {
LAB_009b1890:
                    /* try { // try from 009b189c to 00ab18a7 has its CatchHandler @ 009b1ce8 */
    __rehash(this,uVar1);
    return;
  }
  if (param_1 < uVar2) {
                    /* try { // try from 009b18ac to 00ab18b3 has its CatchHandler @ 009b1cd8 */
                    /* try { // try from 009b18c8 to 00ab18d3 has its CatchHandler @ 009b1cc8 */
    uVar1 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
    if (uVar2 < 3 || (uVar2 - 1 & uVar2) != 0) {
      uVar1 = __next_prime(uVar1);
    }
    else {
                    /* try { // try from 009b18d8 to 00ab18df has its CatchHandler @ 009b1cb8 */
      if (1 < uVar1) {
        uVar1 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar1 - 1) & 0x3f);
      }
    }
    if (uVar1 <= param_1) {
      uVar1 = param_1;
    }
    if (uVar1 < uVar2) goto LAB_009b1890;
  }
  return;
}

