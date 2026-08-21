
/* cocos2d::Bone3D::Bone3D(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Bone3D::Bone3D(Bone3D *this,basic_string *param_1)

{
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__Bone3D_016d3d28;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x28),param_1);
  Mat4::Mat4((Mat4 *)(this + 0x40));
  Mat4::Mat4((Mat4 *)(this + 0x80));
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  this[0xe0] = (Bone3D)0x1;
  Mat4::Mat4((Mat4 *)(this + 0xe4));
  Mat4::Mat4((Mat4 *)(this + 0x124));
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  return;
}

