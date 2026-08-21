
/* std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::AudioEngine::ProfileHelper,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   cocos2d::AudioEngine::ProfileHelper> > >::~unordered_map() */

void __thiscall
std::__ndk1::
unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::AudioEngine::ProfileHelper>>>
::~unordered_map(unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::AudioEngine::ProfileHelper>>>
                 *this)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  
                    /* try { // try from 00a6cccc to 00b6ccd7 has its CatchHandler @ 00a6cefc */
  puVar3 = *(void **)(this + 0x10);
                    /* try { // try from 00a6ccdc to 00b6cce3 has its CatchHandler @ 00a6ceec */
  while (puVar3 != (void *)0x0) {
    pvVar5 = (void *)*puVar3;
    if (puVar3[0xc] != 0) {
      lVar1 = puVar3[10];
      plVar2 = (long *)puVar3[0xb];
      lVar4 = *plVar2;
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar1 + 8);
      **(long **)(lVar1 + 8) = lVar4;
      puVar3[0xc] = 0;
                    /* try { // try from 00a6cd14 to 00b6cdb7 has its CatchHandler @ 00a6cfc4 */
      while (plVar2 != puVar3 + 10) {
        plVar6 = (long *)plVar2[1];
        operator_delete(plVar2);
        plVar2 = plVar6;
      }
    }
    if ((*(byte *)(puVar3 + 5) & 1) != 0) {
      operator_delete((void *)puVar3[7]);
    }
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    puVar3 = pvVar5;
  }
  pvVar5 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar5 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar5);
  return;
}

