
/* universe::TanGaoXiong::writeStringToFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::function<void (bool)> const&) const */

void __thiscall
universe::TanGaoXiong::writeStringToFile
          (TanGaoXiong *this,basic_string *param_1,basic_string *param_2,function *param_3)

{
  uchar *__dest;
  basic_string *__src;
  size_t __size;
  
  if (((byte)*param_1 & 1) == 0) {
    __size = (size_t)((byte)*param_1 >> 1);
    __dest = malloc(__size);
    __src = param_1 + 1;
  }
  else {
    __size = *(size_t *)(param_1 + 8);
    __dest = malloc(__size);
    __src = *(basic_string **)(param_1 + 0x10);
  }
  memcpy(__dest,__src,__size);
  writeDataToFile(this,__dest,__size,param_2,param_3);
  return;
}

