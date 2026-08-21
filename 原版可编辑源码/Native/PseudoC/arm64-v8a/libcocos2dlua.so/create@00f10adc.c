
/* cocos2d::LabelAtlas::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

AtlasNode * cocos2d::LabelAtlas::create(basic_string *param_1,basic_string *param_2)

{
  AtlasNode *this;
  
  this = operator_new(0x410,(nothrow_t *)&std::nothrow);
  if (this != (AtlasNode *)0x0) {
    AtlasNode::AtlasNode(this);
                    /* catch() { ... } // from try @ 00f10aa8 with catch @ 00f10b28 */
    *(undefined ***)this = &PTR__LabelAtlas_016fe328;
    *(undefined ***)(this + 0x2f8) = &PTR__LabelAtlas_016fe8a0;
    *(undefined ***)(this + 1000) = &PTR__LabelAtlas_016fe8e0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x3f0),"");
                    /* catch() { ... } // from try @ 00f10a74 with catch @ 00f10b44 */
                    /* catch() { ... } // from try @ 00f10a4c with catch @ 00f10b48 */
                    /* catch() { ... } // from try @ 00f10a24 with catch @ 00f10b4c */
    initWithString((LabelAtlas *)this,param_1,param_2);
    Ref::autorelease((Ref *)this);
  }
                    /* catch() { ... } // from try @ 00f10ba4 with catch @ 00f10b68 */
  return this;
}

