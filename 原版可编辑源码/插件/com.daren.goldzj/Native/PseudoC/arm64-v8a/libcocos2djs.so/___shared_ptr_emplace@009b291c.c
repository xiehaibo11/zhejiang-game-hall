
/* std::__ndk1::__shared_ptr_emplace<cocos2d::FontFreeType,
   std::__ndk1::allocator<cocos2d::FontFreeType> >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::
__shared_ptr_emplace<cocos2d::FontFreeType,std::__ndk1::allocator<cocos2d::FontFreeType>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<cocos2d::FontFreeType,std::__ndk1::allocator<cocos2d::FontFreeType>>
           *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b289c with catch @ 009b2934
                       catch(type#1 @ 00000000) { ... } // from try @ 009b28c4 with catch @ 009b2934
                       catch(type#1 @ 00000000) { ... } // from try @ 009b28ec with catch @ 009b2934
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b283c with catch @ 009b2938
                       catch(type#1 @ 00000000) { ... } // from try @ 009b2868 with catch @ 009b2938
                        */
  *(undefined ***)this = &PTR____shared_ptr_emplace_01c6ac98;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b29ac with catch @ 009b293c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b29dc with catch @ 009b293c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b2a0c with catch @ 009b293c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b2a34 with catch @ 009b293c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b2a60 with catch @ 009b293c
                        */
  cocos2d::FontFreeType::~FontFreeType((FontFreeType *)(this + 0x18));
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}

