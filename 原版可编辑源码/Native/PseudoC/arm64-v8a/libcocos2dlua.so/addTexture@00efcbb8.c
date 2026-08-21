
/* cocos2d::FontAtlas::addTexture(cocos2d::Texture2D*, int) */

void __thiscall cocos2d::FontAtlas::addTexture(FontAtlas *this,Texture2D *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long local_50 [2];
  undefined1 *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00efcbac with catch @ 00efcbb8 */
                    /* catch() { ... } // from try @ 00efc998 with catch @ 00efcbbc */
                    /* catch() { ... } // from try @ 00efcb28 with catch @ 00efcbc0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00efca24 with catch @ 00efcbd8
                       catch() { ... } // from try @ 00efcab8 with catch @ 00efcbd8 */
                    /* catch() { ... } // from try @ 00efc9e8 with catch @ 00efcbdc */
                    /* catch() { ... } // from try @ 00efca38 with catch @ 00efcbe4 */
  Ref::retain((Ref *)param_1);
  local_50[0] = (long)param_2;
  local_40 = (undefined1 *)local_50;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>>>
          ::
          __emplace_unique_key_args<long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<long&&>,std::__ndk1::tuple<>>
                    ((long *)(this + 0x28),(piecewise_construct_t *)local_50,(tuple *)&DAT_0143a342,
                     (tuple *)&local_40);
  *(Texture2D **)(lVar2 + 0x18) = param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

