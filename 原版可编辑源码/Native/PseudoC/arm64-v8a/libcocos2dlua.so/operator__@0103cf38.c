
/* ClipperLib::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > const&) */

basic_ostream * ClipperLib::operator<<(basic_ostream *param_1,vector *param_2)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  basic_ostream *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 0103cf38 to 0113cf43 has its CatchHandler @ 0103d208 */
                    /* try { // try from 0103cf44 to 0113cf4f has its CatchHandler @ 0103d210 */
                    /* try { // try from 0103cf50 to 0113cf5b has its CatchHandler @ 0103d214 */
                    /* try { // try from 0103cf5c to 0113cf7f has its CatchHandler @ 0103cdf0 */
  if (*(long *)param_2 != *(long *)(param_2 + 8)) {
    lVar3 = (*(long *)(param_2 + 8) - *(long *)param_2 >> 4) + -1;
                    /* try { // try from 0103cf80 to 0113cf8b has its CatchHandler @ 0103d1fc */
    this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"(",1)
    ;
    lVar2 = *(long *)param_2;
    if (lVar3 != 0) {
                    /* try { // try from 0103cf8c to 0113d0d3 has its CatchHandler @ 0103cdf0 */
      lVar4 = 0;
      lVar5 = lVar3;
      do {
        pbVar1 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           (this,*(longlong *)(lVar2 + lVar4));
        pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar1,",",1);
        pbVar1 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                            *(longlong *)(*(long *)param_2 + lVar4 + 8));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"), ",3);
        this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
               std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"(",1);
        lVar2 = *(long *)param_2;
        lVar5 = lVar5 + -1;
        lVar4 = lVar4 + 0x10;
      } while (lVar5 != 0);
    }
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       (this,*(longlong *)(lVar2 + lVar3 * 0x10));
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,",",1);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                        *(longlong *)(*(long *)param_2 + lVar3 * 0x10 + 8));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,")\n",2);
  }
  return param_1;
}

