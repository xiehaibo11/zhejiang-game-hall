
/* v8::internal::compiler::TurboCfgFile::~TurboCfgFile() */

void __thiscall v8::internal::compiler::TurboCfgFile::~TurboCfgFile(TurboCfgFile *this)

{
  ios_base *this_00;
  
  *(undefined8 *)this = 0x1ccd070;
  this_00 = (ios_base *)(this + 0xb0);
  *(undefined8 *)this_00 = 0x1ccd098;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this);
  *(undefined ***)this = &PTR__basic_ofstream_01ccd190;
  *(undefined ***)this_00 = &PTR__basic_ofstream_01ccd1b8;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this + 8));
  std::__ndk1::ios_base::~ios_base(this_00);
  operator_delete(this);
  return;
}

