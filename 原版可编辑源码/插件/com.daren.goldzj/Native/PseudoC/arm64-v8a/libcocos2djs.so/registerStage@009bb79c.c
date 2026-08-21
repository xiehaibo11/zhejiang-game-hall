
/* cocos2d::renderer::BaseRenderer::registerStage(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (cocos2d::renderer::View const&, std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> >&)> const&) */

void __thiscall
cocos2d::renderer::BaseRenderer::registerStage
          (BaseRenderer *this,basic_string *param_1,function *param_2)

{
  long lVar1;
  code *pcVar2;
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>>
  local_90 [16];
  void *local_80;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
                    /* catch() { ... } // from try @ 009bb5a8 with catch @ 009bb7b0 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 009bb59c with catch @ 009bb7b4 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009bb57c with catch @ 009bb7b8 */
                    /* catch() { ... } // from try @ 009bb5b4 with catch @ 009bb7c8 */
  std::__ndk1::
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>>
  ::pair<true,false>(local_90,param_1,param_2);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>>>
  ::
  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>>>
            ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>>>
              *)(this + 0x30),(basic_string *)local_90,(pair *)local_90);
  if (alStack_70 == local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_009bb808;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_009bb808:
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
                    /* try { // try from 009bb820 to 00abb873 has its CatchHandler @ 009bb820
                       catch() { ... } // from try @ 009bb820 with catch @ 009bb820
                       catch() { ... } // from try @ 009bb9b0 with catch @ 009bb820 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

