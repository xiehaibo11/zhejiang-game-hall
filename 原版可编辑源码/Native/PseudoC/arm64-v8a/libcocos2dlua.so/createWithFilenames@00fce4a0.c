
/* cocos2d::GLProgram::createWithFilenames(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

GLProgram *
cocos2d::GLProgram::createWithFilenames
          (basic_string *param_1,basic_string *param_2,basic_string *param_3,basic_string *param_4)

{
  GLProgram *this;
  ulong uVar1;
  
  this = operator_new(0xf8,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00fce4cc to 010ce4d3 has its CatchHandler @ 00fce568 */
  if (this != (GLProgram *)0x0) {
                    /* try { // try from 00fce4d4 to 010ce583 has its CatchHandler @ 00fce48c */
    GLProgram(this);
    uVar1 = initWithFilenames(this,param_1,param_2,(basic_string *)&DAT_017925a8,param_4);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (GLProgram *)0x0;
    }
    else {
      link(this);
      updateUniforms(this);
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

