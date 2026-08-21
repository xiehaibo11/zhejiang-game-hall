
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::sentry::sentry(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
  *this = (sentry)0x0;
  *(basic_ostream **)(this + 8) = param_1;
  if (*(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x88));
    }
    *this = (sentry)0x1;
  }
  return;
}

