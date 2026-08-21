
/* std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const,
   cocos2d::extension::DownloadUnit>::pair(std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   cocos2d::extension::DownloadUnit> const&) */

void __thiscall
std::__ndk1::
pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::extension::DownloadUnit>
::pair(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::extension::DownloadUnit>
       *this,pair *param_1)

{
  ulong __n;
  void *__src;
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::extension::DownloadUnit>
  *__dest;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00a66ab8 to 00b66ac3 has its CatchHandler @ 00a66cac */
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
                    /* try { // try from 00a66ac4 to 00b66acf has its CatchHandler @ 00a66ca8 */
                    /* try { // try from 00a66ad0 to 00b66c2f has its CatchHandler @ 00a66cc0 */
  if (((byte)*param_1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar3;
    *(undefined8 *)this = uVar2;
    goto LAB_00a66b48;
  }
  __n = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x10);
  if (__n < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)__n << 1,0);
    if (__n != 0) goto LAB_00a66b34;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar1);
    *(ulong *)(this + 8) = __n;
    *(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::extension::DownloadUnit>
      **)(this + 0x10) = __dest;
    *(ulong *)this = uVar1 | 1;
LAB_00a66b34:
    memcpy(__dest,__src,__n);
  }
  __dest[__n] = (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::extension::DownloadUnit>
                 )0x0;
LAB_00a66b48:
  cocos2d::extension::DownloadUnit::DownloadUnit
            ((DownloadUnit *)(this + 0x18),(DownloadUnit *)(param_1 + 0x18));
  return;
}

