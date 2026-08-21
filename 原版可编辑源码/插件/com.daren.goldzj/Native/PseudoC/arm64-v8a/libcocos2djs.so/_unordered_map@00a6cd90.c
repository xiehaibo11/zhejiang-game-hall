
/* std::__ndk1::unordered_map<int, cocos2d::AudioEngine::AudioInfo, std::__ndk1::hash<int>,
   std::__ndk1::equal_to<int>, std::__ndk1::allocator<std::__ndk1::pair<int const,
   cocos2d::AudioEngine::AudioInfo> > >::~unordered_map() */

void __thiscall
std::__ndk1::
unordered_map<int,cocos2d::AudioEngine::AudioInfo,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,cocos2d::AudioEngine::AudioInfo>>>
::~unordered_map(unordered_map<int,cocos2d::AudioEngine::AudioInfo,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,cocos2d::AudioEngine::AudioInfo>>>
                 *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = *(void **)(this + 0x10);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
                    /* try { // try from 00a6cdb8 to 00b6cea7 has its CatchHandler @ 00a6cb48 */
  pvVar2 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

