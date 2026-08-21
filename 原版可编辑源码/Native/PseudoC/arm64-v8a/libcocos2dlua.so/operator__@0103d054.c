
/* ClipperLib::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > > const&) */

basic_ostream * ClipperLib::operator<<(basic_ostream *param_1,vector *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)param_2;
  if (*(long *)(param_2 + 8) != lVar1) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      operator<<(param_1,(vector *)(lVar1 + lVar2));
      lVar1 = *(long *)param_2;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < (ulong)((*(long *)(param_2 + 8) - lVar1 >> 3) * -0x5555555555555555));
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
                    /* try { // try from 0103d0d4 to 0113d0df has its CatchHandler @ 0103d1f4 */
                    /* try { // try from 0103d0e0 to 0113d0eb has its CatchHandler @ 0103d1f0 */
  return param_1;
}

