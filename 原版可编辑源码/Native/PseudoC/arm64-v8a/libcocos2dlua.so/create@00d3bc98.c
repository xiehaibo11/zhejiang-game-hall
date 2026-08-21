
/* cocos2d::Bone3D::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Bone3D * cocos2d::Bone3D::create(basic_string *param_1)

{
  Bone3D *this;
  
  this = operator_new(0x180,(nothrow_t *)&std::nothrow);
  if (this != (Bone3D *)0x0) {
    Bone3D(this,param_1);
  }
  Ref::autorelease((Ref *)this);
  return this;
}

