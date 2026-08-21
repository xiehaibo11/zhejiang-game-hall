
/* std::__ndk1::unordered_map<cocos2d::SpriteFrame*, cocos2d::Rect,
   std::__ndk1::hash<cocos2d::SpriteFrame*>, std::__ndk1::equal_to<cocos2d::SpriteFrame*>,
   std::__ndk1::allocator<std::__ndk1::pair<cocos2d::SpriteFrame* const, cocos2d::Rect> >
   >::unordered_map(std::__ndk1::unordered_map<cocos2d::SpriteFrame*, cocos2d::Rect,
   std::__ndk1::hash<cocos2d::SpriteFrame*>, std::__ndk1::equal_to<cocos2d::SpriteFrame*>,
   std::__ndk1::allocator<std::__ndk1::pair<cocos2d::SpriteFrame* const, cocos2d::Rect> > > const&)
    */

void __thiscall
std::__ndk1::
unordered_map<cocos2d::SpriteFrame*,cocos2d::Rect,std::__ndk1::hash<cocos2d::SpriteFrame*>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::SpriteFrame*const,cocos2d::Rect>>>
::unordered_map(unordered_map<cocos2d::SpriteFrame*,cocos2d::Rect,std::__ndk1::hash<cocos2d::SpriteFrame*>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::SpriteFrame*const,cocos2d::Rect>>>
                *this,unordered_map *param_1)

{
  long *plVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
                    /* try { // try from 00fed18c to 010ed1ab has its CatchHandler @ 00fed598 */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  __hash_table<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::__unordered_map_hasher<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::hash<cocos2d::SpriteFrame*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::__unordered_map_hasher<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::hash<cocos2d::SpriteFrame*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>>>
            *)this,*(ulong *)(param_1 + 8));
  for (plVar1 = *(long **)(param_1 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    __hash_table<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::__unordered_map_hasher<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::hash<cocos2d::SpriteFrame*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>>>
    ::
    __emplace_unique_key_args<cocos2d::SpriteFrame*,std::__ndk1::pair<cocos2d::SpriteFrame*const,cocos2d::Rect>const&>
              ((__hash_table<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::__unordered_map_hasher<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::hash<cocos2d::SpriteFrame*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::SpriteFrame*,std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>,std::__ndk1::equal_to<cocos2d::SpriteFrame*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::SpriteFrame*,cocos2d::Rect>>>
                *)this,(SpriteFrame **)(plVar1 + 2),(pair *)(plVar1 + 2));
  }
  return;
}

