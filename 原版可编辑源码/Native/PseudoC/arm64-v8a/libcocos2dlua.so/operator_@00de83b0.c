
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char) */

void __thiscall std::__ndk1::operator+(__ndk1 *this,basic_string *param_1,char param_2)

{
  size_t __n;
  __ndk1 *__src;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  bool bVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  __src = *(__ndk1 **)(this + 0x10);
  bVar2 = ((byte)*this & 1) != 0;
  __n = (ulong)((byte)*this >> 1);
  if (bVar2) {
    __n = *(size_t *)(this + 8);
  }
                    /* try { // try from 00de83e8 to 00ee83eb has its CatchHandler @ 00de8aac */
  if (!bVar2) {
    __src = this + 1;
  }
  if (0xffffffffffffffef < __n + 1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n + 1 < 0x17) {
    pbVar5 = in_x8 + 1;
    *in_x8 = SUB41((int)__n << 1,0);
    if (__n != 0) goto LAB_00de8434;
  }
  else {
                    /* try { // try from 00de8414 to 00ee841b has its CatchHandler @ 00de8ab0 */
    uVar4 = __n + 0x11 & 0xfffffffffffffff0;
    pbVar5 = operator_new(uVar4);
    *(size_t *)(in_x8 + 8) = __n;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (in_x8 + 0x10) = pbVar5;
    *(ulong *)in_x8 = uVar4 | 1;
LAB_00de8434:
    memcpy(pbVar5,__src,__n);
  }
                    /* try { // try from 00de8444 to 00ee8447 has its CatchHandler @ 00de8aa4 */
  pbVar5[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  bVar1 = *in_x8;
  if (((byte)bVar1 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar1 >> 1);
    uVar3 = 0x16;
    if (uVar4 != 0x16) goto joined_r0x00de84ac;
  }
  else {
    uVar4 = *(ulong *)(in_x8 + 8);
    uVar3 = (*(ulong *)in_x8 & 0xfffffffffffffffe) - 1;
    if (uVar4 != uVar3) goto joined_r0x00de84ac;
  }
                    /* try { // try from 00de8498 to 00ee84a3 has its CatchHandler @ 00de8bc8 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__grow_by
            (in_x8,uVar3,1,uVar3,uVar3,0,0);
  bVar1 = *in_x8;
joined_r0x00de84ac:
  if (((byte)bVar1 & 1) == 0) {
                    /* try { // try from 00de84b0 to 00ee84bb has its CatchHandler @ 00de8bc4 */
    pbVar5 = in_x8 + 1;
    *in_x8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
             ((char)uVar4 * '\x02' + '\x02');
  }
  else {
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (in_x8 + 0x10);
                    /* try { // try from 00de846c to 00ee8473 has its CatchHandler @ 00de8aa8 */
    *(ulong *)(in_x8 + 8) = uVar4 + 1;
  }
  pbVar5[uVar4] = SUB81(param_1,0);
                    /* try { // try from 00de84c4 to 00ee84cf has its CatchHandler @ 00de8bbc */
  (pbVar5 + uVar4)[1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
                    /* try { // try from 00de84d8 to 00ee84e3 has its CatchHandler @ 00de8bc0 */
  return;
}

