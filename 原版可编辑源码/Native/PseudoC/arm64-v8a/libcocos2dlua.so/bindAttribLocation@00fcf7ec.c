
/* cocos2d::GLProgram::bindAttribLocation(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int) const */

void __thiscall
cocos2d::GLProgram::bindAttribLocation(GLProgram *this,basic_string *param_1,uint param_2)

{
  basic_string *pbVar1;
  
  pbVar1 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
  glBindAttribLocation(*(undefined4 *)(this + 0x24),param_2,pbVar1);
  return;
}

