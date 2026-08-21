
/* cocos2d::GLProgram::createWithByteArrays(char const*, char const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

GLProgram *
cocos2d::GLProgram::createWithByteArrays
          (char *param_1,char *param_2,basic_string *param_3,basic_string *param_4)

{
  GLProgram *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00fcdba4 with catch @ 00fcdc3c */
  this = operator_new(0xf8,(nothrow_t *)&std::nothrow);
  if (this != (GLProgram *)0x0) {
    GLProgram(this);
    uVar1 = initWithByteArrays(this,param_1,param_2,param_3,param_4);
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

