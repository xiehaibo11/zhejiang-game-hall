
/* cocos2d::LabelAtlas::create() */

AtlasNode * cocos2d::LabelAtlas::create(void)

{
  AtlasNode *this;
  
  this = operator_new(0x410,(nothrow_t *)&std::nothrow);
  if (this != (AtlasNode *)0x0) {
    AtlasNode::AtlasNode(this);
    *(undefined ***)this = &PTR__LabelAtlas_016fe328;
    *(undefined ***)(this + 0x2f8) = &PTR__LabelAtlas_016fe8a0;
    *(undefined ***)(this + 1000) = &PTR__LabelAtlas_016fe8e0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x3f0),"");
    Ref::autorelease((Ref *)this);
  }
  return this;
}

