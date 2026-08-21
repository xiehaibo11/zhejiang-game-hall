
/* v8::internal::compiler::TurboJsonFile::~TurboJsonFile() */

void __thiscall v8::internal::compiler::TurboJsonFile::~TurboJsonFile(TurboJsonFile *this)

{
  ios_base *this_00;
  
  *(undefined8 *)this = 0x1cccff0;
  this_00 = (ios_base *)(this + 0xb0);
  *(undefined8 *)this_00 = 0x1ccd018;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this);
  *(undefined8 *)this = 0x1ccd0f0;
  *(undefined8 *)this_00 = 0x1ccd118;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this + 8));
  std::__ndk1::ios_base::~ios_base(this_00);
  operator_delete(this);
  return;
}

