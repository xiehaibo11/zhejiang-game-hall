
/* std::__ndk1::unordered_map<unsigned int, void (*)(int, int, void const*,
   cocos2d::renderer::UniformElementType), std::__ndk1::hash<unsigned int>,
   std::__ndk1::equal_to<unsigned int>, std::__ndk1::allocator<std::__ndk1::pair<unsigned int const,
   void (*)(int, int, void const*, cocos2d::renderer::UniformElementType)> > >::~unordered_map() */

void __thiscall
std::__ndk1::
unordered_map<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType),std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int_const,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>>>
::~unordered_map(unordered_map<unsigned_int,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType),std::__ndk1::hash<unsigned_int>,std::__ndk1::equal_to<unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int_const,void(*)(int,int,void_const*,cocos2d::renderer::UniformElementType)>>>
                 *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* catch() { ... } // from try @ 009b65f8 with catch @ 009b67ec */
                    /* catch() { ... } // from try @ 009b65d8 with catch @ 009b67f0 */
  puVar1 = *(void **)(this + 0x10);
                    /* catch() { ... } // from try @ 009b6610 with catch @ 009b6800 */
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

