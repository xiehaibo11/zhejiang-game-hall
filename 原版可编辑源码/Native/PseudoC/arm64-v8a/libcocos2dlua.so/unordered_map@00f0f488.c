
/* std::__ndk1::unordered_map<long, cocos2d::Texture2D*, std::__ndk1::hash<long>,
   std::__ndk1::equal_to<long>, std::__ndk1::allocator<std::__ndk1::pair<long const,
   cocos2d::Texture2D*> > >::unordered_map(std::__ndk1::unordered_map<long, cocos2d::Texture2D*,
   std::__ndk1::hash<long>, std::__ndk1::equal_to<long>,
   std::__ndk1::allocator<std::__ndk1::pair<long const, cocos2d::Texture2D*> > > const&) */

void __thiscall
std::__ndk1::
unordered_map<long,cocos2d::Texture2D*,std::__ndk1::hash<long>,std::__ndk1::equal_to<long>,std::__ndk1::allocator<std::__ndk1::pair<long_const,cocos2d::Texture2D*>>>
::unordered_map(unordered_map<long,cocos2d::Texture2D*,std::__ndk1::hash<long>,std::__ndk1::equal_to<long>,std::__ndk1::allocator<std::__ndk1::pair<long_const,cocos2d::Texture2D*>>>
                *this,unordered_map *param_1)

{
  long *plVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  __hash_table<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>>>
            *)this,*(ulong *)(param_1 + 8));
  for (plVar1 = *(long **)(param_1 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    __hash_table<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>>>
    ::__emplace_unique_key_args<long,std::__ndk1::pair<long_const,cocos2d::Texture2D*>const&>
              ((__hash_table<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>>>
                *)this,plVar1 + 2,(pair *)(plVar1 + 2));
  }
  return;
}

