
/* cocos2d::extension::AssetsManagerEx::basename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void cocos2d::extension::AssetsManagerEx::basename(basic_string *param_1)

{
  ulong __n;
  basic_string *__src;
  void *pvVar1;
  basic_string *in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar3;
  
                    /* try { // try from 00e03020 to 00f0302f has its CatchHandler @ 00e031c4 */
  uVar3 = *(ulong *)(in_x1 + 8);
  __src = *(basic_string **)(in_x1 + 0x10);
  uVar2 = (ulong)((byte)*in_x1 >> 1);
  __n = uVar3;
  if (((byte)*in_x1 & 1) == 0) {
                    /* try { // try from 00e03038 to 00f03043 has its CatchHandler @ 00e03160 */
    __src = in_x1 + 1;
    uVar3 = uVar2;
    __n = uVar2;
  }
  do {
    if (uVar3 == 0) goto LAB_00e0309c;
                    /* try { // try from 00e03048 to 00f0306b has its CatchHandler @ 00e03164 */
    pvVar1 = memchr(&DAT_012f2b5a,(uint)(byte)__src[uVar3 - 1],2);
    uVar3 = uVar3 - 1;
  } while (pvVar1 == (void *)0x0);
  if (uVar3 == 0xffffffffffffffff) {
LAB_00e0309c:
                    /* try { // try from 00e030a4 to 00f030ab has its CatchHandler @ 00e0317c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(in_x8,in_x1);
    return;
  }
                    /* try { // try from 00e0306c to 00f03077 has its CatchHandler @ 00e0315c */
  if (uVar3 <= __n) {
    __n = uVar3;
  }
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
                    /* try { // try from 00e0307c to 00f03083 has its CatchHandler @ 00e031c0 */
  *(undefined8 *)(in_x8 + 0x10) = 0;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 00e03088 to 00f03093 has its CatchHandler @ 00e031bc */
  if (__n < 0x17) {
    __dest = in_x8 + 1;
    *in_x8 = SUB41((int)__n << 1,0);
                    /* try { // try from 00e03094 to 00f0309f has its CatchHandler @ 00e03180 */
    if (__n == 0) goto LAB_00e030e8;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
                    /* try { // try from 00e030c8 to 00f030cf has its CatchHandler @ 00e03170 */
    *(ulong *)(in_x8 + 8) = __n;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (in_x8 + 0x10) = __dest;
    *(ulong *)in_x8 = uVar3 | 1;
                    /* try { // try from 00e030d4 to 00f030df has its CatchHandler @ 00e0316c */
  }
                    /* try { // try from 00e030e0 to 00f030f3 has its CatchHandler @ 00e03168 */
  memcpy(__dest,__src,__n);
LAB_00e030e8:
  __dest[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
                    /* try { // try from 00e030f4 to 00f031fb has its CatchHandler @ 00e02e88 */
  return;
}

