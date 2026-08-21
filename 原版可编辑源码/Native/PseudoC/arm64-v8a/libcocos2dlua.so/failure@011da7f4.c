
/* std::__ndk1::ios_base::failure::failure(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::error_code
   const&) */

void __thiscall
std::__ndk1::ios_base::failure::failure(failure *this,basic_string *param_1,error_code *param_2)

{
  system_error::system_error
            ((system_error *)this,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8),param_1);
  *(undefined ***)this = &PTR__failure_0172df18;
  return;
}

