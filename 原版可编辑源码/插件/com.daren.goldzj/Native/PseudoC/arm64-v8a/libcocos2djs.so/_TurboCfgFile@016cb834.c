
/* virtual thunk to v8::internal::compiler::TurboCfgFile::~TurboCfgFile() */

void __thiscall v8::internal::compiler::TurboCfgFile::~TurboCfgFile(TurboCfgFile *this)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  ios_base *this_01;
  
  this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
            (this + *(long *)(*(long *)this + -0x18));
  *(undefined8 *)this_00 = 0x1ccd070;
  this_01 = (ios_base *)(this_00 + 0xb0);
  *(undefined8 *)this_01 = 0x1ccd098;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(this_00);
  *(undefined ***)this_00 = &PTR__basic_ofstream_01ccd190;
  *(undefined ***)this_01 = &PTR__basic_ofstream_01ccd1b8;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this_00 + 8));
  std::__ndk1::ios_base::~ios_base(this_01);
  operator_delete(this_00);
  return;
}

