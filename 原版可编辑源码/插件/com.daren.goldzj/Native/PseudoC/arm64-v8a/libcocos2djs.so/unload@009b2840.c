
/* cocos2d::TTFLabelAtlasCache::unload(cocos2d::TTFLabelAtals*) */

void __thiscall cocos2d::TTFLabelAtlasCache::unload(TTFLabelAtlasCache *this,TTFLabelAtals *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  basic_string local_58 [16];
  void *local_48;
  void *local_40 [2];
  char local_30;
  long local_28;
  
                    /* try { // try from 009b2844 to 00ab2867 has its CatchHandler @ 009b27d4 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009b2868 to 00ab2873 has its CatchHandler @ 009b2938 */
  cacheKeyFor((basic_string *)this,(int)param_1,
              (LabelLayoutInfo *)(ulong)(uint)(int)*(float *)(param_1 + 0x18));
                    /* try { // try from 009b2874 to 00ab289b has its CatchHandler @ 009b27d4 */
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>>>
                      *)this,local_58);
  if (lVar3 != 0) {
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::weak_ptr<cocos2d::TTFLabelAtals>>>>
    ::remove(local_40,this);
    pvVar2 = local_40[0];
    local_40[0] = (void *)0x0;
                    /* try { // try from 009b289c to 00ab28a3 has its CatchHandler @ 009b2934 */
    if (pvVar2 != (void *)0x0) {
                    /* try { // try from 009b28a4 to 00ab28c3 has its CatchHandler @ 009b27d4 */
      if (local_30 != '\0') {
        if (*(__shared_weak_count **)((long)pvVar2 + 0x30) != (__shared_weak_count *)0x0) {
          std::__ndk1::__shared_weak_count::__release_weak
                    (*(__shared_weak_count **)((long)pvVar2 + 0x30));
        }
        if ((*(byte *)((long)pvVar2 + 0x10) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar2 + 0x20));
        }
      }
                    /* try { // try from 009b28c4 to 00ab28cb has its CatchHandler @ 009b2934 */
      operator_delete(pvVar2);
    }
  }
                    /* try { // try from 009b28cc to 00ab28eb has its CatchHandler @ 009b27d4 */
  if (((byte)local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009b28ec to 00ab28f7 has its CatchHandler @ 009b2934 */
                    /* try { // try from 009b28f8 to 00ab293b has its CatchHandler @ 009b27d4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

