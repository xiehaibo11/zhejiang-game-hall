
/* std::__ndk1::unordered_map<char32_t, cocos2d::FontLetterDefinition, std::__ndk1::hash<char32_t>,
   std::__ndk1::equal_to<char32_t>, std::__ndk1::allocator<std::__ndk1::pair<char32_t const,
   cocos2d::FontLetterDefinition> > >::unordered_map(std::__ndk1::unordered_map<char32_t,
   cocos2d::FontLetterDefinition, std::__ndk1::hash<char32_t>, std::__ndk1::equal_to<char32_t>,
   std::__ndk1::allocator<std::__ndk1::pair<char32_t const, cocos2d::FontLetterDefinition> > >
   const&) */

void __thiscall
std::__ndk1::
unordered_map<char32_t,cocos2d::FontLetterDefinition,std::__ndk1::hash<char32_t>,std::__ndk1::equal_to<char32_t>,std::__ndk1::allocator<std::__ndk1::pair<char32_t_const,cocos2d::FontLetterDefinition>>>
::unordered_map(unordered_map<char32_t,cocos2d::FontLetterDefinition,std::__ndk1::hash<char32_t>,std::__ndk1::equal_to<char32_t>,std::__ndk1::allocator<std::__ndk1::pair<char32_t_const,cocos2d::FontLetterDefinition>>>
                *this,unordered_map *param_1)

{
  long *plVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
            *)this,*(ulong *)(param_1 + 8));
  for (plVar1 = *(long **)(param_1 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
    ::
    __emplace_unique_key_args<char32_t,std::__ndk1::pair<char32_t_const,cocos2d::FontLetterDefinition>const&>
              ((__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
                *)this,(wchar32 *)(plVar1 + 2),(pair *)(plVar1 + 2));
  }
  return;
}

