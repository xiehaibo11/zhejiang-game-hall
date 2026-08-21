
/* std::__ndk1::unordered_map<unsigned long, cocos2d::renderer::Program*, std::__ndk1::hash<unsigned
   long>, std::__ndk1::equal_to<unsigned long>, std::__ndk1::allocator<std::__ndk1::pair<unsigned
   long const, cocos2d::renderer::Program*> > >::~unordered_map() */

void __thiscall
std::__ndk1::
unordered_map<unsigned_long,cocos2d::renderer::Program*,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,cocos2d::renderer::Program*>>>
::~unordered_map(unordered_map<unsigned_long,cocos2d::renderer::Program*,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,cocos2d::renderer::Program*>>>
                 *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = *(void **)(this + 0x10);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
                    /* try { // try from 009c1aac to 00ac1b8f has its CatchHandler @ 009c191c */
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

