
/* cocos2d::Skybox::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

Node * cocos2d::Skybox::create
                 (basic_string *param_1,basic_string *param_2,basic_string *param_3,
                 basic_string *param_4,basic_string *param_5,basic_string *param_6)

{
  Node *this;
  TextureCube *pTVar1;
  
  this = operator_new(0x370,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined4 *)(this + 0x300) = 0;
                    /* catch() { ... } // from try @ 00d4ce1c with catch @ 00d4d0ec */
    *(undefined8 *)(this + 0x2f8) = 0;
    *(undefined ***)this = &PTR__Skybox_016d4ba0;
    CustomCommand::CustomCommand((CustomCommand *)(this + 0x310));
    *(undefined8 *)(this + 0x360) = 0;
  }
  pTVar1 = (TextureCube *)TextureCube::create(param_1,param_2,param_3,param_4,param_5,param_6);
  if (pTVar1 != (TextureCube *)0x0) {
    (**(code **)(*(long *)this + 0x500))(this);
                    /* catch() { ... } // from try @ 00d4cdf4 with catch @ 00d4d134 */
    setTexture((Skybox *)this,pTVar1);
  }
  Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 00d4cde4 with catch @ 00d4d154 */
  return this;
}

