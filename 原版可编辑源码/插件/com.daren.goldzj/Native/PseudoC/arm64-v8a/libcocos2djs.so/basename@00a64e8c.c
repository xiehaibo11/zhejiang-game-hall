
/* cocos2d::extension::AssetsManagerEx::basename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

basic_string * cocos2d::extension::AssetsManagerEx::basename(basic_string *param_1)

{
  byte *pbVar1;
  byte bVar2;
  void *__dest;
  ulong *in_x1;
  byte *__src;
  ulong *in_x8;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
                    /* try { // try from 00a64e94 to 00b64e9f has its CatchHandler @ 00a65098 */
  bVar2 = (byte)*in_x1;
  uVar5 = in_x1[1];
  pbVar1 = (byte *)in_x1[2];
  uVar4 = uVar5;
  uVar3 = uVar5;
  __src = pbVar1;
  if ((bVar2 & 1) == 0) {
    uVar4 = (ulong)(bVar2 >> 1);
    uVar3 = (ulong)(bVar2 >> 1);
    __src = (byte *)((long)in_x1 + 1);
  }
  do {
    if (uVar4 == 0) goto LAB_00a64f2c;
                    /* try { // try from 00a64ee8 to 00b64eef has its CatchHandler @ 00a650c8 */
    param_1 = memchr(&DAT_01889e24,(uint)__src[uVar4 - 1],2);
    uVar4 = uVar4 - 1;
  } while (param_1 == (basic_string *)0x0);
                    /* try { // try from 00a64ef4 to 00b64efb has its CatchHandler @ 00a650b0 */
  if (uVar4 == 0xffffffffffffffff) {
LAB_00a64f2c:
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    if ((bVar2 & 1) == 0) {
                    /* try { // try from 00a64f3c to 00b64f9f has its CatchHandler @ 00a6510c */
      uVar3 = in_x1[1];
      uVar5 = *in_x1;
      in_x8[2] = in_x1[2];
      in_x8[1] = uVar3;
      *in_x8 = uVar5;
      return param_1;
    }
    if (0xffffffffffffffef < uVar5) goto LAB_00a64fe8;
    if (uVar5 < 0x17) {
      *(char *)in_x8 = (char)((int)uVar5 << 1);
      __src = pbVar1;
      goto joined_r0x00a64f64;
    }
    uVar3 = uVar5 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    in_x8[1] = uVar5;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar3 | 1;
    __src = pbVar1;
  }
  else {
    uVar5 = uVar3;
    if (uVar4 <= uVar3) {
      uVar5 = uVar4;
    }
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    if (0xffffffffffffffef < uVar5) {
LAB_00a64fe8:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar5 < 0x17) {
      *(char *)in_x8 = (char)((int)uVar5 << 1);
joined_r0x00a64f64:
      __dest = (void *)((long)in_x8 + 1);
      if (uVar5 == 0) goto LAB_00a64fc8;
    }
    else {
      uVar3 = uVar5 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00a64fa0 to 00b64fa7 has its CatchHandler @ 00a650dc */
      __dest = operator_new(uVar3);
                    /* try { // try from 00a64fa8 to 00b64fd7 has its CatchHandler @ 00a650e4 */
      in_x8[1] = uVar5;
      in_x8[2] = (ulong)__dest;
      *in_x8 = uVar3 | 1;
    }
  }
  param_1 = memcpy(__dest,__src,uVar5);
LAB_00a64fc8:
  *(undefined1 *)((long)__dest + uVar5) = 0;
                    /* try { // try from 00a64fd8 to 00b6505f has its CatchHandler @ 00a64b7c */
  return param_1;
}

