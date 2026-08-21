
/* cocos2d::FontAtlas::getTexture(int) */

void __thiscall cocos2d::FontAtlas::getTexture(FontAtlas *this,int param_1)

{
  long lVar1;
  long lVar2;
  long local_40 [2];
  undefined1 *local_30;
  long local_28;
  
  local_30 = (undefined1 *)local_40;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = (long)param_1;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>>>
          ::
          __emplace_unique_key_args<long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<long&&>,std::__ndk1::tuple<>>
                    ((long *)(this + 0x28),(piecewise_construct_t *)local_40,(tuple *)&DAT_0143a342,
                     (tuple *)&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(lVar2 + 0x18));
}

