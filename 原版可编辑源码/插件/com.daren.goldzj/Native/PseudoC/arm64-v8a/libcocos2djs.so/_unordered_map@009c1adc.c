
/* std::__ndk1::unordered_map<unsigned long, cocos2d::renderer::ProgramLib::Template,
   std::__ndk1::hash<unsigned long>, std::__ndk1::equal_to<unsigned long>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned long const,
   cocos2d::renderer::ProgramLib::Template> > >::~unordered_map() */

void __thiscall
std::__ndk1::
unordered_map<unsigned_long,cocos2d::renderer::ProgramLib::Template,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,cocos2d::renderer::ProgramLib::Template>>>
::~unordered_map(unordered_map<unsigned_long,cocos2d::renderer::ProgramLib::Template,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,cocos2d::renderer::ProgramLib::Template>>>
                 *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = *(void **)(this + 0x10);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,void*>>>
    ::__destroy<std::__ndk1::pair<unsigned_long_const,cocos2d::renderer::ProgramLib::Template>>();
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)this;
                    /* catch() { ... } // from try @ 009c199c with catch @ 009c1b20 */
  *(undefined8 *)this = 0;
                    /* catch() { ... } // from try @ 009c1990 with catch @ 009c1b24 */
  if (pvVar2 == (void *)0x0) {
                    /* catch() { ... } // from try @ 009c19a8 with catch @ 009c1b38 */
    return;
  }
                    /* catch() { ... } // from try @ 009c1970 with catch @ 009c1b28 */
  operator_delete(pvVar2);
  return;
}

