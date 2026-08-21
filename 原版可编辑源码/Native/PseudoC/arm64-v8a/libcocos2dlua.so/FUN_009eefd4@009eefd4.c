
ulong FUN_009eefd4(char *param_1,int param_2,int param_3,long param_4)

{
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (param_4 + 0xf0),param_1,(long)(param_2 * param_3));
                    /* try { // try from 009ef008 to 00aef08b has its CatchHandler @ 009eee6c */
  return (long)(param_2 * param_3);
}

