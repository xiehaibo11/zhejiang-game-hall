
/* std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::function<void (cocos2d::renderer::View const&,
   std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> >&)> const,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, std::__ndk1::function<void
   (cocos2d::renderer::View const&, std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> >&)> const> >
   >::~unordered_map() */

void __thiscall
std::__ndk1::
unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>>>
::~unordered_map(unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>>>
                 *this)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  void *pvVar4;
  
  puVar1 = *(void **)(this + 0x10);
  do {
    if (puVar1 == (void *)0x0) {
      pvVar4 = *(void **)this;
      *(undefined8 *)this = 0;
      if (pvVar4 == (void *)0x0) {
        return;
      }
                    /* try { // try from 009bb2ac to 00abb2c3 has its CatchHandler @ 009bb4c0 */
      operator_delete(pvVar4);
      return;
    }
    plVar2 = (long *)puVar1[10];
    pvVar4 = (void *)*puVar1;
                    /* try { // try from 009bb258 to 00abb2ab has its CatchHandler @ 009bb258
                       catch() { ... } // from try @ 009bb258 with catch @ 009bb258
                       catch() { ... } // from try @ 009bb4b0 with catch @ 009bb258 */
    if (puVar1 + 6 == plVar2) {
      pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_009bb27c:
      (*pcVar3)();
    }
    else if (plVar2 != (long *)0x0) {
      pcVar3 = *(code **)(*plVar2 + 0x28);
      goto LAB_009bb27c;
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar4;
  } while( true );
}

