
/* cocos2d::MenuItemAtlasFont::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, int, char, std::__ndk1::function<void (cocos2d::Ref*)> const&) */

Node * cocos2d::MenuItemAtlasFont::create
                 (basic_string *param_1,basic_string *param_2,int param_3,int param_4,char param_5,
                 function *param_6)

{
  Node *this;
  LabelAtlas *this_00;
  
  this = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined ***)this = &PTR__MenuItem_01705020;
    Color3B::Color3B((Color3B *)(this + 0x330));
    *(undefined4 *)(this + 0x334) = 0;
    Color3B::Color3B((Color3B *)(this + 0x338));
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined ***)this = &PTR__MenuItem_01698b68;
  }
  this_00 = (LabelAtlas *)LabelAtlas::create();
  LabelAtlas::initWithString(this_00,param_1,param_2,param_3,param_4,(int)param_5);
  MenuItemLabel::initWithLabel((MenuItemLabel *)this,(Node *)this_00,param_6);
  Ref::autorelease((Ref *)this);
  return this;
}

