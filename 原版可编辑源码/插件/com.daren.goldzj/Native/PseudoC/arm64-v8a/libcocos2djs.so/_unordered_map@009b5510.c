
/* std::__ndk1::unordered_map<unsigned long, cocos2d::renderer::DeviceGraphics::Uniform,
   std::__ndk1::hash<unsigned long>, std::__ndk1::equal_to<unsigned long>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned long const,
   cocos2d::renderer::DeviceGraphics::Uniform> > >::~unordered_map() */

void __thiscall
std::__ndk1::
unordered_map<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,cocos2d::renderer::DeviceGraphics::Uniform>>>
::~unordered_map(unordered_map<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long_const,cocos2d::renderer::DeviceGraphics::Uniform>>>
                 *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = *(void **)(this + 0x10);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((void *)puVar1[3] != (void *)0x0) {
      free((void *)puVar1[3]);
    }
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

