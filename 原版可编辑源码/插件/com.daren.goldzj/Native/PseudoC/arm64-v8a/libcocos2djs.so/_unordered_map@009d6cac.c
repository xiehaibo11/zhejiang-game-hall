
/* std::__ndk1::unordered_map<int, cocos2d::VideoPlayer*, std::__ndk1::hash<int>,
   std::__ndk1::equal_to<int>, std::__ndk1::allocator<std::__ndk1::pair<int const,
   cocos2d::VideoPlayer*> > >::~unordered_map() */

void __thiscall
std::__ndk1::
unordered_map<int,cocos2d::VideoPlayer*,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,cocos2d::VideoPlayer*>>>
::~unordered_map(unordered_map<int,cocos2d::VideoPlayer*,std::__ndk1::hash<int>,std::__ndk1::equal_to<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,cocos2d::VideoPlayer*>>>
                 *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = *(void **)(this + 0x10);
                    /* try { // try from 009d6cc0 to 00ad6ccf has its CatchHandler @ 009d6f24 */
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
                    /* try { // try from 009d6cd0 to 00ad6f87 has its CatchHandler @ 009d6b48 */
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

